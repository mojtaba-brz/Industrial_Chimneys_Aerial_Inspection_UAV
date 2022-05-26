#ifndef RTW_HEADER_Camera_blur_h_
#define RTW_HEADER_Camera_blur_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Camera_blur_COMMON_INCLUDES_
#define Camera_blur_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "Camera_blur_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
struct k2qqhethvo { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ;
typedef struct { byhhvrxrwa rtm ; } mgtqaambxbn ; extern void popg1ixb0u (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , byhhvrxrwa * const dfw4bpoj5o
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_Camera_blur_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_Camera_blur_GetDWork (
const mgtqaambxbn * mdlrefDW ) ; extern void mr_Camera_blur_SetDWork (
mgtqaambxbn * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_Camera_blur_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_Camera_blur_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Camera_blur_GetCAPIStaticMap ( void ) ;
extern void mcdksfdgay ( byhhvrxrwa * const dfw4bpoj5o ) ;
#endif
