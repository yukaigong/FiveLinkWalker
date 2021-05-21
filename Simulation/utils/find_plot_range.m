function [ub,lb] = find_plot_range(v,margin_ratio)
% Find the upper bound and lower bound for plot v

max_v = max(v);
min_v = min(v);
range = max_v - min_v;
ub = max_v + range*margin_ratio;
lb = min_v - range*margin_ration;
end

