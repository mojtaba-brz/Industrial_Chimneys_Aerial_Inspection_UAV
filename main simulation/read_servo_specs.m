function servo_specs = read_servo_specs()

data = xlsread("D:/MS_Control_Project/Simulation/Required Data/Servo_Specs.xlsx");

servo_specs.LowTorque_servo.wn  = data(1,1);
servo_specs.LowTorque_servo.zeta = data(1,2);

servo_specs.MedTorque_servo.wn  = data(2,1);
servo_specs.MedTorque_servo.zeta = data(2,2);

servo_specs.HighTorque_servo.wn  = data(3,1);
servo_specs.HighTorque_servo.zeta = data(3,2);

end


