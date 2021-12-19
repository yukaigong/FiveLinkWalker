function dx = IP_general(t, x, T, m, dLc_traj,ua_traj)
g = 9.81;
dLc = interp1(linspace(0,1,length(dLc_traj)),dLc_traj,t/T);
ua = interp1(linspace(0,1,length(ua_traj)),ua_traj,t/T);

% z = 0.6 + 0.1*sin(2*pi*t/T);
% dz = 0.1*(2*pi/T)*cos(2*pi*t/T);
z = 0.6;
dz = 0;
ddz = 0;
% u = 10*2*((t/T)-0.5);
dx = zeros(2,1);
dx(1) = x(2);
dx(2) = g/z*x(1)+ddz/z*x(1) - dLc/(m*z) + ua/(m*z);
end