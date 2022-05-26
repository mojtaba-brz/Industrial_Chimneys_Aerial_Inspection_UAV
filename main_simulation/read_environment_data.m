function env = read_environment_data()

data = xlsread("D:/MS_Control_Project/Simulation/Required Data/Environment Data.xlsx");

env.flange1_1.pos         = data(1,:);
env.flange1_1.rot         = data(2,:);
env.flange1_1.springer    = data(3,1);
env.flange1_1.damper      = data(4,1);
env.flange1_1.scale       = data(5,:);
env.flange1_1.cap_pos_ue4 = data(6,:);
env.flange1_1.pos_ue4     = env.flange1_1.pos;

env.flange1_2.pos         = data(8,:);
env.flange1_2.rot         = data(9,:);
env.flange1_2.springer    = data(10,1);
env.flange1_2.damper      = data(11,1);
env.flange1_2.scale       = data(12,:);
env.flange1_2.cap_pos_ue4 = data(13,:);
env.flange1_2.pos_ue4     = env.flange1_1.pos;

env.flange2_1.pos         = data(16,:);
env.flange2_1.rot         = data(17,:);
env.flange2_1.springer    = data(18,1);
env.flange2_1.damper      = data(19,1);
env.flange2_1.scale       = data(20,:);
env.flange2_1.cap_pos_ue4 = data(21,:);
env.flange2_1.pos_ue4     = env.flange1_1.pos;

env.flange2_2.pos         = data(23,:);
env.flange2_2.rot         = data(24,:);
env.flange2_2.springer    = data(25,1);
env.flange2_2.damper      = data(26,1);
env.flange2_2.scale       = data(27,:);
env.flange2_2.cap_pos_ue4 = data(28,:);
env.flange2_2.pos_ue4     = env.flange1_1.pos;

env.flange2_3.pos         = data(30,:);
env.flange2_3.rot         = data(31,:);
env.flange2_3.springer    = data(32,1);
env.flange2_3.damper      = data(33,1);
env.flange2_3.scale       = data(34,:);
env.flange2_3.cap_pos_ue4 = data(35,:);
env.flange2_3.pos_ue4     = env.flange1_1.pos;

% =========================================================================
data = xlsread("D:/MS_Control_Project/Simulation/Required Data/Environment Data.xlsx",2);

env.chimney1_1.pos  = data(1,:);
env.chimney1_1.r    = data(2,1);
env.chimney1_1.h    = data(3,1);

env.chimney1_2.pos  = data(5,:);
env.chimney1_2.r    = data(6,1);
env.chimney1_2.h    = data(7,1);

env.chimney2_1.pos  = data(10,:);
env.chimney2_1.r    = data(11,1);
env.chimney2_1.h    = data(12,1);

env.chimney2_2.pos  = data(14,:);
env.chimney2_2.r    = data(15,1);
env.chimney2_2.h    = data(16,1);

env.chimney2_3.pos  = data(18,:);
env.chimney2_3.r    = data(19,1);
env.chimney2_3.h    = data(20,1);

end