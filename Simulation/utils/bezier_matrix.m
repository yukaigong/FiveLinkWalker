function M = bezier_matrix(n,s)
% Along the rows are single terms correponding to bezier coefficients
% Along the rows are different s.


m = length(s);

M = zeros(m,n+1);

for k = 0:n
    M(:,k+1) = singleterm_bezier(n,k,s);
end
