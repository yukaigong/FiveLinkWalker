%Yukai controller.

classdef Poincare_test <matlab.System & matlab.system.mixin.Propagates & matlab.system.mixin.SampleTime %#codegen
    % PROTECTED PROPERTIES ====================================================
    properties
        poincare_delta;
    end
    properties (Access = private)
        test_start = 0;
        test_ready = 0;
        sample_num = 0;
        testing = 0;
        step_count = 0;
        sample_start_step_count = 0;
        Jacobian = zeros(10,10);
        sample_observed = 1;
        stanceLeg = -1;
        x_equilibrium_5 = zeros(10,1);
        test_start_s = 0;
        
        % for px and L
        rp_stToe_equilibrium = 0;
        L_equilibrium = 0;
        delta_low_disturbed = zeros(2,10);
        delta_low_recover = zeros(2,10);
    end
    properties(Access = private) 
        test_start_time = 20;
        poincare_section = 0.001;
        
    end

    
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function [x_out,Jacobian,delta_low_disturbed,delta_low_recover,add_disturb] = stepImpl(obj,x,t_total,Data)
            q = x(1:7);
            dq = x(8:14);
            
            % Detect Stance Leg Switching
            add_disturb = 0;
            LegSwitch = 0;
            
            p_com = p_COM(q);
            p_LT = p_LeftToe(q);
            p_RT = p_RightToe(q);
            L_LeftToe = getFLWAngularMomentum(p_LT, [q;dq]);
            L_RightToe = getFLWAngularMomentum(p_RT, [q;dq]);
            if Data.stanceLeg == -1
                L_stToe = L_LeftToe;
                rp_stToe = p_com - p_LT;
            else
                L_stToe = L_RightToe;
                rp_stToe = p_com - p_RT;
            end
            
            if Data.stanceLeg ~= obj.stanceLeg
                LegSwitch = 1;
                obj.step_count = obj.step_count + 1;
            end
            
            x_5 = x([3:7,10:14]); % Remove x z in coordinates, 5 coordinates left
            if t_total > obj.test_start_time && Data.s < obj.poincare_section
                obj.test_ready = 1;
            end
            if obj.test_ready == 1 && obj.test_start == 0 && Data.s > obj.poincare_section
                obj.x_equilibrium_5 = x_5;
                obj.test_start = 1;
                obj.test_start_s = Data.s;
                
                obj.rp_stToe_equilibrium = rp_stToe(1);
                obj.L_equilibrium = L_stToe(2);
            end
            
            %% observe the state after 2 steps
            % this block will not be run until the disturbance is added for
            % the first time. sample_observed is intialized to 1.
            if obj.test_start ==1 && abs(Data.s -obj.test_start_s) < 0.0001 && (obj.step_count - obj.sample_start_step_count == 2) && obj.sample_observed == 0
                %                 obj.testing = 0;
                obj.sample_observed = 1;
                obj.Jacobian(:,obj.sample_num) = (x_5 - obj.x_equilibrium_5)/obj.poincare_delta;
                
                delta_L_recover = L_stToe(2) - obj.L_equilibrium;
                delta_rp_stToe_recover = rp_stToe(1) -  obj.rp_stToe_equilibrium;
                
                obj.delta_low_recover(:,obj.sample_num) = [delta_rp_stToe_recover; delta_L_recover];
                
%                 disp(['Record recovery at s = ', num2str(Data.s)]);
            end
            
            %% add disturbance
            if obj.test_start == 1 && Data.s >obj.poincare_section && obj.sample_observed == 1 && obj.sample_num <10
                obj.sample_num = obj.sample_num + 1;
                obj.sample_start_step_count = obj.step_count;
                %                 obj.testing = 1;
                obj.sample_observed = 0;
                add_disturb = 1;
                
                x_disturbed_5 = obj.x_equilibrium_5;
                x_disturbed_5(obj.sample_num) = x_disturbed_5(obj.sample_num) + obj.poincare_delta;
                % Make sure the stance foot position does not change, and
                % velocity is still zero
                if Data.stanceLeg == -1
                    base_xyz = -p_LeftToe([0;0;x_disturbed_5(1:5)]);
                    dbase_xyz = -Jp_LeftToe([0;0;x_disturbed_5(1:5)])*[0;0;x_disturbed_5(6:10)];
                else
                    base_xyz = -p_RightToe([0;0;x_disturbed_5(1:5)]);
                    dbase_xyz = -Jp_RightToe([0;0;x_disturbed_5(1:5)])*[0;0;x_disturbed_5(6:10)];
                end
                x_out = [base_xyz([1,3]);x_disturbed_5(1:5);dbase_xyz([1,3]);x_disturbed_5(6:10)];
                
                %Caculate L_disturbance
                q_disturbed = x_out(1:7);
                dq_disturbed = x_out(8:14);
                p_com = p_COM(q_disturbed);
                p_LT = p_LeftToe(q_disturbed);
                p_RT = p_RightToe(q_disturbed);
                L_LeftToe = getFLWAngularMomentum(p_LT, [q_disturbed;dq_disturbed]);
                L_RightToe = getFLWAngularMomentum(p_RT, [q_disturbed;dq_disturbed]);
                if Data.stanceLeg == -1
                    L_stToe = L_LeftToe;
                    rp_stToe = p_com - p_LT;
                else
                    L_stToe = L_RightToe;
                    rp_stToe = p_com - p_RT;
                end
                
                delta_L_disturbed = L_stToe(2) - obj.L_equilibrium;
                delta_rp_stToe_disturbed = rp_stToe(1) -  obj.rp_stToe_equilibrium;
                
                obj.delta_low_disturbed(:,obj.sample_num) = [delta_rp_stToe_disturbed; delta_L_disturbed];
                
%                 disp(['Add disturbance at s = ', num2str(Data.s)]);
            else
                x_out = x;
            end
            
            %             x_out = x;
            Jacobian = obj.Jacobian;
            delta_low_disturbed = obj.delta_low_disturbed;
            delta_low_recover = obj.delta_low_recover;
            obj.stanceLeg = Data.stanceLeg;
            
            
            
            
        end % stepImpl

        %% Default functions
        function setupImpl(obj)
            %SETUPIMPL Initialize System object.
        end % setupImpl
        
        function resetImpl(~)
            %RESETIMPL Reset System object states.
        end % resetImpl
        
%         function [name_1, name_2, name_3]  = getInputNamesImpl(~)
%             %GETINPUTNAMESIMPL Return input port names for System block
%             name_1 = 'q_measured';
%             name_2 = 't';
%             name_3 = 'GRF';
%             
%         end % getInputNamesImpl
%         
%         function [name_1, name_2, name_3] = getOutputNamesImpl(~)
%             %GETOUTPUTNAMESIMPL Return output port names for System block
%             name_1 = 'EstStates';
%             name_2 = 'q';
%         end % getOutputNamesImpl
        
        % PROPAGATES CLASS METHODS ============================================
        function [x_out, Jacobian, delta_low_disturbed, delta_low_recover, add_disturb] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            x_out = 14;
            Jacobian = [10, 10];
            delta_low_disturbed = [2,10];
            delta_low_recover = [2,10];
            add_disturb = 1;
        end % getOutputSizeImpl
        
        function [x_out, Jacobian, delta_low_disturbed, delta_low_recover, add_disturb] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            x_out = 'double';
            Jacobian = 'double';
            delta_low_disturbed = 'double';
            delta_low_recover = 'double';
            add_disturb = 'double';
        end % getOutputDataTypeImpl
        
        function [x_out, Jacobian, delta_low_disturbed, delta_low_recover, add_disturb] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            x_out = false;
            Jacobian = false;
            delta_low_disturbed = false;
            delta_low_recover = false;
            add_disturb = false;
        end % isOutputComplexImpl
        
        function [x_out, Jacobian, delta_low_disturbed, delta_low_recover, add_disturb] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports.
            x_out = true;
            Jacobian = true;
            delta_low_disturbed = true;
            delta_low_recover = true;
            add_disturb = true;
        end % isOutputFixedSizeImpl

    end % methods
end % classdef