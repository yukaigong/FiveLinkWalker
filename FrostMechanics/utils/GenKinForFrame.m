function GenKinForFrame( frame, func_name, EXPO_PATH,TEMPLATE_PATH,X,dX)
if isempty(func_name)
    func_name = frame.Name;
end
% Cartesian Position
p = frame.computeCartesianPosition;
J_p = jacobian(p,X);
dJ_p = MatrixTimeDerivative(J_p,X,dX);
% % Euler Angle
% rpy = frame.computeEulerAngle';
% J_rpy = jacobian(rpy,X);
% dJ_rpy = MatrixTimeDerivative(J_rpy,X,dX);
% Body Jacobian
Jb = frame.computeBodyJacobian(length(X));
dJb = MatrixTimeDerivative(Jb,X,dX);
% Spatial Jacobian
Js = frame.computeSpatialJacobian(length(X));
dJs = MatrixTimeDerivative(Js,X,dX);
% Homogeneous Transformation
T = frame.computeForwardKinematics;
dT = MatrixTimeDerivative(T,X,dX);
% Rotation Matrix
R = T(1:3,1:3);
dR = MatrixTimeDerivative(R,X,dX);


export_simulation(p,['p_' func_name],EXPO_PATH, X, TEMPLATE_PATH);
export_simulation(J_p,['Jp_' func_name],EXPO_PATH, X, TEMPLATE_PATH);
export_simulation(dJ_p,['dJp_' func_name],EXPO_PATH, {X,dX}, TEMPLATE_PATH);
% export_simulation(rpy,['rpy_' func_name],EXPO_PATH, X, TEMPLATE_PATH);
% export_simulation(J_rpy,['Jrpy_' func_name],EXPO_PATH, X, TEMPLATE_PATH);
% export_simulation(dJ_rpy,['dJrpy_' func_name],EXPO_PATH, {X,dX}, TEMPLATE_PATH);
export_simulation(Jb,['Jb_' func_name],EXPO_PATH, X, TEMPLATE_PATH);
export_simulation(dJb,['dJb_' func_name],EXPO_PATH, {X,dX}, TEMPLATE_PATH);
export_simulation(Js,['Js_' func_name],EXPO_PATH, X, TEMPLATE_PATH);
export_simulation(dJs,['dJs_' func_name],EXPO_PATH, {X,dX}, TEMPLATE_PATH);
export_simulation(T,['T_' func_name],EXPO_PATH, X, TEMPLATE_PATH);
export_simulation(dT,['dT_' func_name],EXPO_PATH, {X,dX}, TEMPLATE_PATH);
export_simulation(R,['R_' func_name],EXPO_PATH, X, TEMPLATE_PATH);
export_simulation(dR,['dR_' func_name],EXPO_PATH, {X,dX}, TEMPLATE_PATH);

if isprop(frame,'Inertia')
    twist_body = Jb*dX;
    w_body =  (tomatrix(twist_body(4:6)));
    AM_body = frame.Inertia*w_body;
    AM_world = T(1:3,1:3)*AM_body;
    
    export_simulation(SymExpression(frame.Inertia),['Inertia_' func_name],EXPO_PATH, {X}, TEMPLATE_PATH);
    export_simulation(AM_body,['AMBody_' func_name],EXPO_PATH, {X,dX}, TEMPLATE_PATH);
    export_simulation(AM_world,['AMWorld_' func_name],EXPO_PATH, {X,dX}, TEMPLATE_PATH);
end

end

