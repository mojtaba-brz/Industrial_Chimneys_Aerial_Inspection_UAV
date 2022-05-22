clc;clear; close all

% ----------------------------------------------------------------------
% don't forget to set initial conditions first
% ----------------------------------------------------------------------


params = Excel_Data;   % read parameters from Excel Data File and save it in params

params.g = 0;          % gravity is set to zero for scenario 3

initial_conditions = [params.pos0 params.vel0 params.Avel0 params.Eul0];

Controller_Type = 3;   % Scenario 3

% simulation using ode solver function
opts = odeset("MaxStep", 0.001, "RelTol", 1e-15);
sol = ode45(@(t,x) Simple_OctaRotor_Model(t, x, params, Controller_Type),...
                   [0 25], initial_conditions, opts);
          

               
% Time of Simulation               
t = sol.x;

% control inputs
u = zeros(6,length(t));
for i = 1:length(t)
    u(:,i) = Controller_Function(t(i), sol.y(:,i), params, Controller_Type);
end


% Simulation Outputs

% Position
x = sol.y(1,:);
y = sol.y(2,:);
z = sol.y(3,:);

%Velocity
Vx = sol.y(4,:);
Vy = sol.y(5,:);
Vz = sol.y(6,:);

% Angular Velocity
p = sol.y(7,:) * 180/pi;
q = sol.y(8,:) * 180/pi;
r = sol.y(9,:) * 180/pi;

% Euler Angles
phi   = sol.y(10,:) * 180/pi;
theta = sol.y(11,:) * 180/pi;
psi   = sol.y(12,:) * 180/pi;


%%
% -------------------------------------------------------------
% ---------------------------  Plot  --------------------------
% -------------------------------------------------------------
% Position and Velocity in a 2*3 Figure

% Position
subplot(2,3, 1)
plot(t, x, "LineWidth", 2)
xlabel("time [s]")
ylabel("X_b [m]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(x)*1.2*(min(x) < -0.2)-1 max(x)*1.1*(max(x) > .3)+1])
subplot(2,3, 2)
plot(t, y, "LineWidth", 2)
xlabel("time [s]")
ylabel("Y_b [m]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(y)*1.2*(min(y) < -0.2)-1 max(y)*1.1*(max(y) > .3)+1])
subplot(2,3, 3)
plot(t, z, "LineWidth", 2)
xlabel("time [s]")
ylabel("Z_b [m]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(z)*1.2*(min(z) < -0.2)-1 max(z)*1.1*(max(z) > .3)+1])

% Velocity
subplot(2,3, 4)
plot(t, Vx, "LineWidth", 2)
xlabel("time [s]")
ylabel("V_X _b [m/s]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(Vx)*1.2*(min(Vx) < -0.2)-1 max(Vx)*1.1*(max(Vx) > .3)+1])
subplot(2,3, 5)
plot(t, Vy, "LineWidth", 2)
xlabel("time [s]")
ylabel("V_Y _b [m/s]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(Vy)*1.2*(min(Vy) < -0.2)-1 max(Vy)*1.1*(max(Vy) > .3)+1])
subplot(2,3, 6)
plot(t, Vz, "LineWidth", 2)
xlabel("time [s]")
ylabel("V_Z _b [m/s]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(Vz)*1.2*(min(Vz) < -0.2)-1 max(Vz)*1.1*(max(Vz) > .3)+1])

% -------------------------------------------------------------
% Angular velocity and euler angles in a 2*3 Figure
figure
% Angular velocity
subplot(2,3, 1)
plot(t, p, "LineWidth", 2)
xlabel("time [s]")
ylabel("p [deg/s]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(p)*1.2*(min(p) < -0.2)-1 max(p)*1.1*(max(p) > .3)+1])
subplot(2,3, 2)
plot(t, q, "LineWidth", 2)
xlabel("time [s]")
ylabel("q [deg/s]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(q)*1.2*(min(q) < -0.2)-1 max(q)*1.1*(max(q) > .3)+1])
subplot(2,3, 3)
plot(t, r, "LineWidth", 2)
xlabel("time [s]")
ylabel("r [deg/s]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(r)*1.2*(min(r) < -0.2)-1 max(r)*1.1*(max(r) > .3)+1])

% Euler Angles
subplot(2,3, 4)
plot(t, phi, "LineWidth", 2)
xlabel("time [s]")
ylabel("\phi [deg]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(phi)*1.2*(min(phi) < -0.2)-1 max(phi)*1.1*(max(phi) > .3)+1])
subplot(2,3, 5)
plot(t, theta, "LineWidth", 2)
xlabel("time [s]")
ylabel("\theta [deg]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(theta)*1.2*(min(theta) < -0.2)-1 max(theta)*1.1*(max(theta) > .3)+1])
subplot(2,3, 6)
plot(t, psi, "LineWidth", 2)
xlabel("time [s]")
ylabel("\psi [deg]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(psi)*1.2*(min(psi) < -0.2)-1 max(psi)*1.1*(max(psi) > .3)+1])

% -------------------------------------------------------------
% Controll inputs as z_force and Moments in a 2*3 figure
figure
subplot(2,3, 1)
plot(t, u(1,:), "LineWidth", 2)
xlabel("time [s]")
ylabel("Thrust_x [N]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(u(1,:))*1.2*(min(u(1,:)) < -0.2)-1 max(u(1,:))*1.1*(max(u(1,:)) > .3)+1])
subplot(2,3, 2)
plot(t, u(2,:), "LineWidth", 2)
xlabel("time [s]")
ylabel("Thrust_y [N]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(u(2,:))*1.2*(min(u(2,:)) < -0.2)-1 max(u(2,:))*1.1*(max(u(2,:)) > .3)+1])
subplot(2,3, 3)
plot(t, u(3,:), "LineWidth", 2)
xlabel("time [s]")
ylabel("Thrust_z [N]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(u(3,:))*1.2*(min(u(3,:)) < -0.2)-1 max(u(3,:))*1.1*(max(u(3,:)) > .3)+1])

subplot(2,3, 4)
plot(t, u(4,:), "LineWidth", 2)
xlabel("time [s]")
ylabel("Roll Moment [N*m]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(u(4,:))*1.2*(min(u(4,:)) < -0.2)-1 max(u(4,:))*1.1*(max(u(4,:)) > .3)+1])
subplot(2,3, 5)
plot(t, u(5,:), "LineWidth", 2)
xlabel("time [s]")
ylabel("Pitch Moment [N*m]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(u(5,:))*1.2*(min(u(5,:)) < -0.2)-1 max(u(5,:))*1.1*(max(u(5,:)) > .3)+1])
subplot(2,3, 6)
plot(t, u(6,:), "LineWidth", 2)
xlabel("time [s]")
ylabel("Yaw Moment [N*m]")
grid on
ax = gca;
ax.XTick = 0:25;
ylim([min(u(6,:))*1.2*(min(u(6,:)) < -0.2)-1 max(u(6,:))*1.1*(max(u(6,:)) > .3)+1])

