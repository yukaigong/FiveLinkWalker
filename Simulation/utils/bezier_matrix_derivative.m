function M = bezier_matrix_derivative(n,j,s)
% Along the rows are single terms correponding to bezier coefficients
% Along the rows are different s.


m = length(s);

M = zeros(m,n+1);

for i = 0:n
    M(:,i+1) = singleterm_bezier_derivative(n,i,j,s);
end
