[Data_array,Time_array] = DataTS2DataArray(Data);
Time_array = Time_array';
% [GRF_array,Time_array] = DataTS2DataArray(Data);
impact_index = find(Data_array.LegSwitch == 1);
H = 0.6;
m = 32;
g = 9.81;
l = sqrt(g/H);
T = 0.3;

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
    indices = steps_start_index(i):steps_end_index(i);
    L_steps{i} = Data_array.l_stToe(indices);
    vc_steps{i} = Data_array.vx_com(indices);
    Lc_steps{i} = Data_array.lG(indices);
    dLc_steps{i} = gradient(Lc_steps{i},1/2000);
    
    
    t_steps{i} = Time_array(indices);
    t_steps{i} = t_steps{i} -t_steps{i}(1);
    t_remain_steps{i} = T - t_steps{i};
    t_remain_steps{i}(t_remain_steps{i}<0) = 0; % Remain time can not be negative
    
    Lc_ini = Lc_steps{i}(1);
    
    dL_int_part1 = cumtrapz(t_steps{i}, cosh(l*t_steps{i}).*dLc_steps{i});
    dL_int_part2 = cumtrapz(t_steps{i}, sinh(l*t_steps{i}).*dLc_steps{i});
    error_dL_int{i} = -1/(m*H) *(...
                        cosh(l*t_steps{i}).*dL_int_part1....
                      - sinh(l*t_steps{i}).*dL_int_part2);
    L_int_part1 = cumtrapz(t_steps{i}, cosh(l*t_steps{i}).*Lc_steps{i});
    L_int_part2 = cumtrapz(t_steps{i}, sinh(l*t_steps{i}).*Lc_steps{i});
    
    error_L_int{i} = -1/(m*H) *(...
                        l*sinh(l*t_steps{i}).*L_int_part1....
                      - l*cosh(l*t_steps{i}).*L_int_part2);
    
    error_no_int{i} = -1/(m*H) *(Lc_steps{i} - cosh(l*t_steps{i})*Lc_ini);
end
%%
f1 = figure;
set(gcf, 'Position',  [100, 100, 300, 250])
plot(t_steps{i},error_L_int{i},'LineWidth',2)
hold on
plot(t_steps{i},error_dL_int{i},'LineWidth',2)
plot(t_steps{i},error_no_int{i},'LineWidth',2)
grid on
axis([0,0.3,-0.2,1])
xlabel('\textbf{Time (s)}','Interpreter','latex')
legend({'$- \frac{1}{mH}\int_0^t \ell\sinh(\ell(t-s))L_c(s)\,ds$',...
        '$- \frac{1}{mH}\int_0^t \ell\sinh(\ell(t-s))L_{c}(s)\,ds$',...
        '$- \frac{1}{mH}\big(L_c(t) - \cosh(\ell t)L_{c}(0)$',...
    },'Interpreter','latex')



% % tightfig;
% saveas(f1,[root_dir '/PicsData/PD210412_paper/ErrorTerms.png'])



%%
