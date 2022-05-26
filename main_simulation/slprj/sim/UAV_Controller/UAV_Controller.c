#include "UAV_Controller_capi.h"
#include "UAV_Controller.h"
#include "UAV_Controller_private.h"
int_T dxuwyxt5m1 [ 1 ] ; static RegMdlInfo rtMdlInfo_UAV_Controller [ 37 ] =
{ { "ievhojrtmvi" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"UAV_Controller" } , { "pz5vtbcmq3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "UAV_Controller" } , { "gdv5il3kox" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "UAV_Controller" } ,
{ "g2d5j0mh4b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"UAV_Controller" } , { "ixodamfi3n" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "UAV_Controller" } , { "dygtvu42in" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "UAV_Controller" } ,
{ "cqj1t4xmo3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"UAV_Controller" } , { "cfmym1t4c3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "UAV_Controller" } , { "gdoayqm033" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "UAV_Controller" } ,
{ "j0gwyoz3pu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"UAV_Controller" } , { "myahxl0s3h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "UAV_Controller" } , { "lfmlnebeml" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "UAV_Controller" } ,
{ "mupx1t2kdd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"UAV_Controller" } , { "ecjv0xd1gr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "UAV_Controller" } , { "opg1izlwgc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "UAV_Controller" } ,
{ "juvqgef4na" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"UAV_Controller" } , { "pi4tqftdo3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "UAV_Controller" } , { "k1tgn54141" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "UAV_Controller" } ,
{ "cjfsr2qtdd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"UAV_Controller" } , { "UAV_Controller" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( NULL ) } , { "dxuwyxt5m1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "UAV_Controller" } , { "j1qe4fceqd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "UAV_Controller" } ,
{ "chbzc1u2sm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"UAV_Controller" } , { "mr_UAV_Controller_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "UAV_Controller" } , {
"mr_UAV_Controller_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "UAV_Controller" } , {
"mr_UAV_Controller_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "UAV_Controller" } , {
"mr_UAV_Controller_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "UAV_Controller" } , {
"mr_UAV_Controller_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "UAV_Controller" } , {
"mr_UAV_Controller_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "UAV_Controller" } , {
"mr_UAV_Controller_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "UAV_Controller" } , {
"mr_UAV_Controller_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "UAV_Controller" } , {
"mr_UAV_Controller_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "UAV_Controller" } , {
"mr_UAV_Controller_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "UAV_Controller" } , { "mr_UAV_Controller_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "UAV_Controller" } , {
"mr_UAV_Controller_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "UAV_Controller" } , { "UAV_Controller.h" , MDL_INFO_MODEL_FILENAME , 0 ,
- 1 , ( NULL ) } , { "UAV_Controller.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 ,
( void * ) "UAV_Controller" } } ; void juvqgef4na ( chbzc1u2sm * const
mwzn2oz4xk ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( mwzn2oz4xk -> _mdlRefSfcnS , "UAV_Controller" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void pi4tqftdo3 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , chbzc1u2sm * const mwzn2oz4xk
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( ( void * )
mwzn2oz4xk , 0 , sizeof ( chbzc1u2sm ) ) ; dxuwyxt5m1 [ 0 ] = mdlref_TID0 ;
mwzn2oz4xk -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( mwzn2oz4xk ->
_mdlRefSfcnS , "UAV_Controller" , "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" )
; } UAV_Controller_InitializeDataMapInfo ( mwzn2oz4xk , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
mwzn2oz4xk -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( mwzn2oz4xk ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
mwzn2oz4xk -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_UAV_Controller_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_UAV_Controller , 37 ) ; * retVal = 1 ; }
static void mr_UAV_Controller_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_UAV_Controller_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_UAV_Controller_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_UAV_Controller_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_UAV_Controller_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_UAV_Controller_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_UAV_Controller_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_UAV_Controller_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_UAV_Controller_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_UAV_Controller_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_UAV_Controller_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_UAV_Controller_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_UAV_Controller_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_UAV_Controller_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_UAV_Controller_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_UAV_Controller_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_UAV_Controller_GetDWork ( const
ievhojrtmvi * mdlrefDW ) { ( void ) mdlrefDW ; return NULL ; } void
mr_UAV_Controller_SetDWork ( ievhojrtmvi * mdlrefDW , const mxArray * ssDW )
{ ( void ) ssDW ; ( void ) mdlrefDW ; } void
mr_UAV_Controller_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 1048621973U , 982157418U , 673999143U , 175245003U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "UAV_Controller" , & chksum [ 0 ]
) ; } mxArray * mr_UAV_Controller_GetSimStateDisallowedBlocks ( ) { return
NULL ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
