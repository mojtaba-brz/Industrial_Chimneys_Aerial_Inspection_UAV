#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Ulterasonic_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "Ulterasonic.h"
#include "Ulterasonic_capi.h"
#include "Ulterasonic_private.h"
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
rtContextSystems [ 6 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 6 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 0 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 146818617U , 2173990483U , 730910249U ,
693308003U } , & mmiStaticInfoLogging , 0 , 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo * Ulterasonic_GetCAPIStaticMap ( void )
{ return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void Ulterasonic_InitializeSystemRan ( a2vszynkmk * const oyeh2na5gr ,
sysRanDType * systemRan [ ] , ahybgri1ag * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( oyeh2na5gr ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( sysRanDType
* ) & localDW -> n1nj5j05ls ; systemRan [ 3 ] = ( sysRanDType * ) & localDW
-> ajmwx3dn53 ; systemRan [ 4 ] = ( sysRanDType * ) & localDW -> nntejegq5z ;
systemRan [ 5 ] = ( NULL ) ; systemTid [ 1 ] = oyeh2na5gr -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 2 ] = oyeh2na5gr -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 3 ] = oyeh2na5gr -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 4 ] = oyeh2na5gr -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 5 ] = oyeh2na5gr -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 2 ;
rtContextSystems [ 3 ] = 3 ; rtContextSystems [ 4 ] = 4 ; rtContextSystems [
5 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void Ulterasonic_InitializeDataMapInfo ( a2vszynkmk * const oyeh2na5gr ,
ahybgri1ag * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( oyeh2na5gr -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( oyeh2na5gr -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( oyeh2na5gr -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; rtwCAPI_SetPath ( oyeh2na5gr -> DataMapInfo . mmi ,
( NULL ) ) ; rtwCAPI_SetFullPath ( oyeh2na5gr -> DataMapInfo . mmi , ( NULL )
) ; rtwCAPI_SetInstanceLoggingInfo ( oyeh2na5gr -> DataMapInfo . mmi , &
oyeh2na5gr -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
oyeh2na5gr -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
oyeh2na5gr -> DataMapInfo . mmi , 0 ) ; Ulterasonic_InitializeSystemRan (
oyeh2na5gr , oyeh2na5gr -> DataMapInfo . systemRan , localDW , oyeh2na5gr ->
DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan (
oyeh2na5gr -> DataMapInfo . mmi , oyeh2na5gr -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( oyeh2na5gr -> DataMapInfo . mmi , oyeh2na5gr ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( oyeh2na5gr ->
DataMapInfo . mmi , & oyeh2na5gr -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Ulterasonic_host_InitializeDataMapInfo ( Ulterasonic_host_DataMapInfo_T
* dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
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
