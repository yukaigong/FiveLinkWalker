history_length = 20; % sample num
dop = 3; % deg of polynomial NOTICE! dop too high will make(A'*A) close to singular and cause numeric issue when using code gen mode.
RegressionDelay = 0;
A = zeros(history_length,dop+1);
% osam = 0; % offset sample 
% 
for i = 1:history_length
    for j = 1:dop+1
        A(i,j) = ((i-history_length)*sample_time)^(j-1);
    end
end
[Q,R]=qr(A,0);
PsuedoInverse=inv(R)*Q';


Matrix_temp = zeros(1,dop+1);
Matrix_temp(2) = 1;
fil_matrix = Matrix_temp*PsuedoInverse;

% for i = 1:sample_num
%     for j = 1:dop+1

cov_dq_estimated = sum(fil_matrix.^2)*cov_q_measured;

% sum(fil_matrix.^2)

