% load('D:\Dropbox (DynamicLegLocomotion)\Robots\codes\SimpleModels\FiveLinkWalker\Simulation\PicsData\PD210412_paper\sim_data.mat')

[Data_array,Time_array] = DataTS2DataArray(Data);
impact_index = find(Data_array.LegSwitch == 1);
impact_time = Time_array(impact_index);

num_steps = 7;
velocity_steps = [-2,-1,-0.5,0,0.5,1,2];
periodic_start_time = [47,37,32,2,7,12,22];
periodic_end_time = 2+[47,37,32,2,7,12,22];

steps_start_index = zeros(num_steps);
steps_end_index = zeros(num_steps);
L_actual_steps = cell(num_steps);
vc_actual_steps = cell(num_steps);
pc_actual_steps = cell(num_steps);
L_predict_01_steps = cell(num_steps);
pc_predict_01_steps = cell(num_steps);
vc_predict_02_steps = cell(num_steps);
pc_predict_02_steps = cell(num_steps);
stanceLeg_steps = cell(num_steps);

g = 9.81;
H = 0.6;
m = 32;

% Information we have: pos, vel and L at the beginning of first step. Foot
% placement and vertical velocity at the end of each step.
% 01 for ALIP, 02 for LIP
for i = 1:length(periodic_start_time)
% for i = 4:4
    impacts_in_periodic = impact_index(impact_time>periodic_start_time(i) & impact_time<periodic_end_time(i));
    start_pred_index = impacts_in_periodic(1)+0.2*2000;
    pc_ini = Data_array.px_com(start_pred_index);
    vc_ini = Data_array.vx_com(start_pred_index);
    L_ini = Data_array.l_stToe(start_pred_index);
    L_predict_01 = [L_ini];
    pc_predict_01 = [pc_ini];
    vc_predict_02 = [vc_ini];
    pc_predict_02 = [pc_ini];
    L_actual = Data_array.l_stToe(start_pred_index:impacts_in_periodic(4));
    pc_actual = Data_array.px_com(start_pred_index:impacts_in_periodic(4));
    vc_actual = Data_array.vx_com(start_pred_index:impacts_in_periodic(4));
    t = Time_array(start_pred_index:impacts_in_periodic(4));
    for j = 1:3
        L_predict_ini_01_step = L_predict_01(end);
        pc_predict_ini_01_step = pc_predict_01(end);
        vc_predict_ini_02_step = vc_predict_02(end);
        pc_predict_ini_02_step = pc_predict_02(end);
        p_stT_ini_step = Data_array.p_stT(1,start_pred_index);
        rp_stT_ini_step = Data_array.rp_stT(1,start_pred_index);
        for k = start_pred_index+1:impacts_in_periodic(j+1)
%             T = Time_array(impacts_in_periodic(2)) - Time_array(impacts_in_periodic(1));
            T = Time_array(k) - Time_array(start_pred_index);
            M_01 = ALIP_state_transition_matrix_x(T,g,H,m);
%             pc_k_predict_01 = M_01(1,:) * [pc_predict_ini_01_step-p_stT_ini_step;L_predict_ini_01_step] + p_stT_ini_step;
%             L_k_predict_01 = M_01(2,:) * [pc_predict_ini_01_step-p_stT_ini_step;L_predict_ini_01_step];
            pc_k_predict_01 = M_01(1,:) * [rp_stT_ini_step;L_predict_ini_01_step] + (pc_predict_ini_01_step - rp_stT_ini_step);
            L_k_predict_01 = M_01(2,:) * [rp_stT_ini_step;L_predict_ini_01_step];
            pc_predict_01 = [pc_predict_01; pc_k_predict_01];
            L_predict_01 = [L_predict_01; L_k_predict_01];
            
            M_02 = LIP_state_transition_matrix(T,g,H);
%             pc_k_predict_02 = M_02(1,:) * [pc_predict_ini_02_step-p_stT_ini_step;vc_predict_ini_02_step] + p_stT_ini_step;
%             vc_k_predict_02 = M_02(2,:) * [pc_predict_ini_02_step-p_stT_ini_step;vc_predict_ini_02_step];
            pc_k_predict_02 = M_02(1,:) * [rp_stT_ini_step;vc_predict_ini_02_step] + (pc_predict_ini_02_step - rp_stT_ini_step);
            vc_k_predict_02 = M_02(2,:) * [rp_stT_ini_step;vc_predict_ini_02_step];
            pc_predict_02 = [pc_predict_02; pc_k_predict_02];
            vc_predict_02 = [vc_predict_02; vc_k_predict_02];
            
        end
%         if Data_array.stanceLeg == -1
%             L_post_impact = L_predict(end) + m*cross(Data_array.rp_LT - Data_array.rp_RT, Data_array.v_com);
%         else
%             L_post_impact = L_predict(end) + m*cross(Data_array.rp_RT - Data_array.rp_LT, Data_array.v_com);
%         end
        L_post_impact = L_predict_01(end) + m*cross(Data_array.p_swT(:,impacts_in_periodic(j+1)) - Data_array.p_stT(:,impacts_in_periodic(j+1)), Data_array.v_com(:,impacts_in_periodic(j+1)));
        L_predict_01(end) = L_post_impact(2);
        start_pred_index = impacts_in_periodic(j+1);
    end
    pc_predict_01_steps{i} = pc_predict_01 - pc_ini;
    L_predict_01_steps{i} = L_predict_01;
    vc_predict_02_steps{i} = vc_predict_02;
    pc_predict_02_steps{i} = pc_predict_02 - pc_ini;
    L_actual_steps{i} = L_actual;
    vc_actual_steps{i} = vc_actual;
    pc_actual_steps{i} = pc_actual - pc_ini;
    T_steps{i} = t-t(1);
end

figure;
for i = 1 : num_steps
    subplot(2, num_steps,i)
    plot(T_steps{i}, L_actual_steps{i}/(m*H),'b')
    hold on;
    plot(T_steps{i}, vc_actual_steps{i},'r')
    plot(T_steps{i}, L_predict_01_steps{i}/(m*H),'b-.')
    plot(T_steps{i}, vc_predict_02_steps{i},'r-.')
    axis([0,1,velocity_steps(i) - 2,velocity_steps(i) + 2])
    title(['speed : ' num2str(velocity_steps(i))])
    legend('L actual', 'v actual', 'L ALIP', 'v LIP')
    
    subplot(2, num_steps,num_steps+i)
    plot(T_steps{i}, pc_actual_steps{i},'g')
    hold on;
%     plot(T_steps{i}, vc_actual_steps{i},'r')
    plot(T_steps{i}, pc_predict_01_steps{i},'b-.')
    plot(T_steps{i}, pc_predict_02_steps{i},'r-.')
    axis([0,1,pc_actual_steps{i}(1) - 2,pc_actual_steps{i}(1) + 2])
    legend('pos actual', 'pos ALIP', 'pos LIP')
end

