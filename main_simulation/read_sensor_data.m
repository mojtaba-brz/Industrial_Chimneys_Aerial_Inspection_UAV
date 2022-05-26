function Sensor_err = read_sensor_data()

[data, ~, raw_data] = xlsread("D:/MS_Control_Project/Simulation/Required Data/Sensors_Specs.xlsx");

Sensor_err.gx.bias      = data(1,1);
Sensor_err.gx.noise_Amp = data(1,2);
if(~isnan(data(1,3)))
    Sensor_err.gx.freqs = data(1,3);
else
    Sensor_err.gx.freqs     = str2doubleVector(raw_data(2,4));
end

Sensor_err.gy.bias      = data(2,1);
Sensor_err.gy.noise_Amp = data(2,2);
if(~isnan(data(1,3)))
    Sensor_err.gy.freqs = data(2,3);
else
    Sensor_err.gy.freqs     = str2doubleVector(raw_data(3,4));
end

Sensor_err.gz.bias      = data(3,1);
Sensor_err.gz.noise_Amp = data(3,2);
if(~isnan(data(3,3)))
    Sensor_err.gz.freqs = data(3,3);
else
    Sensor_err.gz.freqs = str2doubleVector(raw_data(4,4));
end


Sensor_err.ax.bias      = data(6,1);
Sensor_err.ax.noise_Amp = data(6,2);
if(~isnan(data(6,3)))
    Sensor_err.ax.freqs = data(6,3);
else
    Sensor_err.ax.freqs     = str2doubleVector(raw_data(7,4));
end

Sensor_err.ay.bias      = data(7,1);
Sensor_err.ay.noise_Amp = data(7,2);
if(~isnan(data(7,3)))
    Sensor_err.ay.freqs = data(7,3);
else
    Sensor_err.ay.freqs     = str2doubleVector(raw_data(8,4));
end

Sensor_err.az.bias      = data(8,1);
Sensor_err.az.noise_Amp = data(8,2);
if(~isnan(data(7,3)))
    Sensor_err.az.freqs = data(8,3);
else
    Sensor_err.az.freqs     = str2doubleVector(raw_data(9,4));
end

Sensor_err.mag.bias      = data(10,1);
Sensor_err.mag.noise_Amp = data(10,2);
if(~isnan(data(7,3)))
    Sensor_err.mag.freqs = data(10,3);
else
    Sensor_err.mag.freqs     = str2doubleVector(raw_data(11,4));
end

Sensor_err.rx.bias      = data(13,1);
Sensor_err.rx.noise_Amp = data(13,2);
if(~isnan(data(13,3)))
    Sensor_err.rx.freqs = data(13,3);
else
    Sensor_err.rx.freqs     = str2doubleVector(raw_data(14,4));
end

Sensor_err.ry.bias      = data(14,1);
Sensor_err.ry.noise_Amp = data(14,2);
if(~isnan(data(14,3)))
    Sensor_err.ry.freqs = data(14,3);
else
    Sensor_err.ry.freqs     = str2doubleVector(raw_data(15,4));
end

Sensor_err.rz.bias      = data(15,1);
Sensor_err.rz.noise_Amp = data(15,2);
if(~isnan(data(15,3)))
    Sensor_err.rz.freqs = data(15,3);
else
    Sensor_err.rz.freqs     = str2doubleVector(raw_data(15,4));
end

Sensor_err.vel.bias      = data(18:20,1);
Sensor_err.vel.noise_Amp = data(18:20,2);
if(~isnan(data(18,3)))
    Sensor_err.vel.freqs_x   = data(18,3);
else
    Sensor_err.vel.freqs_x   = str2doubleVector(raw_data(19,4));
end
if(~isnan(data(19,3)))
    Sensor_err.vel.freqs_y   = data(19,3);
else
    Sensor_err.vel.freqs_y   = str2doubleVector(raw_data(20,4));
end
if(~isnan(data(20,3)))
    Sensor_err.vel.freqs_z   = data(20,3);
else
    Sensor_err.vel.freqs_z   = str2doubleVector(raw_data(21,4));
end

[data, ~, raw_data] = xlsread("D:/MS_Control_Project/Simulation/Required Data/Sensors_Specs.xlsx", 2);

Sensor_err.gps.bias      = data(1:3,1);
Sensor_err.gps.noise_Amp = data(1:3,2);
if(length(data(1,:))>3 && ~isnan(data(1,3)))
    Sensor_err.gps.freqs_x   = data(1,3);
else
    Sensor_err.gps.freqs_x   = str2doubleVector(raw_data(2,4));
end
if(length(data(1,:))>3 && ~isnan(data(2,3)))
    Sensor_err.gps.freqs_y   = data(2,3);
else
    Sensor_err.gps.freqs_y   = str2doubleVector(raw_data(3,4));
end
if(length(data(1,:))>3 && ~isnan(data(3,3)))
    Sensor_err.gps.freqs_z   = data(3,3);
else
    Sensor_err.gps.freqs_z   = str2doubleVector(raw_data(4,4));
end
Sensor_err.gps.filt      = data(6:8,1);

[data, ~, raw_data] = xlsread("D:/MS_Control_Project/Simulation/Required Data/Sensors_Specs.xlsx", 3);

Sensor_err.baro.bias      = data(:,1);
Sensor_err.baro.noise_Amp = data(:,2);
if(length(data(1,:))>3 && ~isnan(data(1,3)))
    Sensor_err.baro.freqs   = data(1,3);
else
    Sensor_err.baro.freqs   = str2doubleVector(raw_data(2,4));
end

[data, ~, raw_data] = xlsread("D:/MS_Control_Project/Simulation/Required Data/Sensors_Specs.xlsx", 4);

Sensor_err.ultrasonic.bias      = data(1,1);
Sensor_err.ultrasonic.noise_Amp = data(1,2);
if(length(data(1,:))>3 && ~isnan(data(1,3)))
    Sensor_err.ultrasonic.freqs   = data(1,3);
else
    Sensor_err.ultrasonic.freqs   = str2doubleVector(raw_data(2,4));
end
Sensor_err.ultrasonic.sup_range   = data(3,:);
end


function num = str2doubleVector(raw_data)
    raw_data = raw_data{1};
    raw_data = raw_data(2:2:end-1);
    num = zeros(1,length(raw_data));
    for i = 1:length(raw_data)
        num(i) = str2double(raw_data(i));
    end
end
