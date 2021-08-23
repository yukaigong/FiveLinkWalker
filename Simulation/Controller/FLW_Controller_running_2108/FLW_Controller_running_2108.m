%Yukai controller.

classdef FLW_Controller_running_2108 <matlab.System & matlab.system.mixin.Propagates & matlab.system.mixin.SampleTime %#codegen
    % PROTECTED PROPERTIES ====================================================
    properties(Access = private)
       stanceLeg = -1;
       phase = 1;
       t0= 0;
       total_mass = 32;
       rp_swT_ini = zeros(3,1);
       rv_swT_ini = zeros(3,1);
       rp_stT_ini = zeros(3,1);
       rv_stT_ini = zeros(3,1);     
       v_com_ini = zeros(3,1);
       
       t0_ps = 0;
       t0_pf = 0;
       
       rpx_b3 = 0; % This is foot placement
       
       initialized = 0;
       
       
    end % properties
    
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function [u, Data] = stepImpl(obj,x,t_total,GRF)
            Data = Construct_Data();
            % Let the output be torso angle, com height and delta x,delta z of swing
            % feet and com. delta = p_com - p_swfeet.
            T_ps = 0.1; % stance phase time
            T_pf = 0.2; % swing phase time
            V = 0; % Desired velocity at the end of a step
            H_nominal = 0.55;
            g=9.81; 
            ds_ps = 1/T_ps;
            ds_pf = 1/T_pf;
            Ly_goal = V*H_nominal*obj.total_mass;
            
            q = x(1:7);
            dq = x(8:14);
            Kd = 40;
            Kp = 400;
            if obj.stanceLeg == -1
                GRF_sw_z = GRF(6);
                GRF_st_z = GRF(3);
            else
                GRF_sw_z = GRF(3);
                GRF_st_z = GRF(6);
            end
            
            t_ps = t_total - obj.t0_ps; %ps: phase stance, pf : phase flight)
            t_pf = t_total - obj.t0_pf;
%             s = (t_total - obj.t0)/T;
            
            s_ps = (t_total - obj.t0_ps)/T_ps;
            s_pf = (t_total - obj.t0_pf)/T_pf;

            
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
            
            
            if (GRF_sw_z >= 100 && s_pf>0.5) || s_pf>1.5 
                obj.stanceLeg = -obj.stanceLeg;
                obj.t0_ps = t_total;
                obj.phase = 1;
                if obj.stanceLeg == -1
                    obj.rp_swT_ini = rp_RT;
                    obj.rv_swT_ini = rv_RT;
                    obj.rp_stT_ini = rp_LT;
                    obj.rv_stT_ini = rv_LT;
                    obj.v_com_ini = v_com;
                else
                    obj.rp_swT_ini = rp_LT;
                    obj.rv_swT_ini = rv_LT;
                    obj.rp_stT_ini = rp_RT;
                    obj.rv_stT_ini = rv_RT;
                    obj.v_com_ini = v_com;
                end
            end
            if obj.initialized == 0
                obj.initialized = 1;
                if obj.stanceLeg == -1
                    obj.rp_swT_ini = rp_RT;
                    obj.rv_swT_ini = rv_RT;
                    obj.rp_stT_ini = rp_LT;
                    obj.rv_stT_ini = rv_LT;
                    obj.v_com_ini = v_com;
                else
                    obj.rp_swT_ini = rp_LT;
                    obj.rv_swT_ini = rv_LT;
                    obj.rp_stT_ini = rp_RT;
                    obj.rv_stT_ini = rv_RT;
                    obj.v_com_ini = v_com;
                end
            end
%             if (GRF_st_z <20 && s_ps >0.5) || s_ps > 1.1
            if s_ps > 1
                obj.t0_pf = t_total;
                obj.phase = - 1; % 1 for stance phase (phase 1) -1 for flight phase (phase 2)
            end
            
            if obj.phase == 1 % Make the phase variable s 0 when not in its phase.
                obj.t0_pf = t_total;
            else
                obj.t0_ps = t_total;
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
            
            %% Some parameters for wrong, in vertical direction
%             p0 = H_nominal + 0.05;
%             v0 = -g*T_pf/2;
            p0 = obj.rp_stT_ini(3);
%             v0 = obj.rv_stT_ini(3);
            v0 = obj.v_com_ini(3);
            a0 = -3;
                
            pf = H_nominal + 0.05; % Make the vertical movement symmetric about time
            vf = g*T_pf/2;
            af = -9.8;
            
            j_endpoint = 1000; % j is jerk, time derivative of acceleration
            j0 = j_endpoint;
            jf = -j_endpoint;
            
            
%             alpha_m = H_nominal - 0.05; % This decide the middle ones of bezier coefficients
            
            H_sw_peak = 0.4; % The closest distance from swing foot to CoM
            

            %% Find foot placement
            if obj.phase == 1 % stance phase
                T_left = T_ps - t_ps;
                
                l = sqrt(g/H_nominal);
%                 one_step_max_vel_gain = T*l*0.2;
                %             dx0_next = rp_stT(1)*l*sinh(l*T_left) + rv_stT(1)*cosh(l*T_left);
                % 1 is end of current stance; 2 is start of flight; 3 is end of
                % flight; 4 is start of next stance; 5 is end of next stance
                % a denote the point of current stance foot, b denote the point
                % of target foot placement.
                
                % at time 1 and 2, all states are the same)
                Ly_a2 = obj.total_mass * H_nominal * l * sinh(l*T_left)*rp_stT(1) + L_stToe(2) * cosh(l*T_left);
                rpx_a2 = cosh(l*T_left)*rp_stT(1) + 1/(obj.total_mass*H_nominal*l)*sinh(l*T_left) * L_stToe(2);
                
                Ly_goal_adjusted = median([Ly_a2 - 0.5*H_nominal*obj.total_mass, Ly_goal, Ly_a2 + 0.5*H_nominal*obj.total_mass]);
                
                obj.rpx_b3 = (Ly_goal_adjusted - (Ly_a2 + obj.total_mass*rpx_a2*vf)*cosh(l*T_ps))/...
                               (obj.total_mass*H_nominal*l*sinh(l*T_ps)+obj.total_mass*vf*cosh(l*T_ps));     
            else
%                 rpx_b3 = 0;
            end
            
            %% Design reference trajectory
            

%             obj.rpx_b3 =0;
            
            if obj.phase == 1
                w = pi/T_ps;
                
                ref_rp_swT_x = 1/2*(obj.rp_swT_ini(1) - obj.rpx_b3)*cos(w*t_ps) + 1/2*(obj.rp_swT_ini(1) + obj.rpx_b3);
                ref_rv_swT_x = 1/2*(obj.rp_swT_ini(1) - obj.rpx_b3)*(-w*sin(w*t_ps));
                ref_ra_swT_x = 1/2*(obj.rp_swT_ini(1) - obj.rpx_b3)*(-w^2*cos(w*t_ps));
                
                ref_rp_swT_z= H_sw_peak;
                ref_rv_swT_z = 0;
                ref_ra_swT_z = 0;
                
                % Design CoM trajectory during stance phase
                n=8;
                alpha0 = p0;
                alpha1 = alpha0 + v0/(n*ds_ps);
                alpha2 = 2*alpha1 - alpha0 + a0/(n*(n-1)*ds_ps^2);
                
                alpha7 = pf;
                alpha6 = alpha7 - vf/(n*ds_ps);
                alpha5 = 2*alpha6 - alpha7 + af/(n*(n-1)*ds_ps^2);
                
                alpha3 =  j0/(n*(n-1)*(n-2)*ds_ps^3) + 3*alpha2 - 3*alpha1 + alpha0;
                alpha4 =  -jf/(n*(n-1)*(n-2)*ds_ps^3) + alpha7 - 3*alpha6 + 3*alpha5;
                
                alpha =[alpha0, alpha1, alpha2, alpha3, alpha4, alpha5, alpha6, alpha7];

                
                ref_rp_stT_z = bezier(alpha,s_ps);
                ref_rv_stT_z = dbezier(alpha,s_ps)*ds_ps;
                ref_ra_stT_z = d2bezier(alpha,s_ps)*ds_ps^2;
            else
                
                ref_rp_swT_x = obj.rpx_b3;
                ref_rv_swT_x = 0;
                ref_ra_swT_x = 0;
                
                ref_rp_swT_z = H_sw_peak*(1-s_pf) + p0*s_pf;
                ref_rv_swT_z = (p0 - H_sw_peak)*ds_pf;
                ref_ra_swT_z = 0;
                
                ref_rp_stT_z = pf*(1-s_pf) + H_sw_peak*s_pf;
                ref_rv_stT_z = (H_sw_peak - p0)*ds_pf;
                ref_ra_stT_z = 0;
            end  

            
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
            
            hr= [0;ref_rp_stT_z;ref_rp_swT_x;ref_rp_swT_z];
%             hr= [sqrt(dxf_next_goal)/5;H;ref_rp_swT_x;ref_rp_swT_z];
            dhr = [0;ref_rv_stT_z;ref_rv_swT_x;ref_rv_swT_z];
            ddhr = [0;ref_ra_stT_z;ref_ra_swT_x;ref_ra_swT_z];
            
            %% Reference Tracking
            M = InertiaMatrix(q);
            C = CoriolisTerm(q,dq);
            G = GravityVector(q);
            B = [zeros(3,4);eye(4)];
            H = C+G;
%             H = G;
            y = h0 - hr;
            dy = dh0 - dhr;
            
            if obj.phase == 1
                Me = [M -Jg';Jg,zeros(2,2)];
                He = [H;dJg*dq];
%                 He = [H;0;0];
                Be = [B;zeros(2,4)];

                S = [eye(7),zeros(7,2)]; % S is used to seperate ddq with Fg;
                u = (Jh*S*Me^-1*Be)^-1*(-Kd*dy-Kp*y+ddhr+Jh*S*Me^-1*He);
            else
                u = (Jh*M^-1*B)^-1*(-Kd*dy-Kp*y+ddhr+Jh*M^-1*H);
            end
%             u = 10*ones(4,1)*sin(t);
            
            %% Data assignment
            Data.stanceLeg = obj.stanceLeg;
            Data.lG = LG(2);
            Data.l_LeftToe = L_LeftToe(2);
            Data.l_RightToe = L_RightToe(2);
            Data.l_LeftToe_vg = L_LeftToe_vg(2);
            Data.l_RightToe_vg = L_RightToe_vg(2);
            
%             Data.dx0_next = dx0_next;
%             Data.x0_next = x0_next;
%             Data.dxf_next_goal = dxf_next_goal;
            
            Data.rp_LT = rp_LT;
            
            Data.hr = hr;
            Data.dhr = dhr;
            Data.ddhr = ddhr;
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
%             Data.pseudo_com_vx = pseudo_com_vx;
            Data.q = q;
            Data.dq = dq;
            Data.u = u;
            
            Data.s_ps = s_ps;
            Data.s_pf = s_pf;
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