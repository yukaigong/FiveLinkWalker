function [ output_args ] = Total_Angular_Momentum_About_A_Point( robot, p_ref, v_ref, EXPO_PATH,TEMPLATE_PATH,X,dX)

AMworld_total = 0;
for i = 1:length(robot.Links)
    frame = robot.Links(i);
    p = frame.computeCartesianPosition;
    J_p = jacobian(p,X);
    Jb = frame.computeBodyJacobian(length(X));
    dJb = MatrixTimeDerivative(Jb,X,dX);
    T = frame.computeForwardKinematics;

    twist_body = Jb*dX;
    w_body =  (tomatrix(twist_body(4:6)));
    AMbody = frame.Inertia*w_body;
    AMworld = T(1:3,1:3)*AMbody;
    
    AMworld_total = 

end

