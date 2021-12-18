% load([root_dir '/PicsData/PD211217_TRO_modification/ALIP_data_ini_vel.mat'])
% load([root_dir '/PicsData/PD211217_TRO_modification/LIP_data_ini_vel.mat'])

[Data_array,Time_array] = DataTS2DataArray(Data);
impact_index = find(Data_array.LegSwitch == 1);

% start and ending time for speed  0, 0.5, 1
start_time = 0;
end_time = 3;
iter_time = 1/2000;

impact_time = Time_array(impact_index);

% record one step at each periodic period



steps_start_index = 2000*start_time+1;
steps_end_index = 2000*end_time;
indices = steps_start_index:steps_end_index;
L_steps = Data_array.l_stToe(indices);
vc_steps = Data_array.vx_com(indices);
Lc_steps = Data_array.lG(indices);
dLc_steps = gradient(Lc_steps,1/2000);
t_steps = Time_array(indices);
stanceLeg_steps = Data_array.stanceLeg(indices);


f1 = figure;
set(gcf, 'Position',  [100, 100, 400, 200])
plot(t_steps, L_steps/(32*0.6),'LineWidth',2)
hold on
plot(t_steps, vc_steps,'LineWidth',2)
mean_vp = mean(L_steps/(32*0.6));
axis([start_time,end_time,-0.5,1.5])
plot(t_steps, 100*stanceLeg_steps,'g-.','LineWidth',2)
% set(gca,'XTick',0:0.2:2);
% set(gca,'YTick',-0.2:0.1:0.8);
grid on
hold off
legend({'{\boldmath $\frac{1}{mH}L^y$}','{\boldmath $v_c$}'},'Interpreter','latex')
xlabel('\textbf{Time(s)}','Interpreter','latex')
ylabel('\textbf{(m/s)}','Interpreter','latex')

% saveas(f1,[root_dir '/PicsData/PD211217_TRO_modification/ALIP_control_ini_vel.png'])
% saveas(f1,[root_dir '/PicsData/PD211217_TRO_modification/LIP_control_ini_vel.png'])