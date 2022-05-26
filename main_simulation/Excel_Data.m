function params = Excel_Data()

% Inertia Data
data = xlsread("..\Required Data\Data.xlsx",1);

params.M      = data(1,1);         % Kg
params.I      = data(2:4,1:3);     % Kg*m^2
params.d_cg_b = data(5, :);        % m


% Initial Condition
data = xlsread("..\Required Data\Data.xlsx",2);

params.pos0  = data(1, :);
params.vel0  = data(2, :);
params.Eul0  = data(3, :) * pi*180;
params.Avel0 = data(4, :) * pi*180;


% Motor Positions
params.d_motor = xlsread("..\Required Data\Data.xlsx",3);

% Motor Thrust and Torque 
data = xlsread("..\Required Data\Data.xlsx",4);

params.K_T = zeros(8, 1);
params.K_T_bias = zeros(8, 1);
params.K_T_Var_Error = zeros(8, 1);
for i = 1: 8
    params.K_T(i)           = data(i,1);
    params.K_T_bias(i)      = data(i,2);
    params.K_T_Var_Error(i) = data(i,3);
end


data = xlsread("..\Required Data\Data.xlsx",5);

params.K_M = zeros(8, 1);
params.K_M_bias = zeros(8, 1);
params.K_M_Var_Error = zeros(8, 1);
for i = 1: 8
    params.K_M(i)           = data(i,1);
    params.K_M_bias(i)      = data(i,2);
    params.K_M_Var_Error(i) = data(i,3);
end

% ------------------ Robotic Arm Data -----------------------------------
% Arm Length
data = xlsread("..\Required Data\Data.xlsx",6);

params.d_a0_b      = data(1, :)';
params.d_a1_a0     = data(2, :)';
params.d_a2_a1     = data(3, :)';
params.d_w1_a2     = data(4, :)';
params.d_w2_w1     = data(5, :)';
params.d_w3_w2     = data(6, :)';
params.d_probe_w3  = data(7, :)';


% Arms Initial position
data = xlsread("..\Required Data\Data.xlsx",7);

params.psi_a0_0     = data(1);
params.psi_a1_0     = data(2);
params.psi_a2_0     = data(3);
params.psi_w1_0     = data(4);
params.psi_w2_0     = data(5);
params.psi_23_0     = data(6);

% -----------------------------------------------------------------------


% Environment Data

params.g = 9.81;





end