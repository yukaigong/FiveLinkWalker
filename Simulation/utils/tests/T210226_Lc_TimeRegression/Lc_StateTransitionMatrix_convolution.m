syms t tau T m g H real
coeff = sym('coeff',[1,5],'real')
A = [0 1;
    g/H 0];

B = [- 1/(m*H);0];

Lc = poly2sym(coeff,tau);
% Lc = a*tau^2 + b*tau + c;

expr = expm(A*(T-tau))*B*Lc;
result = int(expr, tau, t, T);


matlabFunction(result,'File',[root_dir '\utils\Lc_related\Lc_effect_v1'],'Vars',{t,T,coeff,[m,g,H]});

% expr =matlabFunction(expm(A*t,'File',[root_dir '\utils\Lc_related\test1'],'Vars',{t,T,coeff,[m,g,H]}); t*tau
% 
% F = int(expr,tau,0,t)
% 
%     syms x(t) v(t)  
%     eqns = [diff(x,t) == v, diff(v,t) == g/H*x,];
%     S = dsolve(eqns)
