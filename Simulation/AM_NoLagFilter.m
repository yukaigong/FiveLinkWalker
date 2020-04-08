d = designfilt('lowpassiir','FilterOrder',3,'HalfPowerFrequency',20,'SampleRate',1/sample_time);
l_stToe_obs_perfect = reshape(Data_perfect.l_stToe_obs.Data,[],1);
l_stToe_obs = reshape(Data.l_stToe_obs.Data,[],1);
y1 = filtfilt(d,l_stToe_obs_perfect);
y2 = filtfilt(d,l_stToe_obs);

plot(Data_perfect.l_stToe_obs);
hold on
plot(Data_perfect.l_stToe_obs.Time,y1);
plot(Data.l_stToe_obs.Time,y2);
hold off