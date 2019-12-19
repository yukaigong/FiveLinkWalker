classdef FLW_GenModel < RobotLinks
    
    properties
        ContactPoints = struct;
        OtherPoints = struct;
    end
    
    methods
        
        function obj = FLW_GenModel(urdf)
            
            % Floating base model
            base = get_base_dofs('planar');
             
            % load model from the URDF file
%             obj = obj@RobotLinks(urdf, base);
            config = struct();
            config_file = GetFullPath(urdf);
            [config.name, config.links, config.joints, config.transmissions] = ros_load_urdf(config_file);
            obj = obj@RobotLinks(config, base, []);            
            %% define contact frames
            Rz = @(th) [cos(th), -sin(th), 0; sin(th), cos(th), 0; 0,0,1];
            Ry = @(th) [cos(th), 0, sin(th); 0, 1, 0; -sin(th), 0, cos(th)];
            Rx = @(th) [1,0,0; 0, cos(th), -sin(th); 0, sin(th), cos(th)];
            
            % Head
            hip_frame = obj.Joints(3);
            obj.ContactPoints.Head = CoordinateFrame(...
                'Name','Head',...
                'Reference',hip_frame,...
                'Offset',[0,0,0.5],...
                'R',eye(3)...
                );
                
            
            % Bottom of toe
            l_foot_frame = obj.Joints(getJointIndices(obj, 'LeftKnee'));
            obj.ContactPoints.LeftToe = CoordinateFrame(...
                'Name','LeftToe',...
                'Reference',l_foot_frame,...
                'Offset',[0,0,-0.4],...
                'R',eye(3)... 
                );
            
            r_foot_frame = obj.Joints(getJointIndices(obj, 'RightKnee'));
            obj.ContactPoints.RightToe = CoordinateFrame(...
                'Name','RightToe',...
                'Reference',r_foot_frame,...
                'Offset',[0,0,-0.4],...
                'R',eye(3)... 
                );

            
        end
    end
end