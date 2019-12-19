function [output1] = Jb_torso(var1)
    if coder.target('MATLAB')
        [output1] = Jb_torso_mex(var1);
    else
        coder.cinclude('Jb_torso_src.h');
        
        output1 = zeros(6, 7);

        
        coder.ceval('Jb_torso_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
