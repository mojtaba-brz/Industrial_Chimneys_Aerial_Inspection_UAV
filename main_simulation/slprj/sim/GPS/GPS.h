#ifndef RTW_HEADER_GPS_h_
#define RTW_HEADER_GPS_h_
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef GPS_COMMON_INCLUDES_
#define GPS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "stdlib.h"
#endif
#include "GPS_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
typedef struct { real_T iq5jsrwvjn [ 3 ] ; real_T gv4ghysqlv ; real_T
fnnmmzwpxt ; real_T lbjjkq5lvs ; } eut1ufgf14 ; typedef struct { real_T
d1e0cohrsw [ 3 ] ; real_T bwrulshzm4 [ 35 ] ; real_T jrw51xnxbz [ 35 ] ;
real_T kdq3v4p2vp [ 35 ] ; uint32_T pgfiwvdsf1 ; uint32_T ouykz0szzc ;
uint32_T ejc2ga5gio ; } kifkmtsmcx ; struct jurzb4em5mk_ { real_T P_1 ;
real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ;
real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T
P_13 ; real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 ; } ; struct
jqhudbv0jn { struct SimStruct_tag * _mdlRefSfcnS ; const rtTimingBridge *
timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
1 ] ; int32_T * vardimsAddress [ 1 ] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ;
sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 3 ] ; } Timing ; } ; typedef struct {
eut1ufgf14 rtb ; kifkmtsmcx rtdw ; l32kai3xfz rtm ; } nr2eaj2q25j ; extern
struct_PkDIdrnMaBXirtyxpDXw6E rtP_Sensor_err ; extern void d4ivgnmxvi (
SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports * *
mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , l32kai3xfz * const ln4020tw2r , eut1ufgf14 * localB ,
kifkmtsmcx * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void mr_GPS_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern
mxArray * mr_GPS_GetDWork ( const nr2eaj2q25j * mdlrefDW ) ; extern void
mr_GPS_SetDWork ( nr2eaj2q25j * mdlrefDW , const mxArray * ssDW ) ; extern
void mr_GPS_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_GPS_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * GPS_GetCAPIStaticMap ( void ) ; extern void
gudr0o4fcj ( kifkmtsmcx * localDW ) ; extern void fcfwc5pmgc ( kifkmtsmcx *
localDW ) ; extern void osvgy05dkr ( kifkmtsmcx * localDW ) ; extern void
m0dbzcjsqp ( l32kai3xfz * const ln4020tw2r , real_T n0wc5hvuqi [ 3 ] ,
kifkmtsmcx * localDW ) ; extern void m0dbzcjsqpTID2 ( void ) ; extern void
GPS ( l32kai3xfz * const ln4020tw2r , const real_T ihxqptrmkj [ 3 ] , real_T
mp2mftzzsy [ 3 ] , real_T n0wc5hvuqi [ 3 ] , eut1ufgf14 * localB , kifkmtsmcx
* localDW ) ; extern void GPSTID2 ( void ) ; extern void kkeqbftsbv (
l32kai3xfz * const ln4020tw2r ) ;
#endif
