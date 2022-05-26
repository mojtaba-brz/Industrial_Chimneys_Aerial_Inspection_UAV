#include "Mixer_capi.h"
#include "Mixer.h"
#include "Mixer_private.h"
static RegMdlInfo rtMdlInfo_Mixer [ 38 ] = { { "mn2k5i0jfqa" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "Mixer" } , { "nichlasnqp"
, MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Mixer" } , {
"hzjrewafmu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Mixer" } , { "bky1nubbgk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Mixer" } , { "eubzdz4ip3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "Mixer" } , { "dnz5ds0ubc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Mixer" } , {
"jcxlkt1w04" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Mixer" } , { "hwenb43igb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Mixer" } , { "jzjmaavnpv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "Mixer" } , { "p1ffvb2ohq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Mixer" } , {
"d5rb3tbfr2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Mixer" } , { "chsepbias3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Mixer" } , { "pyqvmlgofo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "Mixer" } , { "nks44wwv0r" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Mixer" } , {
"e01ru1ctuv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Mixer" } , { "cafa0gbjol" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Mixer" } , { "n2zjns1gtn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "Mixer" } , { "pekvgzwozj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Mixer" } , {
"b31jxpzdif" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Mixer" } , { "f1hnq0qxyx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Mixer" } , { "Mixer" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , (
NULL ) } , { "eujssq4zn5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Mixer" } , { "olkbfrhvuc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "Mixer" } , { "oqqwpgpd4b" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Mixer" } , {
"mr_Mixer_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "Mixer" } , { "mr_Mixer_extractBitFieldFromCellArrayWithOffset"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Mixer" } , {
"mr_Mixer_cacheBitFieldToCellArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "Mixer" } , {
"mr_Mixer_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Mixer" } , { "mr_Mixer_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Mixer" } , {
"mr_Mixer_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "Mixer" } , { "mr_Mixer_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Mixer" } , {
"mr_Mixer_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "Mixer" } , { "mr_Mixer_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Mixer" } , {
"mr_Mixer_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "Mixer" } , { "mr_Mixer_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Mixer" } , { "mr_Mixer_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Mixer" } , { "Mixer.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "Mixer.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "Mixer" } } ; g3ovhxyxpts
g3ovhxyxpt = { { 0.5 , 0.5 , 0.5 , 0.5 , 0.5 , 0.5 , 0.5 , 0.5 } } ; void
n2zjns1gtn ( real_T eajliaojoh [ 8 ] ) { memcpy ( & eajliaojoh [ 0 ] , &
g3ovhxyxpt . P_0 [ 0 ] , sizeof ( real_T ) << 3U ) ; } void b31jxpzdif (
real_T eajliaojoh [ 8 ] ) { memcpy ( & eajliaojoh [ 0 ] , & g3ovhxyxpt . P_0
[ 0 ] , sizeof ( real_T ) << 3U ) ; } void Mixer ( real_T eajliaojoh [ 8 ] )
{ memcpy ( & eajliaojoh [ 0 ] , & g3ovhxyxpt . P_0 [ 0 ] , sizeof ( real_T )
<< 3U ) ; } void cafa0gbjol ( oqqwpgpd4b * const h4whfykz0c ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( h4whfykz0c ->
_mdlRefSfcnS , "Mixer" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } }
void pekvgzwozj ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , oqqwpgpd4b * const h4whfykz0c , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN
( sizeof ( real_T ) ) ; ( void ) memset ( ( void * ) h4whfykz0c , 0 , sizeof
( oqqwpgpd4b ) ) ; h4whfykz0c -> Timing . mdlref_GlobalTID [ 0 ] =
mdlref_TID0 ; h4whfykz0c -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ;
h4whfykz0c -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( h4whfykz0c ->
_mdlRefSfcnS , "Mixer" , "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; }
Mixer_InitializeDataMapInfo ( h4whfykz0c , sysRanPtr , contextTid ) ; if ( (
rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) {
rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( h4whfykz0c ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( h4whfykz0c -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( h4whfykz0c ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void mr_Mixer_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_Mixer
, 38 ) ; * retVal = 1 ; } static void mr_Mixer_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_Mixer_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Mixer_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_Mixer_restoreDataFromMxArray ( void * destData , const mxArray * srcArray
, mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , (
const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ,
numBytes ) ; } static void mr_Mixer_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Mixer_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Mixer_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i ,
int j , uint_T numBits ) ; static uint_T mr_Mixer_extractBitFieldFromMxArray
( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const
uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i ,
j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_Mixer_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int
j , mwIndex offset , const void * srcData , size_t numBytes ) ; static void
mr_Mixer_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int
j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T *
varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j )
) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T
* ) srcData , numBytes ) ; } static void
mr_Mixer_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static
void mr_Mixer_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) {
const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber
( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T *
) & varData [ offset * numBytes ] , numBytes ) ; } static void
mr_Mixer_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Mixer_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber
( destArray , i , j ) , offset , mxCreateDoubleScalar ( ( double ) fieldVal )
) ; } static uint_T mr_Mixer_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_Mixer_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Mixer_GetDWork ( const mn2k5i0jfqa * mdlrefDW ) { ( void )
mdlrefDW ; return NULL ; } void mr_Mixer_SetDWork ( mn2k5i0jfqa * mdlrefDW ,
const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; } void
mr_Mixer_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T chksum [
4 ] = { 2016687800U , 1882231611U , 3329857924U , 877175693U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "Mixer" , & chksum [ 0 ] ) ; }
mxArray * mr_Mixer_GetSimStateDisallowedBlocks ( ) { return NULL ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
