figure;
plot(Data.vx_com*m*g)
hold on;
plot(Data.l_stToe/H*g)
plot(Data.stanceLeg*1000)
hold off;
legend('true ddot L','ALIP ddot L')
ax1 = gca;

figure;
plot(Data.vx_com*g/H)
hold on;
plot((Data.l_stToe/(m*H))/H*g)
plot(Data.stanceLeg*100)
hold off;
legend('true ddot vp','ALIP ddot vp')
ax2 = gca;

F = GRF.Data';
T = GRF.Time;
rp_LT = reshape(Data.rp_LT.Data,3,[]);
Tau = F(3,:).*rp_LT(1,:) - F(1,:).*rp_LT(3,:);
figure;
plot(T,rp_LT(1,:)*g/H - Tau/m/H)
hold on
plot(T,rp_LT(1,:)*g/H)
plot(Data.stanceLeg*10)
legend('true dot vc','LIP dot vc')
ax3 = gca;
linkaxes([ax1,ax2,ax3],'x')

