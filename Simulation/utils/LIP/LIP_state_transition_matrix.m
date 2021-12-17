function M = LIP_state_transition_matrix(T,g,H)
%state transition matrix from 0 to T
%   Detailed explanation goes here
l = sqrt(g/H);

M = [cosh(l*T), 1/l*sinh(l*T);
    l*sinh(l*T), cosh(l*T)];
end

