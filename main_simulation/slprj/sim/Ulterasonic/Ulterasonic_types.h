#ifndef RTW_HEADER_Ulterasonic_types_h_
#define RTW_HEADER_Ulterasonic_types_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_flange1_1_
#define DEFINED_TYPEDEF_FOR_flange1_1_
typedef struct { real_T pos [ 3 ] ; real_T rot [ 3 ] ; real_T springer ;
real_T damper ; real_T scale [ 3 ] ; real_T cap_pos_ue4 [ 3 ] ; real_T
pos_ue4 [ 3 ] ; } flange1_1 ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_flange1_2_
#define DEFINED_TYPEDEF_FOR_flange1_2_
typedef struct { real_T pos [ 3 ] ; real_T rot [ 3 ] ; real_T springer ;
real_T damper ; real_T scale [ 3 ] ; real_T cap_pos_ue4 [ 3 ] ; real_T
pos_ue4 [ 3 ] ; } flange1_2 ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_flange2_1_
#define DEFINED_TYPEDEF_FOR_flange2_1_
typedef struct { real_T pos [ 3 ] ; real_T rot [ 3 ] ; real_T springer ;
real_T damper ; real_T scale [ 3 ] ; real_T cap_pos_ue4 [ 3 ] ; real_T
pos_ue4 [ 3 ] ; } flange2_1 ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_flange2_2_
#define DEFINED_TYPEDEF_FOR_flange2_2_
typedef struct { real_T pos [ 3 ] ; real_T rot [ 3 ] ; real_T springer ;
real_T damper ; real_T scale [ 3 ] ; real_T cap_pos_ue4 [ 3 ] ; real_T
pos_ue4 [ 3 ] ; } flange2_2 ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_flange2_3_
#define DEFINED_TYPEDEF_FOR_flange2_3_
typedef struct { real_T pos [ 3 ] ; real_T rot [ 3 ] ; real_T springer ;
real_T damper ; real_T scale [ 3 ] ; real_T cap_pos_ue4 [ 3 ] ; real_T
pos_ue4 [ 3 ] ; } flange2_3 ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_chimney1_1_
#define DEFINED_TYPEDEF_FOR_chimney1_1_
typedef struct { real_T pos [ 2 ] ; real_T r ; real_T h ; } chimney1_1 ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_chimney1_2_
#define DEFINED_TYPEDEF_FOR_chimney1_2_
typedef struct { real_T pos [ 2 ] ; real_T r ; real_T h ; } chimney1_2 ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_chimney2_1_
#define DEFINED_TYPEDEF_FOR_chimney2_1_
typedef struct { real_T pos [ 2 ] ; real_T r ; real_T h ; } chimney2_1 ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_chimney2_2_
#define DEFINED_TYPEDEF_FOR_chimney2_2_
typedef struct { real_T pos [ 2 ] ; real_T r ; real_T h ; } chimney2_2 ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_chimney2_3_
#define DEFINED_TYPEDEF_FOR_chimney2_3_
typedef struct { real_T pos [ 2 ] ; real_T r ; real_T h ; } chimney2_3 ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_env_bus_
#define DEFINED_TYPEDEF_FOR_env_bus_
typedef struct { flange1_1 flange1_1 ; flange1_2 flange1_2 ; flange2_1
flange2_1 ; flange2_2 flange2_2 ; flange2_3 flange2_3 ; chimney1_1 chimney1_1
; chimney1_2 chimney1_2 ; chimney2_1 chimney2_1 ; chimney2_2 chimney2_2 ;
chimney2_3 chimney2_3 ; } env_bus ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_gx_
#define DEFINED_TYPEDEF_FOR_gx_
typedef struct { real_T bias ; real_T noise_Amp ; real_T freqs [ 3 ] ; } gx ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_gy_
#define DEFINED_TYPEDEF_FOR_gy_
typedef struct { real_T bias ; real_T noise_Amp ; real_T freqs [ 3 ] ; } gy ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_gz_
#define DEFINED_TYPEDEF_FOR_gz_
typedef struct { real_T bias ; real_T noise_Amp ; real_T freqs [ 3 ] ; } gz ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_ax_
#define DEFINED_TYPEDEF_FOR_ax_
typedef struct { real_T bias ; real_T noise_Amp ; real_T freqs [ 3 ] ; } ax ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_ay_
#define DEFINED_TYPEDEF_FOR_ay_
typedef struct { real_T bias ; real_T noise_Amp ; real_T freqs [ 3 ] ; } ay ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_az_
#define DEFINED_TYPEDEF_FOR_az_
typedef struct { real_T bias ; real_T noise_Amp ; real_T freqs [ 3 ] ; } az ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_mag_
#define DEFINED_TYPEDEF_FOR_mag_
typedef struct { real_T bias ; real_T noise_Amp ; real_T freqs [ 3 ] ; } mag
;
#endif
#ifndef DEFINED_TYPEDEF_FOR_rx_
#define DEFINED_TYPEDEF_FOR_rx_
typedef struct { real_T bias ; real_T noise_Amp ; real_T freqs [ 3 ] ; } rx ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_ry_
#define DEFINED_TYPEDEF_FOR_ry_
typedef struct { real_T bias ; real_T noise_Amp ; real_T freqs [ 3 ] ; } ry ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_rz_
#define DEFINED_TYPEDEF_FOR_rz_
typedef struct { real_T bias ; real_T noise_Amp ; real_T freqs [ 3 ] ; } rz ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_vel_
#define DEFINED_TYPEDEF_FOR_vel_
typedef struct { real_T bias [ 3 ] ; real_T noise_Amp [ 3 ] ; real_T freqs_x
[ 3 ] ; real_T freqs_y ; real_T freqs_z ; } vel ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_gps_
#define DEFINED_TYPEDEF_FOR_gps_
typedef struct { real_T bias [ 3 ] ; real_T noise_Amp [ 3 ] ; real_T freqs_x
[ 3 ] ; real_T freqs_y [ 3 ] ; real_T freqs_z [ 3 ] ; real_T filt [ 3 ] ; }
gps ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_baro_
#define DEFINED_TYPEDEF_FOR_baro_
typedef struct { real_T bias ; real_T noise_Amp ; real_T freqs [ 3 ] ; } baro
;
#endif
#ifndef DEFINED_TYPEDEF_FOR_ultrasonic_
#define DEFINED_TYPEDEF_FOR_ultrasonic_
typedef struct { real_T bias ; real_T noise_Amp ; real_T freqs [ 3 ] ; real_T
sup_range [ 2 ] ; } ultrasonic ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_Sensor_err_bus_
#define DEFINED_TYPEDEF_FOR_Sensor_err_bus_
typedef struct { gx gx ; gy gy ; gz gz ; ax ax ; ay ay ; az az ; mag mag ; rx
rx ; ry ry ; rz rz ; vel vel ; gps gps ; baro baro ; ultrasonic ultrasonic ;
} Sensor_err_bus ;
#endif
typedef struct bbmg2sw1cqn_ bbmg2sw1cqn ; typedef struct ekwokhcoht
a2vszynkmk ;
#endif
