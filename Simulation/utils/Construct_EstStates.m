function EstStates = Construct_EstStates()
%CONSTRUC_ESTSTATES Summary of this function goes here
%   Detailed explanation goes here
EstStates.q = zeros(7,1);
EstStates.dq = zeros(7,1);

EstStates.s = 0;
EstStates.t = 0;
EstStates.stanceLeg = 0;
EstStates.LegSwitch = 0;
end

