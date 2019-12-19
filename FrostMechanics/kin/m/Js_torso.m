function [output1] = Js_torso(var1)
    if coder.target('MATLAB')
        [output1] = Js_torso_mex(var1);
    else
        coder.cinclude('Js_torso_src.h');
        
        output1 = zeros(6, 7);

        
        coder.ceval('Js_torso_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
