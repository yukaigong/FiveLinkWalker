% [Data_array,Time_array] = DataTS2DataArray(Data);

% % 0.5m/s
% start_time = 7;
% end_time = 9;

% 1m/s
% start_time = 12;
% end_time = 14;

% 1.5m/s
% start_time = 17;
% end_time = 19;

% % 2m/s
% start_time = 22;
% end_time = 24;
% 
% % -0.5m/s
% start_time = 32;
% end_time = 34;
% 
% % -1m/s
% start_time = 37;
% end_time = 39;
% 
% % -1.5m/s
% start_time = 42;
% end_time = 44;
% 
% % -2m/s
% start_time = 47;
% end_time = 49;
fit_order = 3;
start_time = [2,7,12,17,22,32,37,42,47];
end_time = start_time + 2;
a = zeros(length(start_time),3);
coeff = zeros(length(start_time),fit_order+1);
L_max = zeros(length(start_time),1);
for i = 1:length(start_time)
    start_index = start_time(i) * 2000;
    end_index = end_time(i) * 2000;
    indice = start_index:end_index;
    
    [Data_array,Time_array] = DataTS2DataArray(Data);
    
    Lc = Data_array.lG(indice);
    L = Data_array.l_stToe(indice);
    t = Data_array.t(indice);
    
    A = [];
    for j = 0:fit_order
        A = [t.^j; A];
    end
    A = A';
%     coeff(i,:) = ((A'*A)^-1*A'*Lc')';
    coeff(i,:) = polyfit(t,Lc,fit_order);
%     a(i,1) = coeff(i,1);
%     a(i,2) = coeff(i,2)/(-2*a(i,1));
%     a(i,3) = coeff(i,3) - a(i,1)*a(i,2)^2;
    
    L_max(i) = max(L);
    
%     figure;
%     plot(Time_array(indice),Lc);
%     hold on;
%     plot(Time_array(indice),A*coeff(i,:)')
%     title(['initial_L = ' num2str(L_max(i))])
    
end
% figure;
% scatter(L_max,a(:,1))
% figure;
% scatter(L_max,a(:,2))
% figure;
% scatter(L_max,a(:,3))

figure;
scatter(L_max,coeff(:,1))
figure;
scatter(L_max,coeff(:,2))
figure;
scatter(L_max,coeff(:,3))
figure;
scatter(L_max,coeff(:,4))
% figure;
% plot(Time_array(indice),Lc);
% hold on; 
% plot(Time_array(indice),A*result)
% title(['a = ' num2str(result(1)),'    b = ' num2str(result(2))])
% legend('Lc', 'a*L+b')


