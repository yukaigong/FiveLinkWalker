figure;
plot(Data.pseudo_com_vx);hold on; plot(Data.dx0_next); plot(Data.dx0_next_special);
ax1 = gca;

figure;
plot(Data.lG)
ax2 = gca;

figure;
plot(Data.vz_com)
ax3 = gca;

linkaxes([ax1,ax2,ax3],'x')