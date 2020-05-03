figure;
plot(Data_perfect.dq1);
hold on;
plot(Data.dq1);
plot(Data.stanceLeg,'g-.');
hold off;


p_LT_perfect = reshape(Data_perfect.p_LT.Data,3,[]);
v_LT_perfect = reshape(Data_perfect.v_LT.Data,3,[]);
p_LT = reshape(Data.p_LT.Data,3,[]);
v_LT = reshape(Data.v_LT.Data,3,[]);

figure;
ax1 = subplot(1,2,1);
plot(Data_perfect.p_LT.Time,p_LT_perfect(1,:)); 
hold on; 
plot(100*Data.stanceLeg,'g-.'); 
hold off
legend('True Left Toe x Pos')

ax2 = subplot(1,2,2);
plot(Data_perfect.v_LT.Time,v_LT_perfect(1,:));
hold on;
plot(Data.v_LT.Time,v_LT(1,:));
plot(100*Data.stanceLeg,'g-.'); 
hold off
legend('True Left Toe x Vel', 'Estimated Left Toe x Vel')

figure;
ax3 = subplot(1,2,1);
plot(Data_perfect.p_LT.Time,p_LT_perfect(3,:)); 
hold on; 
plot(100*Data.stanceLeg,'g-.'); 
hold off
legend('True Left Toe z Pos')

ax4 = subplot(1,2,2);
plot(Data_perfect.v_LT.Time,v_LT_perfect(3,:));
hold on;
plot(Data.v_LT.Time,v_LT(3,:));
plot(100*Data.stanceLeg,'g-.'); 
hold off
legend('True Left Toe z Vel', 'Estimated Left Toe z Vel')

linkaxes([ax1, ax2, ax3, ax4], 'x')

%%
figure;
ax1 = subplot(1,2,1)
plot(Data_perfect.l_stToe)
hold on
plot(Data.l_stToe)
plot(60*Data.stanceLeg,'g--')
legend('L stToe true','L stToe obs')
hold off

ax2 = subplot(1,2,2)
plot(Data_perfect.l_LeftToe)
hold on
plot(Data.l_LeftToe)
plot(60*Data.stanceLeg,'g--')
legend('L LeftToe true','L LeftToe obs')
hold off

figure;
plot(Data_perfect.v_LT)
hold on
plot(Data.stanceLeg,'g--')
hold off
ax3 = gca;
legend('LeftToe vx true','LeftToe vz true')

figure;
ax4 = subplot(1,2,1)
plot(Data_perfect.dq1)
hold on
plot(Data.dq1)
plot(2*Data.stanceLeg,'g--')
legend('dq1 true','dq1 estimated')

ax5 = subplot(1,2,2)
plot(Data_perfect.dq2)
hold on
plot(Data.dq2)
plot(2*Data.stanceLeg,'g--')
legend('dq2 true','dq2 estimated')




linkaxes([ax1,ax2],'xy')
linkaxes([ax1,ax3,ax4,ax5],'x')