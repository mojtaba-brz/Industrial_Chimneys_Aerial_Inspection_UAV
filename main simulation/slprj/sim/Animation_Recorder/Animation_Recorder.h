#ifndef RTW_HEADER_Animation_Recorder_h_
#define RTW_HEADER_Animation_Recorder_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Animation_Recorder_COMMON_INCLUDES_
#define Animation_Recorder_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "Animation_Recorder_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
struct euzvfop5b3 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ;
typedef struct { bjkq0rekm5 rtm ; } l1cqubzln1i ; extern void c1iynsi42k (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , bjkq0rekm5 * const mqyksbk3px
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_Animation_Recorder_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_Animation_Recorder_GetDWork ( const l1cqubzln1i * mdlrefDW ) ; extern void
mr_Animation_Recorder_SetDWork ( l1cqubzln1i * mdlrefDW , const mxArray *
ssDW ) ; extern void mr_Animation_Recorder_RegisterSimStateChecksum (
SimStruct * S ) ; extern mxArray *
mr_Animation_Recorder_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Animation_Recorder_GetCAPIStaticMap ( void )
; extern void pedve21wtt ( bjkq0rekm5 * const mqyksbk3px ) ;
#endif
