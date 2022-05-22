#ifndef RTW_HEADER_UAV_Controller_h_
#define RTW_HEADER_UAV_Controller_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef UAV_Controller_COMMON_INCLUDES_
#define UAV_Controller_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "UAV_Controller_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
struct j1qe4fceqd { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ;
typedef struct { chbzc1u2sm rtm ; } ievhojrtmvi ; extern void pi4tqftdo3 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , chbzc1u2sm * const mwzn2oz4xk
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_UAV_Controller_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_UAV_Controller_GetDWork ( const ievhojrtmvi * mdlrefDW ) ; extern void
mr_UAV_Controller_SetDWork ( ievhojrtmvi * mdlrefDW , const mxArray * ssDW )
; extern void mr_UAV_Controller_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_UAV_Controller_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * UAV_Controller_GetCAPIStaticMap ( void
) ; extern void juvqgef4na ( chbzc1u2sm * const mwzn2oz4xk ) ;
#endif
