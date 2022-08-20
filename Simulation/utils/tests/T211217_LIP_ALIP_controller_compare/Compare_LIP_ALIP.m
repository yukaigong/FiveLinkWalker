% load([root_dir '/PicsData/PD211217_TRO_modification/ALIP_data.mat'])
load([root_dir '/PicsData/PD211217_TRO_modification/LIP_data.mat'])

[Data_array,Time_array] = DataTS2DataArray(Data);
impact_index = find(Data_array.LegSwitch == 1);

% start and ending time for speed  0, 0.5, 1
num_steps = 1;
velocity_steps = [0];
periodic_start_time = [2];
periodic_end_time = 2+[2];
iter_time = 1/2000;

impact_time = Time_array(impact_index);

% record one step at each periodic period
steps_start_index = zeros(num_steps);
steps_end_index = zeros(num_steps);
L_steps = cell(num_steps);
vc_steps = cell(num_steps);
Lc_steps = cell(num_steps);
dLc_steps = cell(num_steps);
t_steps = cell(num_steps);
stanceLeg_steps = cell(num_steps);
for i = 1:length(periodic_start_time)
    impacts_in_periodic = impact_index(impact_time>periodic_start_time(i) & impact_time<periodic_end_time(i));
    steps_start_index(i) = impacts_in_periodic(1)- 0.1/iter_time;
    steps_end_index(i) = impacts_in_periodic(2) + 0.1/iter_time;
    indices = steps_start_index(i):steps_end_index(i);
    L_steps{i} = Data_array.l_stToe(indices);
    vc_steps{i} = Data_array.vx_com(indices);
    Lc_steps{i} = Data_array.lG(indices);
    dLc_steps{i} = gradient(Lc_steps{i},1/2000);
    t_steps{i} = Time_array(indices);
    t_steps{i} = t_steps{i} -Time_array(impacts_in_periodic(1));
    stanceLeg_steps{i} = Data_array.stanceLeg(indices);
end

f1 = figure;
set(gcf, 'Position',  [100, 100, 400, 200])
plot(t_steps{1}, L_steps{1}/(32*0.6),'LineWidth',2)
hold on
plot(t_steps{1}, vc_steps{1},'LineWidth',2)
mean_vp = mean(L_steps{1}/(32*0.6));
axis([-0.1,0.4,-0.2,0.4])
plot(t_steps{1}, 100*stanceLeg_steps{1},'g-.','LineWidth',2)
set(gca,'XTick',[0,0.3]);
set(gca,'YTick',ylim_lb:0.1:ylim_ub);
grid on
hold off
legend({'{\boldmath $\frac{1}{mH}L^y$}','{\boldmath $v_c$}'},'Interpreter','latex')
xlabel('\textbf{Time(s)}','Interpreter','latex')
ylabel('\textbf{(m/s)}','Interpreter','latex')

% saveas(f1,[root_dir '/PicsData/PD211217_TRO_modification/ALIP_control.png'])
% saveas(f1,[root_dir '/PicsData/PD211217_TRO_modification/LIP_control.png'])

