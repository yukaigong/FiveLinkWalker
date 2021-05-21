fit_order = 3;

[Data_array,Time_array] = DataTS2DataArray(Data);

impact_index = find(Data_array.LegSwitch == 1);

start_time = [2,7,12,17,22,32,37,42,47];

a = zeros(length(impact_index)-1,3);
coeff = zeros(length(start_time)-1,fit_order+1);
L_ini = zeros(length(start_time)-1,1);
for i = 1:length(impact_index)-1
    start_index = impact_index(i);
    end_index = impact_index(i+1);
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
    coeff(i,:) = polyfit(t,Lc,fit_order);
    
%     A = [t.^2; t; ones(size(t))]';
%     coeff(i,:) = ((A'*A)^-1*A'*Lc')';
%     a(i,1) = coeff(i,1);
%     a(i,2) = coeff(i,2)/(-2*a(i,1));
%     a(i,3) = coeff(i,3) - a(i,1)*a(i,2)^2;
    
    L_ini(i) = L(1);
    
%     figure;
%     plot(Time_array(indice),Lc);
%     hold on;
%     plot(Time_array(indice),A*result)
%     title(['initial_L = ' num2str(L_max(i))])
    
end
% figure;
% scatter(L_ini,a(:,1))
% figure;
% scatter(L_ini,a(:,2))
% figure;
% scatter(L_ini,a(:,3))

figure;
scatter(L_ini,coeff(:,1))
figure;
scatter(L_ini,coeff(:,2))
figure;
scatter(L_ini,coeff(:,3))
figure;
scatter(L_ini,coeff(:,4))
%%
% find a linear relation between L_ini and coeff

p1 = polyfit(L_ini,coeff(:,1),2);
p2 = polyfit(L_ini,coeff(:,2),2);
p3 = polyfit(L_ini,coeff(:,3),2);
p4 = polyfit(L_ini,coeff(:,4),2);

figure; plot(L_ini, polyval(p1,L_ini)); hold on; scatter(L_ini,coeff(:,1))
figure; plot(L_ini, polyval(p2,L_ini)); hold on; scatter(L_ini,coeff(:,2))
figure; plot(L_ini, polyval(p3,L_ini)); hold on; scatter(L_ini,coeff(:,3))
figure; plot(L_ini, polyval(p4,L_ini)); hold on; scatter(L_ini,coeff(:,4))
%%

syms L

coeff_sym = sym(zeros(fit_order+1,1));

coeff_sym(1)= poly2sym(p1,L);
coeff_sym(2)= poly2sym(p2,L);
coeff_sym(3)= poly2sym(p3,L);
coeff_sym(4)= poly2sym(p4,L);

matlabFunction(coeff_sym,'File','./utils/Lc_related/get_Lc_coeff','Vars',{L});



