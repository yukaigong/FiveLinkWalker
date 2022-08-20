function dx = Angular_IP_general(t, x, T, m, Lc_traj,ua_traj)
g = 9.81;
Lc = interp1(linspace(0,1,length(Lc_traj)),Lc_traj,t/T);
ua = interp1(linspace(0,1,length(ua_traj)),ua_traj,t/T);

% z = 0.6 + 0.1*sin(2*pi*t/T);
% dz = 0.1*(2*pi/T)*cos(2*pi*t/T);
z = 0.6;
dz = 0;
% u = 10*2*((t/T)-0.5);
dx = zeros(2,1);
dx(1) = x(2)/(m*z) + dz/z*x(1) - Lc/(m*z);
dx(2) = m*g*x(1) +ua;
end