function fcn = bezier(coeff,s) %accepts S in row or column and returns an array of the same orientation
  
[m,n] = size(coeff);
[x,y] = size(s);

n=n-1; %Bezier polynomials have m terms for m-1 order

fcn = zeros(m,y);
for i = 0:1:n
    fcn = fcn + coeff(:,i+1)*singleterm_bezier(n,i,s);
end

return
    
