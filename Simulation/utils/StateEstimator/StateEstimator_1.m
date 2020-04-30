%Yukai controller.

classdef StateEstimator_1 <matlab.System & matlab.system.mixin.Propagates & matlab.system.mixin.SampleTime %#codegen
    % PROTECTED PROPERTIES ====================================================
    properties
        T;
    end
    properties (Access = private)
        t_prev = 0;
        t0 = 0;
        s = 0;
    end
    properties(Access = private) % change when swing leg change
        GRF_sw_z = 0;
        GRF_st_z = 0;
        stToe_pos = zeros(3,1);
        swToe_pos = zeros(3,1);
        stanceLeg = -1;
    end

    
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function [EstStates,q] = stepImpl(obj,q_measured,t_total,GRF)
            
            EstStates = Construct_EstStates();

            ds = 1/obj.T;
            
            t = t_total - obj.t0;
            obj.s = obj.s + ds*(t-obj.t_prev);
            
            
            if (obj.GRF_sw_z >= 150 && obj.s>0.5) || obj.s>1.1
                obj.stanceLeg = -obj.stanceLeg;
                obj.t0 = t_total;
                t = 0;
                obj.s = 0;
                LegSwitch = 1;
                obj.stToe_pos = obj.swToe_pos;
            else
                LegSwitch = 0;
            end
            
            if obj.stanceLeg == -1
                obj.GRF_sw_z = GRF(6);
                obj.GRF_st_z = GRF(3);
            else
                obj.GRF_sw_z = GRF(3);
                obj.GRF_st_z = GRF(6);
            end
            
            q_pre = [0;0;q_measured];
            rp_Hip2LT = -p_LeftToe(q_pre); % relative position between hip and left toe
            rp_Hip2RT = -p_RightToe(q_pre);
            
            if obj.stanceLeg == -1
                origin_pos = rp_Hip2LT + obj.stToe_pos;
                obj.swToe_pos = origin_pos - rp_Hip2RT;
            else
                origin_pos = rp_Hip2RT + obj.stToe_pos;
                obj.swToe_pos = origin_pos - rp_Hip2LT;
            end
            q = [origin_pos([1,3]); q_pre([3:7])];
            %% Log
            obj.t_prev = t;
            %% Construct EstStates
            EstStates.q = q;
            EstStates.s = obj.s;
            EstStates.t = t;
            
            EstStates.stanceLeg = obj.stanceLeg;
            EstStates.LegSwitch = LegSwitch;
         
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
            name_1 = 'q_measured';
            name_2 = 't';
            name_3 = 'GRF';
            
        end % getInputNamesImpl
        
        function [name_1, name_2, name_3] = getOutputNamesImpl(~)
            %GETOUTPUTNAMESIMPL Return output port names for System block
            name_1 = 'EstStates';
            name_2 = 'q';
        end % getOutputNamesImpl
        
        % PROPAGATES CLASS METHODS ============================================
        function [EstStates, q] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            EstStates = [1, 1];
            q = [7, 1];
        end % getOutputSizeImpl
        
        function [EstStates, q] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            EstStates = 'EstStatesBus';
            q = 'double';
        end % getOutputDataTypeImpl
        
        function [EstStates, q] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            EstStates = false;
            q = false;
        end % isOutputComplexImpl
        
        function [EstStates, q] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports.
            EstStates = true;
            q = true;
        end % isOutputFixedSizeImpl

    end % methods
end % classdef