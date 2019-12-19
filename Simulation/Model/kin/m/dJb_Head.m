function [output1] = dJb_Head(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJb_Head_mex(var1,var2);
    else
        coder.cinclude('dJb_Head_src.h');
        
        output1 = zeros(6, 7);

        
        coder.ceval('dJb_Head_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
