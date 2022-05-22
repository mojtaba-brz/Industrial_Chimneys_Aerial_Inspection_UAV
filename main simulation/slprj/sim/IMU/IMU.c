#include "IMU_capi.h"
#include "IMU.h"
#include "IMU_private.h"
#include "RandSrcCreateSeeds_64.h"
#include "RandSrcInitState_U_64.h"
#include "RandSrc_U_D.h"
static RegMdlInfo rtMdlInfo_IMU [ 49 ] = { { "nujx2jx2eqf" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "IMU" } , { "p4gxm2pphb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "IMU" } , {
"kqrfhnt3n4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "IMU"
} , { "fqi1w211ln" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"IMU" } , { "hy412gltmf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "IMU" } , { "abazz5ilbg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "IMU" } , { "mls135ut5c" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "IMU" } , { "bnggdmx4at" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "IMU" } , {
"igw2y5h1hm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "IMU"
} , { "fkkucdrwfz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"IMU" } , { "iprjybnheu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "IMU" } , { "nnorfprmga" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "IMU" } , { "pw2cwofxao" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "IMU" } , { "lwaspfor1h" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "IMU" } , {
"cnxostwfgd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "IMU"
} , { "of5w51uk5g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"IMU" } , { "dhiz4ifq5g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "IMU" } , { "cuxiabtwn5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "IMU" } , { "pvwoni11zq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "IMU" } , { "juhb5kpqth" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "IMU" } , {
"bnch0okglb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "IMU"
} , { "eufg0l435e" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"IMU" } , { "onksosxgim" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "IMU" } , { "lzcbyalfg0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "IMU" } , { "dg2lvresz2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "IMU" } , { "ofjgzakop2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "IMU" } , { "IMU" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "goeb10xr53" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "IMU" } , {
"cdyprw3gp4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "IMU"
} , { "alx13ridxf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"IMU" } , { "struct_PkDIdrnMaBXirtyxpDXw6E" , MDL_INFO_ID_DATA_TYPE , 0 , - 1
, ( NULL ) } , { "struct_gCex0a17vv9fsVTjMsD48G" , MDL_INFO_ID_DATA_TYPE , 0
, - 1 , ( NULL ) } , { "struct_PZr7p0tHpZ4GP4RNH1tZGE" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_UNu12Tv2Iby3Uw99FT8N1G" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_uJg9XNv2KLvy1ZDH1yzh1D" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "mr_IMU_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "IMU" } , {
"mr_IMU_extractBitFieldFromCellArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "IMU" } , {
"mr_IMU_cacheBitFieldToCellArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "IMU" } , { "mr_IMU_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "IMU" } , {
"mr_IMU_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "IMU" } , { "mr_IMU_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "IMU" } , {
"mr_IMU_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "IMU" } , { "mr_IMU_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "IMU" } , {
"mr_IMU_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void *
) "IMU" } , { "mr_IMU_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "IMU" } , { "mr_IMU_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "IMU" } , {
"mr_IMU_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "IMU" }
, { "IMU.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "IMU.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "IMU" } } ; gg1j4vfhz2c
gg1j4vfhz2 = { 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 1.0 , 1.0 , 1.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 1.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 ,
57.295779513082323 , 1.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , { 0.0 , 0.0 , 0.0 } , {
0.0 , 0.0 , 0.0 } , 35.6892 , 51.389 , 2022.0 , - 1.0 , { 0.0 , 0.0 , 0.0 } }
; void cuxiabtwn5 ( alx13ridxf * const dnzzmek5g1 , pw2cwofxao * localDW ) {
switch ( localDW -> atwrlzyw1o ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( dnzzmek5g1 -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( dnzzmek5g1 ->
_mdlRefSfcnS ) ; break ; case 2 : ssSetBlockStateForSolverChangedAtMajorStep
( dnzzmek5g1 -> _mdlRefSfcnS ) ; break ; } localDW -> atwrlzyw1o = - 1 ; }
void dg2lvresz2 ( alx13ridxf * const dnzzmek5g1 , pw2cwofxao * localDW ) {
uint32_T initSeed ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & localDW -> b1cqa15bti , 1 ) ;
RandSrcInitState_U_64 ( & localDW -> b1cqa15bti , & localDW -> dzmea34azl [ 0
] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & localDW -> bftlgm2h24 , 1 ) ;
RandSrcInitState_U_64 ( & localDW -> bftlgm2h24 , & localDW -> hx1oghk4sr [ 0
] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & localDW -> bigqqxmkv3 , 1 ) ;
RandSrcInitState_U_64 ( & localDW -> bigqqxmkv3 , & localDW -> gabvgmpdig [ 0
] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & localDW -> orqxu50yjo , 1 ) ;
RandSrcInitState_U_64 ( & localDW -> orqxu50yjo , & localDW -> enl0o5fafs [ 0
] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & localDW -> kmkpufp5sg , 1 ) ;
RandSrcInitState_U_64 ( & localDW -> kmkpufp5sg , & localDW -> jyybjfdrxc [ 0
] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & localDW -> e01iggdnss , 1 ) ;
RandSrcInitState_U_64 ( & localDW -> e01iggdnss , & localDW -> bt44350l5z [ 0
] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & localDW -> cvwnpmibx2 , 1 ) ;
RandSrcInitState_U_64 ( & localDW -> cvwnpmibx2 , & localDW -> iam3kk3iku [ 0
] , 1 ) ; localDW -> d130fluwan = 0 ;
ssSetBlockStateForSolverChangedAtMajorStep ( dnzzmek5g1 -> _mdlRefSfcnS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( dnzzmek5g1 -> _mdlRefSfcnS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( dnzzmek5g1 -> _mdlRefSfcnS ) ;
localDW -> atwrlzyw1o = - 1 ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & localDW -> oikfp2swox , 1 ) ;
RandSrcInitState_U_64 ( & localDW -> oikfp2swox , & localDW -> lehpte3xdr [ 0
] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & localDW -> kpeo33wfz4 , 1 ) ;
RandSrcInitState_U_64 ( & localDW -> kpeo33wfz4 , & localDW -> pvdywcpdck [ 0
] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & localDW -> gszkzyk2qb , 1 ) ;
RandSrcInitState_U_64 ( & localDW -> gszkzyk2qb , & localDW -> njr3vp44bj [ 0
] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & localDW -> oqzjkq2i13 , 1 ) ;
RandSrcInitState_U_64 ( & localDW -> oqzjkq2i13 , & localDW -> a4clufiq5f [ 0
] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & localDW -> ff0sl1bb0i , 1 ) ;
RandSrcInitState_U_64 ( & localDW -> ff0sl1bb0i , & localDW -> nswjpck0sf [ 0
] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & localDW -> psx1mmcpf3 , 1 ) ;
RandSrcInitState_U_64 ( & localDW -> psx1mmcpf3 , & localDW -> am1ln1lji2 [ 0
] , 1 ) ; } void IMU ( alx13ridxf * const dnzzmek5g1 , const real_T
eme4knvvnr [ 3 ] , const real_T dyzlkmb4tl [ 3 ] , const real_T ovihsnsjb3 [
4 ] , const real_T lce3boxn0k [ 3 ] , real_T mn0hi1jlgr [ 3 ] , real_T
ccrbemazjc [ 3 ] , real_T * cj402ujj4b , real_T pxmtocorg0 [ 3 ] , real_T
fppq4zu2of [ 3 ] , lwaspfor1h * localB , pw2cwofxao * localDW ) { real_T
b0tmgj1m5q_idx_0 ; real_T b0tmgj1m5q_idx_0_tmp ; real_T
b0tmgj1m5q_idx_0_tmp_e ; real_T b0tmgj1m5q_idx_0_tmp_i ; real_T
b0tmgj1m5q_idx_0_tmp_p ; real_T c3cowx4ndd ; real_T kc0fne5aat ; real_T
kgygpfiyps ; real_T n234d4a5db ; real_T nuedvv3w1b ; real_T oq5ovf2pdh ;
int8_T rtAction ; int8_T rtPrevAction ; oq5ovf2pdh = rtmGetTaskTime (
dnzzmek5g1 , 0 ) ; if ( rtmIsMajorTimeStep ( dnzzmek5g1 ) && rtmIsSampleHit (
dnzzmek5g1 , 2 , 0 ) ) { RandSrc_U_D ( & localB -> adxtncogj0 , & gg1j4vfhz2
. P_14 , 1 , & gg1j4vfhz2 . P_1 , 1 , localDW -> dzmea34azl , 1 , 1 ) ;
RandSrc_U_D ( & localB -> je5lm0bgvy , & gg1j4vfhz2 . P_15 , 1 , & gg1j4vfhz2
. P_2 , 1 , localDW -> hx1oghk4sr , 1 , 1 ) ; RandSrc_U_D ( & localB ->
hoppgbc5ob , & gg1j4vfhz2 . P_16 , 1 , & gg1j4vfhz2 . P_3 , 1 , localDW ->
gabvgmpdig , 1 , 1 ) ; } mn0hi1jlgr [ 0 ] = ( ( ( ( muDoubleScalarSin (
6.2831853071795862 * rtP_Sensor_err . gx . freqs [ 0 ] * oq5ovf2pdh +
gg1j4vfhz2 . P_31 ) * gg1j4vfhz2 . P_29 + gg1j4vfhz2 . P_30 ) + (
muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . gx . freqs [ 1 ] *
oq5ovf2pdh + gg1j4vfhz2 . P_31 ) * gg1j4vfhz2 . P_29 + gg1j4vfhz2 . P_30 ) )
+ ( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . gx . freqs [ 2
] * oq5ovf2pdh + gg1j4vfhz2 . P_31 ) * gg1j4vfhz2 . P_29 + gg1j4vfhz2 . P_30
) ) * rtP_Sensor_err . gx . noise_Amp * localB -> adxtncogj0 + eme4knvvnr [ 0
] ) + gg1j4vfhz2 . P_69 [ 0 ] ; mn0hi1jlgr [ 1 ] = ( ( ( ( muDoubleScalarSin
( 6.2831853071795862 * rtP_Sensor_err . gy . freqs [ 0 ] * oq5ovf2pdh +
gg1j4vfhz2 . P_34 ) * gg1j4vfhz2 . P_32 + gg1j4vfhz2 . P_33 ) + (
muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . gy . freqs [ 1 ] *
oq5ovf2pdh + gg1j4vfhz2 . P_34 ) * gg1j4vfhz2 . P_32 + gg1j4vfhz2 . P_33 ) )
+ ( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . gy . freqs [ 2
] * oq5ovf2pdh + gg1j4vfhz2 . P_34 ) * gg1j4vfhz2 . P_32 + gg1j4vfhz2 . P_33
) ) * rtP_Sensor_err . gy . noise_Amp * localB -> je5lm0bgvy + eme4knvvnr [ 1
] ) + gg1j4vfhz2 . P_69 [ 1 ] ; mn0hi1jlgr [ 2 ] = ( ( ( ( muDoubleScalarSin
( 6.2831853071795862 * rtP_Sensor_err . gz . freqs [ 0 ] * oq5ovf2pdh +
gg1j4vfhz2 . P_37 ) * gg1j4vfhz2 . P_35 + gg1j4vfhz2 . P_36 ) + (
muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . gz . freqs [ 1 ] *
oq5ovf2pdh + gg1j4vfhz2 . P_37 ) * gg1j4vfhz2 . P_35 + gg1j4vfhz2 . P_36 ) )
+ ( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . gz . freqs [ 2
] * oq5ovf2pdh + gg1j4vfhz2 . P_37 ) * gg1j4vfhz2 . P_35 + gg1j4vfhz2 . P_36
) ) * rtP_Sensor_err . gz . noise_Amp * localB -> hoppgbc5ob + eme4knvvnr [ 2
] ) + gg1j4vfhz2 . P_69 [ 2 ] ; if ( rtmIsMajorTimeStep ( dnzzmek5g1 ) &&
rtmIsSampleHit ( dnzzmek5g1 , 2 , 0 ) ) { RandSrc_U_D ( & localB ->
nazlcniqto , & gg1j4vfhz2 . P_17 , 1 , & gg1j4vfhz2 . P_4 , 1 , localDW ->
enl0o5fafs , 1 , 1 ) ; RandSrc_U_D ( & localB -> ny2sdxlqtk , & gg1j4vfhz2 .
P_18 , 1 , & gg1j4vfhz2 . P_5 , 1 , localDW -> jyybjfdrxc , 1 , 1 ) ;
RandSrc_U_D ( & localB -> ggzsbe1j1d , & gg1j4vfhz2 . P_19 , 1 , & gg1j4vfhz2
. P_6 , 1 , localDW -> bt44350l5z , 1 , 1 ) ; } ccrbemazjc [ 0 ] = ( ( ( (
muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . ax . freqs [ 0 ] *
oq5ovf2pdh + gg1j4vfhz2 . P_40 ) * gg1j4vfhz2 . P_38 + gg1j4vfhz2 . P_39 ) +
( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . ax . freqs [ 1 ]
* oq5ovf2pdh + gg1j4vfhz2 . P_40 ) * gg1j4vfhz2 . P_38 + gg1j4vfhz2 . P_39 )
) + ( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . ax . freqs [
2 ] * oq5ovf2pdh + gg1j4vfhz2 . P_40 ) * gg1j4vfhz2 . P_38 + gg1j4vfhz2 .
P_39 ) ) * rtP_Sensor_err . ax . noise_Amp * localB -> nazlcniqto +
dyzlkmb4tl [ 0 ] ) + gg1j4vfhz2 . P_70 [ 0 ] ; ccrbemazjc [ 1 ] = ( ( ( (
muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . ay . freqs [ 0 ] *
oq5ovf2pdh + gg1j4vfhz2 . P_43 ) * gg1j4vfhz2 . P_41 + gg1j4vfhz2 . P_42 ) +
( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . ay . freqs [ 1 ]
* oq5ovf2pdh + gg1j4vfhz2 . P_43 ) * gg1j4vfhz2 . P_41 + gg1j4vfhz2 . P_42 )
) + ( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . ay . freqs [
2 ] * oq5ovf2pdh + gg1j4vfhz2 . P_43 ) * gg1j4vfhz2 . P_41 + gg1j4vfhz2 .
P_42 ) ) * rtP_Sensor_err . ay . noise_Amp * localB -> ny2sdxlqtk +
dyzlkmb4tl [ 1 ] ) + gg1j4vfhz2 . P_70 [ 1 ] ; ccrbemazjc [ 2 ] = ( ( ( (
muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . az . freqs [ 0 ] *
oq5ovf2pdh + gg1j4vfhz2 . P_46 ) * gg1j4vfhz2 . P_44 + gg1j4vfhz2 . P_45 ) +
( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . az . freqs [ 1 ]
* oq5ovf2pdh + gg1j4vfhz2 . P_46 ) * gg1j4vfhz2 . P_44 + gg1j4vfhz2 . P_45 )
) + ( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . az . freqs [
2 ] * oq5ovf2pdh + gg1j4vfhz2 . P_46 ) * gg1j4vfhz2 . P_44 + gg1j4vfhz2 .
P_45 ) ) * rtP_Sensor_err . az . noise_Amp * localB -> ggzsbe1j1d +
dyzlkmb4tl [ 2 ] ) + gg1j4vfhz2 . P_70 [ 2 ] ; if ( rtmIsMajorTimeStep (
dnzzmek5g1 ) && rtmIsSampleHit ( dnzzmek5g1 , 2 , 0 ) ) { RandSrc_U_D ( &
localB -> e41rhf2gxn , & gg1j4vfhz2 . P_20 , 1 , & gg1j4vfhz2 . P_7 , 1 ,
localDW -> iam3kk3iku , 1 , 1 ) ; } kc0fne5aat = ( ( ( muDoubleScalarSin (
6.2831853071795862 * rtP_Sensor_err . mag . freqs [ 0 ] * oq5ovf2pdh +
gg1j4vfhz2 . P_49 ) * gg1j4vfhz2 . P_47 + gg1j4vfhz2 . P_48 ) + (
muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . mag . freqs [ 1 ] *
oq5ovf2pdh + gg1j4vfhz2 . P_49 ) * gg1j4vfhz2 . P_47 + gg1j4vfhz2 . P_48 ) )
+ ( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . mag . freqs [ 2
] * oq5ovf2pdh + gg1j4vfhz2 . P_49 ) * gg1j4vfhz2 . P_47 + gg1j4vfhz2 . P_48
) ) * rtP_Sensor_err . mag . noise_Amp * localB -> e41rhf2gxn ; n234d4a5db =
( ( ovihsnsjb3 [ 0 ] * ovihsnsjb3 [ 0 ] + ovihsnsjb3 [ 1 ] * ovihsnsjb3 [ 1 ]
) + ovihsnsjb3 [ 2 ] * ovihsnsjb3 [ 2 ] ) + ovihsnsjb3 [ 3 ] * ovihsnsjb3 [ 3
] ; if ( rtmIsMajorTimeStep ( dnzzmek5g1 ) ) { if ( localDW -> d130fluwan !=
0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( dnzzmek5g1 -> _mdlRefSfcnS
) ; localDW -> d130fluwan = 0 ; } c3cowx4ndd = muDoubleScalarSqrt (
n234d4a5db ) ; } else if ( n234d4a5db < 0.0 ) { c3cowx4ndd = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( n234d4a5db ) ) ; localDW ->
d130fluwan = 1 ; } else { c3cowx4ndd = muDoubleScalarSqrt ( n234d4a5db ) ; }
n234d4a5db = ovihsnsjb3 [ 0 ] / c3cowx4ndd ; kgygpfiyps = ovihsnsjb3 [ 1 ] /
c3cowx4ndd ; nuedvv3w1b = ovihsnsjb3 [ 2 ] / c3cowx4ndd ; c3cowx4ndd =
ovihsnsjb3 [ 3 ] / c3cowx4ndd ; localB -> jo5jnxq5b0 = ( kgygpfiyps *
c3cowx4ndd - n234d4a5db * nuedvv3w1b ) * - 2.0 ; rtPrevAction = localDW ->
atwrlzyw1o ; if ( rtmIsMajorTimeStep ( dnzzmek5g1 ) ) { if ( localB ->
jo5jnxq5b0 > 1.0 ) { rtAction = 0 ; } else if ( localB -> jo5jnxq5b0 < - 1.0
) { rtAction = 1 ; } else { rtAction = 2 ; } localDW -> atwrlzyw1o = rtAction
; } else { rtAction = localDW -> atwrlzyw1o ; } if ( rtPrevAction != rtAction
) { switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( dnzzmek5g1 -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( dnzzmek5g1 ->
_mdlRefSfcnS ) ; break ; case 2 : ssSetBlockStateForSolverChangedAtMajorStep
( dnzzmek5g1 -> _mdlRefSfcnS ) ; break ; } } switch ( rtAction ) { case 0 :
if ( rtAction != rtPrevAction ) { if ( oq5ovf2pdh != rtmGetTStart (
dnzzmek5g1 ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( dnzzmek5g1 ->
_mdlRefSfcnS ) ; } } if ( rtmIsMajorTimeStep ( dnzzmek5g1 ) && rtmIsSampleHit
( dnzzmek5g1 , 1 , 0 ) ) { localB -> gb0utxznst = gg1j4vfhz2 . P_27 ; } if (
rtmIsMajorTimeStep ( dnzzmek5g1 ) ) { srUpdateBC ( localDW -> kfkavjl3qi ) ;
} break ; case 1 : if ( rtAction != rtPrevAction ) { if ( oq5ovf2pdh !=
rtmGetTStart ( dnzzmek5g1 ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
dnzzmek5g1 -> _mdlRefSfcnS ) ; } } if ( rtmIsMajorTimeStep ( dnzzmek5g1 ) &&
rtmIsSampleHit ( dnzzmek5g1 , 1 , 0 ) ) { localB -> gb0utxznst = gg1j4vfhz2 .
P_28 ; } if ( rtmIsMajorTimeStep ( dnzzmek5g1 ) ) { srUpdateBC ( localDW ->
crhx2qro5z ) ; } break ; case 2 : if ( rtAction != rtPrevAction ) { if (
oq5ovf2pdh != rtmGetTStart ( dnzzmek5g1 ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( dnzzmek5g1 -> _mdlRefSfcnS ) ; }
} localB -> gb0utxznst = localB -> jo5jnxq5b0 ; if ( rtmIsMajorTimeStep (
dnzzmek5g1 ) ) { srUpdateBC ( localDW -> osfpfc2v5i ) ; } break ; }
b0tmgj1m5q_idx_0_tmp = n234d4a5db * n234d4a5db ; b0tmgj1m5q_idx_0_tmp_p =
kgygpfiyps * kgygpfiyps ; b0tmgj1m5q_idx_0_tmp_e = nuedvv3w1b * nuedvv3w1b ;
b0tmgj1m5q_idx_0_tmp_i = c3cowx4ndd * c3cowx4ndd ; b0tmgj1m5q_idx_0 =
muDoubleScalarAtan2 ( ( kgygpfiyps * nuedvv3w1b + n234d4a5db * c3cowx4ndd ) *
2.0 , ( ( b0tmgj1m5q_idx_0_tmp + b0tmgj1m5q_idx_0_tmp_p ) -
b0tmgj1m5q_idx_0_tmp_e ) - b0tmgj1m5q_idx_0_tmp_i ) * gg1j4vfhz2 . P_50 ; *
cj402ujj4b = ( ( b0tmgj1m5q_idx_0 + localB -> bqngusoicj ) + kc0fne5aat ) +
rtP_Sensor_err . mag . bias ; if ( rtmIsMajorTimeStep ( dnzzmek5g1 ) &&
rtmIsSampleHit ( dnzzmek5g1 , 2 , 0 ) ) { RandSrc_U_D ( & localB ->
mi545kuhbx , & gg1j4vfhz2 . P_21 , 1 , & gg1j4vfhz2 . P_8 , 1 , localDW ->
lehpte3xdr , 1 , 1 ) ; RandSrc_U_D ( & localB -> ndla2mfenu , & gg1j4vfhz2 .
P_22 , 1 , & gg1j4vfhz2 . P_9 , 1 , localDW -> pvdywcpdck , 1 , 1 ) ;
RandSrc_U_D ( & localB -> ntrkjes4xo , & gg1j4vfhz2 . P_23 , 1 , & gg1j4vfhz2
. P_10 , 1 , localDW -> njr3vp44bj , 1 , 1 ) ; } pxmtocorg0 [ 0 ] = ( ( ( (
muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . rx . freqs [ 0 ] *
oq5ovf2pdh + gg1j4vfhz2 . P_53 ) * gg1j4vfhz2 . P_51 + gg1j4vfhz2 . P_52 ) +
( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . rx . freqs [ 1 ]
* oq5ovf2pdh + gg1j4vfhz2 . P_53 ) * gg1j4vfhz2 . P_51 + gg1j4vfhz2 . P_52 )
) + ( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . rx . freqs [
2 ] * oq5ovf2pdh + gg1j4vfhz2 . P_53 ) * gg1j4vfhz2 . P_51 + gg1j4vfhz2 .
P_52 ) ) * rtP_Sensor_err . ax . noise_Amp * localB -> mi545kuhbx +
muDoubleScalarAtan2 ( ( nuedvv3w1b * c3cowx4ndd + n234d4a5db * kgygpfiyps ) *
2.0 , ( ( b0tmgj1m5q_idx_0_tmp - b0tmgj1m5q_idx_0_tmp_p ) -
b0tmgj1m5q_idx_0_tmp_e ) + b0tmgj1m5q_idx_0_tmp_i ) * gg1j4vfhz2 . P_50 ) +
gg1j4vfhz2 . P_75 [ 0 ] ; if ( localB -> gb0utxznst > 1.0 ) { n234d4a5db =
1.0 ; } else if ( localB -> gb0utxznst < - 1.0 ) { n234d4a5db = - 1.0 ; }
else { n234d4a5db = localB -> gb0utxznst ; } pxmtocorg0 [ 1 ] = ( ( ( (
muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . ry . freqs [ 0 ] *
oq5ovf2pdh + gg1j4vfhz2 . P_56 ) * gg1j4vfhz2 . P_54 + gg1j4vfhz2 . P_55 ) +
( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . ry . freqs [ 1 ]
* oq5ovf2pdh + gg1j4vfhz2 . P_56 ) * gg1j4vfhz2 . P_54 + gg1j4vfhz2 . P_55 )
) + ( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . ry . freqs [
2 ] * oq5ovf2pdh + gg1j4vfhz2 . P_56 ) * gg1j4vfhz2 . P_54 + gg1j4vfhz2 .
P_55 ) ) * rtP_Sensor_err . ay . noise_Amp * localB -> ndla2mfenu +
gg1j4vfhz2 . P_50 * muDoubleScalarAsin ( n234d4a5db ) ) + gg1j4vfhz2 . P_75 [
1 ] ; pxmtocorg0 [ 2 ] = ( ( ( ( muDoubleScalarSin ( 6.2831853071795862 *
rtP_Sensor_err . rz . freqs [ 0 ] * oq5ovf2pdh + gg1j4vfhz2 . P_59 ) *
gg1j4vfhz2 . P_57 + gg1j4vfhz2 . P_58 ) + ( muDoubleScalarSin (
6.2831853071795862 * rtP_Sensor_err . rz . freqs [ 1 ] * oq5ovf2pdh +
gg1j4vfhz2 . P_59 ) * gg1j4vfhz2 . P_57 + gg1j4vfhz2 . P_58 ) ) + (
muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . rz . freqs [ 2 ] *
oq5ovf2pdh + gg1j4vfhz2 . P_59 ) * gg1j4vfhz2 . P_57 + gg1j4vfhz2 . P_58 ) )
* rtP_Sensor_err . az . noise_Amp * localB -> ntrkjes4xo + b0tmgj1m5q_idx_0 )
+ gg1j4vfhz2 . P_75 [ 2 ] ; b0tmgj1m5q_idx_0 = ( ( muDoubleScalarSin (
6.2831853071795862 * rtP_Sensor_err . vel . freqs_x [ 0 ] * oq5ovf2pdh +
gg1j4vfhz2 . P_62 ) * gg1j4vfhz2 . P_60 + gg1j4vfhz2 . P_61 ) + (
muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . vel . freqs_x [ 1 ]
* oq5ovf2pdh + gg1j4vfhz2 . P_62 ) * gg1j4vfhz2 . P_60 + gg1j4vfhz2 . P_61 )
) + ( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . vel . freqs_x
[ 2 ] * oq5ovf2pdh + gg1j4vfhz2 . P_62 ) * gg1j4vfhz2 . P_60 + gg1j4vfhz2 .
P_61 ) ; n234d4a5db = muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err
. vel . freqs_y * oq5ovf2pdh + gg1j4vfhz2 . P_65 ) * gg1j4vfhz2 . P_63 +
gg1j4vfhz2 . P_64 ; oq5ovf2pdh = muDoubleScalarSin ( 6.2831853071795862 *
rtP_Sensor_err . vel . freqs_z * oq5ovf2pdh + gg1j4vfhz2 . P_68 ) *
gg1j4vfhz2 . P_66 + gg1j4vfhz2 . P_67 ; if ( rtmIsMajorTimeStep ( dnzzmek5g1
) && rtmIsSampleHit ( dnzzmek5g1 , 2 , 0 ) ) { RandSrc_U_D ( & localB ->
flfeizmnns , & gg1j4vfhz2 . P_24 , 1 , & gg1j4vfhz2 . P_11 , 1 , localDW ->
a4clufiq5f , 1 , 1 ) ; } b0tmgj1m5q_idx_0 = rtP_Sensor_err . vel . noise_Amp
[ 0 ] * b0tmgj1m5q_idx_0 * localB -> flfeizmnns ; if ( rtmIsMajorTimeStep (
dnzzmek5g1 ) && rtmIsSampleHit ( dnzzmek5g1 , 2 , 0 ) ) { RandSrc_U_D ( &
localB -> ckvi1saupr , & gg1j4vfhz2 . P_25 , 1 , & gg1j4vfhz2 . P_12 , 1 ,
localDW -> nswjpck0sf , 1 , 1 ) ; RandSrc_U_D ( & localB -> plmsq2zpvp , &
gg1j4vfhz2 . P_26 , 1 , & gg1j4vfhz2 . P_13 , 1 , localDW -> am1ln1lji2 , 1 ,
1 ) ; } fppq4zu2of [ 0 ] = ( b0tmgj1m5q_idx_0 + lce3boxn0k [ 0 ] ) +
rtP_Sensor_err . vel . bias [ 0 ] ; fppq4zu2of [ 1 ] = ( rtP_Sensor_err . vel
. noise_Amp [ 1 ] * n234d4a5db * localB -> ckvi1saupr + lce3boxn0k [ 1 ] ) +
rtP_Sensor_err . vel . bias [ 1 ] ; fppq4zu2of [ 2 ] = ( rtP_Sensor_err . vel
. noise_Amp [ 2 ] * oq5ovf2pdh * localB -> plmsq2zpvp + lce3boxn0k [ 2 ] ) +
rtP_Sensor_err . vel . bias [ 2 ] ; } void IMUTID3 ( lwaspfor1h * localB ) {
real_T gh [ 195 ] ; real_T p [ 104 ] ; real_T q [ 104 ] ; real_T cl [ 14 ] ;
real_T sl [ 14 ] ; real_T aa ; real_T bb ; real_T c ; real_T cc ; real_T
cc_tmp ; real_T cc_tmp_p ; real_T flat ; real_T flat_tmp ; real_T flat_tmp_p
; real_T fn ; real_T lonNew_tmp ; real_T tmp ; real_T tmp_e ; real_T tmp_i ;
real_T tmp_p ; real_T y ; real_T z ; real_T z_tmp ; int32_T k ; uint32_T i ;
uint32_T ii ; uint32_T j ; uint32_T m ; uint32_T yearLowIdx ; static const
real_T tmp_m [ 5070 ] = { - 31543.0 , - 2298.0 , 5922.0 , - 677.0 , 2905.0 ,
- 1061.0 , 924.0 , 1121.0 , 1022.0 , - 1469.0 , - 330.0 , 1256.0 , 3.0 ,
572.0 , 523.0 , 876.0 , 628.0 , 195.0 , 660.0 , - 69.0 , - 361.0 , - 210.0 ,
134.0 , - 75.0 , - 184.0 , 328.0 , - 210.0 , 264.0 , 53.0 , 5.0 , - 33.0 , -
86.0 , - 124.0 , - 16.0 , 3.0 , 63.0 , 61.0 , - 9.0 , - 11.0 , 83.0 , - 217.0
, 2.0 , - 58.0 , - 35.0 , 59.0 , 36.0 , - 90.0 , - 69.0 , 70.0 , - 55.0 , -
45.0 , 0.0 , - 13.0 , 34.0 , - 10.0 , - 41.0 , - 1.0 , - 21.0 , 28.0 , 18.0 ,
- 12.0 , 6.0 , - 22.0 , 11.0 , 8.0 , 8.0 , - 4.0 , - 14.0 , - 9.0 , 7.0 , 1.0
, - 13.0 , 2.0 , 5.0 , - 9.0 , 16.0 , 5.0 , - 5.0 , 8.0 , - 18.0 , 8.0 , 10.0
, - 20.0 , 1.0 , 14.0 , - 11.0 , 5.0 , 12.0 , - 3.0 , 1.0 , - 2.0 , - 2.0 ,
8.0 , 2.0 , 10.0 , - 1.0 , - 2.0 , - 1.0 , 2.0 , - 3.0 , - 4.0 , 2.0 , 2.0 ,
1.0 , - 5.0 , 2.0 , - 2.0 , 6.0 , 6.0 , - 4.0 , 4.0 , 0.0 , 0.0 , - 2.0 , 2.0
, 4.0 , 2.0 , 0.0 , 0.0 , - 6.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , - 31464.0 , - 2298.0 , 5909.0 , - 728.0 , 2928.0 , - 1086.0
, 1041.0 , 1065.0 , 1037.0 , - 1494.0 , - 357.0 , 1239.0 , 34.0 , 635.0 ,
480.0 , 880.0 , 643.0 , 203.0 , 653.0 , - 77.0 , - 380.0 , - 201.0 , 146.0 ,
- 65.0 , - 192.0 , 328.0 , - 193.0 , 259.0 , 56.0 , - 1.0 , - 32.0 , - 93.0 ,
- 125.0 , - 26.0 , 11.0 , 62.0 , 60.0 , - 7.0 , - 11.0 , 86.0 , - 221.0 , 4.0
, - 57.0 , - 32.0 , 57.0 , 32.0 , - 92.0 , - 67.0 , 70.0 , - 54.0 , - 46.0 ,
0.0 , - 14.0 , 33.0 , - 11.0 , - 41.0 , 0.0 , - 20.0 , 28.0 , 18.0 , - 12.0 ,
6.0 , - 22.0 , 11.0 , 8.0 , 8.0 , - 4.0 , - 15.0 , - 9.0 , 7.0 , 1.0 , - 13.0
, 2.0 , 5.0 , - 8.0 , 16.0 , 5.0 , - 5.0 , 8.0 , - 18.0 , 8.0 , 10.0 , - 20.0
, 1.0 , 14.0 , - 11.0 , 5.0 , 12.0 , - 3.0 , 1.0 , - 2.0 , - 2.0 , 8.0 , 2.0
, 10.0 , 0.0 , - 2.0 , - 1.0 , 2.0 , - 3.0 , - 4.0 , 2.0 , 2.0 , 1.0 , - 5.0
, 2.0 , - 2.0 , 6.0 , 6.0 , - 4.0 , 4.0 , 0.0 , 0.0 , - 2.0 , 2.0 , 4.0 , 2.0
, 0.0 , 0.0 , - 6.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , - 31354.0 , - 2297.0 , 5898.0 , - 769.0 , 2948.0 , - 1128.0 , 1176.0 ,
1000.0 , 1058.0 , - 1524.0 , - 389.0 , 1223.0 , 62.0 , 705.0 , 425.0 , 884.0
, 660.0 , 211.0 , 644.0 , - 90.0 , - 400.0 , - 189.0 , 160.0 , - 55.0 , -
201.0 , 327.0 , - 172.0 , 253.0 , 57.0 , - 9.0 , - 33.0 , - 102.0 , - 126.0 ,
- 38.0 , 21.0 , 62.0 , 58.0 , - 5.0 , - 11.0 , 89.0 , - 224.0 , 5.0 , - 54.0
, - 29.0 , 54.0 , 28.0 , - 95.0 , - 65.0 , 71.0 , - 54.0 , - 47.0 , 1.0 , -
14.0 , 32.0 , - 12.0 , - 40.0 , 1.0 , - 19.0 , 28.0 , 18.0 , - 13.0 , 6.0 , -
22.0 , 11.0 , 8.0 , 8.0 , - 4.0 , - 15.0 , - 9.0 , 6.0 , 1.0 , - 13.0 , 2.0 ,
5.0 , - 8.0 , 16.0 , 5.0 , - 5.0 , 8.0 , - 18.0 , 8.0 , 10.0 , - 20.0 , 1.0 ,
14.0 , - 11.0 , 5.0 , 12.0 , - 3.0 , 1.0 , - 2.0 , - 2.0 , 8.0 , 2.0 , 10.0 ,
0.0 , - 2.0 , - 1.0 , 2.0 , - 3.0 , - 4.0 , 2.0 , 2.0 , 1.0 , - 5.0 , 2.0 , -
2.0 , 6.0 , 6.0 , - 4.0 , 4.0 , 0.0 , 0.0 , - 2.0 , 2.0 , 4.0 , 2.0 , 0.0 ,
0.0 , - 6.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , -
31212.0 , - 2306.0 , 5875.0 , - 802.0 , 2956.0 , - 1191.0 , 1309.0 , 917.0 ,
1084.0 , - 1559.0 , - 421.0 , 1212.0 , 84.0 , 778.0 , 360.0 , 887.0 , 678.0 ,
218.0 , 631.0 , - 109.0 , - 416.0 , - 173.0 , 178.0 , - 51.0 , - 211.0 ,
327.0 , - 148.0 , 245.0 , 58.0 , - 16.0 , - 34.0 , - 111.0 , - 126.0 , - 51.0
, 32.0 , 61.0 , 57.0 , - 2.0 , - 10.0 , 93.0 , - 228.0 , 8.0 , - 51.0 , -
26.0 , 49.0 , 23.0 , - 98.0 , - 62.0 , 72.0 , - 54.0 , - 48.0 , 2.0 , - 14.0
, 31.0 , - 12.0 , - 38.0 , 2.0 , - 18.0 , 28.0 , 19.0 , - 15.0 , 6.0 , - 22.0
, 11.0 , 8.0 , 8.0 , - 4.0 , - 15.0 , - 9.0 , 6.0 , 2.0 , - 13.0 , 3.0 , 5.0
, - 8.0 , 16.0 , 6.0 , - 5.0 , 8.0 , - 18.0 , 8.0 , 10.0 , - 20.0 , 1.0 ,
14.0 , - 11.0 , 5.0 , 12.0 , - 3.0 , 1.0 , - 2.0 , - 2.0 , 8.0 , 2.0 , 10.0 ,
0.0 , - 2.0 , - 1.0 , 2.0 , - 3.0 , - 4.0 , 2.0 , 2.0 , 1.0 , - 5.0 , 2.0 , -
2.0 , 6.0 , 6.0 , - 4.0 , 4.0 , 0.0 , 0.0 , - 2.0 , 1.0 , 4.0 , 2.0 , 0.0 ,
0.0 , - 6.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , -
31060.0 , - 2317.0 , 5845.0 , - 839.0 , 2959.0 , - 1259.0 , 1407.0 , 823.0 ,
1111.0 , - 1600.0 , - 445.0 , 1205.0 , 103.0 , 839.0 , 293.0 , 889.0 , 695.0
, 220.0 , 616.0 , - 134.0 , - 424.0 , - 153.0 , 199.0 , - 57.0 , - 221.0 ,
326.0 , - 122.0 , 236.0 , 58.0 , - 23.0 , - 38.0 , - 119.0 , - 125.0 , - 62.0
, 43.0 , 61.0 , 55.0 , 0.0 , - 10.0 , 96.0 , - 233.0 , 11.0 , - 46.0 , - 22.0
, 44.0 , 18.0 , - 101.0 , - 57.0 , 73.0 , - 54.0 , - 49.0 , 2.0 , - 14.0 ,
29.0 , - 13.0 , - 37.0 , 4.0 , - 16.0 , 28.0 , 19.0 , - 16.0 , 6.0 , - 22.0 ,
11.0 , 7.0 , 8.0 , - 3.0 , - 15.0 , - 9.0 , 6.0 , 2.0 , - 14.0 , 4.0 , 5.0 ,
- 7.0 , 17.0 , 6.0 , - 5.0 , 8.0 , - 19.0 , 8.0 , 10.0 , - 20.0 , 1.0 , 14.0
, - 11.0 , 5.0 , 12.0 , - 3.0 , 1.0 , - 2.0 , - 2.0 , 9.0 , 2.0 , 10.0 , 0.0
, - 2.0 , - 1.0 , 2.0 , - 3.0 , - 4.0 , 2.0 , 2.0 , 1.0 , - 5.0 , 2.0 , - 2.0
, 6.0 , 6.0 , - 4.0 , 4.0 , 0.0 , 0.0 , - 2.0 , 1.0 , 4.0 , 3.0 , 0.0 , 0.0 ,
- 6.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 30926.0
, - 2318.0 , 5817.0 , - 893.0 , 2969.0 , - 1334.0 , 1471.0 , 728.0 , 1140.0 ,
- 1645.0 , - 462.0 , 1202.0 , 119.0 , 881.0 , 229.0 , 891.0 , 711.0 , 216.0 ,
601.0 , - 163.0 , - 426.0 , - 130.0 , 217.0 , - 70.0 , - 230.0 , 326.0 , -
96.0 , 226.0 , 58.0 , - 28.0 , - 44.0 , - 125.0 , - 122.0 , - 69.0 , 51.0 ,
61.0 , 54.0 , 3.0 , - 9.0 , 99.0 , - 238.0 , 14.0 , - 40.0 , - 18.0 , 39.0 ,
13.0 , - 103.0 , - 52.0 , 73.0 , - 54.0 , - 50.0 , 3.0 , - 14.0 , 27.0 , -
14.0 , - 35.0 , 5.0 , - 14.0 , 29.0 , 19.0 , - 17.0 , 6.0 , - 21.0 , 11.0 ,
7.0 , 8.0 , - 3.0 , - 15.0 , - 9.0 , 6.0 , 2.0 , - 14.0 , 4.0 , 5.0 , - 7.0 ,
17.0 , 7.0 , - 5.0 , 8.0 , - 19.0 , 8.0 , 10.0 , - 20.0 , 1.0 , 14.0 , - 11.0
, 5.0 , 12.0 , - 3.0 , 1.0 , - 2.0 , - 2.0 , 9.0 , 2.0 , 10.0 , 0.0 , - 2.0 ,
- 1.0 , 2.0 , - 3.0 , - 4.0 , 2.0 , 2.0 , 1.0 , - 5.0 , 2.0 , - 2.0 , 6.0 ,
6.0 , - 4.0 , 4.0 , 0.0 , 0.0 , - 2.0 , 1.0 , 4.0 , 3.0 , 0.0 , 0.0 , - 6.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 30805.0 , -
2316.0 , 5808.0 , - 951.0 , 2980.0 , - 1424.0 , 1517.0 , 644.0 , 1172.0 , -
1692.0 , - 480.0 , 1205.0 , 133.0 , 907.0 , 166.0 , 896.0 , 727.0 , 205.0 ,
584.0 , - 195.0 , - 422.0 , - 109.0 , 234.0 , - 90.0 , - 237.0 , 327.0 , -
72.0 , 218.0 , 60.0 , - 32.0 , - 53.0 , - 131.0 , - 118.0 , - 74.0 , 58.0 ,
60.0 , 53.0 , 4.0 , - 9.0 , 102.0 , - 242.0 , 19.0 , - 32.0 , - 16.0 , 32.0 ,
8.0 , - 104.0 , - 46.0 , 74.0 , - 54.0 , - 51.0 , 4.0 , - 15.0 , 25.0 , -
14.0 , - 34.0 , 6.0 , - 12.0 , 29.0 , 18.0 , - 18.0 , 6.0 , - 20.0 , 11.0 ,
7.0 , 8.0 , - 3.0 , - 15.0 , - 9.0 , 5.0 , 2.0 , - 14.0 , 5.0 , 5.0 , - 6.0 ,
18.0 , 8.0 , - 5.0 , 8.0 , - 19.0 , 8.0 , 10.0 , - 20.0 , 1.0 , 14.0 , - 12.0
, 5.0 , 12.0 , - 3.0 , 1.0 , - 2.0 , - 2.0 , 9.0 , 3.0 , 10.0 , 0.0 , - 2.0 ,
- 2.0 , 2.0 , - 3.0 , - 4.0 , 2.0 , 2.0 , 1.0 , - 5.0 , 2.0 , - 2.0 , 6.0 ,
6.0 , - 4.0 , 4.0 , 0.0 , 0.0 , - 2.0 , 1.0 , 4.0 , 3.0 , 0.0 , 0.0 , - 6.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 30715.0 , -
2306.0 , 5812.0 , - 1018.0 , 2984.0 , - 1520.0 , 1550.0 , 586.0 , 1206.0 , -
1740.0 , - 494.0 , 1215.0 , 146.0 , 918.0 , 101.0 , 903.0 , 744.0 , 188.0 ,
565.0 , - 226.0 , - 415.0 , - 90.0 , 249.0 , - 114.0 , - 241.0 , 329.0 , -
51.0 , 211.0 , 64.0 , - 33.0 , - 64.0 , - 136.0 , - 115.0 , - 76.0 , 64.0 ,
59.0 , 53.0 , 4.0 , - 8.0 , 104.0 , - 246.0 , 25.0 , - 25.0 , - 15.0 , 25.0 ,
4.0 , - 106.0 , - 40.0 , 74.0 , - 53.0 , - 52.0 , 4.0 , - 17.0 , 23.0 , -
14.0 , - 33.0 , 7.0 , - 11.0 , 29.0 , 18.0 , - 19.0 , 6.0 , - 19.0 , 11.0 ,
7.0 , 8.0 , - 3.0 , - 15.0 , - 9.0 , 5.0 , 1.0 , - 15.0 , 6.0 , 5.0 , - 6.0 ,
18.0 , 8.0 , - 5.0 , 7.0 , - 19.0 , 8.0 , 10.0 , - 20.0 , 1.0 , 15.0 , - 12.0
, 5.0 , 11.0 , - 3.0 , 1.0 , - 3.0 , - 2.0 , 9.0 , 3.0 , 11.0 , 0.0 , - 2.0 ,
- 2.0 , 2.0 , - 3.0 , - 4.0 , 2.0 , 2.0 , 1.0 , - 5.0 , 2.0 , - 2.0 , 6.0 ,
6.0 , - 4.0 , 4.0 , 0.0 , 0.0 , - 1.0 , 2.0 , 4.0 , 3.0 , 0.0 , 0.0 , - 6.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 30654.0 , -
2292.0 , 5821.0 , - 1106.0 , 2981.0 , - 1614.0 , 1566.0 , 528.0 , 1240.0 , -
1790.0 , - 499.0 , 1232.0 , 163.0 , 916.0 , 43.0 , 914.0 , 762.0 , 169.0 ,
550.0 , - 252.0 , - 405.0 , - 72.0 , 265.0 , - 141.0 , - 241.0 , 334.0 , -
33.0 , 208.0 , 71.0 , - 33.0 , - 75.0 , - 141.0 , - 113.0 , - 76.0 , 69.0 ,
57.0 , 54.0 , 4.0 , - 7.0 , 105.0 , - 249.0 , 33.0 , - 18.0 , - 15.0 , 18.0 ,
0.0 , - 107.0 , - 33.0 , 74.0 , - 53.0 , - 52.0 , 4.0 , - 18.0 , 20.0 , -
14.0 , - 31.0 , 7.0 , - 9.0 , 29.0 , 17.0 , - 20.0 , 5.0 , - 19.0 , 11.0 ,
7.0 , 8.0 , - 3.0 , - 14.0 , - 10.0 , 5.0 , 1.0 , - 15.0 , 6.0 , 5.0 , - 5.0
, 19.0 , 9.0 , - 5.0 , 7.0 , - 19.0 , 8.0 , 10.0 , - 21.0 , 1.0 , 15.0 , -
12.0 , 5.0 , 11.0 , - 3.0 , 1.0 , - 3.0 , - 2.0 , 9.0 , 3.0 , 11.0 , 1.0 , -
2.0 , - 2.0 , 2.0 , - 3.0 , - 4.0 , 2.0 , 2.0 , 1.0 , - 5.0 , 2.0 , - 2.0 ,
6.0 , 6.0 , - 4.0 , 4.0 , 0.0 , 0.0 , - 1.0 , 2.0 , 4.0 , 3.0 , 0.0 , 0.0 , -
6.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 30594.0 ,
- 2285.0 , 5810.0 , - 1244.0 , 2990.0 , - 1702.0 , 1578.0 , 477.0 , 1282.0 ,
- 1834.0 , - 499.0 , 1255.0 , 186.0 , 913.0 , - 11.0 , 944.0 , 776.0 , 144.0
, 544.0 , - 276.0 , - 421.0 , - 55.0 , 304.0 , - 178.0 , - 253.0 , 346.0 , -
12.0 , 194.0 , 95.0 , - 20.0 , - 67.0 , - 142.0 , - 119.0 , - 82.0 , 82.0 ,
59.0 , 57.0 , 6.0 , 6.0 , 100.0 , - 246.0 , 16.0 , - 25.0 , - 9.0 , 21.0 , -
16.0 , - 104.0 , - 39.0 , 70.0 , - 40.0 , - 45.0 , 0.0 , - 18.0 , 0.0 , 2.0 ,
- 29.0 , 6.0 , - 10.0 , 28.0 , 15.0 , - 17.0 , 29.0 , - 22.0 , 13.0 , 7.0 ,
12.0 , - 8.0 , - 21.0 , - 5.0 , - 12.0 , 9.0 , - 7.0 , 7.0 , 2.0 , - 10.0 ,
18.0 , 7.0 , 3.0 , 2.0 , - 11.0 , 5.0 , - 21.0 , - 27.0 , 1.0 , 17.0 , - 11.0
, 29.0 , 3.0 , - 9.0 , 16.0 , 4.0 , - 3.0 , 9.0 , - 4.0 , 6.0 , - 3.0 , 1.0 ,
- 4.0 , 8.0 , - 3.0 , 11.0 , 5.0 , 1.0 , 1.0 , 2.0 , - 20.0 , - 5.0 , - 1.0 ,
- 1.0 , - 6.0 , 8.0 , 6.0 , - 1.0 , - 4.0 , - 3.0 , - 2.0 , 5.0 , 0.0 , - 2.0
, - 2.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , -
30554.0 , - 2250.0 , 5815.0 , - 1341.0 , 2998.0 , - 1810.0 , 1576.0 , 381.0 ,
1297.0 , - 1889.0 , - 476.0 , 1274.0 , 206.0 , 896.0 , - 46.0 , 954.0 , 792.0
, 136.0 , 528.0 , - 278.0 , - 408.0 , - 37.0 , 303.0 , - 210.0 , - 240.0 ,
349.0 , 3.0 , 211.0 , 103.0 , - 20.0 , - 87.0 , - 147.0 , - 122.0 , - 76.0 ,
80.0 , 54.0 , 57.0 , - 1.0 , 4.0 , 99.0 , - 247.0 , 33.0 , - 16.0 , - 12.0 ,
12.0 , - 12.0 , - 105.0 , - 30.0 , 65.0 , - 55.0 , - 35.0 , 2.0 , - 17.0 ,
1.0 , 0.0 , - 40.0 , 10.0 , - 7.0 , 36.0 , 5.0 , - 18.0 , 19.0 , - 16.0 ,
22.0 , 15.0 , 5.0 , - 4.0 , - 22.0 , - 1.0 , 0.0 , 11.0 , - 21.0 , 15.0 , -
8.0 , - 13.0 , 17.0 , 5.0 , - 4.0 , - 1.0 , - 17.0 , 3.0 , - 7.0 , - 24.0 , -
1.0 , 19.0 , - 25.0 , 12.0 , 10.0 , 2.0 , 5.0 , 2.0 , - 5.0 , 8.0 , - 2.0 ,
8.0 , 3.0 , - 11.0 , 8.0 , - 7.0 , - 8.0 , 4.0 , 13.0 , - 1.0 , - 2.0 , 13.0
, - 10.0 , - 4.0 , 2.0 , 4.0 , - 3.0 , 12.0 , 6.0 , 3.0 , - 3.0 , 2.0 , 6.0 ,
10.0 , 11.0 , 3.0 , 8.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , - 30500.0 , - 2215.0 , 5820.0 , - 1440.0 , 3003.0 , - 1898.0 , 1581.0
, 291.0 , 1302.0 , - 1944.0 , - 462.0 , 1288.0 , 216.0 , 882.0 , - 83.0 ,
958.0 , 796.0 , 133.0 , 510.0 , - 274.0 , - 397.0 , - 23.0 , 290.0 , - 230.0
, - 229.0 , 360.0 , 15.0 , 230.0 , 110.0 , - 23.0 , - 98.0 , - 152.0 , -
121.0 , - 69.0 , 78.0 , 47.0 , 57.0 , - 9.0 , 3.0 , 96.0 , - 247.0 , 48.0 , -
8.0 , - 16.0 , 7.0 , - 12.0 , - 107.0 , - 24.0 , 65.0 , - 56.0 , - 50.0 , 2.0
, - 24.0 , 10.0 , - 4.0 , - 32.0 , 8.0 , - 11.0 , 28.0 , 9.0 , - 20.0 , 18.0
, - 18.0 , 11.0 , 9.0 , 10.0 , - 6.0 , - 15.0 , - 14.0 , 5.0 , 6.0 , - 23.0 ,
10.0 , 3.0 , - 7.0 , 23.0 , 6.0 , - 4.0 , 9.0 , - 13.0 , 4.0 , 9.0 , - 11.0 ,
- 4.0 , 12.0 , - 5.0 , 7.0 , 2.0 , 6.0 , 4.0 , - 2.0 , 1.0 , 10.0 , 2.0 , 7.0
, 2.0 , - 6.0 , 5.0 , 5.0 , - 3.0 , - 5.0 , - 4.0 , - 1.0 , 0.0 , 2.0 , - 8.0
, - 3.0 , - 2.0 , 7.0 , - 4.0 , 4.0 , 1.0 , - 2.0 , - 3.0 , 6.0 , 7.0 , - 2.0
, - 1.0 , 0.0 , - 3.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , - 30421.0 , - 2169.0 , 5791.0 , - 1555.0 , 3002.0 , - 1967.0 , 1590.0 ,
206.0 , 1302.0 , - 1992.0 , - 414.0 , 1289.0 , 224.0 , 878.0 , - 130.0 ,
957.0 , 800.0 , 135.0 , 504.0 , - 278.0 , - 394.0 , 3.0 , 269.0 , - 255.0 , -
222.0 , 362.0 , 16.0 , 242.0 , 125.0 , - 26.0 , - 117.0 , - 156.0 , - 114.0 ,
- 63.0 , 81.0 , 46.0 , 58.0 , - 10.0 , 1.0 , 99.0 , - 237.0 , 60.0 , - 1.0 ,
- 20.0 , - 2.0 , - 11.0 , - 113.0 , - 17.0 , 67.0 , - 56.0 , - 55.0 , 5.0 , -
28.0 , 15.0 , - 6.0 , - 32.0 , 7.0 , - 7.0 , 23.0 , 17.0 , - 18.0 , 8.0 , -
17.0 , 15.0 , 6.0 , 11.0 , - 4.0 , - 14.0 , - 11.0 , 7.0 , 2.0 , - 18.0 ,
10.0 , 4.0 , - 5.0 , 23.0 , 10.0 , 1.0 , 8.0 , - 20.0 , 4.0 , 6.0 , - 18.0 ,
0.0 , 12.0 , - 9.0 , 2.0 , 1.0 , 0.0 , 4.0 , - 3.0 , - 1.0 , 9.0 , - 2.0 ,
8.0 , 3.0 , 0.0 , - 1.0 , 5.0 , 1.0 , - 3.0 , 4.0 , 4.0 , 1.0 , 0.0 , 0.0 , -
1.0 , 2.0 , 4.0 , - 5.0 , 6.0 , 1.0 , 1.0 , - 1.0 , - 1.0 , 6.0 , 2.0 , 0.0 ,
0.0 , - 7.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , -
30334.0 , - 2119.0 , 5776.0 , - 1662.0 , 2997.0 , - 2016.0 , 1594.0 , 114.0 ,
1297.0 , - 2038.0 , - 404.0 , 1292.0 , 240.0 , 856.0 , - 165.0 , 957.0 ,
804.0 , 148.0 , 479.0 , - 269.0 , - 390.0 , 13.0 , 252.0 , - 269.0 , - 219.0
, 358.0 , 19.0 , 254.0 , 128.0 , - 31.0 , - 126.0 , - 157.0 , - 97.0 , - 62.0
, 81.0 , 45.0 , 61.0 , - 11.0 , 8.0 , 100.0 , - 228.0 , 68.0 , 4.0 , - 32.0 ,
1.0 , - 8.0 , - 111.0 , - 7.0 , 75.0 , - 57.0 , - 61.0 , 4.0 , - 27.0 , 13.0
, - 2.0 , - 26.0 , 6.0 , - 6.0 , 26.0 , 13.0 , - 23.0 , 1.0 , - 12.0 , 13.0 ,
5.0 , 7.0 , - 4.0 , - 12.0 , - 14.0 , 9.0 , 0.0 , - 16.0 , 8.0 , 4.0 , - 1.0
, 24.0 , 11.0 , - 3.0 , 4.0 , - 17.0 , 8.0 , 10.0 , - 22.0 , 2.0 , 15.0 , -
13.0 , 7.0 , 10.0 , - 4.0 , - 1.0 , - 5.0 , - 1.0 , 10.0 , 5.0 , 10.0 , 1.0 ,
- 4.0 , - 2.0 , 1.0 , - 2.0 , - 3.0 , 2.0 , 2.0 , 1.0 , - 5.0 , 2.0 , - 2.0 ,
6.0 , 4.0 , - 4.0 , 4.0 , 0.0 , 0.0 , - 2.0 , 2.0 , 3.0 , 2.0 , 0.0 , 0.0 , -
6.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 30220.0 ,
- 2068.0 , 5737.0 , - 1781.0 , 3000.0 , - 2047.0 , 1611.0 , 25.0 , 1287.0 , -
2091.0 , - 366.0 , 1278.0 , 251.0 , 838.0 , - 196.0 , 952.0 , 800.0 , 167.0 ,
461.0 , - 266.0 , - 395.0 , 26.0 , 234.0 , - 279.0 , - 216.0 , 359.0 , 26.0 ,
262.0 , 139.0 , - 42.0 , - 139.0 , - 160.0 , - 91.0 , - 56.0 , 83.0 , 43.0 ,
64.0 , - 12.0 , 15.0 , 100.0 , - 212.0 , 72.0 , 2.0 , - 37.0 , 3.0 , - 6.0 ,
- 112.0 , 1.0 , 72.0 , - 57.0 , - 70.0 , 1.0 , - 27.0 , 14.0 , - 4.0 , - 22.0
, 8.0 , - 2.0 , 23.0 , 13.0 , - 23.0 , - 2.0 , - 11.0 , 14.0 , 6.0 , 7.0 , -
2.0 , - 15.0 , - 13.0 , 6.0 , - 3.0 , - 17.0 , 5.0 , 6.0 , 0.0 , 21.0 , 11.0
, - 6.0 , 3.0 , - 16.0 , 8.0 , 10.0 , - 21.0 , 2.0 , 16.0 , - 12.0 , 6.0 ,
10.0 , - 4.0 , - 1.0 , - 5.0 , 0.0 , 10.0 , 3.0 , 11.0 , 1.0 , - 2.0 , - 1.0
, 1.0 , - 3.0 , - 3.0 , 1.0 , 2.0 , 1.0 , - 5.0 , 3.0 , - 1.0 , 4.0 , 6.0 , -
4.0 , 4.0 , 0.0 , 1.0 , - 1.0 , 0.0 , 3.0 , 3.0 , 1.0 , - 1.0 , - 4.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 30100.0 , - 2013.0 ,
5675.0 , - 1902.0 , 3010.0 , - 2067.0 , 1632.0 , - 68.0 , 1276.0 , - 2144.0 ,
- 333.0 , 1260.0 , 262.0 , 830.0 , - 223.0 , 946.0 , 791.0 , 191.0 , 438.0 ,
- 265.0 , - 405.0 , 39.0 , 216.0 , - 288.0 , - 218.0 , 356.0 , 31.0 , 264.0 ,
148.0 , - 59.0 , - 152.0 , - 159.0 , - 83.0 , - 49.0 , 88.0 , 45.0 , 66.0 , -
13.0 , 28.0 , 99.0 , - 198.0 , 75.0 , 1.0 , - 41.0 , 6.0 , - 4.0 , - 111.0 ,
11.0 , 71.0 , - 56.0 , - 77.0 , 1.0 , - 26.0 , 16.0 , - 5.0 , - 14.0 , 10.0 ,
0.0 , 22.0 , 12.0 , - 23.0 , - 5.0 , - 12.0 , 14.0 , 6.0 , 6.0 , - 1.0 , -
16.0 , - 12.0 , 4.0 , - 8.0 , - 19.0 , 4.0 , 6.0 , 0.0 , 18.0 , 10.0 , - 10.0
, 1.0 , - 17.0 , 7.0 , 10.0 , - 21.0 , 2.0 , 16.0 , - 12.0 , 7.0 , 10.0 , -
4.0 , - 1.0 , - 5.0 , - 1.0 , 10.0 , 4.0 , 11.0 , 1.0 , - 3.0 , - 2.0 , 1.0 ,
- 3.0 , - 3.0 , 1.0 , 2.0 , 1.0 , - 5.0 , 3.0 , - 2.0 , 4.0 , 5.0 , - 4.0 ,
4.0 , - 1.0 , 1.0 , - 1.0 , 0.0 , 3.0 , 3.0 , 1.0 , - 1.0 , - 5.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 29992.0 , - 1956.0 ,
5604.0 , - 1997.0 , 3027.0 , - 2129.0 , 1663.0 , - 200.0 , 1281.0 , - 2180.0
, - 336.0 , 1251.0 , 271.0 , 833.0 , - 252.0 , 938.0 , 782.0 , 212.0 , 398.0
, - 257.0 , - 419.0 , 53.0 , 199.0 , - 297.0 , - 218.0 , 357.0 , 46.0 , 261.0
, 150.0 , - 74.0 , - 151.0 , - 162.0 , - 78.0 , - 48.0 , 92.0 , 48.0 , 66.0 ,
- 15.0 , 42.0 , 93.0 , - 192.0 , 71.0 , 4.0 , - 43.0 , 14.0 , - 2.0 , - 108.0
, 17.0 , 72.0 , - 59.0 , - 82.0 , 2.0 , - 27.0 , 21.0 , - 5.0 , - 12.0 , 16.0
, 1.0 , 18.0 , 11.0 , - 23.0 , - 2.0 , - 10.0 , 18.0 , 6.0 , 7.0 , 0.0 , -
18.0 , - 11.0 , 4.0 , - 7.0 , - 22.0 , 4.0 , 9.0 , 3.0 , 16.0 , 6.0 , - 13.0
, - 1.0 , - 15.0 , 5.0 , 10.0 , - 21.0 , 1.0 , 16.0 , - 12.0 , 9.0 , 9.0 , -
5.0 , - 3.0 , - 6.0 , - 1.0 , 9.0 , 7.0 , 10.0 , 2.0 , - 6.0 , - 5.0 , 2.0 ,
- 4.0 , - 4.0 , 1.0 , 2.0 , 0.0 , - 5.0 , 3.0 , - 2.0 , 6.0 , 5.0 , - 4.0 ,
3.0 , 0.0 , 1.0 , - 1.0 , 2.0 , 4.0 , 3.0 , 0.0 , 0.0 , - 6.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 29873.0 , - 1905.0 , 5500.0
, - 2072.0 , 3044.0 , - 2197.0 , 1687.0 , - 306.0 , 1296.0 , - 2208.0 , -
310.0 , 1247.0 , 284.0 , 829.0 , - 297.0 , 936.0 , 780.0 , 232.0 , 361.0 , -
249.0 , - 424.0 , 69.0 , 170.0 , - 297.0 , - 214.0 , 355.0 , 47.0 , 253.0 ,
150.0 , - 93.0 , - 154.0 , - 164.0 , - 75.0 , - 46.0 , 95.0 , 53.0 , 65.0 , -
16.0 , 51.0 , 88.0 , - 185.0 , 69.0 , 4.0 , - 48.0 , 16.0 , - 1.0 , - 102.0 ,
21.0 , 74.0 , - 62.0 , - 83.0 , 3.0 , - 27.0 , 24.0 , - 2.0 , - 6.0 , 20.0 ,
4.0 , 17.0 , 10.0 , - 23.0 , 0.0 , - 7.0 , 21.0 , 6.0 , 8.0 , 0.0 , - 19.0 ,
- 11.0 , 5.0 , - 9.0 , - 23.0 , 4.0 , 11.0 , 4.0 , 14.0 , 4.0 , - 15.0 , -
4.0 , - 11.0 , 5.0 , 10.0 , - 21.0 , 1.0 , 15.0 , - 12.0 , 9.0 , 9.0 , - 6.0
, - 3.0 , - 6.0 , - 1.0 , 9.0 , 7.0 , 9.0 , 1.0 , - 7.0 , - 5.0 , 2.0 , - 4.0
, - 4.0 , 1.0 , 3.0 , 0.0 , - 5.0 , 3.0 , - 2.0 , 6.0 , 5.0 , - 4.0 , 3.0 ,
0.0 , 1.0 , - 1.0 , 2.0 , 4.0 , 3.0 , 0.0 , 0.0 , - 6.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 29775.0 , - 1848.0 , 5406.0 , -
2131.0 , 3059.0 , - 2279.0 , 1686.0 , - 373.0 , 1314.0 , - 2239.0 , - 284.0 ,
1248.0 , 293.0 , 802.0 , - 352.0 , 939.0 , 780.0 , 247.0 , 325.0 , - 240.0 ,
- 423.0 , 84.0 , 141.0 , - 299.0 , - 214.0 , 353.0 , 46.0 , 245.0 , 154.0 , -
109.0 , - 153.0 , - 165.0 , - 69.0 , - 36.0 , 97.0 , 61.0 , 65.0 , - 16.0 ,
59.0 , 82.0 , - 178.0 , 69.0 , 3.0 , - 52.0 , 18.0 , 1.0 , - 96.0 , 24.0 ,
77.0 , - 64.0 , - 80.0 , 2.0 , - 26.0 , 26.0 , 0.0 , - 1.0 , 21.0 , 5.0 ,
17.0 , 9.0 , - 23.0 , 0.0 , - 4.0 , 23.0 , 5.0 , 10.0 , - 1.0 , - 19.0 , -
10.0 , 6.0 , - 12.0 , - 22.0 , 3.0 , 12.0 , 4.0 , 12.0 , 2.0 , - 16.0 , - 6.0
, - 10.0 , 4.0 , 9.0 , - 20.0 , 1.0 , 15.0 , - 12.0 , 11.0 , 9.0 , - 7.0 , -
4.0 , - 7.0 , - 2.0 , 9.0 , 7.0 , 8.0 , 1.0 , - 7.0 , - 6.0 , 2.0 , - 3.0 , -
4.0 , 2.0 , 2.0 , 1.0 , - 5.0 , 3.0 , - 2.0 , 6.0 , 4.0 , - 4.0 , 3.0 , 0.0 ,
1.0 , - 2.0 , 3.0 , 3.0 , 3.0 , - 1.0 , 0.0 , - 6.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 29692.0 , - 1784.0 , 5306.0 , - 2200.0
, 3070.0 , - 2366.0 , 1681.0 , - 413.0 , 1335.0 , - 2267.0 , - 262.0 , 1249.0
, 302.0 , 759.0 , - 427.0 , 940.0 , 780.0 , 262.0 , 290.0 , - 236.0 , - 418.0
, 97.0 , 122.0 , - 306.0 , - 214.0 , 352.0 , 46.0 , 235.0 , 165.0 , - 118.0 ,
- 143.0 , - 166.0 , - 55.0 , - 17.0 , 107.0 , 68.0 , 67.0 , - 17.0 , 68.0 ,
72.0 , - 170.0 , 67.0 , - 1.0 , - 58.0 , 19.0 , 1.0 , - 93.0 , 36.0 , 77.0 ,
- 72.0 , - 69.0 , 1.0 , - 25.0 , 28.0 , 4.0 , 5.0 , 24.0 , 4.0 , 17.0 , 8.0 ,
- 24.0 , - 2.0 , - 6.0 , 25.0 , 6.0 , 11.0 , - 6.0 , - 21.0 , - 9.0 , 8.0 , -
14.0 , - 23.0 , 9.0 , 15.0 , 6.0 , 11.0 , - 5.0 , - 16.0 , - 7.0 , - 4.0 ,
4.0 , 9.0 , - 20.0 , 3.0 , 15.0 , - 10.0 , 12.0 , 8.0 , - 6.0 , - 8.0 , - 8.0
, - 1.0 , 8.0 , 10.0 , 5.0 , - 2.0 , - 8.0 , - 8.0 , 3.0 , - 3.0 , - 6.0 ,
1.0 , 2.0 , 0.0 , - 4.0 , 4.0 , - 1.0 , 5.0 , 4.0 , - 5.0 , 2.0 , - 1.0 , 2.0
, - 2.0 , 5.0 , 1.0 , 1.0 , - 2.0 , 0.0 , - 7.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 29619.4 , - 1728.2 , 5186.1 , - 2267.7 ,
3068.4 , - 2481.6 , 1670.9 , - 458.0 , 1339.6 , - 2288.0 , - 227.6 , 1252.1 ,
293.4 , 714.5 , - 491.1 , 932.3 , 786.8 , 272.6 , 250.0 , - 231.9 , - 403.0 ,
119.8 , 111.3 , - 303.8 , - 218.8 , 351.4 , 43.8 , 222.3 , 171.9 , - 130.4 ,
- 133.1 , - 168.6 , - 39.3 , - 12.9 , 106.3 , 72.3 , 68.2 , - 17.4 , 74.2 ,
63.7 , - 160.9 , 65.1 , - 5.9 , - 61.2 , 16.9 , 0.7 , - 90.4 , 43.8 , 79.0 ,
- 74.0 , - 64.6 , 0.0 , - 24.2 , 33.3 , 6.2 , 9.1 , 24.0 , 6.9 , 14.8 , 7.3 ,
- 25.4 , - 1.2 , - 5.8 , 24.4 , 6.6 , 11.9 , - 9.2 , - 21.5 , - 7.9 , 8.5 , -
16.6 , - 21.5 , 9.1 , 15.5 , 7.0 , 8.9 , - 7.9 , - 14.9 , - 7.0 , - 2.1 , 5.0
, 9.4 , - 19.7 , 3.0 , 13.4 , - 8.4 , 12.5 , 6.3 , - 6.2 , - 8.9 , - 8.4 , -
1.5 , 8.4 , 9.3 , 3.8 , - 4.3 , - 8.2 , - 8.2 , 4.8 , - 2.6 , - 6.0 , 1.7 ,
1.7 , 0.0 , - 3.1 , 4.0 , - 0.5 , 4.9 , 3.7 , - 5.9 , 1.0 , - 1.2 , 2.0 , -
2.9 , 4.2 , 0.2 , 0.3 , - 2.2 , - 1.1 , - 7.4 , 2.7 , - 1.7 , 0.1 , - 1.9 ,
1.3 , 1.5 , - 0.9 , - 0.1 , - 2.6 , 0.1 , 0.9 , - 0.7 , - 0.7 , 0.7 , - 2.8 ,
1.7 , - 0.9 , 0.1 , - 1.2 , 1.2 , - 1.9 , 4.0 , - 0.9 , - 2.2 , - 0.3 , - 0.4
, 0.2 , 0.3 , 0.9 , 2.5 , - 0.2 , - 2.6 , 0.9 , 0.7 , - 0.5 , 0.3 , 0.3 , 0.0
, - 0.3 , 0.0 , - 0.4 , 0.3 , - 0.1 , - 0.9 , - 0.2 , - 0.4 , - 0.4 , 0.8 , -
0.2 , - 0.9 , - 0.9 , 0.3 , 0.2 , 0.1 , 1.8 , - 0.4 , - 0.4 , 1.3 , - 1.0 , -
0.4 , - 0.1 , 0.7 , 0.7 , - 0.4 , 0.3 , 0.3 , 0.6 , - 0.1 , 0.3 , 0.4 , - 0.2
, 0.0 , - 0.5 , 0.1 , - 0.9 , - 29554.63 , - 1669.05 , 5077.99 , - 2337.24 ,
3047.69 , - 2594.5 , 1657.76 , - 515.43 , 1336.3 , - 2305.83 , - 198.86 ,
1246.39 , 269.72 , 672.51 , - 524.72 , 920.55 , 797.96 , 282.07 , 210.65 , -
225.23 , - 379.86 , 145.15 , 100.0 , - 305.36 , - 227.0 , 354.41 , 42.72 ,
208.95 , 180.25 , - 136.54 , - 123.45 , - 168.05 , - 19.57 , - 13.55 , 103.85
, 73.6 , 69.56 , - 20.33 , 76.74 , 54.75 , - 151.34 , 63.63 , - 14.58 , -
63.53 , 14.58 , 0.24 , - 86.36 , 50.94 , 79.88 , - 74.46 , - 61.14 , - 1.65 ,
- 22.57 , 38.73 , 6.82 , 12.3 , 25.35 , 9.37 , 10.93 , 5.42 , - 26.32 , 1.94
, - 4.64 , 24.8 , 7.62 , 11.2 , - 11.73 , - 20.88 , - 6.88 , 9.83 , - 18.11 ,
- 19.71 , 10.17 , 16.22 , 9.36 , 7.61 , - 11.25 , - 12.76 , - 4.87 , - 0.06 ,
5.58 , 9.76 , - 20.11 , 3.58 , 12.69 , - 6.94 , 12.67 , 5.01 , - 6.72 , -
10.76 , - 8.16 , - 1.25 , 8.1 , 8.76 , 2.92 , - 6.66 , - 7.73 , - 9.22 , 6.01
, - 2.17 , - 6.12 , 2.19 , 1.42 , 0.1 , - 2.35 , 4.46 , - 0.15 , 4.76 , 3.06
, - 6.58 , 0.29 , - 1.01 , 2.06 , - 3.47 , 3.77 , - 0.86 , - 0.21 , - 2.31 ,
- 2.09 , - 7.93 , 2.95 , - 1.6 , 0.26 , - 1.88 , 1.44 , 1.44 , - 0.77 , -
0.31 , - 2.27 , 0.29 , 0.9 , - 0.79 , - 0.58 , 0.53 , - 2.69 , 1.8 , - 1.08 ,
0.16 , - 1.58 , 0.96 , - 1.9 , 3.99 , - 1.39 , - 2.15 , - 0.29 , - 0.55 ,
0.21 , 0.23 , 0.89 , 2.38 , - 0.38 , - 2.63 , 0.96 , 0.61 , - 0.3 , 0.4 ,
0.46 , 0.01 , - 0.35 , 0.02 , - 0.36 , 0.28 , 0.08 , - 0.87 , - 0.49 , - 0.34
, - 0.08 , 0.88 , - 0.16 , - 0.88 , - 0.76 , 0.3 , 0.33 , 0.28 , 1.72 , -
0.43 , - 0.54 , 1.18 , - 1.07 , - 0.37 , - 0.04 , 0.75 , 0.63 , - 0.26 , 0.21
, 0.35 , 0.53 , - 0.05 , 0.38 , 0.41 , - 0.22 , - 0.1 , - 0.57 , - 0.18 , -
0.82 , - 29496.57 , - 1586.42 , 4944.26 , - 2396.06 , 3026.34 , - 2708.54 ,
1668.17 , - 575.73 , 1339.85 , - 2326.54 , - 160.4 , 1232.1 , 251.75 , 633.73
, - 537.03 , 912.66 , 808.97 , 286.48 , 166.58 , - 211.03 , - 356.83 , 164.46
, 89.4 , - 309.72 , - 230.87 , 357.29 , 44.58 , 200.26 , 189.01 , - 141.05 ,
- 118.06 , - 163.17 , - 0.01 , - 8.03 , 101.04 , 72.78 , 68.69 , - 20.9 ,
75.92 , 44.18 , - 141.4 , 61.54 , - 22.83 , - 66.26 , 13.1 , 3.02 , - 78.09 ,
55.4 , 80.44 , - 75.0 , - 57.8 , - 4.55 , - 21.2 , 45.24 , 6.54 , 14.0 ,
24.96 , 10.46 , 7.03 , 1.64 , - 27.61 , 4.92 , - 3.28 , 24.41 , 8.21 , 10.84
, - 14.5 , - 20.03 , - 5.59 , 11.83 , - 19.34 , - 17.41 , 11.61 , 16.71 ,
10.85 , 6.96 , - 14.05 , - 10.74 , - 3.54 , 1.64 , 5.5 , 9.45 , - 20.54 ,
3.45 , 11.51 , - 5.27 , 12.75 , 3.13 , - 7.14 , - 12.38 , - 7.42 , - 0.76 ,
7.97 , 8.43 , 2.14 , - 8.42 , - 6.08 , - 10.08 , 7.01 , - 1.94 , - 6.24 ,
2.73 , 0.89 , - 0.1 , - 1.07 , 4.71 , - 0.16 , 4.44 , 2.45 , - 7.22 , - 0.33
, - 0.96 , 2.13 , - 3.95 , 3.09 , - 1.99 , - 1.03 , - 1.97 , - 2.8 , - 8.31 ,
3.05 , - 1.48 , 0.13 , - 2.03 , 1.67 , 1.65 , - 0.66 , - 0.51 , - 1.76 , 0.54
, 0.85 , - 0.79 , - 0.39 , 0.37 , - 2.51 , 1.79 , - 1.27 , 0.12 , - 2.11 ,
0.75 , - 1.94 , 3.75 , - 1.86 , - 2.12 , - 0.21 , - 0.87 , 0.3 , 0.27 , 1.04
, 2.13 , - 0.63 , - 2.49 , 0.95 , 0.49 , - 0.11 , 0.59 , 0.52 , 0.0 , - 0.39
, 0.13 , - 0.37 , 0.27 , 0.21 , - 0.86 , - 0.77 , - 0.23 , 0.04 , 0.87 , -
0.09 , - 0.89 , - 0.87 , 0.31 , 0.3 , 0.42 , 1.66 , - 0.45 , - 0.59 , 1.08 ,
- 1.14 , - 0.31 , - 0.07 , 0.78 , 0.54 , - 0.18 , 0.1 , 0.38 , 0.49 , 0.02 ,
0.44 , 0.42 , - 0.25 , - 0.26 , - 0.53 , - 0.26 , - 0.79 , - 29441.46 , -
1501.77 , 4795.99 , - 2445.88 , 3012.2 , - 2845.41 , 1676.35 , - 642.17 ,
1350.33 , - 2352.26 , - 115.29 , 1225.85 , 245.04 , 581.69 , - 538.7 , 907.42
, 813.68 , 283.54 , 120.49 , - 188.43 , - 334.85 , 180.95 , 70.38 , - 329.23
, - 232.91 , 360.14 , 46.98 , 192.35 , 196.98 , - 140.94 , - 119.14 , - 157.4
, 15.98 , 4.3 , 100.12 , 69.55 , 67.57 , - 20.61 , 72.79 , 33.3 , - 129.85 ,
58.74 , - 28.93 , - 66.64 , 13.14 , 7.35 , - 70.85 , 62.41 , 81.29 , - 75.99
, - 54.27 , - 6.79 , - 19.53 , 51.82 , 5.59 , 15.07 , 24.45 , 9.32 , 3.27 , -
2.88 , - 27.5 , 6.61 , - 2.32 , 23.98 , 8.89 , 10.04 , - 16.78 , - 18.26 , -
3.16 , 13.18 , - 20.56 , - 14.6 , 13.33 , 16.16 , 11.76 , 5.69 , - 15.98 , -
9.1 , - 2.02 , 2.26 , 5.33 , 8.83 , - 21.77 , 3.02 , 10.76 , - 3.22 , 11.74 ,
0.67 , - 6.74 , - 13.2 , - 6.88 , - 0.1 , 7.79 , 8.68 , 1.04 , - 9.06 , -
3.89 , - 10.54 , 8.44 , - 2.01 , - 6.26 , 3.28 , 0.17 , - 0.4 , 0.55 , 4.55 ,
- 0.55 , 4.4 , 1.7 , - 7.92 , - 0.67 , - 0.61 , 2.13 , - 4.16 , 2.33 , - 2.85
, - 1.8 , - 1.12 , - 3.59 , - 8.72 , 3.0 , - 1.4 , 0.0 , - 2.3 , 2.11 , 2.08
, - 0.6 , - 0.79 , - 1.05 , 0.58 , 0.76 , - 0.7 , - 0.2 , 0.14 , - 2.12 , 1.7
, - 1.44 , - 0.22 , - 2.57 , 0.44 , - 2.01 , 3.49 , - 2.34 , - 2.09 , - 0.16
, - 1.08 , 0.46 , 0.37 , 1.23 , 1.75 , - 0.89 , - 2.19 , 0.85 , 0.27 , 0.1 ,
0.72 , 0.54 , - 0.09 , - 0.37 , 0.29 , - 0.43 , 0.23 , 0.22 , - 0.89 , - 0.94
, - 0.16 , - 0.03 , 0.72 , - 0.02 , - 0.92 , - 0.88 , 0.42 , 0.49 , 0.63 ,
1.56 , - 0.42 , - 0.5 , 0.96 , - 1.24 , - 0.19 , - 0.1 , 0.81 , 0.42 , - 0.13
, - 0.04 , 0.38 , 0.48 , 0.08 , 0.48 , 0.46 , - 0.3 , - 0.35 , - 0.43 , -
0.36 , - 0.71 , - 29404.8 , - 1450.9 , 4652.5 , - 2499.6 , 2982.0 , - 2991.6
, 1677.0 , - 734.6 , 1363.2 , - 2381.2 , - 82.1 , 1236.2 , 241.9 , 525.7 , -
543.4 , 903.0 , 809.5 , 281.9 , 86.3 , - 158.4 , - 309.4 , 199.7 , 48.0 , -
349.7 , - 234.3 , 363.2 , 47.7 , 187.8 , 208.3 , - 140.7 , - 121.2 , - 151.2
, 32.3 , 13.5 , 98.9 , 66.0 , 65.5 , - 19.1 , 72.9 , 25.1 , - 121.5 , 52.8 ,
- 36.2 , - 64.5 , 13.5 , 8.9 , - 64.7 , 68.1 , 80.6 , - 76.7 , - 51.5 , - 8.2
, - 16.9 , 56.5 , 2.2 , 15.8 , 23.5 , 6.4 , - 2.2 , - 7.2 , - 27.2 , 9.8 , -
1.8 , 23.7 , 9.7 , 8.4 , - 17.6 , - 15.3 , - 0.5 , 12.8 , - 21.1 , - 11.7 ,
15.3 , 14.9 , 13.7 , 3.6 , - 16.5 , - 6.9 , - 0.3 , 2.8 , 5.0 , 8.4 , - 23.4
, 2.9 , 11.0 , - 1.5 , 9.8 , - 1.1 , - 5.1 , - 13.2 , - 6.3 , 1.1 , 7.8 , 8.8
, 0.4 , - 9.3 , - 1.4 , - 11.9 , 9.6 , - 1.9 , - 6.2 , 3.4 , - 0.1 , - 0.2 ,
1.7 , 3.6 , - 0.9 , 4.8 , 0.7 , - 8.6 , - 0.9 , - 0.1 , 1.9 , - 4.3 , 1.4 , -
3.4 , - 2.4 , - 0.1 , - 3.8 , - 8.8 , 3.0 , - 1.4 , 0.0 , - 2.5 , 2.5 , 2.3 ,
- 0.6 , - 0.9 , - 0.4 , 0.3 , 0.6 , - 0.7 , - 0.2 , - 0.1 , - 1.7 , 1.4 , -
1.6 , - 0.6 , - 3.0 , 0.2 , - 2.0 , 3.1 , - 2.6 , - 2.0 , - 0.1 , - 1.2 , 0.5
, 0.5 , 1.3 , 1.4 , - 1.2 , - 1.8 , 0.7 , 0.1 , 0.3 , 0.8 , 0.5 , - 0.2 , -
0.3 , 0.6 , - 0.5 , 0.2 , 0.1 , - 0.9 , - 1.1 , 0.0 , - 0.3 , 0.5 , 0.1 , -
0.9 , - 0.9 , 0.5 , 0.6 , 0.7 , 1.4 , - 0.3 , - 0.4 , 0.8 , - 1.3 , 0.0 , -
0.1 , 0.8 , 0.3 , 0.0 , - 0.1 , 0.4 , 0.5 , 0.1 , 0.5 , 0.5 , - 0.4 , - 0.5 ,
- 0.4 , - 0.4 , - 0.6 , 5.7 , 7.4 , - 25.9 , - 11.0 , - 7.0 , - 30.2 , - 2.1
, - 22.4 , 2.2 , - 5.9 , 6.0 , 3.1 , - 1.1 , - 12.0 , 0.5 , - 1.2 , - 1.6 , -
0.1 , - 5.9 , 6.5 , 5.2 , 3.6 , - 5.1 , - 5.0 , - 0.3 , 0.5 , 0.0 , - 0.6 ,
2.5 , 0.2 , - 0.6 , 1.3 , 3.0 , 0.9 , 0.3 , - 0.5 , - 0.3 , 0.0 , 0.4 , - 1.6
, 1.3 , - 1.3 , - 1.4 , 0.8 , 0.0 , 0.0 , 0.9 , 1.0 , - 0.1 , - 0.2 , 0.6 ,
0.0 , 0.6 , 0.7 , - 0.8 , 0.1 , - 0.2 , - 0.5 , - 1.1 , - 0.8 , 0.1 , 0.8 ,
0.3 , 0.0 , 0.1 , - 0.2 , - 0.1 , 0.6 , 0.4 , - 0.2 , - 0.1 , 0.5 , 0.4 , -
0.3 , 0.3 , - 0.4 , - 0.1 , 0.5 , 0.4 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; flat_tmp = gg1j4vfhz2 . P_71 *
3.1415926535897931 / 180.0 ; flat = muDoubleScalarAbs ( flat_tmp ) ;
lonNew_tmp = gg1j4vfhz2 . P_72 * 3.1415926535897931 / 180.0 ; if ( flat >
3.1415926535897931 ) { flat_tmp = muDoubleScalarMod ( flat_tmp +
3.1415926535897931 , 6.2831853071795862 ) - 3.1415926535897931 ; flat =
muDoubleScalarAbs ( flat_tmp ) ; } if ( flat > 1.5707963267948966 ) {
lonNew_tmp += 3.1415926535897931 ; flat_tmp = ( 1.5707963267948966 - ( flat -
1.5707963267948966 ) ) * muDoubleScalarSign ( flat_tmp ) ; } if (
muDoubleScalarAbs ( lonNew_tmp ) > 3.1415926535897931 ) { flat =
muDoubleScalarRem ( lonNew_tmp , 6.2831853071795862 ) ; lonNew_tmp = flat -
trunc ( flat / 3.1415926535897931 ) * 6.2831853071795862 ; } tmp_e =
muDoubleScalarFloor ( ( muDoubleScalarFloor ( gg1j4vfhz2 . P_73 / 5.0 ) * 5.0
- 1900.0 ) / 5.0 ) ; if ( muDoubleScalarIsNaN ( tmp_e ) ||
muDoubleScalarIsInf ( tmp_e ) ) { tmp_e = 0.0 ; } else { tmp_e =
muDoubleScalarRem ( tmp_e , 4.294967296E+9 ) ; } yearLowIdx = tmp_e < 0.0 ? (
uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_e : ( uint32_T ) tmp_e ; if (
yearLowIdx >= 25U ) { yearLowIdx = 24U ; } flat_tmp_p = 5.0 * ( real_T )
yearLowIdx + 1900.0 ; for ( i = 0U ; i < 195U ; i ++ ) { if ( yearLowIdx <
24U ) { y = tmp_m [ ( yearLowIdx + 1U ) * 195U + i ] ; } else { y = tmp_m [ i
+ 4875U ] * ( ( flat_tmp_p + 5.0 ) - 2020.0 ) + tmp_m [ i + 4680U ] ; } flat
= tmp_m [ 195U * yearLowIdx + i ] ; gh [ i ] = ( gg1j4vfhz2 . P_73 -
flat_tmp_p ) / ( ( flat_tmp_p + 5.0 ) - flat_tmp_p ) * ( y - flat ) + flat ;
} flat = 0.0 ; y = 0.0 ; z = 0.0 ; yearLowIdx = 1U ; i = 0U ; m = 1U ; c =
muDoubleScalarSin ( flat_tmp ) ; tmp_e = muDoubleScalarCos ( flat_tmp ) ;
tmp_i = c * c ; tmp = muDoubleScalarAtan2 ( 6.378137E+6 / muDoubleScalarSqrt
( 1.0 - tmp_i * 0.0066943799901413165 ) * 0.99330562000985867 * c ,
6.378137E+6 / muDoubleScalarSqrt ( 1.0 - muDoubleScalarSin ( flat_tmp ) *
muDoubleScalarSin ( flat_tmp ) * 0.0066943799901413165 ) * tmp_e ) ; tmp_p =
muDoubleScalarSin ( tmp ) ; p [ 0 ] = 2.0 * tmp_p ; tmp = muDoubleScalarCos (
tmp ) ; p [ 1 ] = 2.0 * tmp ; p [ 2 ] = 4.5 * tmp_p * tmp_p - 1.5 ; p [ 3 ] =
5.196152422706632 * tmp * tmp_p ; q [ 0 ] = - tmp ; q [ 1 ] = tmp_p ; q [ 2 ]
= - 3.0 * tmp * tmp_p ; q [ 3 ] = ( tmp_p * tmp_p - tmp * tmp ) *
1.7320508075688772 ; sl [ 0 ] = muDoubleScalarSin ( lonNew_tmp ) ; cl [ 0 ] =
muDoubleScalarCos ( lonNew_tmp ) ; lonNew_tmp = 6.378137E+6 /
muDoubleScalarSqrt ( 1.0 - muDoubleScalarSin ( flat_tmp ) * muDoubleScalarSin
( flat_tmp ) * 0.0066943799901413165 ) * 0.99330562000985867 *
muDoubleScalarSin ( flat_tmp ) ; flat_tmp = 6.378137E+6 / muDoubleScalarSqrt
( 1.0 - muDoubleScalarSin ( flat_tmp ) * muDoubleScalarSin ( flat_tmp ) *
0.0066943799901413165 ) * muDoubleScalarCos ( flat_tmp ) ; flat_tmp =
6.3712E+6 / muDoubleScalarSqrt ( lonNew_tmp * lonNew_tmp + flat_tmp *
flat_tmp ) ; lonNew_tmp = 0.0 ; fn = 0.0 ; for ( k = 1 ; k < 105 ; k ++ ) {
if ( i < m ) { m = 0U ; i ++ ; lonNew_tmp = muDoubleScalarPower ( flat_tmp ,
i + 2U ) ; fn = i ; } if ( ( uint32_T ) k >= 5U ) { if ( m == i ) { aa =
muDoubleScalarSqrt ( 1.0 - 0.5 / ( real_T ) m ) ; j = ( k - i ) - 2U ; p [ k
- 1U ] = ( 1.0 / ( real_T ) m + 1.0 ) * aa * tmp * p [ j ] ; q [ k - 1U ] = (
tmp_p / ( real_T ) m * p [ j ] + tmp * q [ j ] ) * aa ; flat_tmp_p = cl [ m -
2U ] ; sl [ m - 1U ] = sl [ m - 2U ] * cl [ 0 ] + flat_tmp_p * sl [ 0 ] ; cl
[ m - 1U ] = flat_tmp_p * cl [ 0 ] - sl [ m - 2U ] * sl [ 0 ] ; } else {
flat_tmp_p = ( real_T ) m * ( real_T ) m ; aa = muDoubleScalarSqrt ( fn * fn
- flat_tmp_p ) ; bb = muDoubleScalarSqrt ( ( fn - 1.0 ) * ( fn - 1.0 ) -
flat_tmp_p ) / aa ; cc = ( 2.0 * fn - 1.0 ) / aa ; ii = ( k - i ) +
MAX_uint32_T ; j = k - ( i << 1 ) ; p [ k - 1U ] = ( cc * tmp_p / fn * p [ ii
] - bb / ( fn - 1.0 ) * p [ j ] ) * ( fn + 1.0 ) ; q [ k - 1U ] = ( tmp_p * q
[ ii ] - tmp / fn * p [ ii ] ) * cc - bb * q [ j ] ; } } aa = gh [ yearLowIdx
- 1U ] * lonNew_tmp ; if ( m == 0U ) { flat += q [ k - 1U ] * aa ; z += p [ k
- 1U ] * - aa ; yearLowIdx ++ ; } else { bb = lonNew_tmp * gh [ yearLowIdx ]
; cc_tmp = sl [ m - 1U ] ; cc_tmp_p = cl [ m - 1U ] ; cc = cc_tmp_p * aa +
cc_tmp * bb ; flat_tmp_p = q [ k - 1U ] ; flat += flat_tmp_p * cc ; z_tmp = p
[ k - 1U ] ; z += z_tmp * - cc ; if ( tmp > 0.0 ) { y += ( sl [ m - 1U ] * aa
- cl [ m - 1U ] * bb ) * ( real_T ) m * z_tmp / ( ( fn + 1.0 ) * tmp ) ; }
else { y += ( cc_tmp * aa - cc_tmp_p * bb ) * flat_tmp_p * tmp_p ; }
yearLowIdx += 2U ; } m ++ ; } tmp_i -= - tmp_e * tmp_e ; if ( tmp_i == 0.0 )
{ flat_tmp = ( rtNaN ) ; c = ( rtNaN ) ; } else { flat_tmp = - ( - tmp_e *
tmp - c * tmp_p ) / tmp_i ; c = ( c * tmp - tmp_e * tmp_p ) / tmp_i ; }
localB -> bqngusoicj = muDoubleScalarAtan2 ( y , flat * flat_tmp + z * c ) *
180.0 / 3.1415926535897931 * gg1j4vfhz2 . P_74 ; } void bnch0okglb ( void ) {
} void bnch0okglbTID3 ( void ) { } void juhb5kpqth ( lwaspfor1h * localB ,
p4gxm2pphb * localZCSV ) { localZCSV -> cgsu32rrox [ 0 ] = 0.0 ; localZCSV ->
cgsu32rrox [ 1 ] = 0.0 ; if ( localB -> jo5jnxq5b0 > 1.0 ) { localZCSV ->
cgsu32rrox [ 0 ] = 1.0 ; } else if ( localB -> jo5jnxq5b0 < - 1.0 ) {
localZCSV -> cgsu32rrox [ 1 ] = 1.0 ; } } void of5w51uk5g ( alx13ridxf *
const dnzzmek5g1 ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( dnzzmek5g1 -> _mdlRefSfcnS , "IMU" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void lzcbyalfg0 (
SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports * *
mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , int_T mdlref_TID3 , alx13ridxf * const dnzzmek5g1 , lwaspfor1h
* localB , pw2cwofxao * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; ( void ) memset ( ( void * ) dnzzmek5g1 , 0 , sizeof ( alx13ridxf ) ) ;
dnzzmek5g1 -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; dnzzmek5g1 ->
Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; dnzzmek5g1 -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; dnzzmek5g1 -> Timing .
mdlref_GlobalTID [ 3 ] = mdlref_TID3 ; dnzzmek5g1 -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( dnzzmek5g1 -> _mdlRefSfcnS , "IMU" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> adxtncogj0 = 0.0
; localB -> je5lm0bgvy = 0.0 ; localB -> hoppgbc5ob = 0.0 ; localB ->
nazlcniqto = 0.0 ; localB -> ny2sdxlqtk = 0.0 ; localB -> ggzsbe1j1d = 0.0 ;
localB -> e41rhf2gxn = 0.0 ; localB -> jo5jnxq5b0 = 0.0 ; localB ->
gb0utxznst = 0.0 ; localB -> mi545kuhbx = 0.0 ; localB -> ndla2mfenu = 0.0 ;
localB -> ntrkjes4xo = 0.0 ; localB -> flfeizmnns = 0.0 ; localB ->
ckvi1saupr = 0.0 ; localB -> plmsq2zpvp = 0.0 ; localB -> bqngusoicj = 0.0 ;
} ( void ) memset ( ( void * ) localDW , 0 , sizeof ( pw2cwofxao ) ) ; {
int32_T i ; for ( i = 0 ; i < 35 ; i ++ ) { localDW -> dzmea34azl [ i ] = 0.0
; } } { int32_T i ; for ( i = 0 ; i < 35 ; i ++ ) { localDW -> hx1oghk4sr [ i
] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 35 ; i ++ ) { localDW ->
gabvgmpdig [ i ] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 35 ; i ++ ) {
localDW -> enl0o5fafs [ i ] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 35 ;
i ++ ) { localDW -> jyybjfdrxc [ i ] = 0.0 ; } } { int32_T i ; for ( i = 0 ;
i < 35 ; i ++ ) { localDW -> bt44350l5z [ i ] = 0.0 ; } } { int32_T i ; for (
i = 0 ; i < 35 ; i ++ ) { localDW -> iam3kk3iku [ i ] = 0.0 ; } } { int32_T i
; for ( i = 0 ; i < 35 ; i ++ ) { localDW -> lehpte3xdr [ i ] = 0.0 ; } } {
int32_T i ; for ( i = 0 ; i < 35 ; i ++ ) { localDW -> pvdywcpdck [ i ] = 0.0
; } } { int32_T i ; for ( i = 0 ; i < 35 ; i ++ ) { localDW -> njr3vp44bj [ i
] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 35 ; i ++ ) { localDW ->
a4clufiq5f [ i ] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 35 ; i ++ ) {
localDW -> nswjpck0sf [ i ] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 35 ;
i ++ ) { localDW -> am1ln1lji2 [ i ] = 0.0 ; } } IMU_InitializeDataMapInfo (
dnzzmek5g1 , localDW , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != (
NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( *
rt_ParentMMI , rt_ChildMMIIdx , & ( dnzzmek5g1 -> DataMapInfo . mmi ) ) ;
rtwCAPI_SetPath ( dnzzmek5g1 -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( dnzzmek5g1 -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes = 1 * sizeof ( real_T ) ;
mr_nonContOutputArray [ 0 ] [ 0 ] . currVal = ( char_T * ) & localB ->
hoppgbc5ob ; mr_nonContOutputArray [ 0 ] [ 0 ] . next = & (
mr_nonContOutputArray [ 0 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 1 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 0 ] [ 1 ] . currVal = ( char_T * ) &
localB -> je5lm0bgvy ; mr_nonContOutputArray [ 0 ] [ 1 ] . next = & (
mr_nonContOutputArray [ 0 ] [ 2 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 2 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 0 ] [ 2 ] . currVal = ( char_T * ) &
localB -> adxtncogj0 ; mr_nonContOutputArray [ 0 ] [ 2 ] . next = ( NULL ) ;
} if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) { mr_nonContOutputArray [ 1
] [ 0 ] . sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 1 ] [
0 ] . currVal = ( char_T * ) & localB -> ggzsbe1j1d ; mr_nonContOutputArray [
1 ] [ 0 ] . next = & ( mr_nonContOutputArray [ 1 ] [ 1 ] ) ; } if (
mr_nonContOutputArray [ 1 ] != ( NULL ) ) { mr_nonContOutputArray [ 1 ] [ 1 ]
. sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 1 ] [ 1 ] .
currVal = ( char_T * ) & localB -> ny2sdxlqtk ; mr_nonContOutputArray [ 1 ] [
1 ] . next = & ( mr_nonContOutputArray [ 1 ] [ 2 ] ) ; } if (
mr_nonContOutputArray [ 1 ] != ( NULL ) ) { mr_nonContOutputArray [ 1 ] [ 2 ]
. sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 1 ] [ 2 ] .
currVal = ( char_T * ) & localB -> nazlcniqto ; mr_nonContOutputArray [ 1 ] [
2 ] . next = ( NULL ) ; } if ( mr_nonContOutputArray [ 2 ] != ( NULL ) ) {
mr_nonContOutputArray [ 2 ] [ 0 ] . sizeInBytes = 1 * sizeof ( real_T ) ;
mr_nonContOutputArray [ 2 ] [ 0 ] . currVal = ( char_T * ) & localB ->
e41rhf2gxn ; mr_nonContOutputArray [ 2 ] [ 0 ] . next = ( NULL ) ; } if (
mr_nonContOutputArray [ 3 ] != ( NULL ) ) { mr_nonContOutputArray [ 3 ] [ 0 ]
. sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 3 ] [ 0 ] .
currVal = ( char_T * ) & localB -> ntrkjes4xo ; mr_nonContOutputArray [ 3 ] [
0 ] . next = & ( mr_nonContOutputArray [ 3 ] [ 1 ] ) ; } if (
mr_nonContOutputArray [ 3 ] != ( NULL ) ) { mr_nonContOutputArray [ 3 ] [ 1 ]
. sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 3 ] [ 1 ] .
currVal = ( char_T * ) & localB -> ndla2mfenu ; mr_nonContOutputArray [ 3 ] [
1 ] . next = & ( mr_nonContOutputArray [ 3 ] [ 2 ] ) ; } if (
mr_nonContOutputArray [ 3 ] != ( NULL ) ) { mr_nonContOutputArray [ 3 ] [ 2 ]
. sizeInBytes = 1 * sizeof ( real_T ) ; mr_nonContOutputArray [ 3 ] [ 2 ] .
currVal = ( char_T * ) & localB -> mi545kuhbx ; mr_nonContOutputArray [ 3 ] [
2 ] . next = ( NULL ) ; } if ( mr_nonContOutputArray [ 4 ] != ( NULL ) ) {
mr_nonContOutputArray [ 4 ] [ 0 ] . sizeInBytes = 1 * sizeof ( real_T ) ;
mr_nonContOutputArray [ 4 ] [ 0 ] . currVal = ( char_T * ) & localB ->
plmsq2zpvp ; mr_nonContOutputArray [ 4 ] [ 0 ] . next = & (
mr_nonContOutputArray [ 4 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 4 ] != (
NULL ) ) { mr_nonContOutputArray [ 4 ] [ 1 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 4 ] [ 1 ] . currVal = ( char_T * ) &
localB -> ckvi1saupr ; mr_nonContOutputArray [ 4 ] [ 1 ] . next = & (
mr_nonContOutputArray [ 4 ] [ 2 ] ) ; } if ( mr_nonContOutputArray [ 4 ] != (
NULL ) ) { mr_nonContOutputArray [ 4 ] [ 2 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 4 ] [ 2 ] . currVal = ( char_T * ) &
localB -> flfeizmnns ; mr_nonContOutputArray [ 4 ] [ 2 ] . next = ( NULL ) ;
} } void mr_IMU_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName
, int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo = false ;
ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if (
regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS
, modelName , rtMdlInfo_IMU , 49 ) ; * retVal = 1 ; } static void
mr_IMU_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const
void * srcData , size_t numBytes ) ; static void mr_IMU_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) { mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1
, numBytes , mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData (
newArray ) , ( const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber (
destArray , i , j , newArray ) ; } static void mr_IMU_restoreDataFromMxArray
( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_IMU_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_IMU_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) ; static void mr_IMU_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber (
destArray , i , j , mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static
uint_T mr_IMU_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_IMU_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i ,
int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_IMU_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_IMU_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_IMU_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_IMU_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) {
const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber
( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T *
) & varData [ offset * numBytes ] , numBytes ) ; } static void
mr_IMU_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i ,
int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_IMU_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i ,
int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber (
destArray , i , j ) , offset , mxCreateDoubleScalar ( ( double ) fieldVal ) )
; } static uint_T mr_IMU_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_IMU_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_IMU_GetDWork ( const nujx2jx2eqf * mdlrefDW ) { static
const char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_IMU_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( mdlrefDW ->
rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char *
rtdwDataFieldNames [ 31 ] = { "mdlrefDW->rtdw.dzmea34azl" ,
"mdlrefDW->rtdw.hx1oghk4sr" , "mdlrefDW->rtdw.gabvgmpdig" ,
"mdlrefDW->rtdw.enl0o5fafs" , "mdlrefDW->rtdw.jyybjfdrxc" ,
"mdlrefDW->rtdw.bt44350l5z" , "mdlrefDW->rtdw.iam3kk3iku" ,
"mdlrefDW->rtdw.lehpte3xdr" , "mdlrefDW->rtdw.pvdywcpdck" ,
"mdlrefDW->rtdw.njr3vp44bj" , "mdlrefDW->rtdw.a4clufiq5f" ,
"mdlrefDW->rtdw.nswjpck0sf" , "mdlrefDW->rtdw.am1ln1lji2" ,
"mdlrefDW->rtdw.b1cqa15bti" , "mdlrefDW->rtdw.bftlgm2h24" ,
"mdlrefDW->rtdw.bigqqxmkv3" , "mdlrefDW->rtdw.orqxu50yjo" ,
"mdlrefDW->rtdw.kmkpufp5sg" , "mdlrefDW->rtdw.e01iggdnss" ,
"mdlrefDW->rtdw.cvwnpmibx2" , "mdlrefDW->rtdw.oikfp2swox" ,
"mdlrefDW->rtdw.kpeo33wfz4" , "mdlrefDW->rtdw.gszkzyk2qb" ,
"mdlrefDW->rtdw.oqzjkq2i13" , "mdlrefDW->rtdw.ff0sl1bb0i" ,
"mdlrefDW->rtdw.psx1mmcpf3" , "mdlrefDW->rtdw.d130fluwan" ,
"mdlrefDW->rtdw.atwrlzyw1o" , "mdlrefDW->rtdw.osfpfc2v5i" ,
"mdlrefDW->rtdw.crhx2qro5z" , "mdlrefDW->rtdw.kfkavjl3qi" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 31 , rtdwDataFieldNames ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & ( mdlrefDW
-> rtdw . dzmea34azl ) , sizeof ( mdlrefDW -> rtdw . dzmea34azl ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & ( mdlrefDW
-> rtdw . hx1oghk4sr ) , sizeof ( mdlrefDW -> rtdw . hx1oghk4sr ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & ( mdlrefDW
-> rtdw . gabvgmpdig ) , sizeof ( mdlrefDW -> rtdw . gabvgmpdig ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & ( mdlrefDW
-> rtdw . enl0o5fafs ) , sizeof ( mdlrefDW -> rtdw . enl0o5fafs ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & ( mdlrefDW
-> rtdw . jyybjfdrxc ) , sizeof ( mdlrefDW -> rtdw . jyybjfdrxc ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & ( mdlrefDW
-> rtdw . bt44350l5z ) , sizeof ( mdlrefDW -> rtdw . bt44350l5z ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & ( mdlrefDW
-> rtdw . iam3kk3iku ) , sizeof ( mdlrefDW -> rtdw . iam3kk3iku ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & ( mdlrefDW
-> rtdw . lehpte3xdr ) , sizeof ( mdlrefDW -> rtdw . lehpte3xdr ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & ( mdlrefDW
-> rtdw . pvdywcpdck ) , sizeof ( mdlrefDW -> rtdw . pvdywcpdck ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & ( mdlrefDW
-> rtdw . njr3vp44bj ) , sizeof ( mdlrefDW -> rtdw . njr3vp44bj ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & ( mdlrefDW
-> rtdw . a4clufiq5f ) , sizeof ( mdlrefDW -> rtdw . a4clufiq5f ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & ( mdlrefDW
-> rtdw . nswjpck0sf ) , sizeof ( mdlrefDW -> rtdw . nswjpck0sf ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & ( mdlrefDW
-> rtdw . am1ln1lji2 ) , sizeof ( mdlrefDW -> rtdw . am1ln1lji2 ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & ( mdlrefDW
-> rtdw . b1cqa15bti ) , sizeof ( mdlrefDW -> rtdw . b1cqa15bti ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & ( mdlrefDW
-> rtdw . bftlgm2h24 ) , sizeof ( mdlrefDW -> rtdw . bftlgm2h24 ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & ( mdlrefDW
-> rtdw . bigqqxmkv3 ) , sizeof ( mdlrefDW -> rtdw . bigqqxmkv3 ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & ( mdlrefDW
-> rtdw . orqxu50yjo ) , sizeof ( mdlrefDW -> rtdw . orqxu50yjo ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & ( mdlrefDW
-> rtdw . kmkpufp5sg ) , sizeof ( mdlrefDW -> rtdw . kmkpufp5sg ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & ( mdlrefDW
-> rtdw . e01iggdnss ) , sizeof ( mdlrefDW -> rtdw . e01iggdnss ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & ( mdlrefDW
-> rtdw . cvwnpmibx2 ) , sizeof ( mdlrefDW -> rtdw . cvwnpmibx2 ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & ( mdlrefDW
-> rtdw . oikfp2swox ) , sizeof ( mdlrefDW -> rtdw . oikfp2swox ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & ( mdlrefDW
-> rtdw . kpeo33wfz4 ) , sizeof ( mdlrefDW -> rtdw . kpeo33wfz4 ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & ( mdlrefDW
-> rtdw . gszkzyk2qb ) , sizeof ( mdlrefDW -> rtdw . gszkzyk2qb ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) & ( mdlrefDW
-> rtdw . oqzjkq2i13 ) , sizeof ( mdlrefDW -> rtdw . oqzjkq2i13 ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) & ( mdlrefDW
-> rtdw . ff0sl1bb0i ) , sizeof ( mdlrefDW -> rtdw . ff0sl1bb0i ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) & ( mdlrefDW
-> rtdw . psx1mmcpf3 ) , sizeof ( mdlrefDW -> rtdw . psx1mmcpf3 ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * ) & ( mdlrefDW
-> rtdw . d130fluwan ) , sizeof ( mdlrefDW -> rtdw . d130fluwan ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * ) & ( mdlrefDW
-> rtdw . atwrlzyw1o ) , sizeof ( mdlrefDW -> rtdw . atwrlzyw1o ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * ) & ( mdlrefDW
-> rtdw . osfpfc2v5i ) , sizeof ( mdlrefDW -> rtdw . osfpfc2v5i ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void * ) & ( mdlrefDW
-> rtdw . crhx2qro5z ) , sizeof ( mdlrefDW -> rtdw . crhx2qro5z ) ) ;
mr_IMU_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void * ) & ( mdlrefDW
-> rtdw . kfkavjl3qi ) , sizeof ( mdlrefDW -> rtdw . kfkavjl3qi ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ; return
ssDW ; } void mr_IMU_SetDWork ( nujx2jx2eqf * mdlrefDW , const mxArray * ssDW
) { ( void ) ssDW ; ( void ) mdlrefDW ; mr_IMU_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) )
; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . dzmea34azl
) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . dzmea34azl ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . hx1oghk4sr
) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . hx1oghk4sr ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . gabvgmpdig
) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . gabvgmpdig ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . enl0o5fafs
) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . enl0o5fafs ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . jyybjfdrxc
) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . jyybjfdrxc ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . bt44350l5z
) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . bt44350l5z ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . iam3kk3iku
) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw . iam3kk3iku ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . lehpte3xdr
) , rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . lehpte3xdr ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . pvdywcpdck
) , rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . pvdywcpdck ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . njr3vp44bj
) , rtdwData , 0 , 9 , sizeof ( mdlrefDW -> rtdw . njr3vp44bj ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . a4clufiq5f
) , rtdwData , 0 , 10 , sizeof ( mdlrefDW -> rtdw . a4clufiq5f ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . nswjpck0sf
) , rtdwData , 0 , 11 , sizeof ( mdlrefDW -> rtdw . nswjpck0sf ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . am1ln1lji2
) , rtdwData , 0 , 12 , sizeof ( mdlrefDW -> rtdw . am1ln1lji2 ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . b1cqa15bti
) , rtdwData , 0 , 13 , sizeof ( mdlrefDW -> rtdw . b1cqa15bti ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . bftlgm2h24
) , rtdwData , 0 , 14 , sizeof ( mdlrefDW -> rtdw . bftlgm2h24 ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . bigqqxmkv3
) , rtdwData , 0 , 15 , sizeof ( mdlrefDW -> rtdw . bigqqxmkv3 ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . orqxu50yjo
) , rtdwData , 0 , 16 , sizeof ( mdlrefDW -> rtdw . orqxu50yjo ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . kmkpufp5sg
) , rtdwData , 0 , 17 , sizeof ( mdlrefDW -> rtdw . kmkpufp5sg ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . e01iggdnss
) , rtdwData , 0 , 18 , sizeof ( mdlrefDW -> rtdw . e01iggdnss ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . cvwnpmibx2
) , rtdwData , 0 , 19 , sizeof ( mdlrefDW -> rtdw . cvwnpmibx2 ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . oikfp2swox
) , rtdwData , 0 , 20 , sizeof ( mdlrefDW -> rtdw . oikfp2swox ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . kpeo33wfz4
) , rtdwData , 0 , 21 , sizeof ( mdlrefDW -> rtdw . kpeo33wfz4 ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . gszkzyk2qb
) , rtdwData , 0 , 22 , sizeof ( mdlrefDW -> rtdw . gszkzyk2qb ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . oqzjkq2i13
) , rtdwData , 0 , 23 , sizeof ( mdlrefDW -> rtdw . oqzjkq2i13 ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . ff0sl1bb0i
) , rtdwData , 0 , 24 , sizeof ( mdlrefDW -> rtdw . ff0sl1bb0i ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . psx1mmcpf3
) , rtdwData , 0 , 25 , sizeof ( mdlrefDW -> rtdw . psx1mmcpf3 ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . d130fluwan
) , rtdwData , 0 , 26 , sizeof ( mdlrefDW -> rtdw . d130fluwan ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . atwrlzyw1o
) , rtdwData , 0 , 27 , sizeof ( mdlrefDW -> rtdw . atwrlzyw1o ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . osfpfc2v5i
) , rtdwData , 0 , 28 , sizeof ( mdlrefDW -> rtdw . osfpfc2v5i ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . crhx2qro5z
) , rtdwData , 0 , 29 , sizeof ( mdlrefDW -> rtdw . crhx2qro5z ) ) ;
mr_IMU_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . kfkavjl3qi
) , rtdwData , 0 , 30 , sizeof ( mdlrefDW -> rtdw . kfkavjl3qi ) ) ; } } void
mr_IMU_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T chksum [ 4
] = { 739568443U , 2265339252U , 2889481824U , 3664320807U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "IMU" , & chksum [ 0 ] ) ; }
mxArray * mr_IMU_GetSimStateDisallowedBlocks ( ) { return NULL ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
