figure;
plot(Data_perfect.lG)
hold on
plot(Data_noise.lG)
hold off
legend('lG_true','lG_raw')


figure;
plot(Data_perfect.l_LeftToe)
hold on
plot(Data_noise.l_LeftToe)
plot(Data.l_stToe_kf)
plot(20*Data.stanceLeg,'g--')
legend('L true','L obs','L kf')
hold off

figure;
plot(Data_perfect.l_LeftToe)
hold on
plot(Data.l_stToe_kf)
plot(20*Data.stanceLeg,'g--')
legend('L true','L kf')
hold off

figure;
plot(Data_perfect.l_LeftToe)
hold on
plot(Data.l_stToe_kf)
plot(Data.l_stToe_kf + Data.std,'k-.')
plot(Data.l_stToe_kf - Data.std,'k-.')
plot(20*Data.stanceLeg,'g--')
legend('L true','L kf')
hold off

figure;
plot(Data.Rt)

figure;
plot(Data.Qt)

figure;
plot(Data.std)


figure;
plot(Data_perfect.l_stToe)
hold on
plot(Data.l_stToe_kf)
plot(20*Data.stanceLeg,'g--')
legend('L true','L kf')
hold off

figure;
plot(Data_perfect.l_stToe_obs)
hold on
plot(Data.l_stToe_kf)
plot(20*Data.stanceLeg,'g--')
legend('L true','L kf')
hold off

figure;
plot(Data.l_stToe_kf - Data_perfect.l_stToe_obs)
hold on
plot(Data.stanceLeg,'g--')
hold off



