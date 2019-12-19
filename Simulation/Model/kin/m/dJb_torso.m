function [output1] = dJb_Torso(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJb_Torso_mex(var1,var2);
    else
        coder.cinclude('dJb_Torso_src.h');
        
        output1 = zeros(6, 7);

        
        coder.ceval('dJb_Torso_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
