function [output1] = dJs_Torso(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJs_Torso_mex(var1,var2);
    else
        coder.cinclude('dJs_Torso_src.h');
        
        output1 = zeros(6, 7);

        
        coder.ceval('dJs_Torso_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
