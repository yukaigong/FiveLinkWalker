obs_noise = reshape(Data_noise.l_LeftToe.Data-Data_perfect.l_LeftToe.Data,1,[]);
std(obs_noise)

comx_noise = reshape(Data_noise.px_com.Data-Data_perfect.px_com.Data,1,[]);
act_noise = 0.0005*32*9.81*comx_noise;
std(act_noise)

rp_noise = reshape(Data_noise.rp_LT.Data(1,:,:)-Data_perfect.rp_LT.Data(1,:,:),1,[]);
act_noise = 0.0005*32*9.81*rp_noise;
std(act_noise)