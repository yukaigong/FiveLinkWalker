function LA_whole = getFLWAngularMomentum(p_A,x)
% get the angular momentum of five link walker about reference point A
q = x(1:7);
dq = x(8:14);

% angular momentum about link com
L_torso = AMWorld_Torso(q,dq);
L_leftthigh = AMWorld_LeftThigh(q,dq);
L_leftshin = AMWorld_LeftShin(q,dq);
L_rightthigh= AMWorld_RightThigh(q,dq);
L_rightshin = AMWorld_RightShin(q,dq);

% position of link com
p_torso = p_Torso(q);
p_leftthigh = p_LeftThigh(q);
p_leftshin = p_LeftShin(q);
p_rightthigh = p_RightThigh(q);
p_rightshin = p_RightShin(q);

% velocity of link com
v_torso = Jp_Torso(q)*dq;
v_leftthigh = Jp_LeftThigh(q)*dq;
v_leftshin = Jp_LeftShin(q)*dq;
v_rightthigh = Jp_RightThigh(q)*dq;
v_rightshin = Jp_RightShin(q)*dq;

LA_torso = getAngularMomentum(p_A,p_torso,v_torso,L_torso,12);
LA_leftthigh = getAngularMomentum(p_A,p_leftthigh,v_leftthigh,L_leftthigh,6.8);
LA_leftshin = getAngularMomentum(p_A,p_leftshin,v_leftshin,L_leftshin,3.2);
LA_rightthigh = getAngularMomentum(p_A,p_rightthigh,v_rightthigh,L_rightthigh,6.8);
LA_rightshin = getAngularMomentum(p_A,p_rightshin,v_rightshin,L_rightshin,3.2);

LA_whole = LA_torso + LA_leftthigh + LA_leftshin + LA_rightthigh + LA_rightshin;

end

