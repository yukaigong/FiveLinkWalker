figure;plot(Data.dq1 - Data_perfect.dq1);hold on; plot(-1*Data_perfect.v_stT);

figure;plot(Data_perfect.dq1);hold on; plot(Data.dq1); hold off; grid on;

figure;plot(Data_perfect.dq5-Data.dq5);hold on; plot(Data.stanceLeg);grid on;