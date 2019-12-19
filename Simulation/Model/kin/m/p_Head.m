function [output1] = p_Head(var1)
    if coder.target('MATLAB')
        [output1] = p_Head_mex(var1);
    else
        coder.cinclude('p_Head_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_Head_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
