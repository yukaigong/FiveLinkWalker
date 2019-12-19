function [TorsoCoordinate,LeftLegCoordinate, RightLegCoordinate] = GetFLWPlotCoordinate(x,t)
q = x(1:7);
P_Head = p_Head(q);
P_LeftHip = p_LeftHip(q);
P_LeftKnee = p_LeftKnee(q);
P_LeftToe = p_LeftToe(q);
P_RightHip = p_RightHip(q);
P_RightKnee = p_RightKnee(q);
P_RightToe = p_RightToe(q);

%plot torso

TorsoCoordinate = [P_Head,P_LeftHip];

% plot left leg
LeftLegCoordinate = [P_LeftHip,P_LeftKnee,P_LeftToe];

% plot right leg
RightLegCoordinate = [P_RightHip,P_RightKnee,P_RightToe];


end

