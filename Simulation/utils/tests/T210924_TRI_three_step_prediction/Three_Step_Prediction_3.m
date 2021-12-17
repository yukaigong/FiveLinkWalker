% load('D:\Dropbox (DynamicLegLocomotion)\Robots\codes\SimpleModels\FiveLinkWalker\Simulation\PicsData\PD210412_paper\sim_data.mat')

[Data_array,Time_array] = DataTS2DataArray(Data);
impact_index = find(Data_array.LegSwitch == 1);
impact_time = Time_array(impact_index);

num_steps = 72;
velocity_set = [-2,-1,-0.5,0,0.5,1,2];
periodic_start_time_set = [47,37,32,2,7,12,22];
periodic_end_time_set = 2+[47,37,32,2,7,12,22];
which_set = 1;
periodic_start_time = periodic_start_time_set(which_set);
periodic_end_time = periodic_end_time_set(which_set);
velocity = velocity_set(which_set);
steps_start_index = zeros(num_steps);
steps_end_index = zeros(num_steps);
% L_actual_steps = cell(num_steps);
% vc_actual_steps = cell(num_steps);
% pc_actual_steps = cell(num_steps);
L_predict_01_sets = cell(num_steps);
pc_predict_01_sets = cell(num_steps);
vc_predict_02_sets = cell(num_steps);
pc_predict_02_sets = cell(num_steps);
stanceLeg_steps = cell(num_steps);

g = 9.81;
H = 0.6;
m = 32;

impacts_in_periodic = impact_index(impact_time>periodic_start_time & impact_time<periodic_end_time);
first_step_iterations = impacts_in_periodic(2) - impacts_in_periodic(1);
prediction_interval = 10;
prediction_num = floor(first_step_iterations/prediction_interval); % Make predictions in the first step every # iterations;
L_predict_01_sets = cell(prediction_num);
pc_predict_01_sets = cell(prediction_num);
vc_predict_02_sets = cell(prediction_num);
pc_predict_02_sets = cell(prediction_num);
T_sets = cell(prediction_num);
% stanceLeg_steps = cell(num_steps);

% Information we have: pos, vel and L at the beginning of first step. Foot
% placement and vertical velocity at the end of each step.
% 01 for ALIP, 02 for LIP
predict_horizon = 3;
L_actual = Data_array.l_stToe(impacts_in_periodic(1):impacts_in_periodic(predict_horizon+1));
pc_actual = Data_array.px_com(impacts_in_periodic(1):impacts_in_periodic(predict_horizon+1));
vc_actual = Data_array.vx_com(impacts_in_periodic(1):impacts_in_periodic(predict_horizon+1));
T_actual = Time_array(impacts_in_periodic(1):impacts_in_periodic(predict_horizon+1));
t_ini = T_actual(1);

for i = 1:prediction_num
    start_pred_index = impacts_in_periodic(1)+10*i;
    pc_ini = Data_array.px_com(start_pred_index);
    vc_ini = Data_array.vx_com(start_pred_index);
    L_ini = Data_array.l_stToe(start_pred_index);
    L_predict_01 = [L_ini]; 
    pc_predict_01 = [pc_ini];
    vc_predict_02 = [vc_ini];
    pc_predict_02 = [pc_ini];

    t = Time_array(start_pred_index:impacts_in_periodic(predict_horizon+1));
    for j = 1:predict_horizon
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
pred_rp_st_at_impact = pc_k_predict_01(end)-(pc_predict_ini_01_step - rp_stT_ini_step);
        L_post_impact = L_predict_01(end) + m*cross(Data_array.rp_stT(:,impacts_in_periodic(j+1)) - [pred_rp_st_at_impact;0;H], Data_array.v_com(:,impacts_in_periodic(j+1)));

%         L_post_impact = L_predict_01(end) + m*cross(Data_array.p_swT(:,impacts_in_periodic(j+1)) - Data_array.p_stT(:,impacts_in_periodic(j+1)), Data_array.v_com(:,impacts_in_periodic(j+1)));
        L_predict_01(end) = L_post_impact(2);
        start_pred_index = impacts_in_periodic(j+1);
    end
    pc_predict_01_sets{i} = pc_predict_01 - pc_ini;
    L_predict_01_sets{i} = L_predict_01;
    vc_predict_02_sets{i} = vc_predict_02;
    pc_predict_02_sets{i} = pc_predict_02 - pc_ini;

    T_sets{i} = t-t_ini;
end
%%
figure;
plot(T_actual-t_ini, L_actual/(m*H),'b')
hold on;
plot(T_actual-t_ini,vc_actual,'r')
p_ALIP_pred = plot(T_actual(1),L_actual(1)/(m*H),'b-.')
p_LIP_pred = plot(T_actual(1),vc_actual(1),'r-.')
p_ALIP_pred_point = scatter(T_actual(1),L_actual(1)/(m*H),'b','filled');
p_LIP_pred_point = scatter(T_actual(1),vc_actual(1),'r','filled');

% For video
F = [];

for i = 1:prediction_num
    p_ALIP_pred.XData = T_sets{i};
    p_LIP_pred.XData = T_sets{i};    
    p_ALIP_pred.YData = L_predict_01_sets{i}/(m*H);
    p_LIP_pred.YData = vc_predict_02_sets{i};
    
    p_ALIP_pred_point.XData = T_sets{i}(1);
    p_LIP_pred_point.XData = T_sets{i}(1);    
    p_ALIP_pred_point.YData = L_predict_01_sets{i}(1)/(m*H);
    p_LIP_pred_point.YData = vc_predict_02_sets{i}(1);    
    
    
    axis([T_actual(1)-t_ini, T_actual(end)-t_ini, velocity-floor(abs(velocity)/2),velocity+floor(abs(velocity)/2)])
    drawnow;
    F = [F getframe(gcf)];
    pause(0.1);
end
%%
% create the video writer  (3 sec)
writerObj = VideoWriter([root_dir '\PicsData\PD210929_TRI\speed_' num2str(velocity) '_horizon_' num2str(predict_horizon) '.mp4'],'MPEG-4');
writerObj.FrameRate = prediction_num/3;
% set the seconds per image
% open the video writer
open(writerObj);
% write the frames to the video
for i=1:length(F)
    % convert the image to a frame
    frame = F(i) ;
    writeVideo(writerObj, frame);
end
% close the writer object
close(writerObj);

% figure;
% for i = 1 : num_steps
%     subplot(2, num_steps,i)
%     plot(T_steps{i}, L_actual_steps{i}/(m*H),'b')
%     hold on;
%     plot(T_steps{i}, vc_actual_steps{i},'r')
%     plot(T_steps{i}, L_predict_01_steps{i}/(m*H),'b-.')
%     plot(T_steps{i}, vc_predict_02_steps{i},'r-.')
%     axis([0,1,velocity_steps(i) - 2,velocity_steps(i) + 2])
%     title(['speed : ' num2str(velocity_steps(i))])
%     legend('L actual', 'v actual', 'L ALIP', 'v LIP')
%     
%     subplot(2, num_steps,num_steps+i)
%     plot(T_steps{i}, pc_actual_steps{i},'g')
%     hold on;
% %     plot(T_steps{i}, vc_actual_steps{i},'r')
%     plot(T_steps{i}, pc_predict_01_steps{i},'b-.')
%     plot(T_steps{i}, pc_predict_02_steps{i},'r-.')
%     axis([0,1,pc_actual_steps{i}(1) - 2,pc_actual_steps{i}(1) + 2])
%     legend('pos actual', 'pos ALIP', 'pos LIP')
% end

