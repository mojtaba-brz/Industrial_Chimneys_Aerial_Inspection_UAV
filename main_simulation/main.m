clc;clear; close all

% ----------------------------------------------------------------------
% don't forget to set initial conditions first
% ----------------------------------------------------------------------


Selected_Env = 1;      % Environment Selector Variable in UE4 Simulation Block

params = Excel_Data;   % reads parameters from Excel Data File and save it in params

servo_specs = read_servo_specs;   % reads servos parameters from Excel Data File and save it in servo_specs

stepper = read_stepper_specs;     % reads stepper parameters from Excel Data File and save it in stepper

Motor_data = read_Motor_data;     % reads Motor parameters from Excel Data File and save it in Motor_data

Tm = 0.025;                       % Motors and Propellers Time Constant

Sensor_err = read_sensor_data;    % reads Sensor Error parameters from Excel Data File and save it in Sensor_err
Sensor_err_bus_info = Simulink.Bus.createObject(Sensor_err);
Sensor_err_bus = evalin('base', Sensor_err_bus_info.busName);

env = read_environment_data;      % reads environment_data from Excel Data File and save it in env
env_bus_info = Simulink.Bus.createObject(env);
env_bus = evalin('base', env_bus_info.busName);


