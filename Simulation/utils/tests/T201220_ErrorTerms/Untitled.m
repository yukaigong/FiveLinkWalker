load('D:\Dropbox (DynamicLegLocomotion)\Robots\codes\SimpleModels\FiveLinkWalker\Simulation\PicsData\PD201220_ErrorTerms\SimData_201220.mat')
q_array = reshape(true_q.Data,7,[]);
dq_array = reshape(true_dq.Data,7,[]);
F = GRF.Data';
S = reshape(Data.s.Data,1,[]);
t = Data.s.Time;

start_time = 11.25; % Right stance
end_time = 11.55;
start_index = find(t == start_time);
end_index = find(t == end_time);
% t = t(start_index:end_index);
t_array = t(start_index:end_index);

g = 9.81;
m = 32;
H = 0.6;
l = sqrt(g/H);
delta_t = 1/2000;
%% Obtain Initial value
    q = q_array(:,start_index);
    dq = dq_array(:,start_index);
    p_com_0 = p_COM(q);
    Jp_com_0 = Jp_COM(q);
    dJp_com_0 = dJp_COM(q,dq);
    v_com_0 = Jp_com_0*dq;
    
    p_LT_0 = p_LeftToe(q);
    Jp_LT_0 = Jp_LeftToe(q);
    dJp_LT_0 = dJp_LeftToe(q,dq);
    v_LT_0 = Jp_LT_0*dq;
    
    p_RT_0 = p_RightToe(q);
    Jp_RT_0 = Jp_RightToe(q);
    dJp_RT_0 = dJp_RightToe(q,dq);
    v_RT_0 = Jp_RT_0*dq;
    
    rp_LT_0 = p_com_0 - p_LT_0;
    Jrp_LT_0 = Jp_com_0 - Jp_LT_0;
    dJrp_LT_0 = dJp_com_0 - dJp_LT_0;
    rv_LT_0 = v_com_0 - v_LT_0;
    
    rp_RT_0 = p_com_0 - p_RT_0;
    Jrp_RT_0 = Jp_com_0 - Jp_RT_0;
    dJrp_RT_0 = dJp_com_0 - dJp_RT_0;
    rv_RT_0 = v_com_0 - v_RT_0;
    
    LG_0 = getFLWAngularMomentum(p_com_0, [q;dq]);
    L_LeftToe_0 = getFLWAngularMomentum(p_LT_0, [q;dq]);
    L_RightToe_0 = getFLWAngularMomentum(p_RT_0, [q;dq]);
    

    
v_array = zeros(1,end_index - start_index +1);
vp_array = zeros(1,end_index - start_index +1);
v_predict_array = zeros(1,end_index - start_index +1);
vp_predict_array = zeros(1,end_index - start_index +1);
p_LT_array = zeros(3,end_index - start_index +1);
tau_array = zeros(1,end_index - start_index +1);
L_COM_array = zeros(1,end_index - start_index +1);
tau_int_array = zeros(1,end_index - start_index +1);
LCOM_int_array = zeros(1,end_index - start_index +1);
varying_z_int = zeros(1,end_index - start_index +1);
non_int_array = zeros(1,end_index - start_index +1);
vz_array = zeros(1,end_index - start_index +1);


tau_int_part_1 = 0;
tau_int_part_2 = 0;
LCOM_int_part_1 = 0;
LCOM_int_part_2 = 0;
varying_z_int_part_1 = 0;
varying_z_int_part_2 = 0;
for i = start_index:end_index
    %% obtain the real value
    q = q_array(:,i);
    dq = dq_array(:,i);
    f = F(:,i);
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
    
    LG = getFLWAngularMomentum(p_com, [q;dq]);
    L_LeftToe = getFLWAngularMomentum(p_LT, [q;dq]);
    L_RightToe = getFLWAngularMomentum(p_RT, [q;dq]);
   
    
    vp = L_LeftToe(2)/(m*H);
    v = v_com(1);
    tau = f(3)*rp_LT(1) - f(1)*rp_LT(3);
    vz = v_com(3);
    %% The predicted value ( assume left stance)
    t_interval = t(i) - t(start_index);
    % LIP prediction
    v_predict = l*sinh(l*t_interval)*rp_LT_0(1) + cosh(l*t_interval)*v_com_0(1);
    % ALIP prediction
    vp_predict = l*sinh(l*t_interval)*rp_LT_0(1) + cosh(l*t_interval)*L_LeftToe_0(2)/(m*H);
    
    %% Error Terms
    non_int = -1/(m*H)*(LG(2)-cosh(l*t_interval)*LG_0(2));
    if i~= start_index
%     if 1
        tau_int_part_1 = tau_int_part_1 + cosh(l*t_interval)*tau*delta_t;
        tau_int_part_2 = tau_int_part_2 + sinh(l*t_interval)*tau*delta_t;
        tau_int = -1/(m*H)*(cosh(l*t_interval)*tau_int_part_1 - sinh(l*t_interval)*tau_int_part_2);
        LCOM_int_part_1 = LCOM_int_part_1 + cosh(l*t_interval)*LG(2)*delta_t;
        LCOM_int_part_2 = LCOM_int_part_2 + sinh(l*t_interval)*LG(2)*delta_t;
        LCOM_int = -1/(m*H)*l*(sinh(l*t_interval)*LCOM_int_part_1 - cosh(l*t_interval)*LCOM_int_part_2);
        
        varying_z_int_part_1 = varying_z_int_part_1 + cosh(l*t_interval)*(- g/H*rp_LT(1) + 1/(m*rp_LT(3))*(rp_LT(1)*f(3) - tau))*delta_t;
        varying_z_int_part_2 = varying_z_int_part_2 + sinh(l*t_interval)*(- g/H*rp_LT(1) + 1/(m*rp_LT(3))*(rp_LT(1)*f(3) - tau))*delta_t;
        varying_z_int = cosh(l*t_interval)*varying_z_int_part_1 - sinh(l*t_interval)*varying_z_int_part_2;
        
    else
        tau_int =0;
        LCOM_int = 0;
        varying_z_int = 0;
    end
%     if i~= start_index
%         tau_int_part_1 = tau_int_part_1 + cosh(l*(t_interval-delta_t))*tau_array(i - start_index)*delta_t;
%         tau_int_part_2 = tau_int_part_2 + sinh(l*(t_interval-delta_t))*tau_array(i - start_index)*delta_t;
%         tau_int = -1/(m*H)*(cosh(l*t_interval)*tau_int_part_1 - sinh(l*t_interval)*tau_int_part_2);
%         LCOM_int_part_1 = LCOM_int_part_1 + cosh(l*(t_interval-delta_t))*L_COM_array(i - start_index)*delta_t;
%         LCOM_int_part_2 = LCOM_int_part_2 + sinh(l*(t_interval-delta_t))*L_COM_array(i - start_index)*delta_t;
%         LCOM_int = -1/(m*H)*l*(sinh(l*t_interval)*LCOM_int_part_1 - cosh(l*t_interval)*LCOM_int_part_2);
%         varying_z_int_part_1 = varying_z_int_part_1 + cosh(l*t_interval)*(- g/H*rp_LT(1) + 1/(m*rp_LT(3))*(rp_LT(1)*f(3) - tau_array(i - start_index)))*delta_t;
%         varying_z_int_part_2 = varying_z_int_part_2 + sinh(l*t_interval)*(- g/H*rp_LT(1) + 1/(m*rp_LT(3))*(rp_LT(1)*f(3) - tau_array(i - start_index)))*delta_t;
%         varying_z_int = cosh(l*t_interval)*varying_z_int_part_1 - sinh(l*t_interval)*varying_z_int_part_2;
%     else
%         tau_int =0;
%         LCOM_int = 0;
%         varying_z_int = 0;
%     end

    %% Record
    v_array(i - start_index + 1) = v;
    vp_array(i - start_index + 1) = vp;
    v_predict_array(i - start_index + 1) = v_predict;
    vp_predict_array(i - start_index + 1) = vp_predict;
    tau_array(i - start_index + 1) = tau;
    L_COM_array(i - start_index + 1) = LG(2);
    p_LT_array(:,i - start_index + 1) = p_LT;
    tau_int_array(:,i - start_index + 1) = tau_int;
    LCOM_int_array(:,i - start_index + 1) = LCOM_int;
    varying_z_int_array(:,i - start_index + 1) = varying_z_int;
    non_int_array(:,i - start_index + 1) = non_int;
    
    vz_array(:,i - start_index + 1) = vz;
end
%%
% figure;plot(t_array,vp_array);hold on;plot(t_array, vp_predict_array + LCOM_int_array);plot(t_array, vp_predict_array ); hold off
% figure;plot(t_array,v_array);hold on;plot(t_array, v_predict_array + tau_int_array);plot(t_array, v_predict_array ); hold off
% figure;plot(t_array,p_LT_array)
% figure;plot(t_array,tau_array)
% 
% figure;plot(t_array,non_int_array)
% figure;plot(t_array,tau_int_array)
% figure;plot(t_array,LCOM_int_array)

