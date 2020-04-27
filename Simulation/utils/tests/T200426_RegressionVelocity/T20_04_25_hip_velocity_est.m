figure;plot(Data.dq1 - Data_perfect.dq1);hold on; plot(-1*Data_perfect.v_stT);

figure;plot(Data_perfect.dq1);hold on; plot(Data.dq1); plot(Data.stanceLeg,'g.-'); hold off; grid on;

figure;plot(Data_perfect.dq5-Data.dq5);hold on; plot(Data.stanceLeg,'g.-');grid on;


d_leg_angle_perfect = Data_perfect.dq3+Data_perfect.dq4 + 1/2*Data_perfect.dq5;
d_leg_angle = Data.dq3+Data.dq4 + 1/2*Data.dq5;

figure;plot(d_leg_angle_perfect);hold on; plot(d_leg_angle); plot(Data.stanceLeg,'g-.'); hold off; grid on

figure;plot(d_leg_angle_perfect - d_leg_angle);hold on; plot(Data.stanceLeg,'g.-'); hold off; grid on

