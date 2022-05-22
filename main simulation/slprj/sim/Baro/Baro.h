#ifndef RTW_HEADER_Baro_h_
#define RTW_HEADER_Baro_h_
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Baro_COMMON_INCLUDES_
#define Baro_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "stdlib.h"
#endif
#include "Baro_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
typedef struct { real_T byaszbkfjv ; } dmtrcwjlne ; typedef struct { real_T
js5uts113i [ 35 ] ; uint32_T ontoly3ajp ; } btdpbnk5ku ; struct dqzbfyxk0wl_
{ real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; } ; struct
jrh0ttqt1b { struct SimStruct_tag * _mdlRefSfcnS ; const rtTimingBridge *
timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; sysRanDType *
systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T
mdlref_GlobalTID [ 3 ] ; } Timing ; } ; typedef struct { dmtrcwjlne rtb ;
btdpbnk5ku rtdw ; ietq2kgcso rtm ; } n5mmuaxq5g0 ; extern
struct_PkDIdrnMaBXirtyxpDXw6E rtP_Sensor_err ; extern void cy1m34x5sc (
SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports * *
mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , ietq2kgcso * const lejfpv34xh , dmtrcwjlne * localB ,
btdpbnk5ku * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void mr_Baro_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern
mxArray * mr_Baro_GetDWork ( const n5mmuaxq5g0 * mdlrefDW ) ; extern void
mr_Baro_SetDWork ( n5mmuaxq5g0 * mdlrefDW , const mxArray * ssDW ) ; extern
void mr_Baro_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_Baro_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Baro_GetCAPIStaticMap ( void ) ; extern void
f3xttgagf1 ( btdpbnk5ku * localDW ) ; extern void pe0wujtkgi ( void ) ;
extern void pe0wujtkgiTID2 ( void ) ; extern void Baro ( ietq2kgcso * const
lejfpv34xh , const real_T gbbhpmladl [ 3 ] , real_T * gayvhhab1c , dmtrcwjlne
* localB , btdpbnk5ku * localDW ) ; extern void BaroTID2 ( void ) ; extern
void isjtw3hvtm ( ietq2kgcso * const lejfpv34xh ) ;
#endif
