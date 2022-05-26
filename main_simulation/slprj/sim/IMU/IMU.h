#ifndef RTW_HEADER_IMU_h_
#define RTW_HEADER_IMU_h_
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef IMU_COMMON_INCLUDES_
#define IMU_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "stdlib.h"
#endif
#include "IMU_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
typedef struct { real_T adxtncogj0 ; real_T je5lm0bgvy ; real_T hoppgbc5ob ;
real_T nazlcniqto ; real_T ny2sdxlqtk ; real_T ggzsbe1j1d ; real_T e41rhf2gxn
; real_T jo5jnxq5b0 ; real_T gb0utxznst ; real_T mi545kuhbx ; real_T
ndla2mfenu ; real_T ntrkjes4xo ; real_T flfeizmnns ; real_T ckvi1saupr ;
real_T plmsq2zpvp ; real_T bqngusoicj ; } lwaspfor1h ; typedef struct {
real_T dzmea34azl [ 35 ] ; real_T hx1oghk4sr [ 35 ] ; real_T gabvgmpdig [ 35
] ; real_T enl0o5fafs [ 35 ] ; real_T jyybjfdrxc [ 35 ] ; real_T bt44350l5z [
35 ] ; real_T iam3kk3iku [ 35 ] ; real_T lehpte3xdr [ 35 ] ; real_T
pvdywcpdck [ 35 ] ; real_T njr3vp44bj [ 35 ] ; real_T a4clufiq5f [ 35 ] ;
real_T nswjpck0sf [ 35 ] ; real_T am1ln1lji2 [ 35 ] ; uint32_T b1cqa15bti ;
uint32_T bftlgm2h24 ; uint32_T bigqqxmkv3 ; uint32_T orqxu50yjo ; uint32_T
kmkpufp5sg ; uint32_T e01iggdnss ; uint32_T cvwnpmibx2 ; uint32_T oikfp2swox
; uint32_T kpeo33wfz4 ; uint32_T gszkzyk2qb ; uint32_T oqzjkq2i13 ; uint32_T
ff0sl1bb0i ; uint32_T psx1mmcpf3 ; int8_T d130fluwan ; int8_T atwrlzyw1o ;
int8_T osfpfc2v5i ; int8_T crhx2qro5z ; int8_T kfkavjl3qi ; } pw2cwofxao ;
typedef struct { real_T cgsu32rrox [ 2 ] ; } p4gxm2pphb ; struct gg1j4vfhz2c_
{ real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6
; real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T
P_12 ; real_T P_13 ; real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 ;
real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T P_22 ; real_T
P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ; real_T P_28 ;
real_T P_29 ; real_T P_30 ; real_T P_31 ; real_T P_32 ; real_T P_33 ; real_T
P_34 ; real_T P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 ; real_T P_39 ;
real_T P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T P_44 ; real_T
P_45 ; real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T P_49 ; real_T P_50 ;
real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ; real_T P_55 ; real_T
P_56 ; real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T P_60 ; real_T P_61 ;
real_T P_62 ; real_T P_63 ; real_T P_64 ; real_T P_65 ; real_T P_66 ; real_T
P_67 ; real_T P_68 ; real_T P_69 [ 3 ] ; real_T P_70 [ 3 ] ; real_T P_71 ;
real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T P_75 [ 3 ] ; } ; struct
cdyprw3gp4 { struct SimStruct_tag * _mdlRefSfcnS ; const rtTimingBridge *
timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; sysRanDType *
systemRan [ 5 ] ; int_T systemTid [ 5 ] ; } DataMapInfo ; struct { int_T
mdlref_GlobalTID [ 4 ] ; } Timing ; } ; typedef struct { lwaspfor1h rtb ;
pw2cwofxao rtdw ; alx13ridxf rtm ; } nujx2jx2eqf ; extern
struct_PkDIdrnMaBXirtyxpDXw6E rtP_Sensor_err ; extern void lzcbyalfg0 (
SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports * *
mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , int_T mdlref_TID3 , alx13ridxf * const dnzzmek5g1 , lwaspfor1h
* localB , pw2cwofxao * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void mr_IMU_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern
mxArray * mr_IMU_GetDWork ( const nujx2jx2eqf * mdlrefDW ) ; extern void
mr_IMU_SetDWork ( nujx2jx2eqf * mdlrefDW , const mxArray * ssDW ) ; extern
void mr_IMU_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_IMU_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * IMU_GetCAPIStaticMap ( void ) ; extern void
dg2lvresz2 ( alx13ridxf * const dnzzmek5g1 , pw2cwofxao * localDW ) ; extern
void juhb5kpqth ( lwaspfor1h * localB , p4gxm2pphb * localZCSV ) ; extern
void cuxiabtwn5 ( alx13ridxf * const dnzzmek5g1 , pw2cwofxao * localDW ) ;
extern void bnch0okglb ( void ) ; extern void bnch0okglbTID3 ( void ) ;
extern void IMU ( alx13ridxf * const dnzzmek5g1 , const real_T eme4knvvnr [ 3
] , const real_T dyzlkmb4tl [ 3 ] , const real_T ovihsnsjb3 [ 4 ] , const
real_T lce3boxn0k [ 3 ] , real_T mn0hi1jlgr [ 3 ] , real_T ccrbemazjc [ 3 ] ,
real_T * cj402ujj4b , real_T pxmtocorg0 [ 3 ] , real_T fppq4zu2of [ 3 ] ,
lwaspfor1h * localB , pw2cwofxao * localDW ) ; extern void IMUTID3 (
lwaspfor1h * localB ) ; extern void of5w51uk5g ( alx13ridxf * const
dnzzmek5g1 ) ;
#endif
