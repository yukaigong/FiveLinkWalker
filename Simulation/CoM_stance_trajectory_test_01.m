% From onenote 210810
g = 9.8;
T_flight = 0.1;
T_contact = 0.2;
ds = 1/T_contact;
n=8;

p0 = 0.6;
v0 = -g*T_flight/2;
a0 = -9.8;

pf = 0.6;
vf = g*T_flight/2;
af = -9.8;

p_half = 0.5;

% j_endpoint = 30; % j is jerk, time derivative of acceleration
% j0 = j_endpoint;
% jf = -j_endpoint;


alpha0 = p0;
alpha1 = alpha0 + v0/(n*ds);
alpha2 = 2*alpha1 - alpha0 + a0/(n*(n-1)*ds^2);

alpha6 = pf;
alpha5 = alpha6 - vf/(n*ds);
alpha4 = 2*alpha5 - alpha6 + af/(n*(n-1)*ds^2);

alpha =[alpha0, alpha1, alpha2, p_half,p_half,p_half, alpha4, alpha5, alpha6];
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

figure;
subplot(3,1,1)
plot(t,f)
subplot(3,1,2)
plot(t,df)
subplot(3,1,3)
plot(t,ddf)