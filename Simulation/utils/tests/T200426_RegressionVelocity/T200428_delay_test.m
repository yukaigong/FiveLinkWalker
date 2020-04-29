dop = 3;
history_length = 20;
sample_time = 1/2000;

K = [];
for delay = 0:-1:-(history_length-1)
fil_matrix = get_PolyRegressionFilterMatrix(dop,history_length,sample_time,delay);
K = [K sum(fil_matrix.^2)];
end
plot(0:-1:-(history_length-1),K)