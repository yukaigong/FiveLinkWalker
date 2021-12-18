load([root_dir '/PicsData/PD211217_TRO_modification/ALIP_data.mat'])

[Data_array,Time_array] = DataTS2DataArray(Data);
impact_index = find(Data_array.LegSwitch == 1);

% start and ending time for speed  0, 0.5, 1
num_steps = 1;
velocity_steps = [1];
periodic_start_time = [12];
periodic_end_time = 2+[12];
iter_time = 1/2000;

impact_time = Time_array(impact_index);

% record one step at each periodic period
steps_start_index = zeros(num_steps);
steps_end_index = zeros(num_steps);
L_steps = cell(num_steps);
xc_steps = cell(num_steps);
vc_steps = cell(num_steps);
Lc_steps = cell(num_steps);
dLc_steps = cell(num_steps);
t_steps = cell(num_steps);
stanceLeg_steps = cell(num_steps);
for i = 1:length(periodic_start_time)
    impacts_in_periodic = impact_index(impact_time>periodic_start_time(i) & impact_time<periodic_end_time(i));
%     steps_start_index(i) = impacts_in_periodic(1)- 0.1/iter_time;
%     steps_end_index(i) = impacts_in_periodic(2) + 0.1/iter_time;
    steps_start_index(i) = impacts_in_periodic(1);
    steps_end_index(i) = impacts_in_periodic(2);
    indices = steps_start_index(i):steps_end_index(i);
    L_steps{i} = Data_array.l_stToe(indices);
    xc_steps{i} = Data_array.rp_stT(1,indices);
    vc_steps{i} = Data_array.vx_com(indices);
    Lc_steps{i} = Data_array.lG(indices);
    dLc_steps{i} = gradient(Lc_steps{i},1/2000);
    t_steps{i} = Time_array(indices);
    t_steps{i} = t_steps{i} -Time_array(impacts_in_periodic(1));
    stanceLeg_steps{i} = Data_array.stanceLeg(indices);
end

%%
IC = [-0.15; 20];

T = 0.3;
m = 32;
t_span = 0:0.0005:T;
L_c_whole = Lc_steps{i};
[t1,x1] = ode45(@(t,x)Angular_IP(t, x, T, m, L_c_whole), t_span, IC);
L_c_whole = [0;0];
[t2,x2] = ode45(@(t,x)Angular_IP(t, x, T, m, L_c_whole), t_span, IC);

f1 = figure;
set(gcf, 'Position',  [100, 100, 400, 300])
plot(t1,x1(:,2),'LineWidth',2)
hold on
plot(t2,x2(:,2),'LineWidth',2)
hold off
grid on
xlabel('\textbf{Time(s)}','Interpreter','latex')
ylabel('\textbf{$L$ (m/s)}','Interpreter','latex')

saveas(f1,[root_dir '/PicsData/PD211217_TRO_modification/VaryingHeight.png'])





% for k = 1:length(t_steps{i})
% %     z = height - t_span.*(0.3-t_span)/0.15^2 * amplitude(i);
%     t_span = t_steps{i}(k):0.0005:T
%     [~,x] = ode45(@(t,x)Angular_IP(t, x, T, m, L_c_whole), t_span, IC);
%     subplot(1,2,1)
%     hold on;
%     plot(t,x{i}(:,1))
%     subplot(1,2,2)
%     hold on;
%     plot(t,x{i}(:,2))
% end

