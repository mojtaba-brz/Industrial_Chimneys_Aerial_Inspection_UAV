#ifndef RTW_HEADER_Mixer_h_
#define RTW_HEADER_Mixer_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Mixer_COMMON_INCLUDES_
#define Mixer_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "Mixer_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
struct g3ovhxyxpts_ { real_T P_0 [ 8 ] ; } ; struct olkbfrhvuc { struct
SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; sysRanDType *
systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T
mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct { oqqwpgpd4b rtm ; }
mn2k5i0jfqa ; extern void pekvgzwozj ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , oqqwpgpd4b * const h4whfykz0c , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_Mixer_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) ; extern mxArray * mr_Mixer_GetDWork ( const mn2k5i0jfqa *
mdlrefDW ) ; extern void mr_Mixer_SetDWork ( mn2k5i0jfqa * mdlrefDW , const
mxArray * ssDW ) ; extern void mr_Mixer_RegisterSimStateChecksum ( SimStruct
* S ) ; extern mxArray * mr_Mixer_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * Mixer_GetCAPIStaticMap ( void ) ;
extern void n2zjns1gtn ( real_T eajliaojoh [ 8 ] ) ; extern void b31jxpzdif (
real_T eajliaojoh [ 8 ] ) ; extern void Mixer ( real_T eajliaojoh [ 8 ] ) ;
extern void cafa0gbjol ( oqqwpgpd4b * const h4whfykz0c ) ;
#endif
