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
num_steps = 7;
velocity_steps = [-2,-1,-0.5,0,0.5,1,2];
periodic_start_time = [47,37,32,2,7,12,22];
periodic_end_time = 2+[47,37,32,2,7,12,22];

% num_steps = 4;
% velocity_steps = [0,0.5,1,2];
% periodic_start_time = [2,7,12,22];
% periodic_end_time = 2+[2,7,12,22];


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
    t_steps{i} = Time_array(indices);
    t_steps{i} = t_steps{i} -t_steps{i}(1);
    t_remain_steps{i} = T - t_steps{i};
    t_remain_steps{i}(t_remain_steps{i}<0) = 0; % Remain time can not be negative
    L_predict1_steps{i} = Data_array.dx0_next(indices)*m*H;
    L_predict2_steps{i} = Data_array.dx0_next_withLc(indices)*m*H;
end

% tightfig;
% saveas(f1,[root_dir '/PicsData/PD210412_paper/L_vc_FLW.png'])
% saveas(f2,[root_dir '/PicsData/PD210412_paper/Lc_FLW.png'])
% saveas(f3,[root_dir '/PicsData/PD210412_paper/dLc_FLW.png'])


%%
f1 = figure;
for i = 1:num_steps  
    set(gcf, 'Position',  [100, 100, 1200, 200])
    subplot(1,num_steps,i)
    plot(t_steps{i}, L_steps{i}/(m*H),'LineWidth',2)    
    hold on
    plot(t_steps{i}, L_predict1_steps{i}/(m*H),'LineWidth',2)
    plot(t_steps{i}, L_predict2_steps{i}/(m*H),'LineWidth',2)
    xlim([0,0.3])
    grid on
end

f2 = figure;
set(gcf, 'Position',  [100, 100, 400, 300])
plot(Time_array,Data_array.l_stToe/(m*H),'LineWidth',2)
hold on
plot(Time_array,Data_array.dx0_next,'LineWidth',2)
plot(Time_array,Data_array.dx0_next_withLc,'LineWidth',2)
plot(Time_array,Data_array.vx_com)
grid on
axis([26,29,0.4,2])

% saveas(f1,[root_dir '/PicsData/PD210412_paper/Predict_with_Lc.png'])
% saveas(f2,[root_dir '/PicsData/PD210412_paper/Predict_with_Lc_changing_speed.png'])
% saveas(f1,'L_Predict_FLW.png')
% saveas(f2,'Vc_predict_FLW.png')