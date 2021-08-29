function val = singleterm_bezier(n,i,s)
  
if (i == 0)
    val = nchoosek(n,i).*(1-s).^(n-i);
elseif (n == i)
    val = nchoosek(n,i)*s.^(i);
else
    val = nchoosek(n,i)*s.^(i).*(1-s).^(n-i);
end

return