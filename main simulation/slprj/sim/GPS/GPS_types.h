#ifndef RTW_HEADER_GPS_types_h_
#define RTW_HEADER_GPS_types_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_uJg9XNv2KLvy1ZDH1yzh1D_
#define DEFINED_TYPEDEF_FOR_struct_uJg9XNv2KLvy1ZDH1yzh1D_
typedef struct { real_T bias ; real_T noise_Amp ; real_T freqs [ 3 ] ; }
struct_uJg9XNv2KLvy1ZDH1yzh1D ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_UNu12Tv2Iby3Uw99FT8N1G_
#define DEFINED_TYPEDEF_FOR_struct_UNu12Tv2Iby3Uw99FT8N1G_
typedef struct { real_T bias [ 3 ] ; real_T noise_Amp [ 3 ] ; real_T freqs_x
[ 3 ] ; real_T freqs_y ; real_T freqs_z ; } struct_UNu12Tv2Iby3Uw99FT8N1G ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_PZr7p0tHpZ4GP4RNH1tZGE_
#define DEFINED_TYPEDEF_FOR_struct_PZr7p0tHpZ4GP4RNH1tZGE_
typedef struct { real_T bias [ 3 ] ; real_T noise_Amp [ 3 ] ; real_T freqs_x
[ 3 ] ; real_T freqs_y [ 3 ] ; real_T freqs_z [ 3 ] ; real_T filt [ 3 ] ; }
struct_PZr7p0tHpZ4GP4RNH1tZGE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_gCex0a17vv9fsVTjMsD48G_
#define DEFINED_TYPEDEF_FOR_struct_gCex0a17vv9fsVTjMsD48G_
typedef struct { real_T bias ; real_T noise_Amp ; real_T freqs [ 3 ] ; real_T
sup_range [ 2 ] ; } struct_gCex0a17vv9fsVTjMsD48G ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_PkDIdrnMaBXirtyxpDXw6E_
#define DEFINED_TYPEDEF_FOR_struct_PkDIdrnMaBXirtyxpDXw6E_
typedef struct { struct_uJg9XNv2KLvy1ZDH1yzh1D gx ;
struct_uJg9XNv2KLvy1ZDH1yzh1D gy ; struct_uJg9XNv2KLvy1ZDH1yzh1D gz ;
struct_uJg9XNv2KLvy1ZDH1yzh1D ax ; struct_uJg9XNv2KLvy1ZDH1yzh1D ay ;
struct_uJg9XNv2KLvy1ZDH1yzh1D az ; struct_uJg9XNv2KLvy1ZDH1yzh1D mag ;
struct_uJg9XNv2KLvy1ZDH1yzh1D rx ; struct_uJg9XNv2KLvy1ZDH1yzh1D ry ;
struct_uJg9XNv2KLvy1ZDH1yzh1D rz ; struct_UNu12Tv2Iby3Uw99FT8N1G vel ;
struct_PZr7p0tHpZ4GP4RNH1tZGE gps ; struct_uJg9XNv2KLvy1ZDH1yzh1D baro ;
struct_gCex0a17vv9fsVTjMsD48G ultrasonic ; } struct_PkDIdrnMaBXirtyxpDXw6E ;
#endif
typedef struct jurzb4em5mk_ jurzb4em5mk ; typedef struct jqhudbv0jn
l32kai3xfz ;
#endif
