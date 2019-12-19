function [output1] = R_torso(var1)
    if coder.target('MATLAB')
        [output1] = R_torso_mex(var1);
    else
        coder.cinclude('R_torso_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('R_torso_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
