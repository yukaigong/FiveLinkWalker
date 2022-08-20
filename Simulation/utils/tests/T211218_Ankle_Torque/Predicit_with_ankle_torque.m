[Data_array,Time_array] = DataTS2DataArray(Data);
Time_array = Time_array';
% [GRF_array,Time_array] = DataTS2DataArray(Data);
impact_index = find(Data_array.LegSwitch == 1);
H = 0.6;
m = 32;
g = 9.81;
l = sqrt(g/H);
T = 0.3;

% start and ending time for speed -2, -1, -0.5, 0, 0.5, 1 ,2
num_steps = 1;
velocity_steps = [2];
periodic_start_time = [22];
periodic_end_time = 2+[22];


impact_time = Time_array(impact_index);

% record one step at each periodic period
steps_start_index = zeros(num_steps);
steps_end_index = zeros(num_steps);

L_steps = cell(num_steps);
vc_steps = cell(num_steps);
L_predict1_steps = cell(num_steps); % 1 is original method to predict ending value
L_predict2_steps = cell(num_steps);% 2 is predicting with Lc


t_steps = cell(num_steps);
t_remain_steps  = cell(num_steps);
for i = 1:length(periodic_start_time)
    impacts_in_periodic = impact_index(impact_time>periodic_start_time(i) & impact_time<periodic_end_time(i));
    steps_start_index(i) = impacts_in_periodic(1) + 5;
    steps_end_index(i) = impacts_in_periodic(2) - 5;
    indices = steps_start_index(i):steps_end_index(i);
    L_steps{i} = Data_array.l_stToe(indices);
    vc_steps{i} = Data_array.vx_com(indices);
    xc_steps{i} = Data_array.rp_stT(1,indices);
    ua_steps{i} = Data_array.u_ankle(indices);
    t_steps{i} = Time_array(indices);
    t_steps{i} = t_steps{i} -t_steps{i}(1);
    t_remain_steps{i} = T - t_steps{i};
    t_remain_steps{i}(t_remain_steps{i}<0) = 0; % Remain time can not be negative
    L_predict1_steps{i} = Data_array.dx0_next(indices)*m*H;
    L_predict2_steps{i} = Data_array.dx0_next_withLc(indices)*m*H;
end

% IC = [-0.15; 20];
prediction_ALIP = [];
prediction_LIP = [];
ua_relog = [];
for i = 1:length(t_steps{end}) - 1
    T = round(t_steps{end}(end),4)+10e-8;
    m = 32;
    t_span = t_steps{end}(i):0.0005:T;
    Lc_traj = [0;0];
    dLc_traj = [0;0];
    ua_traj = ua_steps{end};
    [t1,x1] = ode45(@(t,x)Angular_IP_general(t, x, T, m, Lc_traj, ua_traj), t_span, [xc_steps{end}(i), L_steps{end}(i)]);
    [t2,x2] = ode45(@(t,x)IP_general(t, x, T, m, dLc_traj,ua_traj), t_span, [xc_steps{end}(i), vc_steps{end}(i)]);
%     IP_general(t, x, T, m, dLc_traj,ua_traj)
    prediction_ALIP = [prediction_ALIP,x1(end,2)];
    prediction_LIP = [prediction_LIP,x2(end,2)];

end

f1 = figure;
set(gcf, 'Position',  [100, 100, 250, 200])
plot(t_steps{end},L_steps{end}/32/0.6,'LineWidth',2);
hold on; 
plot(t_steps{end}(1:end-1),prediction_ALIP/32/0.6,'-.','LineWidth',2);
hold off;
axis([0,0.3,0.8,2.5])
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$\frac{L}{mH}$} \textbf{(m/s)}','Interpreter','latex')
grid on


f2 = figure;
set(gcf, 'Position',  [100, 100, 250, 200])
plot(t_steps{end},vc_steps{end},'LineWidth',2);
hold on; 
plot( t_steps{end}(1:end-1),prediction_LIP,'-.', 'LineWidth',2);
hold off;
axis([0,0.3,0.8,2.5])
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$v_c$} \textbf{(m/s)}','Interpreter','latex')
grid on

saveas(f1,[root_dir '/PicsData/PD211217_TRO_modification/Pred_with_ua_ALIP.png'])
saveas(f2,[root_dir '/PicsData/PD211217_TRO_modification/Pred_with_ua_LIP.png'])

% f1 = figure;
% set(gcf, 'Position',  [100, 100, 250, 200])
% plot(t_steps{i},L_steps{i}/(m*H),'LineWidth',2);
% hold on
% plot(t_steps{i},L_predict1_steps{i}/(m*H),'-.','LineWidth',2);
% % plot(t_steps{i},L_predict2_steps{i}/(m*H),'LineWidth',2);
% grid on
% axis([0,0.3,0.8,2.5])
% xlabel('\textbf{Time (s)}','Interpreter','latex')
% ylabel('{\boldmath$\frac{L^y}{mH}$} \textbf{(m/s)}','Interpreter','latex')



% f1 = figure;
% set(gcf, 'Position',  [100, 100, 400, 300])
% plot(t1,x1(:,2),'LineWidth',2)
% hold on
% plot(t2,x2(:,2),'LineWidth',2)
% hold off
% grid on
% xlabel('\textbf{Time(s)}','Interpreter','latex')
% ylabel('\textbf{$L$ (m/s)}','Interpreter','latex')

% saveas(f1,[root_dir '/PicsData/PD211217_TRO_modification/VaryingHeight.png'])