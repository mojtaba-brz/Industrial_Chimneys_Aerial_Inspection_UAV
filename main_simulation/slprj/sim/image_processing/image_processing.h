#ifndef RTW_HEADER_image_processing_h_
#define RTW_HEADER_image_processing_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef image_processing_COMMON_INCLUDES_
#define image_processing_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "image_processing_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
struct fp4n5iutng { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ;
typedef struct { aos1zrzulh rtm ; } hdsh1qm120k ; extern void n14buihm2x (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , aos1zrzulh * const mtj4ucbwxu
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_image_processing_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_image_processing_GetDWork ( const hdsh1qm120k * mdlrefDW ) ; extern void
mr_image_processing_SetDWork ( hdsh1qm120k * mdlrefDW , const mxArray * ssDW
) ; extern void mr_image_processing_RegisterSimStateChecksum ( SimStruct * S
) ; extern mxArray * mr_image_processing_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
image_processing_GetCAPIStaticMap ( void ) ; extern void owbpagqi5h (
aos1zrzulh * const mtj4ucbwxu ) ;
#endif
