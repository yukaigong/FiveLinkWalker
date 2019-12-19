figure;plot(tout,X_states(:,8))

figure;
plot(Data.L_LeftToe)
hold on
plot(Data.LG)
plot(Data.L_LeftToe_vg)
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