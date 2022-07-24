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

q2L = 90/180*pi;
q1L = -q2L/2-base_rot; % first number is the desired world frame angle

q2R = 120/180*pi;
q1R = -q2R/2-base_rot;


% q1R = -pi/4-base_rot; % first number is the desired world frame angle
% q2R = pi/2;
% q1L = -pi/6-base_rot;
% q2L = pi/1.5;

% dq1L = 0-dbase_rot;
% dq2L = 0;
dq1R = 0-dbase_rot;
dq2R = 0;
dx = 0.5;
dz = 0;

% Initial left foot position should be at zero
base_xyz = -p_LeftToe([0;0;base_rot;q1L;q2L;q1R;q2R]);
% dbase_xyz = -Jp_LeftToe([0;0;base_rot;q1L;q2L;q1R;q2R])*[0.5;0;dbase_rot;dq1L;dq2L;dq1R;dq2R];

% Given desired initial longitudinal velocity, decide the left leg joints
% velocity
J = Jp_LeftToe([0; 0; base_rot; q1L; q2L; q1R; q2R]);
J_left_leg = J([1,3],[4,5]); % left leg is the initial stance leg
J_others = J([1,3],[1,2,3,6,7]);

dq_left_leg = J_left_leg^-1*(-J_others * [dx; dz; dbase_rot; dq1R; dq2R]);
dq1L = dq_left_leg(1);
dq2L = dq_left_leg(2);

base_xz = base_xyz([1,3]);

IC = [base_xz;base_rot;q1L;q2L;q1R;q2R;...
    dx;dz;dbase_rot;dq1L;dq2L;dq1R;dq2R];

% IC(2) = 10;

cov_q_measured = 1*10^-6;
% cov_dq = 0.00;

sample_time = 0.0005;