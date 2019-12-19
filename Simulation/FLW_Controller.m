%Yukai controller.

classdef FLW_Controller <matlab.System & matlab.system.mixin.Propagates & matlab.system.mixin.SampleTime %#codegen
    % PROTECTED PROPERTIES ====================================================
    properties(Access = private)
       stanceLeg = -1;
       t0= 0;
       total_mass = 32;
    end % properties
    
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function [u, Data] = stepImpl(obj,x,t,GRF)
            Data = Construct_Data();
            q = x(1:7);
            dq = x(8:14);
            % Let the output be torso angle, com height and delta x,delta z of swing
            % feet and com. delta = p_com - p_swfeet.
            T = 0.3; % walking period
            Kd = 50;
            Kp = 400;
            g=9.81;
%             s = rem(t,T)/T;
            ds = 1/T;
            
            %             if mod(fix(t/T),2)==1 && GRF(6)>100
            %                 stanceLeg = 1;
            %             elseif mod(fix(t/T),2)==1 && GRF(6)<=100
            %                 stanceLeg = -1;
            %             elseif mod(fix(t/T),2) == 0 && GRF(3)<=100
            %                 stanceLeg = -1;
            %             else
            %                 stanceLeg = 1;
            %             end
            if obj.stanceLeg == -1
                GRF_sw_z = GRF(6);
                GRF_st_z = GRF(3);
            else
                GRF_sw_z = GRF(3);
                GRF_st_z = GRF(6);
            end
            
            s = (t - obj.t0)/T;
            if GRF_sw_z >= 150 & s>0.5
                obj.stanceLeg = -obj.stanceLeg;
                obj.t0 = t;
            end
            
            p_LT = p_LeftToe(q);
            p_RT = p_RightToe(q);
            Jp_LT = Jp_LeftToe(q);
            Jp_RT = Jp_RightToe(q);
            dJp_LT = dJp_LeftToe(q,dq);
            dJp_RT = dJp_RightToe(q,dq);
            
            % r means relative position to com
            
            rp_LT = p_COM(q) - p_LeftToe(q);
            rp_RT = p_COM(q) - p_RightToe(q);
            Jrp_LT = Jp_COM(q) - Jp_LeftToe(q);
            Jrp_RT = Jp_COM(q) - Jp_RightToe(q);
            dJrp_LT = dJp_COM(q,dq)-dJp_LeftToe(q,dq);
            dJrp_RT = dJp_COM(q,dq)-dJp_RightToe(q,dq);
            

            D = 0.2; % Desired Distance per step
            p_com = p_COM(q);
            v_com = Jp_COM(q)*dq;
            LG = getFLWAngularMomentum(p_com,x);
            L_LeftToe = getFLWAngularMomentum(p_LT,x);
            L_RightToe = getFLWAngularMomentum(p_RT,x);
            L_LeftToe_vg = obj.total_mass*cross(rp_LT,v_com);
            L_RightToe_vg = obj.total_mass*cross(rp_RT,v_com);
            
            
%             LBf = 32*(q(2)*dq(1))+LG(2);
            LBf = 32*(q(2)*dq(1));
            dx0 = LBf/(32*q(2));
            l = sqrt(g/q(2));
            x0 = (2*D - dx0/l*(exp(T*l)-exp(-T*l)))/...
                (exp(T*l)+exp(-T*l) - 2);
            
            

            
            M = InertiaMatrix(q);
            C = CoriolisTerm(q,dq);
            G = GravityVector(q);
            B = [zeros(3,4);eye(4)];
            
            % q1 = q;
            % q2 = q1; q2([4,5,6,7]) = q2([6,7,4,5]);
            % %q = q2;
            if obj.stanceLeg == -1
                % Jh is jacobian for output
                Jh = zeros(4,7);
                dJh = zeros(4,7);
                
                Jh(1,3) = 1;
                Jh(2,:) = Jrp_LT(3,:);
                Jh([3,4],:) = Jrp_RT([1,3],:);
                
                dJh(2,:) = dJrp_LT(3,:);
                dJh([3,4],:) = dJrp_RT([1,3],:);
                
                h0 = [q(3);rp_LT(3);rp_RT([1,3])];
                dh0 = Jh*dq;
                %Jg is Jacobian for ground constraint
                Jg = Jp_LT([1,3],:);
                dJg = dJp_LT([1,3],:);
                
            else
                
                Jh = zeros(4,7);
                dJh = zeros(4,7);
                
                Jh(1,3) = 1;
                Jh(2,:) = Jrp_RT(3,:);
                Jh([3,4],:) = Jrp_LT([1,3],:);
                
                dJh(2,:) = dJrp_RT(3,:);
                dJh([3,4],:) = dJrp_LT([1,3],:);
                
                h0 = [q(3);rp_RT(3);rp_LT([1,3])];
                dh0 = Jh*dq;
                
                Jg = Jp_RT([1,3],:);
                dJg = dJp_RT([1,3],:);
                
            end
            
            hr= [0;0.6;h0(3);(s-0.5)^2+0.35];
            dhr = [0;0;(x0 - h0(3))/(1-s)/T;2*(s-0.5)*ds];
            ddhr = [0;0;0;2*ds^2];
%             hr= [-pi/6;0.6;0;(s-0.5)^2+0.35];
%             dhr = [0;0;0;2*(s-0.5)*ds];
%             ddhr = [0;0;0;2*ds^2];
            Me = [M -Jg';Jg,zeros(2,2)];
            He = [C+G;dJg*dq];
            Be = [B;zeros(2,4)];
            
            S = [eye(7),zeros(7,2)]; % S is used to seperate ddq with Fg;
            
            y = h0 - hr;
            dy = dh0 - dhr;
            
            u = (Jh*S*Me^-1*Be)^-1*(-Kd*dy-Kp*y+ddhr+Jh*S*Me^-1*He);
%             u = 10*ones(4,1)*sin(t);
            %% Data assignment
            Data.stanceLeg = obj.stanceLeg;
            Data.LG = LG(2);
            Data.L_LeftToe = L_LeftToe(2);
            Data.L_RightToe = L_RightToe(2);
            Data.L_LeftToe_vg = L_LeftToe_vg(2);
            Data.L_RightToe_vg = L_RightToe_vg(2);
            
            Data.p_com = p_com;
            Data.v_com = v_com;
        end % stepImpl

        %% Default functions
        function setupImpl(obj)
            %SETUPIMPL Initialize System object.
        end % setupImpl
        
        function resetImpl(~)
            %RESETIMPL Reset System object states.
        end % resetImpl
        
        function [name_1, name_2, name_3]  = getInputNamesImpl(~)
            %GETINPUTNAMESIMPL Return input port names for System block
            name_1 = 'tx';
            name_2 = 't';
            name_3 = 'GRF';
        end % getInputNamesImpl
        
        function [name_1, name_2] = getOutputNamesImpl(~)
            %GETOUTPUTNAMESIMPL Return output port names for System block
            name_1 = 'u';
            name_2 = 'Data';
        end % getOutputNamesImpl
        
        % PROPAGATES CLASS METHODS ============================================
        function [u, Data] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            u = [4, 1];
            Data = [1, 1];
        end % getOutputSizeImpl
        
        function [u, Data] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            u = 'double';
            Data = 'cassieDataBus';
        end % getOutputDataTypeImpl
        
        function [u, Data] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            u = false;
            Data = false;
        end % isOutputComplexImpl
        
        function [u, Data] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports.
            u = true;
            Data = true;
        end % isOutputFixedSizeImpl
    end % methods
end % classdef