function Data = Construt_Data()

Data.stanceLeg = 0;
Data.lG = 0;
Data.l_LeftToe = 0;
Data.l_RightToe = 0;
Data.l_LeftToe_vg = 0;
Data.l_RightToe_vg = 0;
Data.x0 = 0;

Data.dx0_next = 0;
Data.x0_next = 0;

Data.p_com = zeros(3,1);
Data.v_com = zeros(3,1);
Data.vx_com = 0;
Data.vy_com = 0;
Data.vz_com = 0;
Data.px_com = 0;
Data.py_com = 0;
Data.pz_com = 0;
Data.q = zeros(7,1);
Data.dq = zeros(7,1);
Data.u = zeros(4,1);

Data.hr = zeros(4,1);
Data.dhr = zeros(4,1);
Data.h0 = zeros(4,1);
Data.dh0 = zeros(4,1);

end