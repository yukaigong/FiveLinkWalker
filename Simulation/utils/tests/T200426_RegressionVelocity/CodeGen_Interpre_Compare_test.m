%Yukai controller.
classdef CodeGen_Interpre_Compare_test <matlab.System & matlab.system.mixin.Propagates & matlab.system.mixin.SampleTime %#codegen
    % PROTECTED PROPERTIES ====================================================
    properties(Nontunable)
        sample_time;
        history_length;
        dop;
        signal_dim;
        fil_matrix;
    end
    properties(Access = private)
        %         q_history = zeros(7,30);
        sample_total = 0;
    end
    properties (DiscreteState)
        q_history;
        
    end
    %         test = JointFilter.signal_dim;
    
    
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        function setupImpl(obj)
            obj.q_history = zeros(obj.signal_dim,obj.history_length);
%             obj.fil_matrix = get_RegressionFilterMatrix(obj.dop,obj.history_length,obj.sample_time);
        end % setupImpl
        
        function dq = stepImpl(obj,q,t)
            dq = get_RegressionFilterMatrix(obj.dop,obj.history_length,obj.sample_time)*[1:50]';
%             dq = obj.fil_matrix*[1:50]';
        end
        

        %%
        function [sz,dt,cp] = getDiscreteStateSpecificationImpl(obj,name)
            sz = [0, 0];
            dt = 'double';
            cp = false;
            switch name
                case 'q_history'
                    sz = [obj.signal_dim,obj.history_length];
                case 'fil_matrix'
                    sz = [1,obj.history_length];
            end
        end
        %% Default functions
        
        function resetImpl(~)
            %RESETIMPL Reset System object states.
        end % resetImpl
        
        function [name_1,name_2]  = getInputNamesImpl(~)
            %GETINPUTNAMESIMPL Return input port names for System block
            name_1 = 'q';
            name_2 = 't';
        end % getInputNamesImpl
        
        function [name_1] = getOutputNamesImpl(~)
            %GETOUTPUTNAMESIMPL Return output port names for System block
            name_1 = 'dq';
        end % getOutputNamesImpl
        
        % PROPAGATES CLASS METHODS ============================================
        function [dq] = getOutputSizeImpl(obj)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            dq = [obj.signal_dim, 1];
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