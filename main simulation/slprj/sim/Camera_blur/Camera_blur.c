#include "Camera_blur_capi.h"
#include "Camera_blur.h"
#include "Camera_blur_private.h"
int_T jyd5dk4fcd [ 1 ] ; static RegMdlInfo rtMdlInfo_Camera_blur [ 37 ] = { {
"mgtqaambxbn" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"Camera_blur" } , { "l03ch00hq4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Camera_blur" } , { "o1a3jxizew" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Camera_blur" } , {
"bzjmfufaw0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Camera_blur" } , { "a30tqsirml" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Camera_blur" } , { "h5qxh1oujm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Camera_blur" } , {
"iux0hwvcz2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Camera_blur" } , { "p1w3nzcqoi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Camera_blur" } , { "hq0iparqqz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Camera_blur" } , {
"nl30to3avb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Camera_blur" } , { "f3tkut1tk4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Camera_blur" } , { "i0wfc4akka" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Camera_blur" } , {
"ia0u0eheok" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Camera_blur" } , { "ml3whyampc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Camera_blur" } , { "gkghicomlf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Camera_blur" } , {
"mcdksfdgay" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Camera_blur" } , { "popg1ixb0u" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Camera_blur" } , { "jufjw002mm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Camera_blur" } , {
"mfhyy0lmuz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Camera_blur" } , { "Camera_blur" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0
, ( NULL ) } , { "jyd5dk4fcd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Camera_blur" } , { "k2qqhethvo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Camera_blur" } , {
"byhhvrxrwa" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Camera_blur" } , { "mr_Camera_blur_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Camera_blur" } , {
"mr_Camera_blur_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Camera_blur" } , {
"mr_Camera_blur_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Camera_blur" } , {
"mr_Camera_blur_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Camera_blur" } , {
"mr_Camera_blur_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "Camera_blur" } , {
"mr_Camera_blur_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Camera_blur" } , {
"mr_Camera_blur_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "Camera_blur" } , { "mr_Camera_blur_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Camera_blur" } , {
"mr_Camera_blur_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "Camera_blur" } , { "mr_Camera_blur_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Camera_blur" } , {
"mr_Camera_blur_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Camera_blur" } , { "mr_Camera_blur_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "Camera_blur" } , { "Camera_blur.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "Camera_blur.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "Camera_blur" } } ; void
mcdksfdgay ( byhhvrxrwa * const dfw4bpoj5o ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( dfw4bpoj5o ->
_mdlRefSfcnS , "Camera_blur" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" )
; } } void popg1ixb0u ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 ,
byhhvrxrwa * const dfw4bpoj5o , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; ( void ) memset ( ( void * ) dfw4bpoj5o , 0 , sizeof ( byhhvrxrwa ) ) ;
jyd5dk4fcd [ 0 ] = mdlref_TID0 ; dfw4bpoj5o -> _mdlRefSfcnS = ( _mdlRefSfcnS
) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent (
dfw4bpoj5o -> _mdlRefSfcnS , "Camera_blur" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; }
Camera_blur_InitializeDataMapInfo ( dfw4bpoj5o , sysRanPtr , contextTid ) ;
if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) {
rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( dfw4bpoj5o ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( dfw4bpoj5o -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( dfw4bpoj5o ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void mr_Camera_blur_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_Camera_blur , 37 ) ; * retVal = 1 ; } static void
mr_Camera_blur_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_Camera_blur_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Camera_blur_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Camera_blur_restoreDataFromMxArray ( void * destData , const mxArray
* srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_Camera_blur_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Camera_blur_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int
j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Camera_blur_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Camera_blur_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_Camera_blur_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static
void mr_Camera_blur_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
{ uint8_T * varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber (
destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes
] , ( const uint8_T * ) srcData , numBytes ) ; } static void
mr_Camera_blur_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_Camera_blur_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Camera_blur_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Camera_blur_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_Camera_blur_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Camera_blur_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Camera_blur_GetDWork ( const mgtqaambxbn * mdlrefDW ) { (
void ) mdlrefDW ; return NULL ; } void mr_Camera_blur_SetDWork ( mgtqaambxbn
* mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; }
void mr_Camera_blur_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 2078028969U , 3145536611U , 3278396521U ,
2828914802U , } ; slmrModelRefRegisterSimStateChecksum ( S , "Camera_blur" ,
& chksum [ 0 ] ) ; } mxArray * mr_Camera_blur_GetSimStateDisallowedBlocks ( )
{ return NULL ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
