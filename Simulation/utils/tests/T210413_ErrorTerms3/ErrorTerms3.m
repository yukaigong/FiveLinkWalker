%% Use every moment to predict step end value

[Data_array,Time_array] = DataTS2DataArray(Data);
Time_array = Time_array';
% [GRF_array,Time_array] = DataTS2DataArray(Data);
impact_index = find(Data_array.LegSwitch == 1);
H = 0.6;
m = 32;
g = 9.81;
l = sqrt(g/H);
T = 0.3;
step_index_length = T*2000;

% start and ending time for speed -2, -1, -0.5, 0, 0.5, 1 ,2
num_steps = 7;
velocity_steps = [-2,-1,-0.5,0,0.5,1,2];
periodic_start_time = [47,37,32,2,7,12,22];
periodic_end_time = 2+[47,37,32,2,7,12,22];

% num_steps = 4;
% velocity_steps = [0,0.5,1,2];
% periodic_start_time = [2,7,12,22];
% periodic_end_time = 2+[2,7,12,22];


impact_time = Time_array(impact_index);

% record one step at each periodic period
steps_start_index = zeros(num_steps);
steps_end_index = zeros(num_steps);
L_steps = cell(num_steps);
vc_steps = cell(num_steps);
Lc_steps = cell(num_steps);
dLc_steps = cell(num_steps);
t_steps = cell(num_steps);
t_remain_steps  = cell(num_steps);

error_L_int = cell(num_steps);
error_dL_int = cell(num_steps);
error_no_int = cell(num_steps);

for i = 1:length(periodic_start_time)
    impacts_in_periodic = impact_index(impact_time>periodic_start_time(i) & impact_time<periodic_end_time(i));
    steps_start_index(i) = impacts_in_periodic(1) + 5;
    steps_end_index(i) = impacts_in_periodic(2) - 5;
%     indices = steps_start_index(i):steps_end_index(i);
    indices = steps_start_index(i):steps_start_index(i)+step_index_length;
    L_steps{i} = Data_array.l_stToe(indices);
    vc_steps{i} = Data_array.vx_com(indices);
    Lc_steps{i} = Data_array.lG(indices);
    dLc_steps{i} = gradient(Lc_steps{i},1/2000);
    
    
    t_steps{i} = Time_array(indices);
    t_steps{i} = t_steps{i} -t_steps{i}(1);
    t_remain_steps{i} = T - t_steps{i};
    t_remain_steps{i}(t_remain_steps{i}<0) = 0; % Remain time can not be negative
    
    Lc_ini = Lc_steps{i}(1);
    
    dL_int_part1 = flip(cumtrapz(t_steps{i}, flip(cosh(l*t_steps{i}).*dLc_steps{i})));
    dL_int_part2 = flip(cumtrapz(t_steps{i}, flip(sinh(l*t_steps{i}).*dLc_steps{i})));
%     dL_int_part1 =
    
    error_dL_int{i} = -1/(m*H) *(...
                        cosh(l*T).*dL_int_part1....
                      - sinh(l*T).*dL_int_part2);
                  
    L_int_part1 = flip(cumtrapz(t_steps{i}, flip(cosh(l*t_steps{i}).*Lc_steps{i})));
    L_int_part2 = flip(cumtrapz(t_steps{i}, flip(sinh(l*t_steps{i}).*Lc_steps{i})));
    
    error_L_int{i} = -1/(m*H) *(...
                        l*sinh(l*T).*L_int_part1....
                      - l*cosh(l*T).*L_int_part2);
    
    error_no_int{i} = -1/(m*H) *(Lc_steps{i}(end) - cosh(l*t_remain_steps{i}).*Lc_steps{i});
end
%%
f1 = figure;
set(gcf, 'Position',  [100, 100, 400, 250])
plot(t_steps{i},error_dL_int{i},'LineWidth',2)
hold on
plot(t_steps{i},error_L_int{i},'LineWidth',2)
plot(t_steps{i},error_no_int{i},'LineWidth',2)
grid on
axis([0,0.3,-1.2,1])
xlabel('\textbf{Time (s)}','Interpreter','latex')
ylabel('\textbf{(m/s)}','Interpreter','latex')
% legend({'$- \frac{1}{mH}\int_{t}^T \ell\sinh(\ell(T-\tau))L_c(\tau)\,d\tau$',...
%         '$- \frac{1}{mH}\int_{t}^T \cosh(\ell(T-\tau))L_{c}(\tau)\,d\tau$',...
%         '$- \frac{1}{mH}\big(L_c(T) - \cosh(\ell (T-t))L_{c}(0)$',...
%     },'Interpreter','latex')

legend({'$e_1(T,t)$',...
        '$e_2(T,t)$',...
        '$e_3(T,t)$',...
    },'Interpreter','latex')
tightfig;

% saveas(f1,[root_dir '/PicsData/PD210412_paper/ErrorTerms_3.png'])

pd_dir_2 = 'D:\Dropbox (DynamicLegLocomotion)\MyManuscript\Paper\2022_ASME\tiff\MATLAB\';
print(f1,[pd_dir_2, 'ErrorTerms_3.tif'],'-dtiff','-r1000')

%%

figure;
plot(t_steps{i},error_L_int{i},'LineWidth',2)
hold on
plot(t_steps{i},error_dL_int{i} - error_no_int{i},'LineWidth',2)
% plot(t_steps{i},error_no_int{i},'LineWidth',2)
grid on