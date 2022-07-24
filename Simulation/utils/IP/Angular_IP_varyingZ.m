function dx = Angular_IP_varyingZ(t, x, T, m, L_c_whole, z_whole, dz_whole)
g = 9.81;
L_c = interp1(linspace(0,1,length(L_c_whole)),L_c_whole,t/T);
z = interp1(linspace(0,1,length(z_whole)),z_whole, t/T);
dz = interp1(linspace(0,1,length(dz_whole)),dz_whole, t/T);
dx = zeros(2,1);
dx(1) = x(2)/(m*z) + dz/z*x(1) - L_c/(m*z);
dx(2) = m*g*x(1);
end