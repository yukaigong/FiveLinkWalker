function [output1] = dJs_torso(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJs_torso_mex(var1,var2);
    else
        coder.cinclude('dJs_torso_src.h');
        
        output1 = zeros(6, 7);

        
        coder.ceval('dJs_torso_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
