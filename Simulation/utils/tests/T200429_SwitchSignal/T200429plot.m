figure;
ax(1) = subplot(1,3,1);
plot(x);legend('x'); grid on
ax(2) = subplot(1,3,2);
plot(y);legend('y'); grid on
ax(3) = subplot(1,3,3);
plot(z);legend('z')
linkaxes(ax,'xy'); grid on

figure;
plot(dy_true);hold on;plot(dy_fil);hold off;legend('dy true', 'dy fil'); grid on;

figure;
plot(dz_true);hold on;plot(dz_fil);hold off;legend('dz true', 'dz fil'); grid on;

figure;
plot(dx1);legend('dx method 1'); ax1 = gca; grid on

figure;
plot(dx2);legend('dx method 2'); ax2 = gca; grid on

linkaxes([ax1 ax2],'xy')






