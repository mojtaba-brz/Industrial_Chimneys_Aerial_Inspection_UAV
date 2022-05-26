#include "Baro_capi.h"
#include "Baro.h"
#include "Baro_private.h"
#include "RandSrcCreateSeeds_64.h"
#include "RandSrcInitState_U_64.h"
#include "RandSrc_U_D.h"
static RegMdlInfo rtMdlInfo_Baro [ 46 ] = { { "n5mmuaxq5g0" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "Baro" } , { "ozkju0mtmi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Baro" } , {
"ivtey53z50" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Baro"
} , { "dgtlnd5js4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Baro" } , { "j4hgwylrxr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Baro" } , { "mysl14d0cx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "Baro" } , { "lr1fkee3rt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "Baro" } , { "bnqddvrykn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Baro" } , {
"jn013felyb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Baro"
} , { "oegh052ywq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Baro" } , { "gd4fhwxrhs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Baro" } , { "fjilg2z2wk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "Baro" } , { "btdpbnk5ku" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "Baro" } , { "dmtrcwjlne" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Baro" } , {
"ffj0jirnrq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Baro"
} , { "isjtw3hvtm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Baro" } , { "k2t5342znn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Baro" } , { "pe0wujtkgi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "Baro" } , { "hg3oq0ou0z" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "Baro" } , { "bbtslsy0pf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Baro" } , {
"cy1m34x5sc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Baro"
} , { "f3xttgagf1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Baro" } , { "gykwfgjl4n" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Baro" } , { "Baro" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , (
NULL ) } , { "cfxv1h4lv5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Baro" } , { "jrh0ttqt1b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "Baro" } , { "ietq2kgcso" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "Baro" } , { "struct_PkDIdrnMaBXirtyxpDXw6E" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_gCex0a17vv9fsVTjMsD48G" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_PZr7p0tHpZ4GP4RNH1tZGE" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_UNu12Tv2Iby3Uw99FT8N1G" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_uJg9XNv2KLvy1ZDH1yzh1D" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "mr_Baro_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Baro" } , {
"mr_Baro_extractBitFieldFromCellArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "Baro" } , {
"mr_Baro_cacheBitFieldToCellArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Baro" } , { "mr_Baro_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Baro" } , {
"mr_Baro_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "Baro" } , { "mr_Baro_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Baro" } , {
"mr_Baro_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "Baro" } , { "mr_Baro_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Baro" } , {
"mr_Baro_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "Baro" } , { "mr_Baro_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Baro" } , {
"mr_Baro_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Baro"
} , { "mr_Baro_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Baro" } , { "Baro.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"Baro.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "Baro" } } ;
dqzbfyxk0wl dqzbfyxk0w = { 1.0 , 0.0 , 1.0 , 0.0 , 0.0 } ; void f3xttgagf1 (
btdpbnk5ku * localDW ) { uint32_T initSeed ; initSeed = ( uint32_T ) ( 100000
* rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , & localDW -> ontoly3ajp , 1
) ; RandSrcInitState_U_64 ( & localDW -> ontoly3ajp , & localDW -> js5uts113i
[ 0 ] , 1 ) ; } void Baro ( ietq2kgcso * const lejfpv34xh , const real_T
gbbhpmladl [ 3 ] , real_T * gayvhhab1c , dmtrcwjlne * localB , btdpbnk5ku *
localDW ) { real_T tmp ; tmp = rtmGetTaskTime ( lejfpv34xh , 0 ) ; if (
rtmIsMajorTimeStep ( lejfpv34xh ) && rtmIsSampleHit ( lejfpv34xh , 1 , 0 ) )
{ RandSrc_U_D ( & localB -> byaszbkfjv , & dqzbfyxk0w . P_2 , 1 , &
dqzbfyxk0w . P_1 , 1 , localDW -> js5uts113i , 1 , 1 ) ; } * gayvhhab1c = ( (
( ( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . baro . freqs [
0 ] * tmp + dqzbfyxk0w . P_5 ) * dqzbfyxk0w . P_3 + dqzbfyxk0w . P_4 ) + (
muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . baro . freqs [ 1 ]
* tmp + dqzbfyxk0w . P_5 ) * dqzbfyxk0w . P_3 + dqzbfyxk0w . P_4 ) ) + (
muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . baro . freqs [ 2 ]
* tmp + dqzbfyxk0w . P_5 ) * dqzbfyxk0w . P_3 + dqzbfyxk0w . P_4 ) ) *
rtP_Sensor_err . baro . noise_Amp * localB -> byaszbkfjv + gbbhpmladl [ 2 ] )
+ rtP_Sensor_err . baro . bias ; } void BaroTID2 ( void ) { } void pe0wujtkgi
( void ) { } void pe0wujtkgiTID2 ( void ) { } void isjtw3hvtm ( ietq2kgcso *
const lejfpv34xh ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( lejfpv34xh -> _mdlRefSfcnS , "Baro" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void cy1m34x5sc (
SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports * *
mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , ietq2kgcso * const lejfpv34xh , dmtrcwjlne * localB ,
btdpbnk5ku * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; ( void ) memset ( ( void * ) lejfpv34xh , 0 , sizeof ( ietq2kgcso ) ) ;
lejfpv34xh -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; lejfpv34xh ->
Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; lejfpv34xh -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; lejfpv34xh -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( lejfpv34xh -> _mdlRefSfcnS , "Baro" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> byaszbkfjv = 0.0
; } ( void ) memset ( ( void * ) localDW , 0 , sizeof ( btdpbnk5ku ) ) ; {
int32_T i ; for ( i = 0 ; i < 35 ; i ++ ) { localDW -> js5uts113i [ i ] = 0.0
; } } Baro_InitializeDataMapInfo ( lejfpv34xh , localDW , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
lejfpv34xh -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( lejfpv34xh ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
lejfpv34xh -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } if (
mr_nonContOutputArray [ 0 ] != ( NULL ) ) { mr_nonContOutputArray [ 0 ] [ 0 ]
. sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 0 ] [ 0 ] .
currVal = ( char_T * ) & localB -> byaszbkfjv ; mr_nonContOutputArray [ 0 ] [
0 ] . next = ( NULL ) ; } } void mr_Baro_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_Baro
, 46 ) ; * retVal = 1 ; } static void mr_Baro_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_Baro_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Baro_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_Baro_restoreDataFromMxArray ( void * destData , const mxArray * srcArray ,
mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , (
const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ,
numBytes ) ; } static void mr_Baro_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Baro_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Baro_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i ,
int j , uint_T numBits ) ; static uint_T mr_Baro_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const
uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i ,
j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_Baro_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int
j , mwIndex offset , const void * srcData , size_t numBytes ) ; static void
mr_Baro_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int
j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T *
varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j )
) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T
* ) srcData , numBytes ) ; } static void
mr_Baro_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static
void mr_Baro_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) {
const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber
( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T *
) & varData [ offset * numBytes ] , numBytes ) ; } static void
mr_Baro_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Baro_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber
( destArray , i , j ) , offset , mxCreateDoubleScalar ( ( double ) fieldVal )
) ; } static uint_T mr_Baro_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_Baro_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Baro_GetDWork ( const n5mmuaxq5g0 * mdlrefDW ) { static
const char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Baro_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( mdlrefDW ->
rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char *
rtdwDataFieldNames [ 2 ] = { "mdlrefDW->rtdw.js5uts113i" ,
"mdlrefDW->rtdw.ontoly3ajp" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 2 , rtdwDataFieldNames ) ; mr_Baro_cacheDataAsMxArray ( rtdwData , 0
, 0 , ( const void * ) & ( mdlrefDW -> rtdw . js5uts113i ) , sizeof (
mdlrefDW -> rtdw . js5uts113i ) ) ; mr_Baro_cacheDataAsMxArray ( rtdwData , 0
, 1 , ( const void * ) & ( mdlrefDW -> rtdw . ontoly3ajp ) , sizeof (
mdlrefDW -> rtdw . ontoly3ajp ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 ,
rtdwData ) ; } ( void ) mdlrefDW ; return ssDW ; } void mr_Baro_SetDWork (
n5mmuaxq5g0 * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void )
mdlrefDW ; mr_Baro_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb )
, ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_Baro_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . js5uts113i ) , rtdwData , 0 , 0 , sizeof (
mdlrefDW -> rtdw . js5uts113i ) ) ; mr_Baro_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . ontoly3ajp ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW
-> rtdw . ontoly3ajp ) ) ; } } void mr_Baro_RegisterSimStateChecksum (
SimStruct * S ) { const uint32_T chksum [ 4 ] = { 3225596777U , 910810976U ,
931561776U , 238581235U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"Baro" , & chksum [ 0 ] ) ; } mxArray * mr_Baro_GetSimStateDisallowedBlocks (
) { return NULL ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
