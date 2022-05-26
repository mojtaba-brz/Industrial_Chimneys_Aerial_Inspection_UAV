function x_dot = Simple_OctaRotor_Model(t, x, params, Controller_Type)

% parameter definition
m       = params.M;         % Mass of OctoRotor [Kg]
I       = params.I;         % Moment of Inertia [Kg*m^2]
g       = [0;0;params.g];   % Gravity vector in LocalLevel [m/s^2]
d_cg_b  = params.d_cg_b';   % d_cg_b in body coordinate sys
D_cg_b  = skew(d_cg_b);     % skewSymetry of d_cg_b

d_motor = params.d_motor;   % position of each motor in body coordinate sys
K_T     = params.K_T;       % Vector of Motors thrust coef
K_M     = params.K_M;       % Vector of Motors Torque coef

phi   = x(10);              % Euler Angle  (phi)
theta = x(11);              % Euler Angle  (theta)
psi   = x(12);              % Euler Angle  (psi)

w = x(7:9);                 % w = [p q r]
W = skew(w);                % skew symmetric of w

% Transformation Matrix 
T_bl = [1 0 0;0 cos(phi) sin(phi);0 -sin(phi) cos(phi)]*...
       [cos(theta) 0 -sin(theta); 0 1 0; sin(theta) 0 cos(theta)]*...
       [cos(psi) sin(psi) 0; -sin(psi) cos(psi) 0;0 0 1];

% A * x_dot = F(x,t,u)
A    = [m*eye(3) m*T_bl'*(D_cg_b'); m*D_cg_b*T_bl I+m*(D_cg_b')*D_cg_b];


% -------------------------------------------------------------------------
% Controller and Actuators   ----------------------------------------------

u        = Controller_Function(t, x, params, Controller_Type);% Motors speed
F_thrust = u(1:3);
M_props  = u(4:end);

% End of Cotroller and Actuators ------------------------------------------
% -------------------------------------------------------------------------


% this line is used to calculate the position of octorotor
x_dot(1:3)   = x(4:6);

% Euler Angles cinematics
x_dot(10:12) = [1 0 -sin(theta); 0 cos(phi) sin(phi)*cos(theta); 0 -sin(phi) cos(phi)*cos(theta)]^-1*w;

% x_dot = A^-1*F(t,x,u)
x_dot(4:9)  = A^-1*[(T_bl')*F_thrust+m*g-m*(T_bl')*(W*(W*d_cg_b));
              M_props-m*D_cg_b*(W*(W*d_cg_b))-W*I*w+m*D_cg_b*(T_bl*g)] ;


% making x_dot a column vector for ode45 requirements
x_dot = x_dot'; 





end