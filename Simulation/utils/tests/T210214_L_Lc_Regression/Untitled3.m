syms g H a real
syms t s real
syms b real
assume(a>1)
assume(g>0)
assume(H>0)

A = [0 1-a; g/H 0];
B = [1;0];


F = int(expm(A*(t-s))*B,s,0,t)
F = simplify(F)
pretty(F)
[V, D] = eig(A)