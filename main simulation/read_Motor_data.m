function Motor_data = read_Motor_data()


data = xlsread("D:/MS_Control_Project/Simulation/Required Data/P60 KV170 22-6.6CF.xlsx");

Motor_data.RPM      = data(:,8);           % RPM
Motor_data.Torque   = data(:,6);           % N.m
Motor_data.Thrust   = data(:,7)*9.81e-3;   % N
Motor_data.Current  = data(:,4);           % A
Motor_data.Throttle = data(:,3);           % [0 1] scaled

end

