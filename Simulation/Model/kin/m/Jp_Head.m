function [output1] = Jp_Head(var1)
    if coder.target('MATLAB')
        [output1] = Jp_Head_mex(var1);
    else
        coder.cinclude('Jp_Head_src.h');
        
        output1 = zeros(3, 7);

        
        coder.ceval('Jp_Head_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
