% poincare_delta = 0.1;
% sim_result_1 = sim('FLWSim_PoincareMap','TimeOut',20);
% J1 = sim_result_1.Jacobian(:,:,end);
% poincare_delta = -0.1;
% sim_result_2 = sim('FLWSim_PoincareMap','TimeOut',20);
% J2 = sim_result_2.Jacobian(:,:,end);
% 
% eigen_values = eig((J1+J2)/2)


% f1 = figure;
% set(gcf, 'Position',  [100, 100, 250, 200])
% plot(eigen_values,'*')
% hold on;
% viscircles([0,0],1)
% axis equal
% grid on

% saveas(f1,[root_dir '/PicsData/PD211217_TRO_modification/Poincare_ev.png'])

%%
% fp_ratio = 0.1:0.1:0.6;
eigen_values_cell ={};
eigen_values_hstack = [];
sim_time = [];
for fp_ratio = 0.1:0.1:1
    eigen_values_matrix = [];
    for delta = [0.05,0.1,0.2,0.3]
        fp_ratio
        delta
        poincare_delta = delta;
        sim_result_1 = sim('FLWSim_PoincareMap','TimeOut',1000);
        J1 = sim_result_1.Jacobian(:,:,end);
        poincare_delta = -delta;
        sim_result_2 = sim('FLWSim_PoincareMap','TimeOut',1000);
        J2 = sim_result_2.Jacobian(:,:,end);
        
        eigen_values = eig((J1+J2)/2);
        eigen_values = sort(eigen_values, 'descend', 'ComparisonMethod', 'real');
        eigen_values_matrix = [eigen_values_matrix eigen_values];
        sim_time = [sim_time, sim_result_1.tout(end), sim_result_1.tout(end)];
    end
    eigen_values_cell = [ eigen_values_cell, {eigen_values_matrix}];
    
    eigen_values_hstack = [eigen_values_hstack; zeros(1,4);eigen_values_matrix];
end

e_avg = mean(eigen_values_hstack,2);
    