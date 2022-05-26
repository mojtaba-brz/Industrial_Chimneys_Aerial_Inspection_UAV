clc;clear;close all

L1 = 2;
L2 = 1.2;
L0 = -1;
dt = 0.02;

x_path = @(t) 1+sin(t*4)/2;
y_path = @(t) 1+cos(t*4)/2;
z_path = @(t) 0.2 + sin(t*5)/2;

for t = 0:dt:10
    
    xd = x_path(t);
    yd = y_path(t);
    zd = z_path(t);
    
    rd = norm([xd yd]);
    hd = (zd - L0);
    
    t0 = atan2(yd, xd);
    t2 = acos( (rd^2+hd^2-L1^2-L2^2)/2/L1/L2 );
    t1 = atan2(hd, rd) - atan2(L2*sin(t2), L1+L2*cos(t2));
    
    x = [0 0  L1*cos(t1) L1*cos(t1)+L2*cos(t2 + t1)]*cos(t0);
    y = [0 0  L1*cos(t1) L1*cos(t1)+L2*cos(t2 + t1)]*sin(t0);
    z = [0 L0 L0+L1*sin(t1) L0+L1*sin(t1)+L2*sin(t2 + t1)];
    
    
    plot3(x, y, z, 'o', "MarkerSize", 10)
    hold on
    plot3(xd, yd, zd, '*', "MarkerSize", 20)
    plot3(x, y, z, "LineWidth", 3)
    xlabel("X");
    ylabel("Y");
    zlabel("Z");
    
    hold off
    axis equal
    xlim([0 3])
    ylim([0 2])
    zlim([-3 2])
    pause(dt)
end




