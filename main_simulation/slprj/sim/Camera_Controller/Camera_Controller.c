#include "Camera_Controller_capi.h"
#include "Camera_Controller.h"
#include "Camera_Controller_private.h"
int_T edgaokyhwr [ 1 ] ; static RegMdlInfo rtMdlInfo_Camera_Controller [ 37 ]
= { { "aciultibone" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"Camera_Controller" } , { "ey3xxdxv0c" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Camera_Controller" } , { "iqfzoegwgr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Camera_Controller" }
, { "ge4ai4uzw4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Camera_Controller" } , { "oa1ymb51qh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Camera_Controller" } , { "n2etdeonj5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Camera_Controller" }
, { "oyqohahud4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Camera_Controller" } , { "cpqrznxjdt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Camera_Controller" } , { "o4qmikkjcn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Camera_Controller" }
, { "fuoz3sywiz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Camera_Controller" } , { "ncyucr23id" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Camera_Controller" } , { "pvu2ciodmz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Camera_Controller" }
, { "nlsumek5vo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Camera_Controller" } , { "d33hp32qxj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Camera_Controller" } , { "ag3ax3ipic" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Camera_Controller" }
, { "itwqwzhf3m" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Camera_Controller" } , { "gva3e55kcj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Camera_Controller" } , { "nzypmiue3k" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Camera_Controller" }
, { "ezkwud1f42" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Camera_Controller" } , { "Camera_Controller" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "edgaokyhwr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Camera_Controller" }
, { "il2xlwxoqc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Camera_Controller" } , { "n2d2yc2ied" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Camera_Controller" } , {
"mr_Camera_Controller_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Camera_Controller" } , {
"mr_Camera_Controller_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Camera_Controller" } , {
"mr_Camera_Controller_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Camera_Controller" } , {
"mr_Camera_Controller_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Camera_Controller" } , {
"mr_Camera_Controller_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Camera_Controller" } , {
"mr_Camera_Controller_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Camera_Controller" } , {
"mr_Camera_Controller_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "Camera_Controller" } , {
"mr_Camera_Controller_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "Camera_Controller" } , {
"mr_Camera_Controller_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "Camera_Controller" } , {
"mr_Camera_Controller_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "Camera_Controller" } , {
"mr_Camera_Controller_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "Camera_Controller" } , { "mr_Camera_Controller_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Camera_Controller" } , {
"Camera_Controller.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"Camera_Controller.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"Camera_Controller" } } ; void itwqwzhf3m ( n2d2yc2ied * const nl4kgyauz0 ) {
if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( nl4kgyauz0
-> _mdlRefSfcnS , "Camera_Controller" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void gva3e55kcj (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , n2d2yc2ied * const nl4kgyauz0
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( ( void * )
nl4kgyauz0 , 0 , sizeof ( n2d2yc2ied ) ) ; edgaokyhwr [ 0 ] = mdlref_TID0 ;
nl4kgyauz0 -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( nl4kgyauz0 ->
_mdlRefSfcnS , "Camera_Controller" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; }
Camera_Controller_InitializeDataMapInfo ( nl4kgyauz0 , sysRanPtr , contextTid
) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) {
rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( nl4kgyauz0 ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( nl4kgyauz0 -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( nl4kgyauz0 ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_Camera_Controller_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_Camera_Controller , 37 ) ; * retVal = 1 ;
} static void mr_Camera_Controller_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_Camera_Controller_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Camera_Controller_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Camera_Controller_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_Camera_Controller_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) ; static void
mr_Camera_Controller_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Camera_Controller_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Camera_Controller_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_Camera_Controller_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_Camera_Controller_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Camera_Controller_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void
mr_Camera_Controller_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Camera_Controller_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_Camera_Controller_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_Camera_Controller_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Camera_Controller_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Camera_Controller_GetDWork ( const
aciultibone * mdlrefDW ) { ( void ) mdlrefDW ; return NULL ; } void
mr_Camera_Controller_SetDWork ( aciultibone * mdlrefDW , const mxArray * ssDW
) { ( void ) ssDW ; ( void ) mdlrefDW ; } void
mr_Camera_Controller_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 1371597651U , 3940389036U , 3041816111U ,
3317518721U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"Camera_Controller" , & chksum [ 0 ] ) ; } mxArray *
mr_Camera_Controller_GetSimStateDisallowedBlocks ( ) { return NULL ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
