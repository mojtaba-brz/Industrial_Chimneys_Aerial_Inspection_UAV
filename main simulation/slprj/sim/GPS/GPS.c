#include "GPS_capi.h"
#include "GPS.h"
#include "GPS_private.h"
#include "RandSrcCreateSeeds_64.h"
#include "RandSrcInitState_U_64.h"
#include "RandSrc_U_D.h"
static RegMdlInfo rtMdlInfo_GPS [ 46 ] = { { "nr2eaj2q25j" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "GPS" } , { "p2tbzdavsr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GPS" } , {
"gzukha5jcq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GPS"
} , { "ekdpoyi3ou" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GPS" } , { "d35u1fyfb5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "GPS" } , { "hbo1l1j4ao" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "GPS" } , { "aiub4a1wq2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "GPS" } , { "jkmzeuei50" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GPS" } , {
"jir0j1chgf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GPS"
} , { "lk4rhm4sle" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GPS" } , { "mz1hwocwzw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "GPS" } , { "agqwfgmq43" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "GPS" } , { "kifkmtsmcx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "GPS" } , { "eut1ufgf14" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GPS" } , {
"dd0voaakxh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GPS"
} , { "kkeqbftsbv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GPS" } , { "pl52qzslcj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "GPS" } , { "m0dbzcjsqp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "GPS" } , { "fcfwc5pmgc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "GPS" } , { "gudr0o4fcj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GPS" } , {
"d4ivgnmxvi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GPS"
} , { "osvgy05dkr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GPS" } , { "hj3pwhezeu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "GPS" } , { "GPS" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , (
NULL ) } , { "kogvbuvz05" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "GPS" } , { "jqhudbv0jn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "GPS" } , { "l32kai3xfz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "GPS" } , { "struct_PkDIdrnMaBXirtyxpDXw6E" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_gCex0a17vv9fsVTjMsD48G" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_PZr7p0tHpZ4GP4RNH1tZGE" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_UNu12Tv2Iby3Uw99FT8N1G" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_uJg9XNv2KLvy1ZDH1yzh1D" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "mr_GPS_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "GPS" } , {
"mr_GPS_extractBitFieldFromCellArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "GPS" } , {
"mr_GPS_cacheBitFieldToCellArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "GPS" } , { "mr_GPS_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "GPS" } , {
"mr_GPS_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "GPS" } , { "mr_GPS_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "GPS" } , {
"mr_GPS_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "GPS" } , { "mr_GPS_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "GPS" } , {
"mr_GPS_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void *
) "GPS" } , { "mr_GPS_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "GPS" } , { "mr_GPS_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "GPS" } , {
"mr_GPS_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "GPS" }
, { "GPS.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "GPS.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "GPS" } } ; jurzb4em5mk
jurzb4em5m = { 1.0 , 1.0 , 1.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 1.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 } ; void gudr0o4fcj ( kifkmtsmcx *
localDW ) { localDW -> d1e0cohrsw [ 0 ] = jurzb4em5m . P_8 ; localDW ->
d1e0cohrsw [ 1 ] = jurzb4em5m . P_8 ; localDW -> d1e0cohrsw [ 2 ] =
jurzb4em5m . P_8 ; } void fcfwc5pmgc ( kifkmtsmcx * localDW ) { localDW ->
d1e0cohrsw [ 0 ] = jurzb4em5m . P_8 ; localDW -> d1e0cohrsw [ 1 ] =
jurzb4em5m . P_8 ; localDW -> d1e0cohrsw [ 2 ] = jurzb4em5m . P_8 ; } void
osvgy05dkr ( kifkmtsmcx * localDW ) { uint32_T initSeed ; initSeed = (
uint32_T ) ( 100000 * rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , &
localDW -> pgfiwvdsf1 , 1 ) ; RandSrcInitState_U_64 ( & localDW -> pgfiwvdsf1
, & localDW -> bwrulshzm4 [ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 *
rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , & localDW -> ouykz0szzc , 1 )
; RandSrcInitState_U_64 ( & localDW -> ouykz0szzc , & localDW -> jrw51xnxbz [
0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & localDW -> ejc2ga5gio , 1 ) ;
RandSrcInitState_U_64 ( & localDW -> ejc2ga5gio , & localDW -> kdq3v4p2vp [ 0
] , 1 ) ; } void GPS ( l32kai3xfz * const ln4020tw2r , const real_T
ihxqptrmkj [ 3 ] , real_T mp2mftzzsy [ 3 ] , real_T n0wc5hvuqi [ 3 ] ,
eut1ufgf14 * localB , kifkmtsmcx * localDW ) { real_T fycm5lg3ox ; if (
rtmIsMajorTimeStep ( ln4020tw2r ) && rtmIsSampleHit ( ln4020tw2r , 1 , 0 ) )
{ localB -> iq5jsrwvjn [ 0 ] = localDW -> d1e0cohrsw [ 0 ] ; localB ->
iq5jsrwvjn [ 1 ] = localDW -> d1e0cohrsw [ 1 ] ; localB -> iq5jsrwvjn [ 2 ] =
localDW -> d1e0cohrsw [ 2 ] ; RandSrc_U_D ( & localB -> gv4ghysqlv , &
jurzb4em5m . P_4 , 1 , & jurzb4em5m . P_1 , 1 , localDW -> bwrulshzm4 , 1 , 1
) ; } fycm5lg3ox = rtmGetTaskTime ( ln4020tw2r , 0 ) ; if (
rtmIsMajorTimeStep ( ln4020tw2r ) && rtmIsSampleHit ( ln4020tw2r , 1 , 0 ) )
{ RandSrc_U_D ( & localB -> fnnmmzwpxt , & jurzb4em5m . P_5 , 1 , &
jurzb4em5m . P_2 , 1 , localDW -> jrw51xnxbz , 1 , 1 ) ; RandSrc_U_D ( &
localB -> lbjjkq5lvs , & jurzb4em5m . P_6 , 1 , & jurzb4em5m . P_3 , 1 ,
localDW -> kdq3v4p2vp , 1 , 1 ) ; } mp2mftzzsy [ 0 ] = ( ( ( (
muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . gps . freqs_x [ 0 ]
* fycm5lg3ox + jurzb4em5m . P_11 ) * jurzb4em5m . P_9 + jurzb4em5m . P_10 ) +
( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . gps . freqs_x [ 1
] * fycm5lg3ox + jurzb4em5m . P_11 ) * jurzb4em5m . P_9 + jurzb4em5m . P_10 )
) + ( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . gps . freqs_x
[ 2 ] * fycm5lg3ox + jurzb4em5m . P_11 ) * jurzb4em5m . P_9 + jurzb4em5m .
P_10 ) ) * rtP_Sensor_err . gps . noise_Amp [ 0 ] * localB -> gv4ghysqlv +
ihxqptrmkj [ 0 ] ) + rtP_Sensor_err . gps . bias [ 0 ] ; mp2mftzzsy [ 1 ] = (
( ( ( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . gps . freqs_y
[ 0 ] * fycm5lg3ox + jurzb4em5m . P_14 ) * jurzb4em5m . P_12 + jurzb4em5m .
P_13 ) + ( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . gps .
freqs_y [ 1 ] * fycm5lg3ox + jurzb4em5m . P_14 ) * jurzb4em5m . P_12 +
jurzb4em5m . P_13 ) ) + ( muDoubleScalarSin ( 6.2831853071795862 *
rtP_Sensor_err . gps . freqs_y [ 2 ] * fycm5lg3ox + jurzb4em5m . P_14 ) *
jurzb4em5m . P_12 + jurzb4em5m . P_13 ) ) * rtP_Sensor_err . gps . noise_Amp
[ 1 ] * localB -> fnnmmzwpxt + ihxqptrmkj [ 1 ] ) + rtP_Sensor_err . gps .
bias [ 1 ] ; mp2mftzzsy [ 2 ] = ( ( ( ( muDoubleScalarSin (
6.2831853071795862 * rtP_Sensor_err . gps . freqs_z [ 0 ] * fycm5lg3ox +
jurzb4em5m . P_17 ) * jurzb4em5m . P_15 + jurzb4em5m . P_16 ) + (
muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . gps . freqs_z [ 1 ]
* fycm5lg3ox + jurzb4em5m . P_17 ) * jurzb4em5m . P_15 + jurzb4em5m . P_16 )
) + ( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . gps . freqs_z
[ 2 ] * fycm5lg3ox + jurzb4em5m . P_17 ) * jurzb4em5m . P_15 + jurzb4em5m .
P_16 ) ) * rtP_Sensor_err . gps . noise_Amp [ 2 ] * localB -> lbjjkq5lvs +
ihxqptrmkj [ 2 ] ) + rtP_Sensor_err . gps . bias [ 2 ] ; n0wc5hvuqi [ 0 ] = (
mp2mftzzsy [ 0 ] - localB -> iq5jsrwvjn [ 0 ] ) * rtP_Sensor_err . gps . filt
[ 0 ] ; n0wc5hvuqi [ 1 ] = ( mp2mftzzsy [ 1 ] - localB -> iq5jsrwvjn [ 1 ] )
* rtP_Sensor_err . gps . filt [ 1 ] ; n0wc5hvuqi [ 2 ] = ( mp2mftzzsy [ 2 ] -
localB -> iq5jsrwvjn [ 2 ] ) * rtP_Sensor_err . gps . filt [ 2 ] ; } void
GPSTID2 ( void ) { } void m0dbzcjsqp ( l32kai3xfz * const ln4020tw2r , real_T
n0wc5hvuqi [ 3 ] , kifkmtsmcx * localDW ) { if ( rtmIsMajorTimeStep (
ln4020tw2r ) && rtmIsSampleHit ( ln4020tw2r , 1 , 0 ) ) { localDW ->
d1e0cohrsw [ 0 ] += jurzb4em5m . P_7 * n0wc5hvuqi [ 0 ] ; localDW ->
d1e0cohrsw [ 1 ] += jurzb4em5m . P_7 * n0wc5hvuqi [ 1 ] ; localDW ->
d1e0cohrsw [ 2 ] += jurzb4em5m . P_7 * n0wc5hvuqi [ 2 ] ; } } void
m0dbzcjsqpTID2 ( void ) { } void kkeqbftsbv ( l32kai3xfz * const ln4020tw2r )
{ if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent (
ln4020tw2r -> _mdlRefSfcnS , "GPS" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void d4ivgnmxvi (
SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports * *
mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , l32kai3xfz * const ln4020tw2r , eut1ufgf14 * localB ,
kifkmtsmcx * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; ( void ) memset ( ( void * ) ln4020tw2r , 0 , sizeof ( l32kai3xfz ) ) ;
ln4020tw2r -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; ln4020tw2r ->
Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; ln4020tw2r -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; ln4020tw2r -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( ln4020tw2r -> _mdlRefSfcnS , "GPS" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> iq5jsrwvjn [ 0 ]
= 0.0 ; localB -> iq5jsrwvjn [ 1 ] = 0.0 ; localB -> iq5jsrwvjn [ 2 ] = 0.0 ;
localB -> gv4ghysqlv = 0.0 ; localB -> fnnmmzwpxt = 0.0 ; localB ->
lbjjkq5lvs = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 , sizeof (
kifkmtsmcx ) ) ; localDW -> d1e0cohrsw [ 0 ] = 0.0 ; localDW -> d1e0cohrsw [
1 ] = 0.0 ; localDW -> d1e0cohrsw [ 2 ] = 0.0 ; { int32_T i ; for ( i = 0 ; i
< 35 ; i ++ ) { localDW -> bwrulshzm4 [ i ] = 0.0 ; } } { int32_T i ; for ( i
= 0 ; i < 35 ; i ++ ) { localDW -> jrw51xnxbz [ i ] = 0.0 ; } } { int32_T i ;
for ( i = 0 ; i < 35 ; i ++ ) { localDW -> kdq3v4p2vp [ i ] = 0.0 ; } }
GPS_InitializeDataMapInfo ( ln4020tw2r , localDW , sysRanPtr , contextTid ) ;
if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) {
rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( ln4020tw2r ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( ln4020tw2r -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( ln4020tw2r ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 0 ] [ 0 ] . currVal = ( char_T * ) &
localB -> lbjjkq5lvs ; mr_nonContOutputArray [ 0 ] [ 0 ] . next = & (
mr_nonContOutputArray [ 0 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 1 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 0 ] [ 1 ] . currVal = ( char_T * ) &
localB -> fnnmmzwpxt ; mr_nonContOutputArray [ 0 ] [ 1 ] . next = & (
mr_nonContOutputArray [ 0 ] [ 2 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 2 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 0 ] [ 2 ] . currVal = ( char_T * ) &
localB -> gv4ghysqlv ; mr_nonContOutputArray [ 0 ] [ 2 ] . next = ( NULL ) ;
} if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) { mr_nonContOutputArray [ 1
] [ 0 ] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 1 ] [
0 ] . currVal = ( char_T * ) & localB -> lbjjkq5lvs ; mr_nonContOutputArray [
1 ] [ 0 ] . next = & ( mr_nonContOutputArray [ 1 ] [ 1 ] ) ; } if (
mr_nonContOutputArray [ 1 ] != ( NULL ) ) { mr_nonContOutputArray [ 1 ] [ 1 ]
. sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 1 ] [ 1 ] .
currVal = ( char_T * ) & localB -> fnnmmzwpxt ; mr_nonContOutputArray [ 1 ] [
1 ] . next = & ( mr_nonContOutputArray [ 1 ] [ 2 ] ) ; } if (
mr_nonContOutputArray [ 1 ] != ( NULL ) ) { mr_nonContOutputArray [ 1 ] [ 2 ]
. sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 1 ] [ 2 ] .
currVal = ( char_T * ) & localB -> gv4ghysqlv ; mr_nonContOutputArray [ 1 ] [
2 ] . next = & ( mr_nonContOutputArray [ 1 ] [ 3 ] ) ; } if (
mr_nonContOutputArray [ 1 ] != ( NULL ) ) { mr_nonContOutputArray [ 1 ] [ 3 ]
. sizeInBytes = 3 * sizeof ( real_T ) ; mr_nonContOutputArray [ 1 ] [ 3 ] .
currVal = ( char_T * ) & localB -> iq5jsrwvjn [ 0 ] ; mr_nonContOutputArray [
1 ] [ 3 ] . next = ( NULL ) ; } } void mr_GPS_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_GPS ,
46 ) ; * retVal = 1 ; } static void mr_GPS_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_GPS_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_GPS_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_GPS_restoreDataFromMxArray ( void * destData , const mxArray * srcArray ,
mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , (
const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ,
numBytes ) ; } static void mr_GPS_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_GPS_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_GPS_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i ,
int j , uint_T numBits ) ; static uint_T mr_GPS_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const
uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i ,
j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_GPS_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j
, mwIndex offset , const void * srcData , size_t numBytes ) ; static void
mr_GPS_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j
, mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T *
varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j )
) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T
* ) srcData , numBytes ) ; } static void
mr_GPS_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static
void mr_GPS_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) {
const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber
( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T *
) & varData [ offset * numBytes ] , numBytes ) ; } static void
mr_GPS_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i ,
int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_GPS_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i ,
int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber (
destArray , i , j ) , offset , mxCreateDoubleScalar ( ( double ) fieldVal ) )
; } static uint_T mr_GPS_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_GPS_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_GPS_GetDWork ( const nr2eaj2q25j * mdlrefDW ) { static
const char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_GPS_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( mdlrefDW ->
rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char *
rtdwDataFieldNames [ 7 ] = { "mdlrefDW->rtdw.d1e0cohrsw" ,
"mdlrefDW->rtdw.bwrulshzm4" , "mdlrefDW->rtdw.jrw51xnxbz" ,
"mdlrefDW->rtdw.kdq3v4p2vp" , "mdlrefDW->rtdw.pgfiwvdsf1" ,
"mdlrefDW->rtdw.ouykz0szzc" , "mdlrefDW->rtdw.ejc2ga5gio" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 7 , rtdwDataFieldNames ) ;
mr_GPS_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & ( mdlrefDW
-> rtdw . d1e0cohrsw ) , sizeof ( mdlrefDW -> rtdw . d1e0cohrsw ) ) ;
mr_GPS_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & ( mdlrefDW
-> rtdw . bwrulshzm4 ) , sizeof ( mdlrefDW -> rtdw . bwrulshzm4 ) ) ;
mr_GPS_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & ( mdlrefDW
-> rtdw . jrw51xnxbz ) , sizeof ( mdlrefDW -> rtdw . jrw51xnxbz ) ) ;
mr_GPS_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & ( mdlrefDW
-> rtdw . kdq3v4p2vp ) , sizeof ( mdlrefDW -> rtdw . kdq3v4p2vp ) ) ;
mr_GPS_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & ( mdlrefDW
-> rtdw . pgfiwvdsf1 ) , sizeof ( mdlrefDW -> rtdw . pgfiwvdsf1 ) ) ;
mr_GPS_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & ( mdlrefDW
-> rtdw . ouykz0szzc ) , sizeof ( mdlrefDW -> rtdw . ouykz0szzc ) ) ;
mr_GPS_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & ( mdlrefDW
-> rtdw . ejc2ga5gio ) , sizeof ( mdlrefDW -> rtdw . ejc2ga5gio ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ; return
ssDW ; } void mr_GPS_SetDWork ( nr2eaj2q25j * mdlrefDW , const mxArray * ssDW
) { ( void ) ssDW ; ( void ) mdlrefDW ; mr_GPS_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) )
; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_GPS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . d1e0cohrsw
) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . d1e0cohrsw ) ) ;
mr_GPS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . bwrulshzm4
) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . bwrulshzm4 ) ) ;
mr_GPS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . jrw51xnxbz
) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . jrw51xnxbz ) ) ;
mr_GPS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . kdq3v4p2vp
) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . kdq3v4p2vp ) ) ;
mr_GPS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . pgfiwvdsf1
) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . pgfiwvdsf1 ) ) ;
mr_GPS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . ouykz0szzc
) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . ouykz0szzc ) ) ;
mr_GPS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . ejc2ga5gio
) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw . ejc2ga5gio ) ) ; } } void
mr_GPS_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T chksum [ 4
] = { 56392042U , 4124460249U , 2545846739U , 4086311838U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "GPS" , & chksum [ 0 ] ) ; }
mxArray * mr_GPS_GetSimStateDisallowedBlocks ( ) { return NULL ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
