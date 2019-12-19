figure;plot(tout,X_states(:,8))

figure;
plot(Data.L_LeftToe)
hold on
plot(Data.LG)
plot(Data.L_LeftToe_vg)
plot(10*Data.stanceLeg,'g--')
hold off
legend('L LeftToe','L G','L LeftToe vg')

