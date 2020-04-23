function [output1] = Jb_Torso(var1)
    if coder.target('MATLAB')
        [output1] = Jb_Torso_mex(var1);
    else
        coder.cinclude('Jb_Torso_src.h');
        
        output1 = zeros(6, 7);

        
        coder.ceval('Jb_Torso_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
