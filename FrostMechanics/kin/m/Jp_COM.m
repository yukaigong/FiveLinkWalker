function [output1] = Jp_COM(var1,var2)
    if coder.target('MATLAB')
        [output1] = Jp_COM_mex(var1,var2);
    else
        coder.cinclude('Jp_COM_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('Jp_COM_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
