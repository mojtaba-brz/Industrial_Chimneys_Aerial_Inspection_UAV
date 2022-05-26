#ifndef RTW_HEADER_Unreal_Engine4_h_
#define RTW_HEADER_Unreal_Engine4_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Unreal_Engine4_COMMON_INCLUDES_
#define Unreal_Engine4_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "Unreal_Engine4_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
struct hzhjgipvh4 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ;
typedef struct { hbykp1dkdz rtm ; } i52l2vrtxlj ; extern void ns4xjswlcf (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , hbykp1dkdz
* const ofhluz00ba , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_Unreal_Engine4_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_Unreal_Engine4_GetDWork (
const i52l2vrtxlj * mdlrefDW ) ; extern void mr_Unreal_Engine4_SetDWork (
i52l2vrtxlj * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_Unreal_Engine4_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray
* mr_Unreal_Engine4_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Unreal_Engine4_GetCAPIStaticMap ( void ) ;
extern void np30l5aqf0 ( real_T py3kkfwmex [ 2764800 ] ) ; extern void
Unreal_Engine4TID1 ( real_T py3kkfwmex [ 2764800 ] ) ; extern void ccp2ks4idl
( hbykp1dkdz * const ofhluz00ba ) ;
#endif
