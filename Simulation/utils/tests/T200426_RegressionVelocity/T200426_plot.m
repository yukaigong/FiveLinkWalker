figure;
plot(Data_perfect.dq3);hold on; plot(Data.dq3); plot(Data.stanceLeg,'g-.'); hold off; grid on
legend('dq3 true','dq3 estimated')
ax(1)= gca ;
figure;
plot(Data.dq3 - Data_perfect.dq3);hold on; plot(Data.stanceLeg,'g-.'); hold off; grid on
legend('dq3 error')
ax(2) = gca;

figure;
plot(Data_perfect.dq4);hold on; plot(Data.dq4); plot(Data.stanceLeg,'g-.'); hold off; grid on
legend('dq4 true','dq4 estimated')
ax(3) = gca;
figure;
plot(Data.dq4 - Data_perfect.dq4);hold on; plot(Data.stanceLeg,'g-.'); hold off; grid on
legend('dq4 error')
ax(4) = gca;

figure;
plot(Data_perfect.dq5);hold on; plot(Data.dq5); plot(Data.stanceLeg,'g-.'); hold off; grid on
legend('dq5 true','dq5 estimated')
ax(5) = gca;
figure;
plot(Data.dq5 - Data_perfect.dq5);hold on; plot(Data.stanceLeg,'g-.'); hold off; grid on
legend('dq5 error')
ax(6) = gca;

% figure;
% plot(d_leg_angle_perfect);hold on; plot(d_leg_angle); plot(Data.stanceLeg,'g-.'); hold off; grid on
% legend('leg angle true','leg angle estimated')
% ax(7) = gca;
% figure;
% plot(d_leg_angle - d_leg_angle_perfect);hold on; plot(Data.stanceLeg,'g.-'); hold off; grid on
% legend('leg angle error')
% ax(8) = gca;


dq1_perfect = reshape(Data_perfect.dq1.Data,1,[]);
dq1 = reshape(Data.dq1.Data,1,[]);

figure;
plot(Data.dq1.Time, dq1_perfect);hold on; plot(Data.dq1.Time, dq1); plot(Data.stanceLeg,'g-.'); hold off; grid on
legend('dq1 true','dq1 estimated')
ax(9) = gca;
figure;
plot(Data.dq1 - Data_perfect.dq1);hold on; plot(Data.stanceLeg,'g-.'); hold off; grid on
legend('dq1 error')
ax(10) = gca;


rv_Hip2LT_perfect = reshape(Data_perfect.rv_Hip2LT.Data,3,[]);
rv_Hip2LT = reshape(Data.rv_Hip2LT.Data,3,[]);

figure;
plot(Data_perfect.rv_Hip2LT.Time, rv_Hip2LT_perfect(1,:));hold on; plot(Data.rv_Hip2LT.Time, rv_Hip2LT(1,:)); plot(Data.stanceLeg,'g-.'); hold off; grid on
legend('rv Hip2LT true','rv Hip2LT estimated')
ax(11) = gca;
figure;
plot(Data.rv_Hip2LT.Time, rv_Hip2LT(1,:) - rv_Hip2LT_perfect(1,:)); hold on; plot(Data.stanceLeg,'g-.'); hold off; grid on
legend('rv Hip2LT error')
ax(12) = gca;

rv_Hip2RT_perfect = reshape(Data_perfect.rv_Hip2RT.Data,3,[]);
rv_Hip2RT = reshape(Data.rv_Hip2RT.Data,3,[]);

figure;
plot(Data_perfect.rv_Hip2RT.Time, rv_Hip2RT_perfect(1,:));hold on; plot(Data.rv_Hip2RT.Time, rv_Hip2RT(1,:)); plot(Data.stanceLeg,'g-.'); hold off; grid on
legend('rv Hip2RT true','rv Hip2RT estimated')
ax(13) = gca;
figure;
plot(Data.rv_Hip2RT.Time, rv_Hip2RT(1,:) - rv_Hip2RT_perfect(1,:)); hold on; plot(Data.stanceLeg,'g-.'); hold off; grid on
legend('rv Hip2RT error')
ax(14) = gca;

linkaxes(ax,'x');

for i = 1:12
    saveas(figure(i),['D:\Dropbox (DynamicLegLocomotion)\Robots\codes\SimpleModels\FiveLinkWalker\Simulation\PicAndData\F200426\Pic' num2str(i) '.png'])
end
