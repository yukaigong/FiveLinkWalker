[Data_array,Time_array] = DataTS2DataArray(Data);
% [GRF_array,Time_array] = DataTS2DataArray(Data);
impact_index = find(Data_array.LegSwitch == 1);


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
Lc_steps = cell(num_steps);
dLc_steps = cell(num_steps);
t_steps = cell(num_steps);
for i = 1:length(periodic_start_time)
    impacts_in_periodic = impact_index(impact_time>periodic_start_time(i) & impact_time<periodic_end_time(i));
    steps_start_index(i) = impacts_in_periodic(1);
    steps_end_index(i) = impacts_in_periodic(2) - 5;
    indices = steps_start_index(i):steps_end_index(i);
    L_steps{i} = Data_array.l_stToe(indices);
    vc_steps{i} = Data_array.vx_com(indices);
    Lc_steps{i} = Data_array.lG(indices);
    dLc_steps{i} = gradient(Lc_steps{i},1/2000);
    t_steps{i} = Time_array(indices);
    t_steps{i} = t_steps{i} -t_steps{i}(1);
%     dLc_steps{i} = 
end
%%
% L and vc
f1 = figure;
for i = 1:num_steps  
    set(gcf, 'Position',  [100, 100, 1000, 200])
    subplot(1,num_steps,i)
    plot(t_steps{i}, L_steps{i}/(32*0.6),'LineWidth',2)    
    hold on
    plot(t_steps{i}, vc_steps{i},'LineWidth',2)
    xlim([0,0.3])
    grid on
    set(gca,'XTick',[0,0.1,0.2,0.3]);
%     xlabel('t')
end
% tightfig;

% Lc
f2 = figure;
for i = 1:num_steps  
    set(gcf, 'Position',  [100, 100, 1000, 200])
    subplot(1,num_steps,i)
    plot(t_steps{i}, Lc_steps{i},'LineWidth',2)    
    xlim([0,0.3])
    grid on
    set(gca,'XTick',[0,0.1,0.2,0.3]);
end
% tightfig;
% dLc
f3 = figure;
for i = 1:num_steps  
    set(gcf, 'Position',  [100, 100, 1000, 200])
    subplot(1,num_steps,i)
    plot(t_steps{i}, dLc_steps{i},'LineWidth',2)    
    axis([0,0.3,-200,200])
    grid on
    set(gca,'YTick',[-200,0,200]);
    set(gca,'XTick',[0,0.1,0.2,0.3]);
%     set(gca,'XTickLabel',time);
end
% tightfig;
% saveas(f1,[root_dir '/PicsData/PD210412_paper/L_vc_FLW.png'])
% saveas(f2,[root_dir '/PicsData/PD210412_paper/Lc_FLW.png'])
% saveas(f3,[root_dir '/PicsData/PD210412_paper/dLc_FLW.png'])

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
    