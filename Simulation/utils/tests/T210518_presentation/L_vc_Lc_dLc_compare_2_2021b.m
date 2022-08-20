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
    set(gcf, 'Position',  [100, 100, 1100, 120])
    subplot(1,num_steps,i)
    plot(t_steps{i}, L_steps{i}/(32*0.6),'LineWidth',2)    
    hold on
    plot(t_steps{i}, vc_steps{i},'LineWidth',2)
%     xlim([-0.1,0.4])
%     grid on
    mean_vp = mean(L_steps{i}/(32*0.6));
    ylim_lb = mean_vp - 0.4;
    ylim_lb = ylim_lb - rem(ylim_lb,0.1); %floor it to a.b, where b is an even number
    ylim_ub = ylim_lb+1.2;
    axis([-0.1,0.4,ylim_lb,ylim_lb+0.8])
%     axis([-0.1,0.4,ylim])
%     axis([-0.1,0.4,-2,2])
    plot(t_steps{i}, 100*stanceLeg_steps{i},'g-.','LineWidth',2)
    set(gca,'XTick',[0,0.3]);
    set(gca,'YTick',ylim_lb:0.2:ylim_ub);
    grid on
    
%     xlabel('t')
end
% tightfig;


f2 = figure;
for i = 1:num_steps  
    set(gcf, 'Position',  [100, 100, 1100, 120])
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
% tightfig;
% dLc
f3 = figure;
for i = 1:num_steps  
    set(gcf, 'Position',  [100, 100, 1100, 120])
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

% exportgraphics(f1,[root_dir '/PicsData/PD210412_paper/L_vc_FLW_2_2021a.png'])
% exportgraphics(f2,[root_dir '/PicsData/PD210412_paper/Lc_FLW_2_2021a.png'])
% exportgraphics(f3,[root_dir '/PicsData/PD210412_paper/dLc_FLW_2_2021a.png'])
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
% set(gcf, 'Position',  [100, 100, 1000, 120])
set(gcf, 'Position',  [100, 100, 400, 300])
% plot(t_steps{i}, L_steps{i}/(32*0.6),'LineWidth',2)
hold on
plot(t_steps{i}, vc_steps{i},'LineWidth',2)
axis([-0.1,0.4,1.2,2.1])
plot(t_steps{i}, 100*stanceLeg_steps{i},'g-.','LineWidth',2)
set(gca,'XTick',[0,0.3]);
set(gca,'YTick',[1.2:0.3:2.1]);
grid on
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$v$ $(m/s)$}','Interpreter','latex')
% ylabel('{\boldmath$\frac{L}{mH},v_{\rm c}^x$ $(m/s)$}','Interpreter','latex')
% ylabel('{\boldmath$L^y$} \textbf{(kg-${\rm \textbf{m}}^{\boldmath2}$/s)}','Interpreter','latex')


f2 = figure;
% set(gcf, 'Position',  [100, 100, 1000, 120])
set(gcf, 'Position',  [100, 100, 400, 300])
plot(t_steps{i}, L_steps{i}/(32*0.6),'LineWidth',2)
hold on
% plot(t_steps{i}, vc_steps{i},'LineWidth',2)
axis([-0.1,0.4,1.2,2.1])
plot(t_steps{i}, 100*stanceLeg_steps{i},'g-.','LineWidth',2)
set(gca,'XTick',[0,0.3]);
set(gca,'YTick',[1.2:0.3:2.1]);
grid on
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$\frac{L}{mH}$ $(m/s)$}','Interpreter','latex')
% ylabel('{\boldmath$L^y$} \textbf{(kg-${\rm \textbf{m}}^{\boldmath2}$/s)}','Interpreter','latex')

% Lc
f3 = figure;
set(gcf, 'Position',  [100, 100, 300, 200])
plot(t_steps{i}, Lc_steps{i}/(32*0.6),'LineWidth',2)
hold on
grid on
axis([-0.1,0.4,-0.4,0.8])
plot(t_steps{i}, 100*stanceLeg_steps{i},'g-.','LineWidth',2)
set(gca,'XTick',[0,0.3]);
set(gca,'YTick',[-0.4:0.4:0.8]);
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$\frac{L_c}{mH}$ $(m/s)$}','Interpreter','latex')

f4 = figure;
set(gcf, 'Position',  [100, 100, 300, 200])
plot(t_steps{i}, dLc_steps{i}/(32*0.6),'LineWidth',2)
hold on
grid on
axis([-0.1,0.4,-10,10])
plot(t_steps{i}, 1000*stanceLeg_steps{i},'g-.','LineWidth',2)
set(gca,'XTick',[0,0.3]);
set(gca,'YTick',[-10:5:10]);
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$\frac{\dot{L}_c}{mH}$ $(m/s^2)$}','Interpreter','latex')

% saveas(f1,[root_dir '/PicsData/PD210518_presentation/vc_FLW_2m.png'])
% saveas(f2,[root_dir '/PicsData/PD210518_presentation/L_FLW_2m.png'])
% saveas(f3,[root_dir '/PicsData/PD210518_presentation/Lc_FLW_2m.png'])
% saveas(f4,[root_dir '/PicsData/PD210518_presentation/dLc_FLW_2m.png'])

    