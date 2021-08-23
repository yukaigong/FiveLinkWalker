% From onenote 210810
g = 9.8;
T_flight = 0.2;
T_contact = 0.2;
ds = 1/T_contact;
n=7;

% p0 = 0.6;
v0 = -g*T_flight/2;
p0 = 0.55;
% v0 = -0.2;
a0 = -3;

pf = 0.6;
vf = g*T_flight/2;
af = -9.8;

p_half = 0.5;

j_endpoint = 1000; % j is jerk, time derivative of acceleration
j0 = j_endpoint;
jf = -j_endpoint;


alpha0 = p0;
alpha1 = alpha0 + v0/(n*ds);
alpha2 = 2*alpha1 - alpha0 + a0/(n*(n-1)*ds^2);

alpha7 = pf;
alpha6 = alpha7 - vf/(n*ds);
alpha5 = 2*alpha6 - alpha7 + af/(n*(n-1)*ds^2);

alpha3 =  j0/(n*(n-1)*(n-2)*ds^3) + 3*alpha2 - 3*alpha1 + alpha0;
alpha4 =  -jf/(n*(n-1)*(n-2)*ds^3) + alpha7 - 3*alpha6 + 3*alpha5;

alpha =[alpha0, alpha1, alpha2, alpha3, alpha4, alpha5, alpha6, alpha7];
% %calculate alpha3
% temp = 0;
% for i = 0:6
%     temp = temp + nchoosek(n,i)*alpha(i+1);
% end
% alpha3 = (p_half - 0.5^n*temp)/(nchoosek(n,3)*0.5^n);
% alpha(4) = alpha3;

s = 0:0.01:1;
t = s*T_contact;
f = bezier(alpha,s);

df = dbezier(alpha,s)*ds;
ddf = d2bezier(alpha,s)*ds^2;
dddf = d3bezier(alpha,s)*ds^3;

figure;
subplot(4,1,1)
plot(t,f)
subplot(4,1,2)
plot(t,df)
subplot(4,1,3)
plot(t,ddf)
subplot(4,1,4)
plot(t,dddf)