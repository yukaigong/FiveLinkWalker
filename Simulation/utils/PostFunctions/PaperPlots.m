f1 = figure;
ax1 = gca;
set(gcf, 'Position',  [100, 100, 300, 200])
plot(Data_perfect.l_stToe,'LineWidth',2)
hold on
plot(100*Data.stanceLeg,'g-.','LineWidth',2)
grid on
title('')
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$L^y$} \textbf{(kg-${\rm \textbf{m}}^{\boldmath2}$/s)}','Interpreter','latex')
ylim([25,45])

f2 = figure;
ax2 = gca;
set(gcf, 'Position',  [100, 100, 300, 200])
plot(Data_perfect.lG,'LineWidth',2)
hold on
plot(100*Data.stanceLeg,'g-.','LineWidth',2)
grid on
title('')
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$L^y_{\rm CoM}$} \textbf{(kg-${\rm \textbf{m}}^{\boldmath2}$/s)}','Interpreter','latex')
ylim([-10,20])

f3 = figure;
ax3 = gca;
set(gcf, 'Position',  [100, 100, 300, 200])
plot(Data_perfect.vx_com,'LineWidth',2)
hold on
plot(100*Data.stanceLeg,'g-.','LineWidth',2)
grid on
title('')
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$v^x_{\rm CoM}$} \textbf{(m/s)}','Interpreter','latex')
ylim([1,2.5])

linkaxes([ax1,ax2,ax3],'x')
xlim([14.8,15.5])
% linkaxes([ax1,ax2],'y')

% figure_path = [root_dir, '\PicsData\PD200820'];
% cd(figure_path)
% saveas(f1,'L_FLW.png')
% saveas(f2,'LCOM_FLW.png')
% saveas(f3,'vxCOM_FLW.png')

%%

f1 = figure;
ax(1) = gca;
set(gcf, 'Position',  [100, 100, 300, 200])
plot(Data.l_stToe/32/0.6,'LineWidth',2)
hold on
plot(Data.vx_com)
plot(10*Data.stanceLeg,'g-.','LineWidth',2)
hold off
grid on
legend('Ly/mH','vx com')
xlabel('\textbf{Time (s)}','Interpreter','latex')
% ylabel('{\boldmath$v^x_{\rm CoM}$} \textbf{(m/s)}','Interpreter','latex')

f2 = figure;
ax(2) = gca;
set(gcf, 'Position',  [100, 100, 300, 250])
plot(Data.l_stToe/32/0.6,'LineWidth',2)
hold on; 
plot(Data.dx0_next,'LineWidth',2)
plot(10*Data.stanceLeg,'g-.','LineWidth',2)
hold off;
grid on
legend({'Instantaneous value of {\boldmath$\frac{L^y}{mH}$}','Predicted value at end of step'},'Interpreter','latex')
xlabel('\textbf{Time (s)}','Interpreter','latex','FontSize',12)
ylabel('{\boldmath$\frac{L^y}{mH}$} \textbf{(m/s)}','Interpreter','latex','FontSize',12)


f3 = figure;
ax(3) = gca;
set(gcf, 'Position',  [100, 100, 300, 250])
plot(Data.vx_com,'LineWidth',2)
hold on; 
plot(Data.vx0_next,'LineWidth',2)
plot(10*Data.stanceLeg,'g-.','LineWidth',2)
hold off;
grid on
legend({'Instantaneous value of {\boldmath$v^x_{\rm CoM}$}','Predicted value at end of step'},'Interpreter','latex')
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('{\boldmath$v^x_{\rm CoM}$} \textbf{(m/s)}','Interpreter','latex')

linkaxes(ax,'xy')

axis([14.95, 15.35, 0.5, 2.5])

% figure_path = [root_dir, '\PicsData\PD200820'];
figure_path = [root_dir, '\PicsData\PD201017_paper'];
cd(figure_path)
saveas(f1,'L_VxCOm_FLW.png')
saveas(f2,'L_Predict_FLW.png')
saveas(f3,'VxCOM_predict_FLW.png')