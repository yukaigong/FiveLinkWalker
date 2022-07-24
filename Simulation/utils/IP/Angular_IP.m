function dx = Angular_IP(t, x, T, m, L_c_whole)
g = 9.81;
L_c = interp1(linspace(0,1,length(L_c_whole)),L_c_whole,t/T);
z = 0.6 + 0.1*sin(2*pi*t/T);
u = 10*2*((t/T)-0.5);
dz = 0.1*(2*pi/T)*cos(2*pi*t/T);
dx = zeros(2,1);
dx(1) = x(2)/(m*z) + dz/z*x(1) - L_c/(m*z);
dx(2) = m*g*x(1) +u;
end