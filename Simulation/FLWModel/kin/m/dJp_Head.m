function [output1] = dJp_Head(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJp_Head_mex(var1,var2);
    else
        coder.cinclude('dJp_Head_src.h');
        
        output1 = zeros(3, 7);

        
        coder.ceval('dJp_Head_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
