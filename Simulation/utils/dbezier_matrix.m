function M = dbezier_matrix(m,s)
% Along the rows are single terms correponding to bezier coefficients
% Along the rows are different s.


n = length(s);

M = zeros(n,m);

for k = 0:m
    M(:,k+1) = singleterm_bezier(m,k,s);
end
