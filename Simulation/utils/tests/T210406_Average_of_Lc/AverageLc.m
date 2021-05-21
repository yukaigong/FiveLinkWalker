[Data_array,Time_array] = DataTS2DataArray(Data);

impact_index = find(Data_array.LegSwitch == 1);

L_ini = zeros(length(impact_index)-1,1);
L_end = zeros(length(impact_index)-1,1);
Lc_avg = zeros(length(impact_index)-1,1);
vc_avg = zeros(length(impact_index)-1,1);
t_ini = zeros(length(impact_index)-1,1);
for i = 1:length(impact_index)-1
    start_index = impact_index(i);
    end_index = impact_index(i+1);
    indice = start_index:end_index;
    
    Lc = Data_array.lG(indice);
    vc = Data_array.vx_com(indice);
    L = Data_array.l_stToe(indice);
    t = Data_array.t(indice);
    

    
    L_ini(i) = L(1);
    L_end(i) = L(end);
    Lc_avg(i) = mean(Lc);
    vc_avg(i) = mean(vc);
    t_ini(i) = start_index/2000;
end

% figure;scatter(vc_avg,Lc_avg)
figure;scatter(t_ini,vc_avg)