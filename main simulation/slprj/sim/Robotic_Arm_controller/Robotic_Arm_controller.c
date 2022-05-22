#include "Robotic_Arm_controller_capi.h"
#include "Robotic_Arm_controller.h"
#include "Robotic_Arm_controller_private.h"
int_T osmmkufgfb [ 1 ] ; static RegMdlInfo rtMdlInfo_Robotic_Arm_controller [
37 ] = { { "bb3sjqi1nwl" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "maqcfqogvz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "jpfv4vtet2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "bhjxl41guc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "is1h2ntsox" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "nhbp3t0jdz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "prdio3bhjb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "an30jwzciq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "efe5uff1h1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "oljuldrvzq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "k5nncevdrv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "dp2flzyvqu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "aefzaelhou" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "gzxa4vaezn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "k5w2gzvcyb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "ka1eidyyuy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "lxn2x0flht" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "acmuv023pv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "omqes4t23s" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "Robotic_Arm_controller" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "osmmkufgfb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "ldv0pnua5t" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , { "gswfjeekl2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Robotic_Arm_controller" } , {
"mr_Robotic_Arm_controller_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Robotic_Arm_controller" }
, { "mr_Robotic_Arm_controller_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Robotic_Arm_controller" }
, { "mr_Robotic_Arm_controller_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Robotic_Arm_controller" }
, { "mr_Robotic_Arm_controller_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Robotic_Arm_controller" }
, { "mr_Robotic_Arm_controller_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Robotic_Arm_controller" }
, { "mr_Robotic_Arm_controller_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Robotic_Arm_controller" }
, { "mr_Robotic_Arm_controller_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Robotic_Arm_controller" }
, { "mr_Robotic_Arm_controller_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Robotic_Arm_controller" }
, { "mr_Robotic_Arm_controller_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Robotic_Arm_controller" }
, { "mr_Robotic_Arm_controller_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Robotic_Arm_controller" }
, { "mr_Robotic_Arm_controller_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "Robotic_Arm_controller" } , {
"mr_Robotic_Arm_controller_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "Robotic_Arm_controller" } , { "Robotic_Arm_controller.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "Robotic_Arm_controller.c"
, MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "Robotic_Arm_controller" } }
; void ka1eidyyuy ( gswfjeekl2 * const h1x1dzech5 ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( h1x1dzech5 ->
_mdlRefSfcnS , "Robotic_Arm_controller" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void lxn2x0flht (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , gswfjeekl2 * const h1x1dzech5
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( ( void * )
h1x1dzech5 , 0 , sizeof ( gswfjeekl2 ) ) ; osmmkufgfb [ 0 ] = mdlref_TID0 ;
h1x1dzech5 -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( h1x1dzech5 ->
_mdlRefSfcnS , "Robotic_Arm_controller" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; }
Robotic_Arm_controller_InitializeDataMapInfo ( h1x1dzech5 , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
h1x1dzech5 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( h1x1dzech5 ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
h1x1dzech5 -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_Robotic_Arm_controller_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_Robotic_Arm_controller , 37 ) ; * retVal
= 1 ; } static void mr_Robotic_Arm_controller_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_Robotic_Arm_controller_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_Robotic_Arm_controller_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_Robotic_Arm_controller_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_Robotic_Arm_controller_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_Robotic_Arm_controller_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Robotic_Arm_controller_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Robotic_Arm_controller_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_Robotic_Arm_controller_cacheDataToMxArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes
) ; static void mr_Robotic_Arm_controller_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Robotic_Arm_controller_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_Robotic_Arm_controller_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Robotic_Arm_controller_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_Robotic_Arm_controller_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_Robotic_Arm_controller_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_Robotic_Arm_controller_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Robotic_Arm_controller_GetDWork (
const bb3sjqi1nwl * mdlrefDW ) { ( void ) mdlrefDW ; return NULL ; } void
mr_Robotic_Arm_controller_SetDWork ( bb3sjqi1nwl * mdlrefDW , const mxArray *
ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; } void
mr_Robotic_Arm_controller_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 3823142566U , 260261267U , 3004526478U ,
4088763555U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"Robotic_Arm_controller" , & chksum [ 0 ] ) ; } mxArray *
mr_Robotic_Arm_controller_GetSimStateDisallowedBlocks ( ) { return NULL ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
