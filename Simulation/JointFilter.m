%Yukai controller.
classdef JointFilter <matlab.System & matlab.system.mixin.Propagates & matlab.system.mixin.SampleTime %#codegen
    % PROTECTED PROPERTIES ====================================================
    properties
        T_sample;
        fil_matrix;
        sample_num;
        dop;
        
    end
    properties(Access = private)
        measurment_num = 7;
        q_history = zeros(7,30);
        sample_total = 0;
        
    end % properties
    
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function dq = stepImpl(obj,q,t)
            dq=zeros(7,1);
            temp = obj.q_history(:,2:end);
            obj.q_history(:,1:end-1) = temp;
            obj.q_history(:,end) = q;
            
            for i = 1:obj.measurment_num
                dq(i) = obj.fil_matrix*obj.q_history(i,:)';
            end % stepImpl
            
            obj.sample_total = obj.sample_total +1;
            if obj.sample_total<obj.sample_num
                dq = zeros(obj.measurment_num,1);
            end
        end
        
%       function obj = JointFilter(T_sample, fil_matrix, sample_num, dop)
%          % Initialize Prop1 for each instance
%         obj.T_sample = T_sample;
%         obj.fil_matrix = fil_matrix;
%         obj.sample_num = sample_num;
%         obj.dop = dop;
%         obj.q_history = zeros(obj.measurment_num,obj.sample_num);
%       end
        %% Default functions
        function setupImpl(obj)
            %SETUPIMPL Initialize System object.
        end % setupImpl
        
        function resetImpl(~)
            %RESETIMPL Reset System object states.
        end % resetImpl
        
        function [name_1]  = getInputNamesImpl(~)
            %GETINPUTNAMESIMPL Return input port names for System block
            name_1 = 'q';
        end % getInputNamesImpl
        
        function [name_1] = getOutputNamesImpl(~)
            %GETOUTPUTNAMESIMPL Return output port names for System block
            name_1 = 'dq';
        end % getOutputNamesImpl
        
        % PROPAGATES CLASS METHODS ============================================
        function [dq] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            dq = [7, 1];
        end % getOutputSizeImpl
        
        function [dq] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            dq = 'double';
        end % getOutputDataTypeImpl
        
        function [dq] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            dq = false;
        end % isOutputComplexImpl
        
        function [dq] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports.
            dq = true;
        end % isOutputFixedSizeImpl
    end % methods
end % classdef