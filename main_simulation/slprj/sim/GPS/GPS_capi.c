#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "GPS_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "GPS.h"
#include "GPS_capi.h"
#include "GPS_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, TARGET_STRING ( "GPS/Discrete-Time\nIntegrator" ) , TARGET_STRING (
"DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1 , ( NULL ) ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 } ;
#ifndef HOST_CAPI_BUILD
static void GPS_InitializeDataAddr ( void * dataAddr [ ] , kifkmtsmcx *
localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW -> d1e0cohrsw [ 0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void GPS_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void GPS_InitializeLoggingFunctions ( RTWLoggingFcnPtr loggingPtrs [ ]
) { loggingPtrs [ 0 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 3 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 1.0 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 1 , 0 } } ; static int_T
rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 2 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 1 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 3995332270U , 1363300731U , 4019773261U ,
4026898708U } , & mmiStaticInfoLogging , 0 , 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo * GPS_GetCAPIStaticMap ( void ) { return
& mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void GPS_InitializeSystemRan ( l32kai3xfz * const ln4020tw2r ,
sysRanDType * systemRan [ ] , kifkmtsmcx * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( ln4020tw2r ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = ln4020tw2r ->
Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void GPS_InitializeDataMapInfo ( l32kai3xfz * const ln4020tw2r , kifkmtsmcx *
localDW , void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion (
ln4020tw2r -> DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ln4020tw2r ->
DataMapInfo . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ln4020tw2r
-> DataMapInfo . mmi , & mmiStaticInfoLogging ) ; GPS_InitializeDataAddr (
ln4020tw2r -> DataMapInfo . dataAddress , localDW ) ;
rtwCAPI_SetDataAddressMap ( ln4020tw2r -> DataMapInfo . mmi , ln4020tw2r ->
DataMapInfo . dataAddress ) ; GPS_InitializeVarDimsAddr ( ln4020tw2r ->
DataMapInfo . vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( ln4020tw2r ->
DataMapInfo . mmi , ln4020tw2r -> DataMapInfo . vardimsAddress ) ;
rtwCAPI_SetPath ( ln4020tw2r -> DataMapInfo . mmi , ( NULL ) ) ;
rtwCAPI_SetFullPath ( ln4020tw2r -> DataMapInfo . mmi , ( NULL ) ) ;
GPS_InitializeLoggingFunctions ( ln4020tw2r -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetLoggingPtrs ( ln4020tw2r -> DataMapInfo . mmi , ln4020tw2r ->
DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo ( ln4020tw2r ->
DataMapInfo . mmi , & ln4020tw2r -> DataMapInfo . mmiLogInstanceInfo ) ;
rtwCAPI_SetChildMMIArray ( ln4020tw2r -> DataMapInfo . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ln4020tw2r -> DataMapInfo . mmi , 0 ) ;
GPS_InitializeSystemRan ( ln4020tw2r , ln4020tw2r -> DataMapInfo . systemRan
, localDW , ln4020tw2r -> DataMapInfo . systemTid , sysRanPtr , contextTid )
; rtwCAPI_SetSystemRan ( ln4020tw2r -> DataMapInfo . mmi , ln4020tw2r ->
DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( ln4020tw2r -> DataMapInfo
. mmi , ln4020tw2r -> DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap (
ln4020tw2r -> DataMapInfo . mmi , & ln4020tw2r -> Timing . mdlref_GlobalTID [
0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void GPS_host_InitializeDataMapInfo ( GPS_host_DataMapInfo_T * dataMap ,
const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
