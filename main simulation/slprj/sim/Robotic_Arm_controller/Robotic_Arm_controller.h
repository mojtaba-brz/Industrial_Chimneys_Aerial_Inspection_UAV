#ifndef RTW_HEADER_Robotic_Arm_controller_h_
#define RTW_HEADER_Robotic_Arm_controller_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Robotic_Arm_controller_COMMON_INCLUDES_
#define Robotic_Arm_controller_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "Robotic_Arm_controller_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
struct ldv0pnua5t { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ;
typedef struct { gswfjeekl2 rtm ; } bb3sjqi1nwl ; extern void lxn2x0flht (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , gswfjeekl2 * const h1x1dzech5
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_Robotic_Arm_controller_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS
, char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_Robotic_Arm_controller_GetDWork ( const bb3sjqi1nwl * mdlrefDW ) ; extern
void mr_Robotic_Arm_controller_SetDWork ( bb3sjqi1nwl * mdlrefDW , const
mxArray * ssDW ) ; extern void
mr_Robotic_Arm_controller_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_Robotic_Arm_controller_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo *
Robotic_Arm_controller_GetCAPIStaticMap ( void ) ; extern void ka1eidyyuy (
gswfjeekl2 * const h1x1dzech5 ) ;
#endif
