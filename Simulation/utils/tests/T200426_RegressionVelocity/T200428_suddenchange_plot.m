figure;
ax1 = subplot(1,2,1);
plot(true_dy);hold on;plot(test_dy);hold off
legend('dy true', 'dy estimated')

ax2 = subplot(1,2,2);
plot(test_dy - true_dy);
legend('dy error')

linkaxes([ax1,ax2],'x')