 t = 0:0.0005:0.4;

 int = 0;
 int_array = zeros(size(t));
 for i = 1:length(t)
     int = int + 600*cos(t(i))*0.0005;
     int_array(i) = int;
 end
figure;
plot(t,600*sin(t));
hold on
plot(t,int_array)
hold off