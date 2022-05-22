#ifndef RTW_HEADER_Aerial_Inspection_Octa_Rotor_types_h_
#define RTW_HEADER_Aerial_Inspection_Octa_Rotor_types_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_73iqWC83UABBKShbCAzZNG_
#define DEFINED_TYPEDEF_FOR_struct_73iqWC83UABBKShbCAzZNG_
typedef struct { real_T pos [ 3 ] ; real_T rot [ 3 ] ; real_T springer ;
real_T damper ; real_T scale [ 3 ] ; real_T cap_pos_ue4 [ 3 ] ; real_T
pos_ue4 [ 3 ] ; } struct_73iqWC83UABBKShbCAzZNG ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_vVK887imL2KkaadxyFQyoD_
#define DEFINED_TYPEDEF_FOR_struct_vVK887imL2KkaadxyFQyoD_
typedef struct { real_T pos [ 2 ] ; real_T r ; real_T h ; }
struct_vVK887imL2KkaadxyFQyoD ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_Pz6Tj28WhUBpH2SAzHmELH_
#define DEFINED_TYPEDEF_FOR_struct_Pz6Tj28WhUBpH2SAzHmELH_
typedef struct { struct_73iqWC83UABBKShbCAzZNG flange1_1 ;
struct_73iqWC83UABBKShbCAzZNG flange1_2 ; struct_73iqWC83UABBKShbCAzZNG
flange2_1 ; struct_73iqWC83UABBKShbCAzZNG flange2_2 ;
struct_73iqWC83UABBKShbCAzZNG flange2_3 ; struct_vVK887imL2KkaadxyFQyoD
chimney1_1 ; struct_vVK887imL2KkaadxyFQyoD chimney1_2 ;
struct_vVK887imL2KkaadxyFQyoD chimney2_1 ; struct_vVK887imL2KkaadxyFQyoD
chimney2_2 ; struct_vVK887imL2KkaadxyFQyoD chimney2_3 ; }
struct_Pz6Tj28WhUBpH2SAzHmELH ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_csn5FRHOzihLPlj7ahbGIH_
#define DEFINED_TYPEDEF_FOR_struct_csn5FRHOzihLPlj7ahbGIH_
typedef struct { real_T M ; real_T I [ 9 ] ; real_T d_cg_b [ 3 ] ; real_T
pos0 [ 3 ] ; real_T vel0 [ 3 ] ; real_T Eul0 [ 3 ] ; real_T Avel0 [ 3 ] ;
real_T d_motor [ 24 ] ; real_T K_T [ 8 ] ; real_T K_T_bias [ 8 ] ; real_T
K_T_Var_Error [ 8 ] ; real_T K_M [ 8 ] ; real_T K_M_bias [ 8 ] ; real_T
K_M_Var_Error [ 8 ] ; real_T d_a0_b [ 3 ] ; real_T d_a1_a0 [ 3 ] ; real_T
d_a2_a1 [ 3 ] ; real_T d_w1_a2 [ 3 ] ; real_T d_w2_w1 [ 3 ] ; real_T d_w3_w2
[ 3 ] ; real_T d_probe_w3 [ 3 ] ; real_T psi_a0_0 ; real_T psi_a1_0 ; real_T
psi_a2_0 ; real_T psi_w1_0 ; real_T psi_w2_0 ; real_T psi_23_0 ; real_T g ; }
struct_csn5FRHOzihLPlj7ahbGIH ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_Ls8M3UvEy97B5ff1K3Tw2B_
#define DEFINED_TYPEDEF_FOR_struct_Ls8M3UvEy97B5ff1K3Tw2B_
typedef struct { real_T wn ; real_T zeta ; } struct_Ls8M3UvEy97B5ff1K3Tw2B ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_EnOEpAeE3nmflqqaycPpeF_
#define DEFINED_TYPEDEF_FOR_struct_EnOEpAeE3nmflqqaycPpeF_
typedef struct { struct_Ls8M3UvEy97B5ff1K3Tw2B LowTorque_servo ;
struct_Ls8M3UvEy97B5ff1K3Tw2B MedTorque_servo ; struct_Ls8M3UvEy97B5ff1K3Tw2B
HighTorque_servo ; } struct_EnOEpAeE3nmflqqaycPpeF ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_zTFVkGK3i7bP8k5Cs9WrgE_
#define DEFINED_TYPEDEF_FOR_struct_zTFVkGK3i7bP8k5Cs9WrgE_
typedef struct { real_T RPM [ 7 ] ; real_T Torque [ 7 ] ; real_T Thrust [ 7 ]
; real_T Current [ 7 ] ; real_T Throttle [ 7 ] ; }
struct_zTFVkGK3i7bP8k5Cs9WrgE ;
#endif
typedef struct p301ouc1q1q_ p301ouc1q1q ; typedef struct l4jrtudp3m
a0hhroei4y ;
#endif
