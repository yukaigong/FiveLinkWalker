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
L_predict1_steps = cell(num_steps); % 1 is use initial value to predict whole step
vc_predict1_steps = cell(num_steps);
L_predict2_steps = cell(num_steps);% 2 is use every moment value to predict step end
vc_predict2_steps = cell(num_steps);

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
    L_predict1_steps{i} = m*H*l*sinh(l*t_remain_steps{i}).*xc_steps{i} + cosh(l*t_remain_steps{i}).*L_steps{i};
    vc_predict1_steps{i} = l*sinh(l*t_remain_steps{i}).*xc_steps{i} + cosh(l*t_remain_steps{i}).*vc_steps{i};
%     L_predict2_steps{i} = Data_array.dx0_next(indices)*m*H;
%     vc_predict2_steps{i} = Data_array.vx0_next(indices);
%     dLc_steps{i} = 
    L_ini = Data_array.l_stToe(steps_start_index(i));
    vc_ini = Data_array.vx_com(steps_start_index(i));
    xc_ini = Data_array.rp_stT(1,steps_start_index(i));
    L_predict2_steps{i} = m*H*l*sinh(l*t_steps{i})*xc_ini + cosh(l*t_steps{i})*L_ini;
    vc_predict2_steps{i} = l*sinh(l*t_steps{i})*xc_ini + cosh(l*t_steps{i})*vc_ini;
end

% tightfig;
% saveas(f1,[root_dir '/PicsData/PD210412_paper/L_vc_FLW.png'])
% saveas(f2,[root_dir '/PicsData/PD210412_paper/Lc_FLW.png'])
% saveas(f3,[root_dir '/PicsData/PD210412_paper/dLc_FLW.png'])


%%
f1 = figure;
set(gcf, 'Position',  [100, 100, 250, 200])
plot(t_steps{i},L_steps{i}/(m*H),'LineWidth',2);
hold on
plot(t_steps{i},L_predict1_steps{i}/(m*H),'-.','LineWidth',2);
% plot(t_steps{i},L_predict2_steps{i}/(m*H),'LineWidth',2);
grid on
axis([0,0.3,0.8,2.5])
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$\frac{L}{mH}$} \textbf{(m/s)}','Interpreter','latex')

f2 = figure;
set(gcf, 'Position',  [100, 100, 250, 200])
plot(t_steps{i},vc_steps{i},'LineWidth',2);
hold on
plot(t_steps{i},vc_predict1_steps{i},'-.','LineWidth',2);
% plot(t_steps{i},vc_predict2_steps{i},'LineWidth',2);
grid on
axis([0,0.3,0.8,2.5])
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$v_{\rm c}$} \textbf{(m/s)}','Interpreter','latex')

% saveas(f1,[root_dir '/PicsData/PD210412_paper/L_predict_FLW.png'])
% saveas(f2,[root_dir '/PicsData/PD210412_paper/vc_predict_FLW.png'])

pd_dir_2 = 'D:\Dropbox (DynamicLegLocomotion)\MyManuscript\Paper\2022_ASME\tiff\MATLAB\';
print(f1,[pd_dir_2, 'L_predict_FLW.tif'],'-dtiff','-r1000')
print(f2,[pd_dir_2, 'vc_predict_FLW.tif'],'-dtiff','-r1000')

%%

f3 = figure;
set(gcf, 'Position',  [100, 100, 300, 250])
plot(t_steps{1},L_steps{1}/(m*H),'LineWidth',2);
hold on
plot(t_steps{1},L_predict1_steps{1}/(m*H),'LineWidth',2);
plot(t_steps{1},L_predict2_steps{1}/(m*H),'LineWidth',2);
grid on
xlabel('\textbf{Time (s)}','Interpreter','latex','FontSize',12)
ylabel('{\boldmath$\frac{L^y}{mH}$} \textbf{(m/s)}','Interpreter','latex','FontSize',12)