function [output1] = Jp_torso(var1)
    if coder.target('MATLAB')
        [output1] = Jp_torso_mex(var1);
    else
        coder.cinclude('Jp_torso_src.h');
        
        output1 = zeros(3, 7);

        
        coder.ceval('Jp_torso_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
