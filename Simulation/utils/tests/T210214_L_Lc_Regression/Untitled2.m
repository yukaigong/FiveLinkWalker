[Data_array,Time_array] = DataTS2DataArray(Data);

% % 0.5m/s
% start_time = 7;
% end_time = 9;

% 1m/s
% start_time = 12;
% end_time = 14;

% 1.5m/s
% start_time = 17;
% end_time = 19;

% 2m/s
start_time = 22;
end_time = 24;

start_index = start_time * 2000;
end_index = end_time * 2000;
indice = start_index:end_index;

[Data_array,Time_array] = DataTS2DataArray(Data);

Lc = Data_array.lG(indice);
L = Data_array.l_stToe(indice);

A = [L;ones(size(L))]';

result = (A'*A)^-1*A'*Lc'

% a = 

figure;plot(Time_array(indice),Lc);hold on; plot(Time_array(indice),A*result)
title(['a = ' num2str(result(1)),'    b = ' num2str(result(2))])
legend('Lc', 'a*L+b')

