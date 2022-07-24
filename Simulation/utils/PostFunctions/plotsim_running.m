figure;
plot(Data.hr)
hold on
plot(Data.h0)
plot(Data.stanceLeg,'g--')
legend('hr1','hr2','hr3','hr4','h01','h02','h03','h04')
hold off

figure;
plot(Data.dhr)
hold on
plot(Data.dh0)
plot(Data.stanceLeg,'g--')
legend('dhr1','dhr2','dhr3','dhr4','dh01','dh02','dh03','dh04')
hold off

%% L and v
f1 = figure;
ax1 = gca;
set(gcf, 'Position',  [100, 100, 1000, 300])
plot(Data.l_stToe/(32*0.5),'LineWidth',2)
hold on
plot(100*Data.stanceLeg,'g-.','LineWidth',2)
grid on
title('')
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$\frac{L^y}{mH}$} \textbf{(kg-${\rm \textbf{m}}^{\boldmath2}$/s)}','Interpreter','latex')
% ylim([-1,1])
ylim([0,5])
xlim([0,6])

f2 = figure;
ax3 = gca;
set(gcf, 'Position',  [100, 100, 1000, 300])
plot(Data.vx_com,'LineWidth',2)
hold on
plot(10*Data.stanceLeg,'g-.','LineWidth',2)
grid on
title('')
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$v^x_{\rm CoM}$} \textbf{(m/s)}','Interpreter','latex')
% ylim([-1,1])
ylim([0,5])
xlim([0,6])

figure_path = [root_dir, '\PicsData\PD220724_running'];
cd(figure_path)
% saveas(f1,'L_FLW_running.png')
% saveas(f2,'VxCOM_FLW_running.png')
% saveas(f1,'L_FLW_hopping.png')
% saveas(f2,'VxCOM_FLW_hopping.png')

%% Animation Sequence
figure_path = [root_dir, '\PicsData\PD220724_running\'];
set(gcf,'Position',[100,100,180,210]);
time = linspace(2.018,2.018+0.7,9);
% time = linspace(6.735,6.735+0.35,9);
for i = 1:9
    FA.TimeEditField.Value = time(i);
    FA.index = GetIndexFromTime(FA,FA.TimeEditField.Value);
    UpdatePlot(FA,FA.X_states(:,FA.index));
    UpdateGUI(FA,FA.index);
    FA.StopPlay = 1;
    
    % add time
    xL = xlim;
    zL = zlim;
    axis([xL(1)+0.2, xL(2)-0.2, -1, +1, -0.5, 2]);
    time_text = text(xL(2)-0.9,0,zL(2)-0.3,['t = ', num2str(round(time(i)-time(1),2))]);
%     time_text = text(xL(2)-1.5,0,zL(2)-0.3,['t = ', 'test'])
%     saveas(gcf,[figure_path 'FLW_running_' num2str(i) '.png']);
%     saveas(gcf,[figure_path 'FLW_hopping_' num2str(i) '.png']);
    delete(time_text);
end