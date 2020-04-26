function GetAngularMomentum_terms(FLW,EXPO_PATH,TEMPLATE_PATH,X,dX)
pA = SymVariable('p',[3,1]);
Jq_pA = SymVariable('jqp',[3,7]);
Jdq_pA = SymVariable('jdqp',[3,7]);
% get terms relatedf to total angular momentum
AMworld_about_pA = SymExpression(zeros(3,1));

for i = 1:length(FLW.Links)
    frame = FLW.Links(i);
    p = frame.computeCartesianPosition;
    J_p = jacobian(p,X);
    Jb = frame.computeBodyJacobian(length(X));
    T = frame.computeForwardKinematics;
    
    v = J_p*dX;
    
    twist_body = Jb*dX;
    w_body =  (tomatrix(twist_body(4:6)));
    AMbody = frame.Inertia*w_body;
    AMworld = T(1:3,1:3)*AMbody;
    
    AMworld_about_pA = AMworld_about_pA + AMworld + frame.Mass*cross(p-pA,v);
end

Jq_AMworld_about_pA = jacobian(AMworld_about_pA,X) ;
Jdq_AMworld_about_pA = jacobian(AMworld_about_pA,dX);

Jq_linear = SymExpression(zeros(3,7));
Jdq_linear = SymExpression(zeros(3,7));
for i = 1:length(X)
    Jq_linear(:,i) = frame.Mass*cross(-Jq_pA(:,i),v);
    Jdq_linear(:,i) = frame.Mass*cross(-Jdq_pA(:,i),v);
end
Jq_AMworld_about_pA = Jq_AMworld_about_pA + Jq_linear;
Jdq_AMworld_about_pA = Jdq_AMworld_about_pA + Jdq_linear;

export_simulation(AMworld_about_pA,'AMworld_about_pA',EXPO_PATH, {X,dX,pA}, TEMPLATE_PATH);
export_simulation(Jq_AMworld_about_pA,'Jq_AMworld_about_pA',EXPO_PATH, {X,dX,pA,Jq_pA}, TEMPLATE_PATH);
export_simulation(Jdq_AMworld_about_pA,'Jdq_AMworld_about_pA',EXPO_PATH, {X,dX,pA,Jdq_pA}, TEMPLATE_PATH);

% notice: Angular Momentum = f(q)*dq;