q_seq = reshape(Data_perfect.q.Data,7,[]);
dq_seq = reshape(Data_perfect.dq.Data,7,[]);
Time = Data.dq.Time';

t = 3.8 ; % left stance
q_test = q_seq(:,abs(Time-t)<4.4409e-10);
dq_test = dq_seq(:,abs(Time-t)<4.4409e-10);
% x =[q;dq];

l_LeftToe_seq = [];
p_com_seq = [];
for i = 1:10000
    noise = normrnd(zeros(7,1),0.06);
    if i == 1
        q = q_test;
    else
        q = q_test + noise;
    end
    dq = dq_test;
    x = [q;dq];
    
    
    p_com = p_COM(q);
    Jp_com = Jp_COM(q);
    dJp_com = dJp_COM(q,dq);
    v_com = Jp_com*dq;

    p_LT = p_LeftToe(q);
    Jp_LT = Jp_LeftToe(q);
    dJp_LT = dJp_LeftToe(q,dq);
    v_LT = Jp_LT*dq;

    p_RT = p_RightToe(q);
    Jp_RT = Jp_RightToe(q);
    dJp_RT = dJp_RightToe(q,dq);
    v_RT = Jp_RT*dq;

    rp_LT = p_com - p_LT;
    Jrp_LT = Jp_com - Jp_LT;
    dJrp_LT = dJp_com - dJp_LT;
    rv_LT = v_com - v_LT;

    rp_RT = p_com - p_RT;
    Jrp_RT = Jp_com - Jp_RT;
    dJrp_RT = dJp_com - dJp_RT;
    rv_RT = v_com - v_RT;

    LG = getFLWAngularMomentum(p_com,x);
    L_LeftToe = getFLWAngularMomentum(p_LT,x);
    L_RightToe = getFLWAngularMomentum(p_RT,x);
    
    l_LeftToe_seq = [l_LeftToe_seq,L_LeftToe(2)];
    p_com_seq = [p_com_seq,p_com];
end

true_l = l_LeftToe_seq(1)
avg_l = mean(l_LeftToe_seq)
true_com = p_com_seq(:,1)
avg_com = mean(p_com_seq,2)
