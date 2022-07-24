%Yukai controller.

classdef EOM_Rigid_Ground <matlab.System & matlab.system.mixin.Propagates & matlab.system.mixin.SampleTime %#codegen
    % PROTECTED PROPERTIES ====================================================
    properties
        IC;
    end
    properties(Constant)
%         total_mass = 32;
    end
    properties(Access = private)
       stanceLeg = -1;
       t0 = 0;
%        initialized = 0;
    end
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function [dx,GRF,x_reset,impact] = stepImpl(obj,x,u,t_total)
            
%                 if obj.initialized == 0
%                     impact = 1;
%                     obj.initialized = 1;
%                     x_reset = obj.IC;
%                     x = obj.IC;
%                 else
                impact = 0;
%                 end
                
                
                
                x_reset = zeros(size(x));
                dx = zeros(size(x));
                q = x(1:7);
                dq = x(8:end);
                
                M = InertiaMatrix(q);
                C = CoriolisTerm(q,dq);
                G = GravityVector(q);
                B = [zeros(3,4);eye(4)];
                t = t_total - obj.t0;
                
                if obj.stanceLeg == -1
                    p_sw = p_RightToe(q);
                else
                    p_sw = p_LeftToe(q);
                end
                
                if p_sw(3) < 0.001 && t > 0.29
                    obj.stanceLeg = -obj.stanceLeg;
                    obj.t0 = t_total;
                    impact = 1;
                end
                
                if obj.stanceLeg == -1
                    p_sw = p_RightToe(q);
                    p_st = p_LeftToe(q);
                    
                    Jg = Jp_LeftToe(q);
                    dJg = dJp_LeftToe(q,dq);
                else
                    p_st = p_RightToe(q);
                    p_sw = p_LeftToe(q);
                    Jg = Jp_RightToe(q);
                    dJg = dJp_RightToe(q,dq);
                end
                Jg = Jg([1,3],:);
                dJg = dJg([1,3],:);
                
                if impact == 1
                    Me = [M -Jg'; Jg zeros(2,2)] ;
                    dq_minus = x(8:14);
                    temp = Me^-1*[M*dq_minus;zeros(2,1)];
                    dq_plus = temp(1:7);
                    dq = dq_plus;
                    x_reset = x;
                    x_reset(8:14) = dq_plus;
                end
                
                

                v_st = Jg*dq;
                
                Me = [M -Jg'; Jg zeros(2,2)] ;
                He = [C+G; dJg*dq];
                Be = [B;zeros(2,4)];
                Constraint_damping = [zeros(7,1);-100*v_st];
                
                compound_vector = Me^-1*(-He+Be*u + Constraint_damping);
                ddq = compound_vector(1:7);
                GRF_st = compound_vector(8:9);
                dx = [dq;ddq];
                
                if obj.stanceLeg == -1
                    GRF = [GRF_st(1);0;GRF_st(2);0;0;0];
                else
                    GRF = [0;0;0;GRF_st(1);0;GRF_st(2)];
                end
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
%             name_1 = 'x';
%             name_2 = 'u';
%             name_3 = 'GRF';
%         end % getInputNamesImpl      
        
%         function [name_1] = getOutputNamesImpl(~)
%             %GETOUTPUTNAMESIMPL Return output port names for System block
%             name_1 = 'dx';
%         end % getOutputNamesImpl
        
        % PROPAGATES CLASS METHODS ============================================
        function [dx,GRF,x_reset,impact] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            dx = 14;
            GRF = 6;
            x_reset = 14;
            impact = 1;
        end % getOutputSizeImpl
        
        function [dx,GRF,x_reset,impact] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            dx = 'double';
            GRF = 'double';
            x_reset = 'double';
            impact = 'double';
        end % getOutputDataTypeImpl
        
        function [dx,GRF,x_reset,impact] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            dx = false;
            GRF = false;
            x_reset = false;
            impact = false;
        end % isOutputComplexImpl
        
        function [dx,GRF,x_reset,impact] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports.
            dx = true;
            GRF = true;
            x_reset = true;
            impact = true;
        end % isOutputFixedSizeImpl        
    end % methods
end % classdef