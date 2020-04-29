origin_vel_matrix = reshape(origin_vel.Data,3,[]);

figure; plot(Data_perfect.dq1); hold on; plot(Data.dq1);plot(origin_vel.Time,origin_vel_matrix(1,:)); plot(Data.stanceLeg,'g-.');hold off
ax(1) = gca;
legend('true dq1','dq1 = J(q)*dq','dq1 = filter(q1)');

dq1_true = reshape(Data_perfect.dq1.Data,1,[]);
v_stT_matrix = reshape(Data_perfect.v_stT.Data,3,[]);
figure; plot(origin_vel.Time,origin_vel_matrix(1,:) - dq1_true); hold on;plot(Data.v_stT.Time, -v_stT_matrix(1,:)); hold off
ax(2) = gca;
legend('fitler(q) - true dq1','-vx of stToe')

linkaxes(ax,'x')
