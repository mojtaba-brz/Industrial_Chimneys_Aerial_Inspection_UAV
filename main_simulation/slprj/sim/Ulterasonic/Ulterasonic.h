#ifndef RTW_HEADER_Ulterasonic_h_
#define RTW_HEADER_Ulterasonic_h_
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Ulterasonic_COMMON_INCLUDES_
#define Ulterasonic_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#include "stdlib.h"
#endif
#include "Ulterasonic_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
typedef struct { real_T nlb4kianuw ; real_T ona4nvm23h ; } a4khp4m4pw ;
typedef struct { real_T lzj05kk1cp [ 35 ] ; uint32_T muw3lw2gbs ; uint32_T
ohe2ox1irr [ 625 ] ; int8_T ikb3mmkawk ; int8_T opg3qq423q ; int8_T
nntejegq5z ; int8_T ajmwx3dn53 ; int8_T n1nj5j05ls ; } ahybgri1ag ; struct
bbmg2sw1cqn_ { real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7
; real_T P_8 ; real_T P_9 ; } ; struct ekwokhcoht { struct SimStruct_tag *
_mdlRefSfcnS ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 6 ] ; int_T systemTid [ 6 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 4 ] ; } Timing ; } ;
typedef struct { a4khp4m4pw rtb ; ahybgri1ag rtdw ; a2vszynkmk rtm ; }
je3r5qpf5jf ; extern env_bus rtP_env ; extern Sensor_err_bus rtP_Sensor_err ;
extern real_T rtP_Selected_Env ; extern void pmxxxo3kle ( SimStruct *
_mdlRefSfcnS , ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray ,
int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , int_T mdlref_TID3
, a2vszynkmk * const oyeh2na5gr , a4khp4m4pw * localB , ahybgri1ag * localDW
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_Ulterasonic_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_Ulterasonic_GetDWork (
const je3r5qpf5jf * mdlrefDW ) ; extern void mr_Ulterasonic_SetDWork (
je3r5qpf5jf * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_Ulterasonic_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_Ulterasonic_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Ulterasonic_GetCAPIStaticMap ( void ) ;
extern void blkju0oze5 ( ahybgri1ag * localDW ) ; extern void mkwmuqmwun (
ahybgri1ag * localDW ) ; extern void b25ht45b1u ( a2vszynkmk * const
oyeh2na5gr , ahybgri1ag * localDW ) ; extern void miznmgwubb ( a2vszynkmk *
const oyeh2na5gr , ahybgri1ag * localDW ) ; extern void jcsf3n5svm ( void ) ;
extern void jcsf3n5svmTID3 ( void ) ; extern void Ulterasonic ( a2vszynkmk *
const oyeh2na5gr , const real_T prdnudtldf [ 3 ] , const real_T kn2jk00ojm [
4 ] , real_T * a5kgv0edcy , a4khp4m4pw * localB , ahybgri1ag * localDW ) ;
extern void UlterasonicTID3 ( void ) ; extern void ovvukifj1f ( a2vszynkmk *
const oyeh2na5gr ) ;
#endif
