#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "IMU_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "IMU.h"
#include "IMU_capi.h"
#include "IMU_private.h"
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
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static TARGET_CONST
rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "" , "" , 0 , 0 , 0 , 0 , 0 , 0 ,
0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 0 , 0 } } ; static uint_T rtDimensionArray [ ] = { 0 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , 0 , 0 } } ; static int_T
rtContextSystems [ 5 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 5 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 0 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 2891782149U , 673028366U , 245237371U ,
3282354307U } , & mmiStaticInfoLogging , 0 , 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo * IMU_GetCAPIStaticMap ( void ) { return
& mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void IMU_InitializeSystemRan ( alx13ridxf * const dnzzmek5g1 ,
sysRanDType * systemRan [ ] , pw2cwofxao * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( dnzzmek5g1 ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) & localDW -> kfkavjl3qi ;
systemRan [ 2 ] = ( sysRanDType * ) & localDW -> crhx2qro5z ; systemRan [ 3 ]
= ( sysRanDType * ) & localDW -> osfpfc2v5i ; systemRan [ 4 ] = ( NULL ) ;
systemTid [ 1 ] = dnzzmek5g1 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
2 ] = dnzzmek5g1 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] =
dnzzmek5g1 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] = dnzzmek5g1
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 1 ; rtContextSystems [
2 ] = 2 ; rtContextSystems [ 3 ] = 3 ; rtContextSystems [ 4 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void IMU_InitializeDataMapInfo ( alx13ridxf * const dnzzmek5g1 , pw2cwofxao *
localDW , void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion (
dnzzmek5g1 -> DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( dnzzmek5g1 ->
DataMapInfo . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( dnzzmek5g1
-> DataMapInfo . mmi , & mmiStaticInfoLogging ) ; rtwCAPI_SetPath (
dnzzmek5g1 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
dnzzmek5g1 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetInstanceLoggingInfo
( dnzzmek5g1 -> DataMapInfo . mmi , & dnzzmek5g1 -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( dnzzmek5g1 -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( dnzzmek5g1 -> DataMapInfo .
mmi , 0 ) ; IMU_InitializeSystemRan ( dnzzmek5g1 , dnzzmek5g1 -> DataMapInfo
. systemRan , localDW , dnzzmek5g1 -> DataMapInfo . systemTid , sysRanPtr ,
contextTid ) ; rtwCAPI_SetSystemRan ( dnzzmek5g1 -> DataMapInfo . mmi ,
dnzzmek5g1 -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( dnzzmek5g1
-> DataMapInfo . mmi , dnzzmek5g1 -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( dnzzmek5g1 -> DataMapInfo . mmi , & dnzzmek5g1 ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void IMU_host_InitializeDataMapInfo ( IMU_host_DataMapInfo_T * dataMap ,
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
