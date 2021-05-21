x_limit = [7.8, 8.2;
    23.15, 23.55;
    32.65, 33.05;
    47.9, 48.3];

y_limit_L = [7, 11;
    28, 42;
    -11, -7;
    -40, -26];

figure;
for i = 1:4
    subplot(1,4,i)
    plot(Data.l_stToe);
    hold on;
    plot(Data.dx0_next*Data.pz_com*32);
    plot(Data.dx0_next_withLc*Data.pz_com*32);
    axis([x_limit(i,:), y_limit_L(i,:)])
    grid on
%     legend('L','original_predict','Lc_predict')
end

figure;
for i = 1:4
    subplot(1,4,i)
    plot(Data.lG)
    axis([x_limit(i,:), -7, 14])
    grid on
    
%     legend('L','original_predict','Lc_predict')
end

