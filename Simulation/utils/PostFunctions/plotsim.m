figure;plot(tout,X_states(:,8))

figure;
plot(Data.l_LeftToe)
hold on
plot(Data.lG)
plot(Data.l_LeftToe_vg)
plot(10*Data.stanceLeg,'g--')
hold off
legend('L LeftToe','L G','L LeftToe vg')


figure;
plot(tout,X_states(:,8))
hold on
plot(tout,X_states(:,9))
plot(2*Data.stanceLeg,'g--')
hold off
legend('vx hip','vz hip')

figure;
plot(Data.v_com)
hold on
plot(2*Data.stanceLeg,'g--')
hold off
legend('vx com','vy com','vz com')

figure;
plot(Data.lG)
hold on
plot(2*Data.stanceLeg,'g--')
hold off
legend('lG')



figure;
plot(Data.u)
hold on
plot(10*Data.stanceLeg,'g--')
hold off
legend('u1','u2','u3','u4')
%% Basic
figure;
plot(Data.q)
hold on
plot(1*Data.stanceLeg,'g--')
hold off
legend('q1','q2','q3','q4','q5','q6','q7')

figure;
plot(Data.dq)
hold on
plot(1*Data.stanceLeg,'g--')
hold off
legend('dq1','dq2','dq3','dq4','dq5','dq6','dq7')
%% Special

% find the relation between lG ( Angular Momentum about COm), l_LeftToe (
% angular Momentum about left toe), and COM velocity

figure;
plot(Data.l_LeftToe)
hold on
plot(Data.l_LeftToe_vg + Data.lG)
plot(20*Data.stanceLeg,'g--')
hold off

figure;
plot(Data_perfect.v_LT)
hold on
plot(0.1*Data.stanceLeg,'g--')
hold off

%% Control
figure;
plot(Data.hr)
hold on
plot(Data.h0)
plot(Data.stanceLeg,'g--')
hold off

figure;
plot(Data.dhr)
hold on
plot(Data.dh0)
plot(Data.stanceLeg,'g--')
hold off

figure;
plot(Data.dx0_next)
hold on
plot(Data.stanceLeg,'g--')
hold off

figure;
plot(Data.x0_next)
hold on
plot(Data.stanceLeg,'g--')
hold off

figure;
plot(Data.l_LeftToe)
hold on
plot(10*Data.stanceLeg,'g--')
hold off
legend('L LeftToe')

figure;
plot(Data.pseudo_com_vx)
hold on
plot(10*Data.stanceLeg,'g--')
hold off
legend('L LeftToe')
