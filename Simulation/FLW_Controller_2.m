%Yukai controller.

classdef FLW_Controller_2 <matlab.System & matlab.system.mixin.Propagates & matlab.system.mixin.SampleTime %#codegen
    % PROTECTED PROPERTIES ====================================================
    properties(Access = private)
       stanceLeg = -1;
       t0= 0;
       total_mass = 32;
       rp_swT_ini = zeros(3,1);
       rv_swT_ini = zeros(3,1);
    end % properties
    
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function [u, Data] = stepImpl(obj,x,t_total,GRF)
            Data = Construct_Data();
            q = x(1:7);
            dq = x(8:14);
            % Let the output be torso angle, com height and delta x,delta z of swing
            % feet and com. delta = p_com - p_swfeet.
            T = 0.15; % walking period
            V = 6; % Desired velocity at the end of a step
            Kd = 100;
            Kp = 1000;
            g=9.81; 
            ds = 1/T;
            

            if obj.stanceLeg == -1
                GRF_sw_z = GRF(6);
                GRF_st_z = GRF(3);
            else
                GRF_sw_z = GRF(3);
                GRF_st_z = GRF(6);
            end
            
            t = t_total - obj.t0;
            s = (t_total - obj.t0)/T;

            
            p_com = p_COM(q);
            Jp_com = Jp_COM(q);
            dJp_com = dJp_COM(q,dq);
            v_com = Jp_com*dq;
            
            p_LT = p_LeftToe(q);
            Jp_LT = Jp_LeftToe(q);
            dJp_LT = dJp_LeftToe(q,dq);
            v_LT = Jp_LT*dq;
            
            p_RT = p_RightToe(q);
            Jp_RT = Jp_RightToe(q);
            dJp_RT = dJp_RightToe(q,dq);
            v_RT = Jp_RT*dq;
            
            % com position RELATIVE to toes
            
            rp_LT = p_com - p_LT;
            Jrp_LT = Jp_com - Jp_LT;
            dJrp_LT = dJp_com - dJp_LT;
            rv_LT = v_com - v_LT;
            
            rp_RT = p_com - p_RT;
            Jrp_RT = Jp_com - Jp_RT;
            dJrp_RT = dJp_com - dJp_RT;
            rv_RT = v_com - v_RT;
            
            LG = getFLWAngularMomentum(p_com,x);
            L_LeftToe = getFLWAngularMomentum(p_LT,x);
            L_RightToe = getFLWAngularMomentum(p_RT,x);
            L_LeftToe_vg = obj.total_mass*cross(rp_LT,v_com);
            L_RightToe_vg = obj.total_mass*cross(rp_RT,v_com);
            
            
            if (GRF_sw_z >= 150 && s>0.5) || s>1.1
                obj.stanceLeg = -obj.stanceLeg;
                obj.t0 = t_total;
                if obj.stanceLeg == -1
                    obj.rp_swT_ini = rp_RT;
                    obj.rv_swT_ini = rv_RT;
                else
                    obj.rp_swT_ini = rp_LT;
                    obj.rv_swT_ini = rv_LT;
                end
            end
            
            
            if obj.stanceLeg == -1
                
                p_stT = p_LT;
                Jp_stT = Jp_LT;
                dJp_stT = dJp_LT;
                v_stT = v_LT;
                
                p_swT = p_RT;
                Jp_swT = Jp_RT;
                dJp_swT = dJp_RT;
                v_swT = v_RT;
                
                rp_stT = rp_LT;
                Jrp_stT = Jrp_LT;
                dJrp_stT = dJrp_LT;
                rv_stT = rv_LT;
                
                rp_swT = rp_RT;
                Jrp_swT = Jrp_RT;
                dJrp_swT = dJrp_RT;
                rv_swT = rv_RT;
                
                L_stToe = L_LeftToe;
                L_swToe = L_RightToe;
            else
                p_stT = p_RT;
                Jp_stT = Jp_RT;
                dJp_stT = dJp_RT;
                v_stT = v_RT;
                
                p_swT = p_LT;
                Jp_swT = Jp_LT;
                dJp_swT = dJp_LT;
                v_swT = v_LT;
                
                rp_stT = rp_RT;
                Jrp_stT = Jrp_RT;
                dJrp_stT = dJrp_RT;
                rv_stT = rv_RT;
                
                rp_swT = rp_LT;
                Jrp_swT = Jrp_LT;
                dJrp_swT = dJrp_LT;
                rv_swT = rv_LT;
                
                L_stToe = L_RightToe;
                L_swToe = L_LeftToe;
            end
            

            

            
            
            T_left = T - t;
            LBf = 32*(q(2)*dq(1))+LG(2);
%             LBf = 32*(q(2)*dq(1));
            pseudo_com_vx = L_stToe(2)/(32*q(2));
            l = sqrt(g/q(2));
            one_step_max_vel_gain = T*l*0.2;
%             dx0_next = rp_stT(1)*l*sinh(l*T_left) + rv_stT(1)*cosh(l*T_left);
            dx0_next = rp_stT(1)*l*sinh(l*T_left) + pseudo_com_vx*cosh(l*T_left);
            dxf_next_goal = median([dx0_next + one_step_max_vel_gain, dx0_next - one_step_max_vel_gain, V]);
            x0_next = (dxf_next_goal - dx0_next*cosh(l*T))/(l*sinh(l*T));
            % x0_next is the desired relative position of COM to stance foot swing foot in the beginning of next step,(at this step it is still swing foot) so that COM velocity can be V at time T
            
            w = pi/T;
            H = 0.6;
            CL = 0.1;
            
            ref_rp_swT_x = 1/2*(obj.rp_swT_ini(1) - x0_next)*cos(w*t) + 1/2*(obj.rp_swT_ini(1) + x0_next);
            ref_rv_swT_x = 1/2*(obj.rp_swT_ini(1) - x0_next)*(-w*sin(w*t));
            ref_ra_swT_x = 1/2*(obj.rp_swT_ini(1) - x0_next)*(-w^2*cos(w*t));
            
%             ref_rp_swT_z = 1/2*CL*cos(2*w*t)+(H-1/2*CL);
%             ref_rv_swT_z = 1/2*CL*(-2*w*sin(2*w*t));
%             ref_ra_swT_z = 1/2*CL*(-4*w^2*cos(2*w*t));
            ref_rp_swT_z= 4*CL*(s-0.5)^2+(H-CL);
            ref_rv_swT_z = 8*CL*(s-0.5)*ds;
            ref_ra_swT_z = 8*CL*ds^2;


            
            M = InertiaMatrix(q);
            C = CoriolisTerm(q,dq);
            G = GravityVector(q);
            B = [zeros(3,4);eye(4)];
            
            % Jh is jacobian for output
            Jh = zeros(4,7);
            dJh = zeros(4,7);
            
            Jh(1,3) = 1;
            Jh(2,:) = Jrp_stT(3,:);
            Jh([3,4],:) = Jrp_swT([1,3],:);
            
            dJh(2,:) = dJrp_stT(3,:);
            dJh([3,4],:) = dJrp_swT([1,3],:);
            
            %Jg is Jacobian for ground constraint
            Jg = Jp_stT([1,3],:);
            dJg = dJp_stT([1,3],:);
            
            h0 = [q(3);rp_stT(3);rp_swT([1,3])];
            dh0 = Jh*dq;
            
            hr= [0;0.6;ref_rp_swT_x;ref_rp_swT_z];
            dhr = [0;0;ref_rv_swT_x;ref_rv_swT_z];
            ddhr = [0;0;ref_ra_swT_x;ref_ra_swT_z];
            
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
            Data.lG = LG(2);
            Data.l_LeftToe = L_LeftToe(2);
            Data.l_RightToe = L_RightToe(2);
            Data.l_LeftToe_vg = L_LeftToe_vg(2);
            Data.l_RightToe_vg = L_RightToe_vg(2);
            
            Data.dx0_next = dx0_next;
            Data.x0_next = x0_next;
            
            Data.hr = hr;
            Data.dhr = dhr;
            Data.h0 = h0;
            Data.dh0 = dh0;
            
            Data.p_com = p_com;
            Data.v_com = v_com;
            Data.vx_com = v_com(1);
            Data.vy_com = v_com(2);
            Data.vz_com = v_com(3);
            Data.px_com = p_com(1);
            Data.py_com = p_com(2);
            Data.pz_com = p_com(3);
            Data.pseudo_com_vx = pseudo_com_vx;
            Data.q = q;
            Data.dq = dq;
            Data.u = u;
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
            name_1 = 'x';
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