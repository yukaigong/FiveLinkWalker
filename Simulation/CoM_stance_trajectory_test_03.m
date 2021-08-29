
% From onenote 210810
g = 9.8;
T_flight = 0.2;
T_contact = 0.2;
ds_ps = 1/T_contact;
n=10;

% p0 = 0.5;
% v0 = -g*T_flight/2;
p0 = 0.55;
v0 = -0.2;
a0 = -3;

pf = 0.6;
vf = g*T_flight/2;
af = -9.8;

p_half = 0.5;

j_endpoint = 10000; % j is jerk, time derivative of acceleration
j0 = j_endpoint;
jf = -j_endpoint;



alpha = zeros(1,n+1);
alpha_0 = p0;
alpha_1 = alpha_0 + v0/(n*ds_ps);
alpha_2 = 2*alpha_1 - alpha_0 + a0/(n*(n-1)*ds_ps^2);

alpha_n = pf;
alpha_n_1 = alpha_n - vf/(n*ds_ps);
alpha_n_2 = 2*alpha_n_1 - alpha_n + af/(n*(n-1)*ds_ps^2);

alpha_3 =  j0/(n*(n-1)*(n-2)*ds_ps^3) + 3*alpha_2 - 3*alpha_1 + alpha_0;
alpha_n_3 =  -jf/(n*(n-1)*(n-2)*ds_ps^3) + alpha_n - 3*alpha_n_1 + 3*alpha_n_2;

% alpha([1:4, end - 3: end]) = [alpha_0,alpha_1,alpha_2,alpha_3,alpha_n_3,alpha_n_2,alpha_n_1,alpha_n];
alpha([1:3, end - 2: end]) = [alpha_0,alpha_1,alpha_2,alpha_n_2,alpha_n_1,alpha_n];

Bezier_am= bezier_matrix_derivative(n,2,0.1:0.1:0.9); % acceleration matrix, row corresponds to coefficients, column corresponds to s.
% Setting up the linprog/quadprog problem
% inequality constraint: Bezier_am * alpha >
% min_acceleration on all sample s
a_min = -0;
b = Bezier_am(:, [1:3,end - 2:end])*alpha([1:3, end - 2: end])';
b = b*ds_ps^2 - a_min;
A = - Bezier_am(:,4:end -3)*ds_ps^2;
alpha_middle_num = n+1-6;
% H is used to calculate the covariance of alpha middle
H =  - ones(alpha_middle_num, alpha_middle_num)+diag(alpha_middle_num*ones(alpha_middle_num,1));
f = zeros(alpha_middle_num,1);
alpha(4:end-3) = quadprog(H,f,A,b)';


%% test
s = 0:0.01:1;
t = s*T_contact;

f = bezier(alpha,s);
df = dbezier(alpha,s)*ds_ps;
ddf = d2bezier(alpha,s)*ds_ps^2;
dddf = d3bezier(alpha,s)*ds_ps^3;

figure;
subplot(4,1,1)
plot(t,f)
subplot(4,1,2)
plot(t,df)
subplot(4,1,3)
plot(t,ddf)
subplot(4,1,4)
plot(t,dddf)