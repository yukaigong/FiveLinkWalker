[Data_array,Time_array] = DataTS2DataArray(Data);
% [GRF_array,Time_array] = DataTS2DataArray(Data);
impact_index = find(Data_array.LegSwitch == 1);


% start and ending time for speed -2, -1, -0.5, 0, 0.5, 1 ,2
num_steps = 7;
velocity_steps = [-2,-1,-0.5,0,0.5,1,2];
periodic_start_time = [47,37,32,2,7,12,22];
periodic_end_time = 2+[47,37,32,2,7,12,22];
iter_time = 1/2000;
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
%     dLc_steps{i} = 
end
%%
% L and vc
f1 = figure;
for i = 1:num_steps  
    v_avg = mean(vc_steps{i});
    
%     set(gcf, 'Position',  [100, 100, 1000, 120])
    set(gcf, 'Position',  [100, 100, 1000, 120])
    subplot(1,num_steps,i)
    plot(t_steps{i}, L_steps{i}/(32*0.6),'LineWidth',2)    
    hold on
    plot(t_steps{i}, vc_steps{i},'LineWidth',2)
%     xlim([-0.1,0.4])
%     grid on
    mean_vp = mean(L_steps{i}/(32*0.6));
    ylim_lb = mean_vp - 0.6;
    ylim_lb = ylim_lb - rem(ylim_lb,0.1); %floor it to a.b, where b is an even number
    ylim_ub = ylim_lb+1.2;
    axis([-0.1,0.4,ylim_lb,ylim_lb+1.2])
%     axis([-0.1,0.4,ylim])
%     axis([-0.1,0.4,-2,2])
    plot(t_steps{i}, 100*stanceLeg_steps{i},'g-.','LineWidth',2)
    set(gca,'XTick',[0,0.3]);
    set(gca,'YTick',ylim_lb:0.4:ylim_ub);
    grid on;
    titleText = [' v_{avg} = ',num2str(v_avg,'%.1f'), 'm/s'];
    title(titleText,'Interpreter','tex' );

%     xlabel('t')
end
tightfig;

% Lc
f2 = figure;
for i = 1:num_steps  
    set(gcf, 'Position',  [100, 100, 1000, 120])
    subplot(1,num_steps,i)
    plot(t_steps{i}, Lc_steps{i}/(32*0.6),'LineWidth',2)    
    hold on
%     xlim([0,0.3])
    grid on
%     axis([-0.1,0.4,ylim])
    axis([-0.1,0.4,-0.5,0.7])
    plot(t_steps{i}, 100*stanceLeg_steps{i},'g-.','LineWidth',2)
    set(gca,'XTick',[0,0.3]);
%     set(gca,'YTick',[-0.5,-0.2,-0.10.7]);
end
tightfig;
% dLc
f3 = figure;
for i = 1:num_steps  
    set(gcf, 'Position',  [100, 100, 1000, 120])
    subplot(1,num_steps,i)
    plot(t_steps{i}, dLc_steps{i}/(32*0.6),'LineWidth',2)    
    hold on
    grid on
    
    axis([-0.1,0.4,-10,10])
%     axis([xlim,ylim])
    plot(t_steps{i}, 1000*stanceLeg_steps{i},'g-.','LineWidth',2)
    set(gca,'XTick',[0,0.3]);
    set(gca,'YTick',[-10:5:10]);
%     set(gca,'XTickLabel',time);
end
tightfig;


% saveas(f1,[root_dir '/PicsData/PD210412_paper/L_vc_FLW_2.png'])
% saveas(f2,[root_dir '/PicsData/PD210412_paper/Lc_FLW_2.png'])
% saveas(f3,[root_dir '/PicsData/PD210412_paper/dLc_FLW_2.png'])

% savefig(f1,[root_dir '/PicsData/PD210412_paper/L_vc_FLW.fig'])
% savefig(f2,[root_dir '/PicsData/PD210412_paper/Lc_FLW.fig'])
% savefig(f3,[root_dir '/PicsData/PD210412_paper/dLc_FLW.fig'])

% pd_dir_2 = 'D:\Dropbox (DynamicLegLocomotion)\MyManuscript\Paper\2022_ASME\tiff\MATLAB\';
% print(f1,[pd_dir_2, 'L_vc_FLW.tif'],'-dtiff','-r1000')
% print(f2,[pd_dir_2, 'Lc_FLW.tif'],'-dtiff','-r1000')
% print(f3,[pd_dir_2, 'dLc_FLW.tif'],'-dtiff','-r1000')
%%
figure;
for i = 1:num_steps
    subplot(num_steps,3,1+3*(i-1))
    plot(t_steps{i}, L_steps{i}/(32*0.6))    
    hold on
    plot(t_steps{i}, vc_steps{i},'LineWidth',2)
%     axis([0,0.3,velocity_steps(i) - 0.5, velocity_steps(i) + 0.5])
    xlim([0,0.3])
    grid on
    xlabel('t')
    
    
    subplot(num_steps,3,2+3*(i-1))
    plot(t_steps{i}, Lc_steps{i},'LineWidth',2)   
%     axis([0,0.3,min(Lc_steps{i}) - 5, max(Lc_steps{i}) + 5])
    xlim([0,0.3])
    grid on
    xlabel('t')
    
    subplot(num_steps,3,3+3*(i-1))
    plot(t_steps{i}, dLc_steps{i},'LineWidth',2)
%     axis([0,0.3,min(dLc_steps{i}) - 50, max(dLc_steps{i}) + 50])
    axis([0,0.3,-300,150])
    grid on
    xlabel('t')
end
% figure;
% hold on
% for i = 1:num_steps
%     plot(t_steps{i}, L_steps{i})
% end
% 
% figure;
% hold on
% for i = 1:num_steps
%     plot(t_steps{i}, vc_steps{i})
% end

%% Only 2m/s

f1 = figure;
set(gcf, 'Position',  [100, 100, 300, 200])
plot(t_steps{i}, L_steps{i}/(32*0.6),'LineWidth',2)
hold on
plot(t_steps{i}, vc_steps{i},'LineWidth',2)
axis([-0.1,0.4,1.3,2.1])
plot(t_steps{i}, 100*stanceLeg_steps{i},'g-.','LineWidth',2)
set(gca,'XTick',[0,0.3]);
grid on
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$\frac{L}{mH},v_{\rm c}$ $(m/s)$}','Interpreter','latex')

% Lc
f2 = figure;
set(gcf, 'Position',  [100, 100, 300, 200])
plot(t_steps{i}, Lc_steps{i}/(32*0.6),'LineWidth',2)
hold on
grid on
axis([-0.1,0.4,-0.5,0.7])
plot(t_steps{i}, 100*stanceLeg_steps{i},'g-.','LineWidth',2)
set(gca,'XTick',[0,0.3]);
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$\frac{L_c}{mH}$ $(m/s)$}','Interpreter','latex')

f3 = figure;
set(gcf, 'Position',  [100, 100, 300, 200])
plot(t_steps{i}, dLc_steps{i}/(32*0.6),'LineWidth',2)
hold on
grid on

axis([-0.1,0.4,-10,10])
plot(t_steps{i}, 1000*stanceLeg_steps{i},'g-.','LineWidth',2)
set(gca,'XTick',[0,0.3]);
set(gca,'YTick',[-10,0,10]);
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$\frac{\dot{L}_c}{mH}$ $(m/s^2)$}','Interpreter','latex')

% savefig(f1,[root_dir '/PicsData/PD210412_paper/L_vc_FLW.png'])
% savefig(f2,[root_dir '/PicsData/PD210412_paper/Lc_FLW.png'])
% savefig(f3,[root_dir '/PicsData/PD210412_paper/dLc_FLW.png'])

% saveas(f1,[root_dir '/PicsData/PD210412_paper/L_vc_FLW_2m.png'])
% saveas(f2,[root_dir '/PicsData/PD210412_paper/Lc_FLW_2m.png'])
% saveas(f3,[root_dir '/PicsData/PD210412_paper/dLc_FLW_2m.png'])

pd_dir_2 = 'D:\Dropbox (DynamicLegLocomotion)\MyManuscript\Paper\2022_ASME\tiff\MATLAB\';
print(f1,[pd_dir_2, 'L_vc_FLW_2m.tif'],'-dtiff','-r1000')
print(f2,[pd_dir_2, 'Lc_FLW_2m.tif'],'-dtiff','-r1000')
print(f3,[pd_dir_2, 'dLc_FLW_2m.tif'],'-dtiff','-r1000')
    