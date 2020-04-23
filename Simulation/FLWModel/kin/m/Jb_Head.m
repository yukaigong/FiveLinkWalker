function [output1] = Jb_Head(var1)
    if coder.target('MATLAB')
        [output1] = Jb_Head_mex(var1);
    else
        coder.cinclude('Jb_Head_src.h');
        
        output1 = zeros(6, 7);

        
        coder.ceval('Jb_Head_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
