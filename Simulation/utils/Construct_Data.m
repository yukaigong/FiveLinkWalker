function Data = Construt_Data()

Data.stanceLeg = 0;
Data.lG = 0;
Data.l_LeftToe = 0;
Data.l_RightToe = 0;
Data.l_LeftToe_vg = 0;
Data.l_RightToe_vg = 0;
Data.l_stToe = 0;
Data.x0 = 0;

Data.dx0_next = 0;
Data.x0_next = 0;
Data.dxf_next_goal = 0;

Data.l_stToe_kf = 0;
Data.l_stToe_obs = 0;
Data.sigma = 0;
Data.std = 0;
Data.Rt = 0;
Data.Qt = 0;
Data.rp_LT = zeros(3,1);

Data.t_test = 0;
Data.t_diff = 0;

Data.p_LT = zeros(3,1);
Data.p_RT = zeros(3,1);

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
Data.h0 = zeros(4,1);
Data.dh0 = zeros(4,1);

end