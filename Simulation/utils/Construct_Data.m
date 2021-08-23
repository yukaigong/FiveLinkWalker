function Data = Construt_Data()
Data.Lc_effect = zeros(2,1);
Data.Lc_est = 0;
Data.dx0_next_withLc = 0;
Data.LegSwitch = 0;

Data.stanceLeg = 0;
Data.lG = 0;
Data.l_LeftToe = 0;
Data.l_RightToe = 0;
Data.l_LeftToe_vg = 0;
Data.l_RightToe_vg = 0;
Data.l_stToe_vg = 0;
Data.l_stToe = 0;
Data.x0 = 0;

Data.dx0_next = 0;
Data.x0_next = 0;
Data.dxf_next_goal = 0;
Data.vx0_next = 0;

Data.dx0_next_special = 0;

Data.l_stToe_kf = 0;
Data.l_stToe_obs = 0;
Data.sigma = 0;
Data.std = 0;
Data.Rt = 0;
Data.Qt = 0;
Data.rp_LT = zeros(3,1);

Data.t_test = 0;
Data.t_diff = 0;
Data.s = 0;
Data.t = 0;

Data.p_LT = zeros(3,1);
Data.p_RT = zeros(3,1);
Data.v_LT = zeros(3,1);
Data.v_RT = zeros(3,1);

Data.p_stT = zeros(3,1);
Data.p_swT = zeros(3,1);
Data.v_stT = zeros(3,1);
Data.v_swT = zeros(3,1);

Data.rp_Hip2LT = zeros(3,1);
Data.rp_Hip2RT = zeros(3,1);
Data.rv_Hip2LT = zeros(3,1);
Data.rv_Hip2RT = zeros(3,1);

Data.rp_stT = zeros(3,1);
Data.rv_stT = zeros(3,1);

Data.p_com = zeros(3,1);
Data.v_com = zeros(3,1);
Data.vx_com = 0;
Data.vy_com = 0;
Data.vz_com = 0;
Data.px_com = 0;
Data.py_com = 0;
Data.pz_com = 0;
Data.pseudo_com_vx = 0;
Data.q = zeros(7,1);
Data.dq = zeros(7,1);
Data.u = zeros(4,1);

Data.hr = zeros(4,1);
Data.dhr = zeros(4,1);
Data.ddhr = zeros(4,1);
Data.h0 = zeros(4,1);
Data.dh0 = zeros(4,1);

Data.V_command = 0;

Data.q1 = 0;
Data.q2 = 0;
Data.q3 = 0;
Data.q4 = 0;
Data.q5 = 0;
Data.q6 = 0;
Data.q7 = 0;

Data.dq1 = 0;
Data.dq2 = 0;
Data.dq3 = 0;
Data.dq4 = 0;
Data.dq5 = 0;
Data.dq6 = 0;
Data.dq7 = 0;

Data.s_ps = 0;
Data.s_pf = 0;
end