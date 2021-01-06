g = 9.81;
H = 0.6;
m = 32;
l = sqrt(g/H);

%LIP
numerator = [1 0]*(-1/(m*H));
denominator = [1 0 -l^2];
sys_lip = tf(numerator,denominator);

%ALIP
numerator = [l^2]*(-1/(m*H));
denominator = [1 0 -l^2 0];
sys_alip = tf(numerator,denominator);


figure;bode(sys_lip);hold on; bode(sys_alip)
grid on
legend('LIP','ALIP')