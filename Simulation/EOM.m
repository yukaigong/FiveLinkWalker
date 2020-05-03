%Yukai controller.

classdef EOM <matlab.System & matlab.system.mixin.Propagates & matlab.system.mixin.SampleTime %#codegen
    % PROTECTED PROPERTIES ====================================================
   
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function dx = stepImpl(obj,x,u,GRF)
                dx = zeros(size(x));
                q = x(1:7);
                dq = x(8:end);
                
                M = InertiaMatrix(q);
                C = CoriolisTerm(q,dq);
                G = GravityVector(q);
                B = [zeros(3,4);eye(4)];
                
                JgL = Jp_LeftToe(q);
                JgR = Jp_RightToe(q);
                Jg = [JgL;JgR];
                
                ddq = M^-1*(-C-G+B*u+Jg'*GRF);
                
                dx = [dq;ddq];
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
            name_2 = 'u';
            name_3 = 'GRF';
        end % getInputNamesImpl      
        
        function [name_1] = getOutputNamesImpl(~)
            %GETOUTPUTNAMESIMPL Return output port names for System block
            name_1 = 'dx';
        end % getOutputNamesImpl
        
        % PROPAGATES CLASS METHODS ============================================
        function [dx] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            dx = [14, 1];
        end % getOutputSizeImpl
        
        function [dx] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            dx = 'double';
        end % getOutputDataTypeImpl
        
        function [dx] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            dx = false;
        end % isOutputComplexImpl
        
        function [dx] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports.
            dx = true;
        end % isOutputFixedSizeImpl        
    end % methods
end % classdef