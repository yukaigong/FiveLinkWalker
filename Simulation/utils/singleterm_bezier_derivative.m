function val = singleterm_bezier_derivative(n,i,j,s)
% n degree of Bezier Curve
% i ith term
% j jth derivative



val = zeros(size(s));
for k = 0:j
    if i - k < 0
        continue;
    end
    if n - j < i - k
        continue;
    end
    B_nj_ik = singleterm_bezier(n-j,i-k,s);
    val = val + (-1)^(j-k) * nchoosek(j,k)*B_nj_ik;
end

val = factorial(n)/factorial(n-j)*val;

return