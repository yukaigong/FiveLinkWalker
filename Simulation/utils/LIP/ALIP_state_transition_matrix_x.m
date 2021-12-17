function M = ALIP_state_transition_matrix_x(T,g,H,m)
%state transition matrix from 0 to T
%   Detailed explanation goes here
l = sqrt(g/H);

M = [cosh(l*T), 1/(m*H*l)*sinh(l*T);
    m*H*l*sinh(l*T), cosh(l*T)];
end

