clc;clear;close all

Tab = readtable("P60 KV170 22-6.6CF.xlsx");

w = Tab.RPM /60 * 2 * pi;
T = Tab.Thrust_G_;
M = Tab.Torque_N_m_;

K_T = (w.^2'*w.^2)^-1*(w.^2')*T;
K_M = (w.^2'*w.^2)^-1*(w.^2')*M;


figure
plot(w , M, 'o')
hold on
plot(w, K_M * w.^2)
title("Moment")

figure
plot(w , T, 'o')
hold on
plot(w, K_T * w.^2)
title("Thrust")




