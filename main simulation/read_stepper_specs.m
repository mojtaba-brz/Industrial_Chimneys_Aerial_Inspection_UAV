function sepper_specs = read_stepper_specs()

data = xlsread("D:/MS_Control_Project/Simulation/Required Data/Stepper_Specs.xlsx");

sepper_specs.wn  = data(1,2);
sepper_specs.zeta = data(1,1);

end


