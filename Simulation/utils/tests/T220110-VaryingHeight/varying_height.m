% load([root_dir '/PicsData/PD211217_TRO_modification/VaryingHeight_Data.mat'])

[Data_array,Time_array] = DataTS2DataArray(Data);
impact_index = find(Data_array.LegSwitch == 1);

% start and ending time for speed  0, 0.5, 1
num_steps = 1;
velocity_steps = [1];
periodic_start_time = [23];
periodic_end_time = 1+[23];
iter_time = 1/2000;

impact_time = Time_array(impact_index);

% record one step at each periodic period
steps_start_index = zeros(num_steps);
steps_end_index = zeros(num_steps);
L_steps = cell(num_steps);
xc_steps = cell(num_steps);
vc_steps = cell(num_steps);
zc_steps = cell(num_steps);
dzc_steps = cell(num_steps);
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
    indices = steps_start_index(i):steps_end_index(i)-3;
%     indices = steps_start_index(i):steps_start_index(i)+0.3*2000;
    L_steps{i} = Data_array.l_stToe(indices);
    xc_steps{i} = Data_array.rp_stT(1,indices);
    vc_steps{i} = Data_array.vx_com(indices);
    zc_steps{i} = Data_array.rp_stT(3,indices);
    dzc_steps{i} = Data_array.vz_com(indices);
    Lc_steps{i} = Data_array.lG(indices);
    dLc_steps{i} = gradient(Lc_steps{i},1/2000);
    t_steps{i} = Time_array(indices);
    t_steps{i} = t_steps{i} -Time_array(impacts_in_periodic(1));
    stanceLeg_steps{i} = Data_array.stanceLeg(indices);
    
    L_pred = [];
    for j = 1:1:length(L_steps{i})-1
        m = 32;
        IC = [xc_steps{i}(j); L_steps{i}(j)];
        t_span = t_steps{i}(j:end);
%         [T,X] = ode45(@(t,x)Angular_IP_varyingZ(t, x, t_steps{i}(end), m, Lc_steps{i}, zc_steps{i}, dzc_steps{i}), t_span, IC);
        [T,X] = ode45(@(t,x)Angular_IP_varyingZ(t, x, t_steps{i}(end), m, [0;0], zc_steps{i}, dzc_steps{i}), t_span, IC);
        L_pred = [L_pred X(end,2)];
    end
end

%%


f1 = figure;
set(gcf, 'Position',  [100, 100, 250, 200])

plot(t_steps{i}(1:end),L_steps{i}(1:end)/(32*0.6),'LineWidth',2)

hold on
plot(t_steps{i}(1:end-1),L_pred(1:end)/(32*0.6),'-.', 'LineWidth',2)
hold off
grid on
axis([0,0.3,0.8,2.5])
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$\frac{L}{mH}$} \textbf{(m/s)}','Interpreter','latex')
% 
saveas(f1,[root_dir '/PicsData/PD211217_TRO_modification/VaryingHeight.png'])







