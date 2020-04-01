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


