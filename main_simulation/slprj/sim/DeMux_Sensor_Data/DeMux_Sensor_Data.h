#ifndef RTW_HEADER_DeMux_Sensor_Data_h_
#define RTW_HEADER_DeMux_Sensor_Data_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef DeMux_Sensor_Data_COMMON_INCLUDES_
#define DeMux_Sensor_Data_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "DeMux_Sensor_Data_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
struct e4sylevbnc { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ;
typedef struct { op42jtxxim rtm ; } kazpzquw455 ; extern void kr0uni0kkx (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , op42jtxxim * const louousfmcg
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_DeMux_Sensor_Data_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_DeMux_Sensor_Data_GetDWork ( const kazpzquw455 * mdlrefDW ) ; extern void
mr_DeMux_Sensor_Data_SetDWork ( kazpzquw455 * mdlrefDW , const mxArray * ssDW
) ; extern void mr_DeMux_Sensor_Data_RegisterSimStateChecksum ( SimStruct * S
) ; extern mxArray * mr_DeMux_Sensor_Data_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
DeMux_Sensor_Data_GetCAPIStaticMap ( void ) ; extern void DeMux_Sensor_Data (
const real_T oozhmlj0si [ 19 ] , real_T ddros0hsby [ 4 ] , real_T lk4z0leswf
[ 3 ] , real_T djdudhjtra [ 3 ] , real_T kaw0u45yg3 [ 3 ] , real_T cvtktwhfl4
[ 3 ] ) ; extern void kfjlvemes1 ( op42jtxxim * const louousfmcg ) ;
#endif
