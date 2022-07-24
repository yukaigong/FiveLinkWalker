%Yukai controller.

classdef Poincare_test <matlab.System & matlab.system.mixin.Propagates & matlab.system.mixin.SampleTime %#codegen
    % PROTECTED PROPERTIES ====================================================
    properties

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
    end
    properties(Access = private) 
        test_start_time = 4;
        poincare_section = 0.5;
        delta = 0.02;
    end

    
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function [x_out,Jacobian] = stepImpl(obj,x,t_total,Data)
            
            % Detect Stance Leg Switching
            LegSwitch = 0;
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
            end
            
            %% observe the state after 2 steps
            % this block will not be run until the disturbance is added for
            % the first time. sample_observed is intialized to 1.
            if obj.test_start ==1 && Data.s > obj.poincare_section && (obj.step_count - obj.sample_start_step_count == 2) && obj.sample_observed == 0
%                 obj.testing = 0;
                obj.sample_observed = 1;
                obj.Jacobian(:,obj.sample_num) = (x_5 - obj.x_equilibrium_5)/obj.delta;
            end
            
            %% add disturbance
            if obj.test_start == 1 && Data.s >obj.poincare_section && obj.sample_observed == 1 && obj.sample_num <10
                obj.sample_num = obj.sample_num + 1;
                obj.sample_start_step_count = obj.step_count;
%                 obj.testing = 1;
                obj.sample_observed = 0;
                changed = 1;
                
                x_disturbed_5 = obj.x_equilibrium_5;
                x_disturbed_5(obj.sample_num) = x_disturbed_5(obj.sample_num) + obj.delta;
                % Make sure the stance foot position does not change, and
                % velocity is still zero
                base_xyz = -p_LeftToe([0;0;x_disturbed_5(1:5)]);
                dbase_xyz = -Jp_LeftToe([0;0;x_disturbed_5(1:5)])*[0;0;x_disturbed_5(6:10)];
                x_out = [base_xyz([1,3]);x_disturbed_5(1:5);dbase_xyz([1,3]);x_disturbed_5(6:10)];
                
            else
                x_out = x;
            end
            
%             x_out = x;
            Jacobian = obj.Jacobian;
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
        function [x_out, Jacobian] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            x_out = 14;
            Jacobian = [10, 10];
        end % getOutputSizeImpl
        
        function [x_out, Jacobian] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            x_out = 'double';
            Jacobian = 'double';
        end % getOutputDataTypeImpl
        
        function [x_out, Jacobian] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            x_out = false;
            Jacobian = false;
        end % isOutputComplexImpl
        
        function [x_out, Jacobian] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports.
            x_out = true;
            Jacobian = true;
        end % isOutputFixedSizeImpl

    end % methods
end % classdef