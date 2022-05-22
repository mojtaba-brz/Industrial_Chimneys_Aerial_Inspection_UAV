function u = Controller_Function(t, x, params, Type)

% this is a controller function for simulations in my MS Project
% as you can see there is alot of Controlling types in this function
% Type description is as follow :

% Type = 1 : Controller of Scenario 1
% Type = 2 : Controller of Scenario 2
% Type = 3 : Controller of Scenario 3
% Type = 4 : Controller of Scenario 4



switch Type
    case 1
        u = zeros(4,1);
    case 2
        u = scenario_2_controller(t, x, params);
    case 3
        u = scenario_3_controller(t, x, params);
end


end

% End of Main Controller Funcion



% -----------------------------------------------------------------------
% ------------ Type = 2 : Controller of Scenario 2 ----------------------
% -----------------------------------------------------------------------
function u = scenario_2_controller(t, x, params)
    
    m       = params.M;
    d_cg_b  = params.d_cg_b;
    D_cg_b  = skew(d_cg_b);
    
    f = [0;0;-m*1]; 
    
    u   = [f               % z_body Force
           D_cg_b*f];      % Moment
    u = u.*(t>=1 & t<2);
    
end



% -----------------------------------------------------------------------
% ------------ Type = 3 : Controller of Scenario 3 ----------------------
% -----------------------------------------------------------------------
function u = scenario_3_controller(t, x, params)
    
    m       = params.M;
    d_cg_b  = params.d_cg_b';
    D_cg_b  = skew(d_cg_b);
    I       = params.I; 
    w       = x(7:9);
    W       = skew(w);
    
    
    a   = [zeros(size(t))
           zeros(size(t))
          -(t>=3&&t<4)+(t>=4&&t<6)-(t>=6&&t<7)-...
          (t>=11&&t<12)+(t>=12&&t<14)-(t>=14&&t<15)];
           
           
    M   = [(t>=1&&t<2 || t>=8&&t<9)-(t>=2&&t<3 || t>=7&&t<8);
           (t>=9&&t<10 || t>=16&&t<17)-(t>=10&&t<11 || t>=15&&t<16);
           (t>=17&&t<18 || t>=20&&t<21)-(t>=18&&t<20)];
    
    f   = a - D_cg_b*M + W*W*d_cg_b;
    
    u   = [m*f                                       % Force
           (m*D_cg_b*a+(I + m*(D_cg_b')*D_cg_b)*M+...
            W*I*w +m*D_cg_b*W*W*d_cg_b)];            % Moment
    
end





