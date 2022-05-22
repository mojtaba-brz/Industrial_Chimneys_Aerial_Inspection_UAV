#ifndef RTW_HEADER_Camera_Controller_h_
#define RTW_HEADER_Camera_Controller_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Camera_Controller_COMMON_INCLUDES_
#define Camera_Controller_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "Camera_Controller_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
struct il2xlwxoqc { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ;
typedef struct { n2d2yc2ied rtm ; } aciultibone ; extern void gva3e55kcj (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , n2d2yc2ied * const nl4kgyauz0
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_Camera_Controller_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_Camera_Controller_GetDWork ( const aciultibone * mdlrefDW ) ; extern void
mr_Camera_Controller_SetDWork ( aciultibone * mdlrefDW , const mxArray * ssDW
) ; extern void mr_Camera_Controller_RegisterSimStateChecksum ( SimStruct * S
) ; extern mxArray * mr_Camera_Controller_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
Camera_Controller_GetCAPIStaticMap ( void ) ; extern void itwqwzhf3m (
n2d2yc2ied * const nl4kgyauz0 ) ;
#endif
