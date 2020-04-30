% q1L = -pi/6;
% q2L = pi/6;
% q1R = pi/6;
% q2R = pi/3;
% 
% dq1L = 0;
% dq2L = 0;
% dq1R = 0;
% dq2R = 0;
% 
% base_rot = pi/12;
% dbase_rot = pi/12;

base_rot = 0;
dbase_rot = 0;

q1L = -pi/4-base_rot; % first number is the desired world frame angle
q2L = pi/2;
q1R = -pi/6-base_rot;
q2R = pi/1.5;

% q1R = -pi/4-base_rot; % first number is the desired world frame angle
% q2R = pi/2;
% q1L = -pi/6-base_rot;
% q2L = pi/1.5;

dq1L = 0-dbase_rot;
dq2L = 0;
dq1R = 0-dbase_rot;
dq2R = 0;

base_xyz = -p_LeftToe([0;0;base_rot;q1L;q2L;q1R;q2R]);
dbase_xyz = -Jp_LeftToe([0;0;base_rot;q1L;q2L;q1R;q2R])*[0;0;dbase_rot;dq1L;dq2L;dq1R;dq2R];
% base_xyz = -p_RightToe([0;0;base_rot;q1L;q2L;q1R;q2R]);
% dbase_xyz = -Jp_RightToe([0;0;base_rot;q1L;q2L;q1R;q2R])*[0;0;dbase_rot;dq1L;dq2L;dq1R;dq2R];

base_xz = base_xyz([1,3]);
dbase_xz = dbase_xyz([1,3]);
IC = [base_xz;base_rot;q1L;q2L;q1R;q2R;...
    dbase_xz;dbase_rot;dq1L;dq2L;dq1R;dq2R];

% IC(2) = 10;

cov_q_measured = 1*10^-6;
% cov_dq = 0.00;

sample_time = 0.0005;