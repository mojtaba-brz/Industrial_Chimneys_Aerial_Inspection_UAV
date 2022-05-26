#include "Ulterasonic_capi.h"
#include "Ulterasonic.h"
#include "Ulterasonic_private.h"
#include "RandSrcCreateSeeds_64.h"
#include "RandSrcInitState_U_64.h"
#include "RandSrc_U_D.h"
#include "atan_NHvdu6PS.h"
#include "iseq_sJSIRDHq.h"
#include "norm_Yd2SRzkc.h"
#include "sqrt_JVgK17Mi.h"
#include "xzlartg_F9md8Q7e.h"
static RegMdlInfo rtMdlInfo_Ulterasonic [ 77 ] = { { "je3r5qpf5jf" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "Ulterasonic" } , {
"ei5blyis3u" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Ulterasonic" } , { "jkuweujpzv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Ulterasonic" } , { "nnyuaggwwa" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Ulterasonic" } , {
"peutvmcjka" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Ulterasonic" } , { "eou3x0f43s" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Ulterasonic" } , { "myyufdo2ho" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Ulterasonic" } , {
"hac2g0ycg1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Ulterasonic" } , { "bgzynvnwpr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Ulterasonic" } , { "gaa4actlmi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Ulterasonic" } , {
"k5dwb4yw3w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Ulterasonic" } , { "kdj3qilhdn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Ulterasonic" } , { "ahybgri1ag" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Ulterasonic" } , {
"a4khp4m4pw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Ulterasonic" } , { "cfj51hc5xk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Ulterasonic" } , { "ovvukifj1f" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Ulterasonic" } , {
"kmdfl4acxn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Ulterasonic" } , { "miznmgwubb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Ulterasonic" } , { "pyxuxe1hue" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Ulterasonic" } , {
"jcsf3n5svm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Ulterasonic" } , { "mkwmuqmwun" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Ulterasonic" } , { "blkju0oze5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Ulterasonic" } , {
"pmxxxo3kle" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Ulterasonic" } , { "b25ht45b1u" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Ulterasonic" } , { "nypdqkzeuf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Ulterasonic" } , {
"Ulterasonic" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , {
"pfhrodo5zz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Ulterasonic" } , { "ekwokhcoht" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Ulterasonic" } , { "a2vszynkmk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Ulterasonic" } , {
"Sensor_err_bus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"ultrasonic" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "baro" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "gps" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "vel" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "rz" , MDL_INFO_ID_DATA_TYPE
, 0 , - 1 , ( NULL ) } , { "ry" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "rx" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "mag" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "az" , MDL_INFO_ID_DATA_TYPE
, 0 , - 1 , ( NULL ) } , { "ay" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "ax" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "gz" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "gy" , MDL_INFO_ID_DATA_TYPE
, 0 , - 1 , ( NULL ) } , { "gx" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_PkDIdrnMaBXirtyxpDXw6E" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_gCex0a17vv9fsVTjMsD48G" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_PZr7p0tHpZ4GP4RNH1tZGE" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_UNu12Tv2Iby3Uw99FT8N1G" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_uJg9XNv2KLvy1ZDH1yzh1D" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "env_bus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"chimney2_3" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "chimney2_2"
, MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "chimney2_1" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "chimney1_2" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "chimney1_1" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "flange2_3" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "flange2_2" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "flange2_1" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "flange1_2" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "flange1_1" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_Pz6Tj28WhUBpH2SAzHmELH" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_vVK887imL2KkaadxyFQyoD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_73iqWC83UABBKShbCAzZNG" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "mr_Ulterasonic_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Ulterasonic" } , {
"mr_Ulterasonic_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Ulterasonic" } , {
"mr_Ulterasonic_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Ulterasonic" } , {
"mr_Ulterasonic_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Ulterasonic" } , {
"mr_Ulterasonic_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "Ulterasonic" } , {
"mr_Ulterasonic_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Ulterasonic" } , {
"mr_Ulterasonic_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "Ulterasonic" } , { "mr_Ulterasonic_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Ulterasonic" } , {
"mr_Ulterasonic_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "Ulterasonic" } , { "mr_Ulterasonic_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Ulterasonic" } , {
"mr_Ulterasonic_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Ulterasonic" } , { "mr_Ulterasonic_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "Ulterasonic" } , { "Ulterasonic.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "Ulterasonic.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "Ulterasonic" } } ;
bbmg2sw1cqn bbmg2sw1cq = { 1.0 , 0.0 , 1.0 , 1.0 , 1.0 , 0.0 , 0.0 } ; static
boolean_T j3drc0c1du ( const real_T x_data [ ] , const int32_T x_size [ 2 ] )
; static void cu134zgkey ( real_T a_data [ ] , const int32_T a_size [ 2 ] ) ;
static void hlq03klkkf ( const real_T A_data [ ] , const int32_T A_size [ 2 ]
, real_T V_data [ ] , int32_T * V_size ) ; static void m0fj0w1nu2 ( int32_T
ilo , int32_T ihi , creal_T A_data [ ] , const int32_T A_size [ 2 ] ) ;
static void ltjn11luok ( const creal_T A_data [ ] , const int32_T A_size [ 2
] , int32_T ilo , int32_T ihi , int32_T * info , creal_T alpha1_data [ ] ,
int32_T * alpha1_size , creal_T beta1_data [ ] , int32_T * beta1_size ) ;
static void gfqrrt1mb1 ( const real_T A_data [ ] , const int32_T A_size [ 2 ]
, creal_T V_data [ ] , int32_T * V_size ) ; static real_T l0hp4g12nr (
ahybgri1ag * localDW ) ; static boolean_T j3drc0c1du ( const real_T x_data [
] , const int32_T x_size [ 2 ] ) { int32_T k ; int32_T nx ; boolean_T b_p ;
nx = x_size [ 0 ] * x_size [ 1 ] ; b_p = true ; for ( k = 0 ; k < nx ; k ++ )
{ if ( b_p && ( ( ! muDoubleScalarIsInf ( x_data [ k ] ) ) && ( !
muDoubleScalarIsNaN ( x_data [ k ] ) ) ) ) { } else { b_p = false ; } }
return ! b_p ; } static void cu134zgkey ( real_T a_data [ ] , const int32_T
a_size [ 2 ] ) { real_T alpha1 ; int32_T i ; int32_T n ; n = a_size [ 0 ] ; i
= 0 ; while ( i <= n - 2 ) { alpha1 = a_data [ 1 ] ; a_data [ 1 ] = 1.0 ;
a_data [ 1 ] = alpha1 ; i = 1 ; } } static void hlq03klkkf ( const real_T
A_data [ ] , const int32_T A_size [ 2 ] , real_T V_data [ ] , int32_T *
V_size ) { real_T T_data [ 4 ] ; real_T b_A_data [ 4 ] ; real_T aa ; real_T
ab ; real_T ba ; real_T bb ; real_T bcmis ; real_T cc ; real_T htmp2 ; real_T
p ; real_T scale ; real_T z ; int32_T b_A_size [ 2 ] ; int32_T T_size_idx_0 ;
int32_T ab_tmp ; int32_T b_A ; int32_T b_i ; int32_T b_k ; int32_T ba_p ;
int32_T bb_tmp ; int32_T ldh ; boolean_T exitg1 ; if ( j3drc0c1du ( A_data ,
A_size ) ) { T_size_idx_0 = ( int8_T ) A_size [ 0 ] ; ldh = ( int8_T ) A_size
[ 0 ] * ( int8_T ) A_size [ 1 ] - 1 ; for ( b_i = 0 ; b_i <= ldh ; b_i ++ ) {
T_data [ b_i ] = ( rtNaN ) ; } if ( 1 < ( int8_T ) A_size [ 0 ] ) { T_data [
1 ] = 0.0 ; } } else { b_A_size [ 0 ] = A_size [ 0 ] ; b_A_size [ 1 ] =
A_size [ 1 ] ; ldh = A_size [ 0 ] * A_size [ 1 ] ; if ( 0 <= ldh - 1 ) {
memcpy ( & b_A_data [ 0 ] , & A_data [ 0 ] , ldh * sizeof ( real_T ) ) ; }
cu134zgkey ( b_A_data , b_A_size ) ; T_size_idx_0 = b_A_size [ 0 ] ; ldh =
b_A_size [ 0 ] * b_A_size [ 1 ] ; if ( 0 <= ldh - 1 ) { memcpy ( & T_data [ 0
] , & b_A_data [ 0 ] , ldh * sizeof ( real_T ) ) ; } ldh = b_A_size [ 0 ] ;
if ( 1 != b_A_size [ 0 ] ) { for ( b_i = 1 ; b_i + 1 >= 1 ; b_i = b_k - 2 ) {
b_k = b_i + 1 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_k > 1 ) ) { ba =
muDoubleScalarAbs ( T_data [ 1 ] ) ; if ( ba <= 2.0041683600089728E-292 ) {
exitg1 = true ; } else { z = T_data [ 1 + T_size_idx_0 ] ; bb =
muDoubleScalarAbs ( z ) ; aa = T_data [ 0 ] ; if ( ba <= ( muDoubleScalarAbs
( aa ) + bb ) * 2.2204460492503131E-16 ) { htmp2 = muDoubleScalarAbs ( T_data
[ T_size_idx_0 ] ) ; if ( ba > htmp2 ) { ab = ba ; ba = htmp2 ; } else { ab =
htmp2 ; } htmp2 = muDoubleScalarAbs ( aa - z ) ; if ( bb > htmp2 ) { aa = bb
; bb = htmp2 ; } else { aa = htmp2 ; } htmp2 = aa + ab ; if ( ab / htmp2 * ba
<= muDoubleScalarMax ( 2.0041683600089728E-292 , aa / htmp2 * bb *
2.2204460492503131E-16 ) ) { exitg1 = true ; } else { b_k = 1 ; } } else {
b_k = 1 ; } } } if ( b_k > 1 ) { T_data [ 1 ] = 0.0 ; } if ( ( b_i + 1 != b_k
) && ( b_k == b_i ) ) { cc = T_data [ 0 ] ; ab_tmp = T_size_idx_0 * b_i ; ab
= T_data [ ab_tmp ] ; ba = T_data [ b_i ] ; bb_tmp = b_i + ab_tmp ; bb =
T_data [ bb_tmp ] ; p = bb ; T_data [ 0 ] = cc ; if ( ba == 0.0 ) { htmp2 =
1.0 ; z = 0.0 ; } else if ( ab == 0.0 ) { htmp2 = 0.0 ; z = 1.0 ; p = cc ;
T_data [ 0 ] = bb ; ab = - ba ; ba = 0.0 ; } else { aa = cc - bb ; if ( ( aa
== 0.0 ) && ( ( ab < 0.0 ) != ( ba < 0.0 ) ) ) { htmp2 = 1.0 ; z = 0.0 ; }
else { p = 0.5 * aa ; z = muDoubleScalarAbs ( ab ) ; bcmis =
muDoubleScalarAbs ( ba ) ; htmp2 = muDoubleScalarMax ( z , bcmis ) ; if ( ! (
ab < 0.0 ) ) { b_A = 1 ; } else { b_A = - 1 ; } if ( ! ( ba < 0.0 ) ) { ba_p
= 1 ; } else { ba_p = - 1 ; } bcmis = muDoubleScalarMin ( z , bcmis ) * (
real_T ) b_A * ( real_T ) ba_p ; scale = muDoubleScalarMax (
muDoubleScalarAbs ( p ) , htmp2 ) ; z = p / scale * p + htmp2 / scale * bcmis
; if ( z >= 8.8817841970012523E-16 ) { if ( ! ( p < 0.0 ) ) { cc =
muDoubleScalarSqrt ( scale ) * muDoubleScalarSqrt ( z ) ; } else { cc = - (
muDoubleScalarSqrt ( scale ) * muDoubleScalarSqrt ( z ) ) ; } z = p + cc ;
T_data [ 0 ] = bb + z ; p = bb - htmp2 / z * bcmis ; bcmis =
muDoubleScalarHypot ( ba , z ) ; htmp2 = z / bcmis ; z = ba / bcmis ; ab -=
ba ; ba = 0.0 ; } else { z = ab + ba ; bcmis = muDoubleScalarHypot ( z , aa )
; htmp2 = muDoubleScalarSqrt ( ( muDoubleScalarAbs ( z ) / bcmis + 1.0 ) *
0.5 ) ; if ( ! ( z < 0.0 ) ) { b_A = 1 ; } else { b_A = - 1 ; } z = - ( p / (
bcmis * htmp2 ) ) * ( real_T ) b_A ; aa = cc * htmp2 + ab * z ; p = - cc * z
+ ab * htmp2 ; cc = ba * htmp2 + bb * z ; bb = - ba * z + bb * htmp2 ; ab = p
* htmp2 + bb * z ; ba = - aa * z + cc * htmp2 ; aa = ( ( aa * htmp2 + cc * z
) + ( - p * z + bb * htmp2 ) ) * 0.5 ; T_data [ 0 ] = aa ; p = aa ; if ( ba
!= 0.0 ) { if ( ab != 0.0 ) { if ( ( ab < 0.0 ) == ( ba < 0.0 ) ) { cc =
muDoubleScalarSqrt ( muDoubleScalarAbs ( ab ) ) ; bb = muDoubleScalarSqrt (
muDoubleScalarAbs ( ba ) ) ; p = cc * bb ; if ( ba < 0.0 ) { p = - p ; }
bcmis = 1.0 / muDoubleScalarSqrt ( muDoubleScalarAbs ( ab + ba ) ) ; T_data [
0 ] = aa + p ; p = aa - p ; ab -= ba ; ba = 0.0 ; cc *= bcmis ; bb *= bcmis ;
aa = htmp2 * cc - z * bb ; z = htmp2 * bb + z * cc ; htmp2 = aa ; } } else {
ab = - ba ; ba = 0.0 ; aa = htmp2 ; htmp2 = - z ; z = aa ; } } } } } T_data [
ab_tmp ] = ab ; T_data [ b_i ] = ba ; T_data [ bb_tmp ] = p ; if ( b_A_size [
0 ] > b_i + 1 ) { ba = T_data [ ldh ] * htmp2 ; bb = T_data [ ldh ] * z ;
T_data [ ldh ] = ba - bb ; T_data [ ldh ] = ba + bb ; } } } } } * V_size =
T_size_idx_0 ; for ( ldh = 0 ; ldh < T_size_idx_0 ; ldh ++ ) { V_data [ ldh ]
= T_data [ ldh + T_size_idx_0 * ldh ] ; } } static void m0fj0w1nu2 ( int32_T
ilo , int32_T ihi , creal_T A_data [ ] , const int32_T A_size [ 2 ] ) {
real_T f2 ; real_T f2_tmp ; real_T fs_im ; real_T fs_re ; real_T g2 ; real_T
gs_im ; real_T gs_re ; real_T scale ; real_T scale_tmp ; int32_T count ;
int32_T jcol ; int32_T jrow ; int32_T rescaledir ; int32_T scale_tmp_tmp ;
int32_T scale_tmp_tmp_tmp ; boolean_T guard1 = false ; if ( ( A_size [ 0 ] >
1 ) && ( ihi >= ilo + 2 ) ) { for ( jcol = ilo - 1 ; jcol + 1 < ihi - 1 ;
jcol ++ ) { for ( jrow = ihi - 2 ; jrow + 2 > jcol + 2 ; jrow -- ) {
scale_tmp_tmp_tmp = A_size [ 0 ] * jcol ; scale_tmp_tmp = jrow +
scale_tmp_tmp_tmp ; scale_tmp = muDoubleScalarAbs ( A_data [ scale_tmp_tmp ]
. re ) ; scale = scale_tmp ; f2_tmp = muDoubleScalarAbs ( A_data [
scale_tmp_tmp ] . im ) ; if ( f2_tmp > scale_tmp ) { scale = f2_tmp ; }
scale_tmp_tmp_tmp = ( jrow + scale_tmp_tmp_tmp ) + 1 ; f2 = muDoubleScalarAbs
( A_data [ scale_tmp_tmp_tmp ] . re ) ; g2 = muDoubleScalarAbs ( A_data [
scale_tmp_tmp_tmp ] . im ) ; if ( g2 > f2 ) { f2 = g2 ; } if ( f2 > scale ) {
scale = f2 ; } fs_re = A_data [ scale_tmp_tmp ] . re ; fs_im = A_data [
scale_tmp_tmp ] . im ; gs_re = A_data [ scale_tmp_tmp_tmp ] . re ; gs_im =
A_data [ scale_tmp_tmp_tmp ] . im ; count = - 1 ; rescaledir = 0 ; guard1 =
false ; if ( scale >= 7.4428285367870146E+137 ) { do { count ++ ; fs_re *=
1.3435752215134178E-138 ; fs_im *= 1.3435752215134178E-138 ; gs_re *=
1.3435752215134178E-138 ; gs_im *= 1.3435752215134178E-138 ; scale *=
1.3435752215134178E-138 ; } while ( ! ( scale < 7.4428285367870146E+137 ) ) ;
rescaledir = 1 ; guard1 = true ; } else if ( scale <= 1.3435752215134178E-138
) { if ( ( A_data [ scale_tmp_tmp_tmp ] . re == 0.0 ) && ( A_data [
scale_tmp_tmp_tmp ] . im == 0.0 ) ) { scale = 1.0 ; gs_re = 0.0 ; gs_im = 0.0
; fs_re = A_data [ scale_tmp_tmp ] . re ; fs_im = A_data [ scale_tmp_tmp ] .
im ; } else { do { count ++ ; fs_re *= 7.4428285367870146E+137 ; fs_im *=
7.4428285367870146E+137 ; gs_re *= 7.4428285367870146E+137 ; gs_im *=
7.4428285367870146E+137 ; scale *= 7.4428285367870146E+137 ; } while ( ! (
scale > 1.3435752215134178E-138 ) ) ; rescaledir = - 1 ; guard1 = true ; } }
else { guard1 = true ; } if ( guard1 ) { f2 = fs_re * fs_re + fs_im * fs_im ;
g2 = gs_re * gs_re + gs_im * gs_im ; scale = g2 ; if ( 1.0 > g2 ) { scale =
1.0 ; } if ( f2 <= scale * 2.0041683600089728E-292 ) { if ( ( A_data [
scale_tmp_tmp ] . re == 0.0 ) && ( A_data [ scale_tmp_tmp ] . im == 0.0 ) ) {
scale = 0.0 ; fs_re = muDoubleScalarHypot ( A_data [ scale_tmp_tmp_tmp ] . re
, A_data [ scale_tmp_tmp_tmp ] . im ) ; fs_im = 0.0 ; g2 =
muDoubleScalarHypot ( gs_re , gs_im ) ; gs_re /= g2 ; gs_im = - gs_im / g2 ;
} else { f2 = muDoubleScalarSqrt ( g2 ) ; scale = muDoubleScalarHypot ( fs_re
, fs_im ) / f2 ; g2 = scale_tmp ; if ( f2_tmp > scale_tmp ) { g2 = f2_tmp ; }
if ( g2 > 1.0 ) { g2 = muDoubleScalarHypot ( A_data [ scale_tmp_tmp ] . re ,
A_data [ scale_tmp_tmp ] . im ) ; fs_re = A_data [ scale_tmp_tmp ] . re / g2
; fs_im = A_data [ scale_tmp_tmp ] . im / g2 ; } else { fs_re =
7.4428285367870146E+137 * A_data [ scale_tmp_tmp ] . re ; fs_im =
7.4428285367870146E+137 * A_data [ scale_tmp_tmp ] . im ; g2 =
muDoubleScalarHypot ( fs_re , fs_im ) ; fs_re /= g2 ; fs_im /= g2 ; } g2 =
gs_re / f2 ; gs_im = - gs_im / f2 ; gs_re = fs_re * g2 - fs_im * gs_im ;
gs_im = fs_re * gs_im + fs_im * g2 ; fs_re = ( A_data [ scale_tmp_tmp_tmp ] .
re * gs_re - A_data [ scale_tmp_tmp_tmp ] . im * gs_im ) + scale * A_data [
scale_tmp_tmp ] . re ; fs_im = ( A_data [ scale_tmp_tmp_tmp ] . im * gs_re +
A_data [ scale_tmp_tmp_tmp ] . re * gs_im ) + scale * A_data [ scale_tmp_tmp
] . im ; } } else { scale = muDoubleScalarSqrt ( g2 / f2 + 1.0 ) ; fs_re *=
scale ; fs_im *= scale ; scale = 1.0 / scale ; g2 += f2 ; f2 = fs_re / g2 ;
scale_tmp = fs_im / g2 ; g2 = gs_re ; gs_re = f2 * gs_re - scale_tmp * -
gs_im ; gs_im = f2 * - gs_im + scale_tmp * g2 ; if ( rescaledir > 0 ) { for (
rescaledir = 0 ; rescaledir <= count ; rescaledir ++ ) { fs_re *=
7.4428285367870146E+137 ; fs_im *= 7.4428285367870146E+137 ; } } else if (
rescaledir < 0 ) { for ( rescaledir = 0 ; rescaledir <= count ; rescaledir ++
) { fs_re *= 1.3435752215134178E-138 ; fs_im *= 1.3435752215134178E-138 ; } }
} } A_data [ scale_tmp_tmp ] . re = fs_re ; A_data [ scale_tmp_tmp ] . im =
fs_im ; A_data [ scale_tmp_tmp_tmp ] . re = 0.0 ; A_data [ scale_tmp_tmp_tmp
] . im = 0.0 ; fs_re = ( gs_re * A_data [ 1 ] . re - gs_im * A_data [ 1 ] .
im ) + scale * A_data [ 0 ] . re ; fs_im = ( gs_re * A_data [ 1 ] . im +
gs_im * A_data [ 1 ] . re ) + scale * A_data [ 0 ] . im ; f2 = A_data [ 0 ] .
im ; g2 = A_data [ 0 ] . re ; A_data [ 1 ] . re = scale * A_data [ 1 ] . re -
( gs_re * A_data [ 0 ] . re + gs_im * A_data [ 0 ] . im ) ; A_data [ 1 ] . im
= scale * A_data [ 1 ] . im - ( gs_re * f2 - gs_im * g2 ) ; A_data [ 0 ] . re
= fs_re ; A_data [ 0 ] . im = fs_im ; count = 1 + A_size [ 0 ] ; rescaledir =
A_size [ 0 ] ; fs_re = ( gs_re * A_data [ count ] . re - gs_im * A_data [
count ] . im ) + scale * A_data [ rescaledir ] . re ; fs_im = ( gs_re *
A_data [ count ] . im + gs_im * A_data [ count ] . re ) + scale * A_data [
rescaledir ] . im ; f2 = A_data [ rescaledir ] . im ; g2 = A_data [
rescaledir ] . re ; A_data [ count ] . re = scale * A_data [ count ] . re - (
gs_re * A_data [ rescaledir ] . re + gs_im * A_data [ rescaledir ] . im ) ;
A_data [ count ] . im = scale * A_data [ count ] . im - ( gs_re * f2 - gs_im
* g2 ) ; A_data [ rescaledir ] . re = fs_re ; A_data [ rescaledir ] . im =
fs_im ; gs_re = - gs_re ; gs_im = - gs_im ; fs_re = ( gs_re * A_data [ 0 ] .
re - gs_im * A_data [ 0 ] . im ) + scale * A_data [ rescaledir ] . re ; fs_im
= ( gs_re * A_data [ 0 ] . im + gs_im * A_data [ 0 ] . re ) + scale * A_data
[ rescaledir ] . im ; f2 = A_data [ rescaledir ] . im ; g2 = A_data [
rescaledir ] . re ; A_data [ 0 ] . re = scale * A_data [ 0 ] . re - ( gs_re *
A_data [ rescaledir ] . re + gs_im * A_data [ rescaledir ] . im ) ; A_data [
0 ] . im = scale * A_data [ 0 ] . im - ( gs_re * f2 - gs_im * g2 ) ; A_data [
rescaledir ] . re = fs_re ; A_data [ rescaledir ] . im = fs_im ; fs_re = (
gs_re * A_data [ 1 ] . re - gs_im * A_data [ 1 ] . im ) + scale * A_data [
count ] . re ; fs_im = ( gs_re * A_data [ 1 ] . im + gs_im * A_data [ 1 ] .
re ) + scale * A_data [ count ] . im ; f2 = A_data [ count ] . im ; g2 =
A_data [ count ] . re ; A_data [ 1 ] . re = scale * A_data [ 1 ] . re - (
gs_re * A_data [ count ] . re + gs_im * A_data [ count ] . im ) ; A_data [ 1
] . im = scale * A_data [ 1 ] . im - ( gs_re * f2 - gs_im * g2 ) ; A_data [
count ] . re = fs_re ; A_data [ count ] . im = fs_im ; } } } } static void
ltjn11luok ( const creal_T A_data [ ] , const int32_T A_size [ 2 ] , int32_T
ilo , int32_T ihi , int32_T * info , creal_T alpha1_data [ ] , int32_T *
alpha1_size , creal_T beta1_data [ ] , int32_T * beta1_size ) { creal_T
b_A_data [ 4 ] ; creal_T anorm_p ; creal_T ctemp ; creal_T shift ; real_T
absxk ; real_T ai ; real_T anorm ; real_T anorm_im ; real_T anorm_im_p ;
real_T ar ; real_T colscale ; real_T eshift_im ; real_T eshift_re ; real_T
scale ; real_T shift_tmp ; real_T ssq ; real_T t ; real_T t1_im ; real_T
t1_re ; int32_T b_A_size_idx_0 ; int32_T col ; int32_T ctemp_tmp ; int32_T
ctemp_tmp_tmp ; int32_T exitg1 ; int32_T ifirst ; int32_T ifrstm ; int32_T
iiter ; int32_T ilastm1 ; int32_T j ; int32_T jiter ; int32_T jp1 ; int32_T
nm1 ; boolean_T exitg2 ; boolean_T failed ; boolean_T goto60 ; boolean_T
goto70 ; boolean_T goto90 ; boolean_T guard1 = false ; boolean_T guard2 =
false ; boolean_T guard3 = false ; b_A_size_idx_0 = A_size [ 0 ] ; ifirst =
A_size [ 0 ] * A_size [ 1 ] ; if ( 0 <= ifirst - 1 ) { memcpy ( & b_A_data [
0 ] , & A_data [ 0 ] , ifirst * sizeof ( creal_T ) ) ; } * info = 0 ; if ( (
A_size [ 0 ] == 1 ) && ( A_size [ 1 ] == 1 ) ) { ihi = 1 ; } * alpha1_size =
A_size [ 0 ] ; ifirst = A_size [ 0 ] ; for ( nm1 = 0 ; nm1 < ifirst ; nm1 ++
) { alpha1_data [ nm1 ] . re = 0.0 ; alpha1_data [ nm1 ] . im = 0.0 ; } *
beta1_size = A_size [ 0 ] ; ifirst = A_size [ 0 ] ; for ( nm1 = 0 ; nm1 <
ifirst ; nm1 ++ ) { beta1_data [ nm1 ] . re = 1.0 ; beta1_data [ nm1 ] . im =
0.0 ; } eshift_re = 0.0 ; eshift_im = 0.0 ; ctemp . re = 0.0 ; ctemp . im =
0.0 ; anorm = 0.0 ; if ( ilo <= ihi ) { scale = 3.3121686421112381E-170 ; ssq
= 0.0 ; nm1 = ihi - ilo ; for ( ifirst = - 1 ; ifirst < nm1 ; ifirst ++ ) {
colscale = 3.3121686421112381E-170 ; anorm = 0.0 ; col = ilo + ifirst ;
ilastm1 = ilo + nm1 ; for ( ifrstm = ilo ; ifrstm <= ilastm1 ; ifrstm ++ ) {
absxk = muDoubleScalarAbs ( A_data [ ( ifrstm + A_size [ 0 ] * col ) - 1 ] .
re ) ; if ( absxk > colscale ) { t = colscale / absxk ; anorm = anorm * t * t
+ 1.0 ; colscale = absxk ; } else { t = absxk / colscale ; anorm += t * t ; }
absxk = muDoubleScalarAbs ( A_data [ ( ifrstm + A_size [ 0 ] * col ) - 1 ] .
im ) ; if ( absxk > colscale ) { t = colscale / absxk ; anorm = anorm * t * t
+ 1.0 ; colscale = absxk ; } else { t = absxk / colscale ; anorm += t * t ; }
} if ( scale >= colscale ) { colscale /= scale ; ssq += colscale * colscale *
anorm ; } else { scale /= colscale ; ssq = scale * scale * ssq + anorm ;
scale = colscale ; } } anorm = scale * muDoubleScalarSqrt ( ssq ) ; } scale =
2.2204460492503131E-16 * anorm ; ssq = 2.2250738585072014E-308 ; if ( scale >
2.2250738585072014E-308 ) { ssq = scale ; } scale = 2.2250738585072014E-308 ;
if ( anorm > 2.2250738585072014E-308 ) { scale = anorm ; } anorm = 1.0 /
scale ; scale = 1.0 / muDoubleScalarSqrt ( A_size [ 0 ] ) ; failed = true ;
for ( nm1 = ihi ; nm1 < A_size [ 0 ] ; nm1 ++ ) { alpha1_data [ nm1 ] =
A_data [ nm1 + A_size [ 0 ] * nm1 ] ; } guard1 = false ; guard2 = false ; if
( ihi >= ilo ) { ifirst = ilo ; col = ilo ; nm1 = ihi - 1 ; ilastm1 = ihi - 2
; ifrstm = ihi ; iiter = 0 ; goto60 = false ; goto70 = false ; goto90 = false
; jiter = 0 ; do { exitg1 = 0 ; if ( jiter <= ( ( ihi - ilo ) + 1 ) * 30 - 1
) { if ( nm1 + 1 == ilo ) { goto60 = true ; } else { jp1 = nm1 +
b_A_size_idx_0 * ilastm1 ; if ( muDoubleScalarAbs ( b_A_data [ jp1 ] . re ) +
muDoubleScalarAbs ( b_A_data [ jp1 ] . im ) <= ssq ) { b_A_data [ jp1 ] . re
= 0.0 ; b_A_data [ jp1 ] . im = 0.0 ; goto60 = true ; } else { j = ilastm1 ;
guard3 = false ; exitg2 = false ; while ( ( ! exitg2 ) && ( j + 1 >= ilo ) )
{ if ( j + 1 == ilo ) { guard3 = true ; exitg2 = true ; } else if (
muDoubleScalarAbs ( b_A_data [ j ] . re ) + muDoubleScalarAbs ( b_A_data [ j
] . im ) <= ssq ) { b_A_data [ j ] . re = 0.0 ; b_A_data [ j ] . im = 0.0 ;
guard3 = true ; exitg2 = true ; } else { j -- ; guard3 = false ; } } if (
guard3 ) { ifirst = j + 1 ; goto70 = true ; } } } if ( ( ! goto60 ) && ( !
goto70 ) ) { ifirst = * alpha1_size ; for ( nm1 = 0 ; nm1 < ifirst ; nm1 ++ )
{ alpha1_data [ nm1 ] . re = ( rtNaN ) ; alpha1_data [ nm1 ] . im = 0.0 ; }
ifirst = * beta1_size ; for ( nm1 = 0 ; nm1 < ifirst ; nm1 ++ ) { beta1_data
[ nm1 ] . re = ( rtNaN ) ; beta1_data [ nm1 ] . im = 0.0 ; } * info = 1 ;
exitg1 = 1 ; } else if ( goto60 ) { goto60 = false ; alpha1_data [ nm1 ] =
b_A_data [ nm1 + b_A_size_idx_0 * nm1 ] ; nm1 = ilastm1 ; ilastm1 -- ; if (
nm1 + 1 < ilo ) { failed = false ; guard2 = true ; exitg1 = 1 ; } else {
iiter = 0 ; eshift_re = 0.0 ; eshift_im = 0.0 ; ifrstm = nm1 + 1 ; jiter ++ ;
} } else { if ( goto70 ) { goto70 = false ; iiter ++ ; if ( iiter - iiter /
10 * 10 != 0 ) { j = ilastm1 + b_A_size_idx_0 * ilastm1 ; ar = anorm *
b_A_data [ j ] . re ; ai = anorm * b_A_data [ j ] . im ; if ( ai == 0.0 ) {
shift . re = ar / scale ; shift . im = 0.0 ; } else if ( ar == 0.0 ) { shift
. re = 0.0 ; shift . im = ai / scale ; } else { shift . re = ar / scale ;
shift . im = ai / scale ; } j = nm1 + b_A_size_idx_0 * nm1 ; ar = anorm *
b_A_data [ j ] . re ; ai = anorm * b_A_data [ j ] . im ; if ( ai == 0.0 ) {
absxk = ar / scale ; t = 0.0 ; } else if ( ar == 0.0 ) { absxk = 0.0 ; t = ai
/ scale ; } else { absxk = ar / scale ; t = ai / scale ; } t1_re = ( shift .
re + absxk ) * 0.5 ; t1_im = ( shift . im + t ) * 0.5 ; j = ilastm1 +
b_A_size_idx_0 * nm1 ; ar = anorm * b_A_data [ j ] . re ; ai = anorm *
b_A_data [ j ] . im ; if ( ai == 0.0 ) { colscale = ar / scale ; anorm_im =
0.0 ; } else if ( ar == 0.0 ) { colscale = 0.0 ; anorm_im = ai / scale ; }
else { colscale = ar / scale ; anorm_im = ai / scale ; } j = nm1 +
b_A_size_idx_0 * ilastm1 ; ar = anorm * b_A_data [ j ] . re ; ai = anorm *
b_A_data [ j ] . im ; if ( ai == 0.0 ) { ar /= scale ; anorm_im_p = 0.0 ; }
else if ( ar == 0.0 ) { ar = 0.0 ; anorm_im_p = ai / scale ; } else { ar /=
scale ; anorm_im_p = ai / scale ; } ai = shift . re * t + shift . im * absxk
; shift . re = ( ( t1_re * t1_re - t1_im * t1_im ) + ( colscale * ar -
anorm_im * anorm_im_p ) ) - ( shift . re * absxk - shift . im * t ) ;
shift_tmp = t1_re * t1_im ; shift . im = ( ( shift_tmp + shift_tmp ) + (
colscale * anorm_im_p + anorm_im * ar ) ) - ai ; sqrt_JVgK17Mi ( & shift ) ;
if ( ( t1_re - absxk ) * shift . re + ( t1_im - t ) * shift . im <= 0.0 ) {
shift . re += t1_re ; shift . im += t1_im ; } else { shift . re = t1_re -
shift . re ; shift . im = t1_im - shift . im ; } } else { j = nm1 +
b_A_size_idx_0 * ilastm1 ; ar = anorm * b_A_data [ j ] . re ; ai = anorm *
b_A_data [ j ] . im ; if ( ai == 0.0 ) { colscale = ar / scale ; anorm_im =
0.0 ; } else if ( ar == 0.0 ) { colscale = 0.0 ; anorm_im = ai / scale ; }
else { colscale = ar / scale ; anorm_im = ai / scale ; } eshift_re +=
colscale ; eshift_im += anorm_im ; shift . re = eshift_re ; shift . im =
eshift_im ; } j = ilastm1 ; jp1 = ilastm1 + 1 ; exitg2 = false ; while ( ( !
exitg2 ) && ( j + 1 > ifirst ) ) { col = j + 1 ; ctemp_tmp_tmp =
b_A_size_idx_0 * j ; ctemp_tmp = j + ctemp_tmp_tmp ; ctemp . re = anorm *
b_A_data [ ctemp_tmp ] . re - shift . re * scale ; ctemp . im = anorm *
b_A_data [ ctemp_tmp ] . im - shift . im * scale ; colscale =
muDoubleScalarAbs ( ctemp . re ) + muDoubleScalarAbs ( ctemp . im ) ;
ctemp_tmp_tmp += jp1 ; absxk = ( muDoubleScalarAbs ( b_A_data [ ctemp_tmp_tmp
] . re ) + muDoubleScalarAbs ( b_A_data [ ctemp_tmp_tmp ] . im ) ) * anorm ;
t = colscale ; if ( absxk > colscale ) { t = absxk ; } if ( ( t < 1.0 ) && (
t != 0.0 ) ) { colscale /= t ; absxk /= t ; } if ( ( muDoubleScalarAbs (
b_A_data [ j ] . re ) + muDoubleScalarAbs ( b_A_data [ j ] . im ) ) * absxk
<= colscale * ssq ) { goto90 = true ; exitg2 = true ; } else { jp1 = j ; j =
0 ; } } if ( ! goto90 ) { col = ifirst ; ctemp_tmp = ( ifirst +
b_A_size_idx_0 * ( ifirst - 1 ) ) - 1 ; ctemp . re = b_A_data [ ctemp_tmp ] .
re * anorm - shift . re * scale ; ctemp . im = b_A_data [ ctemp_tmp ] . im *
anorm - shift . im * scale ; } goto90 = false ; j = col + b_A_size_idx_0 * (
col - 1 ) ; anorm_p . re = b_A_data [ j ] . re * anorm ; anorm_p . im =
b_A_data [ j ] . im * anorm ; xzlartg_F9md8Q7e ( ctemp , anorm_p , & colscale
, & shift ) ; j = col ; while ( j < nm1 + 1 ) { for ( j = 0 ; j < ifrstm ; j
++ ) { jp1 = b_A_size_idx_0 * j ; absxk = ( shift . re * b_A_data [ 1 + jp1 ]
. re - shift . im * b_A_data [ 1 + jp1 ] . im ) + colscale * b_A_data [ jp1 ]
. re ; t = ( shift . re * b_A_data [ 1 + jp1 ] . im + shift . im * b_A_data [
1 + jp1 ] . re ) + colscale * b_A_data [ jp1 ] . im ; anorm_im = b_A_data [
jp1 ] . re ; b_A_data [ 1 + jp1 ] . re = colscale * b_A_data [ 1 + jp1 ] . re
- ( shift . re * b_A_data [ jp1 ] . re + shift . im * b_A_data [ jp1 ] . im )
; b_A_data [ 1 + jp1 ] . im = colscale * b_A_data [ 1 + jp1 ] . im - ( shift
. re * b_A_data [ jp1 ] . im - shift . im * anorm_im ) ; b_A_data [ jp1 ] .
re = absxk ; b_A_data [ jp1 ] . im = t ; } shift . re = - shift . re ; shift
. im = - shift . im ; for ( j = ifirst - 1 ; j + 1 < 3 ; j ++ ) { absxk =
shift . re * b_A_data [ j ] . re - shift . im * b_A_data [ j ] . im ; ai =
shift . re * b_A_data [ j ] . im + shift . im * b_A_data [ j ] . re ; jp1 = j
+ b_A_size_idx_0 ; b_A_data [ j ] . re = colscale * b_A_data [ j ] . re - (
shift . re * b_A_data [ jp1 ] . re + shift . im * b_A_data [ jp1 ] . im ) ;
b_A_data [ j ] . im = colscale * b_A_data [ j ] . im - ( shift . re *
b_A_data [ jp1 ] . im - shift . im * b_A_data [ jp1 ] . re ) ; b_A_data [ jp1
] . re = colscale * b_A_data [ jp1 ] . re + absxk ; b_A_data [ jp1 ] . im =
colscale * b_A_data [ jp1 ] . im + ai ; } j = 2 ; } } jiter ++ ; } } else {
guard2 = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } else { guard1 =
true ; } if ( guard2 ) { if ( failed ) { * info = nm1 + 1 ; for ( ifirst = 0
; ifirst <= nm1 ; ifirst ++ ) { alpha1_data [ ifirst ] . re = ( rtNaN ) ;
alpha1_data [ ifirst ] . im = 0.0 ; beta1_data [ ifirst ] . re = ( rtNaN ) ;
beta1_data [ ifirst ] . im = 0.0 ; } } else { guard1 = true ; } } if ( guard1
) { for ( nm1 = 0 ; nm1 <= ilo - 2 ; nm1 ++ ) { alpha1_data [ nm1 ] =
b_A_data [ nm1 + b_A_size_idx_0 * nm1 ] ; } } } static void gfqrrt1mb1 (
const real_T A_data [ ] , const int32_T A_size [ 2 ] , creal_T V_data [ ] ,
int32_T * V_size ) { creal_T At_data [ 4 ] ; creal_T b_A_data [ 4 ] ; creal_T
beta1_data [ 2 ] ; creal_T V ; real_T e_data [ 2 ] ; real_T absxk ; real_T
anrm ; real_T b_mul ; real_T cfromc ; real_T cto1 ; real_T ctoc ; real_T mul
; int32_T At_size [ 2 ] ; int32_T At ; int32_T b_A_data_tmp ; int32_T b_j ;
int32_T exitg1 ; int32_T exitg3 ; int32_T i ; int32_T ii ; int32_T j ;
int32_T jj ; int32_T nzcount ; boolean_T exitg2 ; boolean_T exitg4 ;
boolean_T guard1 = false ; boolean_T ilascl ; boolean_T notdone ; if (
j3drc0c1du ( A_data , A_size ) ) { j = A_size [ 0 ] ; * V_size = A_size [ 0 ]
; for ( ii = 0 ; ii < j ; ii ++ ) { V_data [ ii ] . re = ( rtNaN ) ; V_data [
ii ] . im = 0.0 ; } } else { ilascl = ( A_size [ 0 ] == A_size [ 1 ] ) ; if (
ilascl ) { j = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( j <= A_size [ 1
] - 1 ) ) { i = 0 ; do { exitg1 = 0 ; if ( i <= j ) { if ( ! ( A_data [ i +
A_size [ 0 ] * j ] == A_data [ j + A_size [ 0 ] * i ] ) ) { ilascl = false ;
exitg1 = 1 ; } else { i ++ ; } } else { j ++ ; exitg1 = 2 ; } } while (
exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true ; } } } if ( ilascl ) {
hlq03klkkf ( A_data , A_size , e_data , & nzcount ) ; * V_size = nzcount ;
for ( ii = 0 ; ii < nzcount ; ii ++ ) { V_data [ ii ] . re = e_data [ ii ] ;
V_data [ ii ] . im = 0.0 ; } } else { At_size [ 0 ] = A_size [ 0 ] ; At_size
[ 1 ] = A_size [ 1 ] ; nzcount = A_size [ 0 ] * A_size [ 1 ] ; for ( ii = 0 ;
ii < nzcount ; ii ++ ) { At_data [ ii ] . re = A_data [ ii ] ; At_data [ ii ]
. im = 0.0 ; } anrm = 0.0 ; j = A_size [ 0 ] * A_size [ 1 ] ; i = 0 ; exitg2
= false ; while ( ( ! exitg2 ) && ( i <= j - 1 ) ) { absxk =
muDoubleScalarHypot ( At_data [ i ] . re , At_data [ i ] . im ) ; if (
muDoubleScalarIsNaN ( absxk ) ) { anrm = ( rtNaN ) ; exitg2 = true ; } else {
if ( absxk > anrm ) { anrm = absxk ; } i ++ ; } } if ( muDoubleScalarIsInf (
anrm ) || muDoubleScalarIsNaN ( anrm ) ) { * V_size = A_size [ 0 ] ; nzcount
= A_size [ 0 ] ; for ( ii = 0 ; ii < nzcount ; ii ++ ) { V_data [ ii ] . re =
( rtNaN ) ; V_data [ ii ] . im = 0.0 ; } nzcount = A_size [ 0 ] ; for ( ii =
0 ; ii < nzcount ; ii ++ ) { beta1_data [ ii ] . re = ( rtNaN ) ; beta1_data
[ ii ] . im = 0.0 ; } } else { absxk = anrm ; guard1 = false ; if ( ( anrm >
0.0 ) && ( anrm < 6.7178761075670888E-139 ) ) { absxk =
6.7178761075670888E-139 ; ilascl = true ; guard1 = true ; } else if ( anrm >
1.4885657073574029E+138 ) { absxk = 1.4885657073574029E+138 ; ilascl = true ;
guard1 = true ; } if ( guard1 ) { cfromc = anrm ; ctoc = absxk ; notdone =
true ; while ( notdone ) { b_mul = cfromc * 2.0041683600089728E-292 ; cto1 =
ctoc / 4.9896007738368E+291 ; if ( ( b_mul > ctoc ) && ( ctoc != 0.0 ) ) {
mul = 2.0041683600089728E-292 ; cfromc = b_mul ; } else if ( cto1 > cfromc )
{ mul = 4.9896007738368E+291 ; ctoc = cto1 ; } else { mul = ctoc / cfromc ;
notdone = false ; } for ( ii = 0 ; ii < j ; ii ++ ) { At_data [ ii ] . re *=
mul ; At_data [ ii ] . im *= mul ; } } } j = 1 ; i = A_size [ 0 ] ; if (
A_size [ 0 ] <= 1 ) { i = 1 ; } else { do { exitg3 = 0 ; At = 0 ; b_j = 0 ;
notdone = false ; ii = i ; exitg2 = false ; while ( ( ! exitg2 ) && ( ii > 0
) ) { nzcount = 0 ; At = ii ; b_j = i ; jj = 0 ; exitg4 = false ; while ( ( !
exitg4 ) && ( jj <= i - 1 ) ) { b_A_data_tmp = ( ii + At_size [ 0 ] * jj ) -
1 ; if ( ( At_data [ b_A_data_tmp ] . re != 0.0 ) || ( At_data [ b_A_data_tmp
] . im != 0.0 ) || ( jj + 1 == ii ) ) { if ( nzcount == 0 ) { b_j = jj + 1 ;
nzcount = 1 ; jj ++ ; } else { nzcount = 2 ; exitg4 = true ; } } else { jj ++
; } } if ( nzcount < 2 ) { notdone = true ; exitg2 = true ; } else { ii -- ;
} } if ( ! notdone ) { exitg3 = 2 ; } else { jj = At_size [ 1 ] ; nzcount =
At_size [ 1 ] << 1 ; if ( 0 <= nzcount - 1 ) { memcpy ( & b_A_data [ 0 ] , &
At_data [ 0 ] , nzcount * sizeof ( creal_T ) ) ; } if ( At != i ) { for ( ii
= 0 ; ii < 2 ; ii ++ ) { b_A_data_tmp = ii << 1 ; nzcount = ( At +
b_A_data_tmp ) - 1 ; cfromc = b_A_data [ nzcount ] . re ; ctoc = b_A_data [
nzcount ] . im ; b_A_data_tmp = ( i + b_A_data_tmp ) - 1 ; b_A_data [ nzcount
] = b_A_data [ b_A_data_tmp ] ; b_A_data [ b_A_data_tmp ] . re = cfromc ;
b_A_data [ b_A_data_tmp ] . im = ctoc ; } } if ( b_j != i ) { for ( At = 0 ;
At < i ; At ++ ) { nzcount = At + ( ( b_j - 1 ) << 1 ) ; cfromc = b_A_data [
nzcount ] . re ; ctoc = b_A_data [ nzcount ] . im ; b_A_data_tmp = At + ( ( i
- 1 ) << 1 ) ; b_A_data [ nzcount ] = b_A_data [ b_A_data_tmp ] ; b_A_data [
b_A_data_tmp ] . re = cfromc ; b_A_data [ b_A_data_tmp ] . im = ctoc ; } }
At_size [ 0 ] = 2 ; nzcount = jj << 1 ; if ( 0 <= nzcount - 1 ) { memcpy ( &
At_data [ 0 ] , & b_A_data [ 0 ] , nzcount * sizeof ( creal_T ) ) ; } i -- ;
if ( i == 1 ) { exitg3 = 1 ; } } } while ( exitg3 == 0 ) ; if ( exitg3 == 1 )
{ } else { do { exitg1 = 0 ; At = 0 ; b_j = 0 ; notdone = false ; ii = j ;
exitg2 = false ; while ( ( ! exitg2 ) && ( ii <= i ) ) { nzcount = 0 ; At = i
; b_j = ii ; jj = j ; exitg4 = false ; while ( ( ! exitg4 ) && ( jj <= i ) )
{ b_A_data_tmp = ( jj + At_size [ 0 ] * ( ii - 1 ) ) - 1 ; if ( ( At_data [
b_A_data_tmp ] . re != 0.0 ) || ( At_data [ b_A_data_tmp ] . im != 0.0 ) || (
jj == ii ) ) { if ( nzcount == 0 ) { At = jj ; nzcount = 1 ; jj ++ ; } else {
nzcount = 2 ; exitg4 = true ; } } else { jj ++ ; } } if ( nzcount < 2 ) {
notdone = true ; exitg2 = true ; } else { ii ++ ; } } if ( ! notdone ) {
exitg1 = 1 ; } else { jj = At_size [ 1 ] ; ii = At_size [ 1 ] << 1 ; if ( 0
<= ii - 1 ) { memcpy ( & b_A_data [ 0 ] , & At_data [ 0 ] , ii * sizeof (
creal_T ) ) ; } if ( At != j ) { for ( ii = j - 1 ; ii < 2 ; ii ++ ) {
b_A_data_tmp = ii << 1 ; nzcount = ( At + b_A_data_tmp ) - 1 ; cfromc =
b_A_data [ nzcount ] . re ; ctoc = b_A_data [ nzcount ] . im ; b_A_data_tmp =
( j + b_A_data_tmp ) - 1 ; b_A_data [ nzcount ] = b_A_data [ b_A_data_tmp ] ;
b_A_data [ b_A_data_tmp ] . re = cfromc ; b_A_data [ b_A_data_tmp ] . im =
ctoc ; } } if ( b_j != j ) { for ( At = 0 ; At < i ; At ++ ) { nzcount = At +
( ( b_j - 1 ) << 1 ) ; cfromc = b_A_data [ nzcount ] . re ; ctoc = b_A_data [
nzcount ] . im ; b_A_data_tmp = At + ( ( j - 1 ) << 1 ) ; b_A_data [ nzcount
] = b_A_data [ b_A_data_tmp ] ; b_A_data [ b_A_data_tmp ] . re = cfromc ;
b_A_data [ b_A_data_tmp ] . im = ctoc ; } } At_size [ 0 ] = 2 ; b_A_data_tmp
= jj << 1 ; if ( 0 <= b_A_data_tmp - 1 ) { memcpy ( & At_data [ 0 ] , &
b_A_data [ 0 ] , b_A_data_tmp * sizeof ( creal_T ) ) ; } j ++ ; if ( j == i )
{ exitg1 = 1 ; } } } while ( exitg1 == 0 ) ; } } m0fj0w1nu2 ( j , i , At_data
, At_size ) ; ltjn11luok ( At_data , At_size , j , i , & b_j , V_data ,
V_size , beta1_data , & nzcount ) ; if ( ( b_j == 0 ) && ilascl ) { while (
ilascl ) { cfromc = absxk * 2.0041683600089728E-292 ; ctoc = anrm /
4.9896007738368E+291 ; if ( ( cfromc > anrm ) && ( anrm != 0.0 ) ) { b_mul =
2.0041683600089728E-292 ; absxk = cfromc ; } else if ( ctoc > absxk ) { b_mul
= 4.9896007738368E+291 ; anrm = ctoc ; } else { b_mul = anrm / absxk ; ilascl
= false ; } nzcount = * V_size ; for ( ii = 0 ; ii < nzcount ; ii ++ ) { V =
V_data [ ii ] ; V . re *= b_mul ; V . im *= b_mul ; V_data [ ii ] = V ; } } }
} nzcount = * V_size ; for ( ii = 0 ; ii < nzcount ; ii ++ ) { V = V_data [
ii ] ; anrm = V . re ; ctoc = beta1_data [ ii ] . re ; absxk = beta1_data [
ii ] . im ; if ( absxk == 0.0 ) { if ( V . im == 0.0 ) { V . re /= ctoc ; V .
im = 0.0 ; } else if ( V . re == 0.0 ) { V . re = 0.0 ; V . im /= ctoc ; }
else { V . re /= ctoc ; V . im /= ctoc ; } } else if ( ctoc == 0.0 ) { if ( V
. re == 0.0 ) { V . re = V . im / absxk ; V . im = 0.0 ; } else if ( V . im
== 0.0 ) { V . re = 0.0 ; V . im = - ( anrm / absxk ) ; } else { V . re = V .
im / absxk ; V . im = - ( anrm / absxk ) ; } } else { cfromc =
muDoubleScalarAbs ( ctoc ) ; b_mul = muDoubleScalarAbs ( absxk ) ; if (
cfromc > b_mul ) { cfromc = absxk / ctoc ; absxk = cfromc * absxk + ctoc ; V
. re = ( cfromc * V . im + V . re ) / absxk ; V . im = ( V . im - cfromc *
anrm ) / absxk ; } else if ( b_mul == cfromc ) { ctoc = ctoc > 0.0 ? 0.5 : -
0.5 ; absxk = absxk > 0.0 ? 0.5 : - 0.5 ; V . re = ( V . re * ctoc + V . im *
absxk ) / cfromc ; V . im = ( V . im * ctoc - anrm * absxk ) / cfromc ; }
else { cfromc = ctoc / absxk ; absxk += cfromc * ctoc ; V . re = ( cfromc * V
. re + V . im ) / absxk ; V . im = ( cfromc * V . im - anrm ) / absxk ; } }
V_data [ ii ] = V ; } } } } static real_T l0hp4g12nr ( ahybgri1ag * localDW )
{ real_T r ; int32_T exitg1 ; int32_T k ; int32_T kk ; uint32_T u [ 2 ] ;
uint32_T mti ; uint32_T y ; boolean_T b_isvalid ; boolean_T exitg2 ; do {
exitg1 = 0 ; for ( k = 0 ; k < 2 ; k ++ ) { mti = localDW -> ohe2ox1irr [ 624
] + 1U ; if ( localDW -> ohe2ox1irr [ 624 ] + 1U >= 625U ) { for ( kk = 0 ;
kk < 227 ; kk ++ ) { y = ( localDW -> ohe2ox1irr [ kk + 1 ] & 2147483647U ) |
( localDW -> ohe2ox1irr [ kk ] & 2147483648U ) ; if ( ( y & 1U ) == 0U ) { y
>>= 1U ; } else { y = y >> 1U ^ 2567483615U ; } localDW -> ohe2ox1irr [ kk ]
= localDW -> ohe2ox1irr [ kk + 397 ] ^ y ; } for ( kk = 0 ; kk < 396 ; kk ++
) { y = ( localDW -> ohe2ox1irr [ kk + 227 ] & 2147483648U ) | ( localDW ->
ohe2ox1irr [ kk + 228 ] & 2147483647U ) ; if ( ( y & 1U ) == 0U ) { y >>= 1U
; } else { y = y >> 1U ^ 2567483615U ; } localDW -> ohe2ox1irr [ kk + 227 ] =
localDW -> ohe2ox1irr [ kk ] ^ y ; } y = ( localDW -> ohe2ox1irr [ 623 ] &
2147483648U ) | ( localDW -> ohe2ox1irr [ 0 ] & 2147483647U ) ; if ( ( y & 1U
) == 0U ) { y >>= 1U ; } else { y = y >> 1U ^ 2567483615U ; } localDW ->
ohe2ox1irr [ 623 ] = localDW -> ohe2ox1irr [ 396 ] ^ y ; mti = 1U ; } y =
localDW -> ohe2ox1irr [ ( int32_T ) mti - 1 ] ; localDW -> ohe2ox1irr [ 624 ]
= mti ; y ^= y >> 11U ; y ^= y << 7U & 2636928640U ; y ^= y << 15U &
4022730752U ; u [ k ] = y >> 18U ^ y ; } r = ( ( real_T ) ( u [ 0 ] >> 5U ) *
6.7108864E+7 + ( real_T ) ( u [ 1 ] >> 6U ) ) * 1.1102230246251565E-16 ; if (
r == 0.0 ) { if ( ( localDW -> ohe2ox1irr [ 624 ] >= 1U ) && ( localDW ->
ohe2ox1irr [ 624 ] < 625U ) ) { b_isvalid = false ; k = 1 ; exitg2 = false ;
while ( ( ! exitg2 ) && ( k < 625 ) ) { if ( localDW -> ohe2ox1irr [ k - 1 ]
== 0U ) { k ++ ; } else { b_isvalid = true ; exitg2 = true ; } } } else {
b_isvalid = false ; } if ( ! b_isvalid ) { localDW -> ohe2ox1irr [ 0 ] =
5489U ; localDW -> ohe2ox1irr [ 624 ] = 624U ; } } else { exitg1 = 1 ; } }
while ( exitg1 == 0 ) ; return r ; } void blkju0oze5 ( ahybgri1ag * localDW )
{ static const uint32_T tmp [ 625 ] = { 5489U , 1301868182U , 2938499221U ,
2950281878U , 1875628136U , 751856242U , 944701696U , 2243192071U ,
694061057U , 219885934U , 2066767472U , 3182869408U , 485472502U ,
2336857883U , 1071588843U , 3418470598U , 951210697U , 3693558366U ,
2923482051U , 1793174584U , 2982310801U , 1586906132U , 1951078751U ,
1808158765U , 1733897588U , 431328322U , 4202539044U , 530658942U ,
1714810322U , 3025256284U , 3342585396U , 1937033938U , 2640572511U ,
1654299090U , 3692403553U , 4233871309U , 3497650794U , 862629010U ,
2943236032U , 2426458545U , 1603307207U , 1133453895U , 3099196360U ,
2208657629U , 2747653927U , 931059398U , 761573964U , 3157853227U ,
785880413U , 730313442U , 124945756U , 2937117055U , 3295982469U ,
1724353043U , 3021675344U , 3884886417U , 4010150098U , 4056961966U ,
699635835U , 2681338818U , 1339167484U , 720757518U , 2800161476U ,
2376097373U , 1532957371U , 3902664099U , 1238982754U , 3725394514U ,
3449176889U , 3570962471U , 4287636090U , 4087307012U , 3603343627U ,
202242161U , 2995682783U , 1620962684U , 3704723357U , 371613603U ,
2814834333U , 2111005706U , 624778151U , 2094172212U , 4284947003U ,
1211977835U , 991917094U , 1570449747U , 2962370480U , 1259410321U ,
170182696U , 146300961U , 2836829791U , 619452428U , 2723670296U ,
1881399711U , 1161269684U , 1675188680U , 4132175277U , 780088327U ,
3409462821U , 1036518241U , 1834958505U , 3048448173U , 161811569U ,
618488316U , 44795092U , 3918322701U , 1924681712U , 3239478144U , 383254043U
, 4042306580U , 2146983041U , 3992780527U , 3518029708U , 3545545436U ,
3901231469U , 1896136409U , 2028528556U , 2339662006U , 501326714U ,
2060962201U , 2502746480U , 561575027U , 581893337U , 3393774360U ,
1778912547U , 3626131687U , 2175155826U , 319853231U , 986875531U ,
819755096U , 2915734330U , 2688355739U , 3482074849U , 2736559U , 2296975761U
, 1029741190U , 2876812646U , 690154749U , 579200347U , 4027461746U ,
1285330465U , 2701024045U , 4117700889U , 759495121U , 3332270341U ,
2313004527U , 2277067795U , 4131855432U , 2722057515U , 1264804546U ,
3848622725U , 2211267957U , 4100593547U , 959123777U , 2130745407U ,
3194437393U , 486673947U , 1377371204U , 17472727U , 352317554U , 3955548058U
, 159652094U , 1232063192U , 3835177280U , 49423123U , 3083993636U , 733092U
, 2120519771U , 2573409834U , 1112952433U , 3239502554U , 761045320U ,
1087580692U , 2540165110U , 641058802U , 1792435497U , 2261799288U ,
1579184083U , 627146892U , 2165744623U , 2200142389U , 2167590760U ,
2381418376U , 1793358889U , 3081659520U , 1663384067U , 2009658756U ,
2689600308U , 739136266U , 2304581039U , 3529067263U , 591360555U ,
525209271U , 3131882996U , 294230224U , 2076220115U , 3113580446U ,
1245621585U , 1386885462U , 3203270426U , 123512128U , 12350217U , 354956375U
, 4282398238U , 3356876605U , 3888857667U , 157639694U , 2616064085U ,
1563068963U , 2762125883U , 4045394511U , 4180452559U , 3294769488U ,
1684529556U , 1002945951U , 3181438866U , 22506664U , 691783457U ,
2685221343U , 171579916U , 3878728600U , 2475806724U , 2030324028U ,
3331164912U , 1708711359U , 1970023127U , 2859691344U , 2588476477U ,
2748146879U , 136111222U , 2967685492U , 909517429U , 2835297809U ,
3206906216U , 3186870716U , 341264097U , 2542035121U , 3353277068U ,
548223577U , 3170936588U , 1678403446U , 297435620U , 2337555430U ,
466603495U , 1132321815U , 1208589219U , 696392160U , 894244439U ,
2562678859U , 470224582U , 3306867480U , 201364898U , 2075966438U ,
1767227936U , 2929737987U , 3674877796U , 2654196643U , 3692734598U ,
3528895099U , 2796780123U , 3048728353U , 842329300U , 191554730U ,
2922459673U , 3489020079U , 3979110629U , 1022523848U , 2202932467U ,
3583655201U , 3565113719U , 587085778U , 4176046313U , 3013713762U ,
950944241U , 396426791U , 3784844662U , 3477431613U , 3594592395U ,
2782043838U , 3392093507U , 3106564952U , 2829419931U , 1358665591U ,
2206918825U , 3170783123U , 31522386U , 2988194168U , 1782249537U ,
1105080928U , 843500134U , 1225290080U , 1521001832U , 3605886097U ,
2802786495U , 2728923319U , 3996284304U , 903417639U , 1171249804U ,
1020374987U , 2824535874U , 423621996U , 1988534473U , 2493544470U ,
1008604435U , 1756003503U , 1488867287U , 1386808992U , 732088248U ,
1780630732U , 2482101014U , 976561178U , 1543448953U , 2602866064U ,
2021139923U , 1952599828U , 2360242564U , 2117959962U , 2753061860U ,
2388623612U , 4138193781U , 2962920654U , 2284970429U , 766920861U ,
3457264692U , 2879611383U , 815055854U , 2332929068U , 1254853997U ,
3740375268U , 3799380844U , 4091048725U , 2006331129U , 1982546212U ,
686850534U , 1907447564U , 2682801776U , 2780821066U , 998290361U ,
1342433871U , 4195430425U , 607905174U , 3902331779U , 2454067926U ,
1708133115U , 1170874362U , 2008609376U , 3260320415U , 2211196135U ,
433538229U , 2728786374U , 2189520818U , 262554063U , 1182318347U ,
3710237267U , 1221022450U , 715966018U , 2417068910U , 2591870721U ,
2870691989U , 3418190842U , 4238214053U , 1540704231U , 1575580968U ,
2095917976U , 4078310857U , 2313532447U , 2110690783U , 4056346629U ,
4061784526U , 1123218514U , 551538993U , 597148360U , 4120175196U ,
3581618160U , 3181170517U , 422862282U , 3227524138U , 1713114790U ,
662317149U , 1230418732U , 928171837U , 1324564878U , 1928816105U ,
1786535431U , 2878099422U , 3290185549U , 539474248U , 1657512683U ,
552370646U , 1671741683U , 3655312128U , 1552739510U , 2605208763U ,
1441755014U , 181878989U , 3124053868U , 1447103986U , 3183906156U ,
1728556020U , 3502241336U , 3055466967U , 1013272474U , 818402132U ,
1715099063U , 2900113506U , 397254517U , 4194863039U , 1009068739U ,
232864647U , 2540223708U , 2608288560U , 2415367765U , 478404847U ,
3455100648U , 3182600021U , 2115988978U , 434269567U , 4117179324U ,
3461774077U , 887256537U , 3545801025U , 286388911U , 3451742129U ,
1981164769U , 786667016U , 3310123729U , 3097811076U , 2224235657U ,
2959658883U , 3370969234U , 2514770915U , 3345656436U , 2677010851U ,
2206236470U , 271648054U , 2342188545U , 4292848611U , 3646533909U ,
3754009956U , 3803931226U , 4160647125U , 1477814055U , 4043852216U ,
1876372354U , 3133294443U , 3871104810U , 3177020907U , 2074304428U ,
3479393793U , 759562891U , 164128153U , 1839069216U , 2114162633U ,
3989947309U , 3611054956U , 1333547922U , 835429831U , 494987340U ,
171987910U , 1252001001U , 370809172U , 3508925425U , 2535703112U ,
1276855041U , 1922855120U , 835673414U , 3030664304U , 613287117U ,
171219893U , 3423096126U , 3376881639U , 2287770315U , 1658692645U ,
1262815245U , 3957234326U , 1168096164U , 2968737525U , 2655813712U ,
2132313144U , 3976047964U , 326516571U , 353088456U , 3679188938U ,
3205649712U , 2654036126U , 1249024881U , 880166166U , 691800469U ,
2229503665U , 1673458056U , 4032208375U , 1851778863U , 2563757330U ,
376742205U , 1794655231U , 340247333U , 1505873033U , 396524441U , 879666767U
, 3335579166U , 3260764261U , 3335999539U , 506221798U , 4214658741U ,
975887814U , 2080536343U , 3360539560U , 571586418U , 138896374U ,
4234352651U , 2737620262U , 3928362291U , 1516365296U , 38056726U ,
3599462320U , 3585007266U , 3850961033U , 471667319U , 1536883193U ,
2310166751U , 1861637689U , 2530999841U , 4139843801U , 2710569485U ,
827578615U , 2012334720U , 2907369459U , 3029312804U , 2820112398U ,
1965028045U , 35518606U , 2478379033U , 643747771U , 1924139484U ,
4123405127U , 3811735531U , 3429660832U , 3285177704U , 1948416081U ,
1311525291U , 1183517742U , 1739192232U , 3979815115U , 2567840007U ,
4116821529U , 213304419U , 4125718577U , 1473064925U , 2442436592U ,
1893310111U , 4195361916U , 3747569474U , 828465101U , 2991227658U ,
750582866U , 1205170309U , 1409813056U , 678418130U , 1171531016U ,
3821236156U , 354504587U , 4202874632U , 3882511497U , 1893248677U ,
1903078632U , 26340130U , 2069166240U , 3657122492U , 3725758099U ,
831344905U , 811453383U , 3447711422U , 2434543565U , 4166886888U ,
3358210805U , 4142984013U , 2988152326U , 3527824853U , 982082992U ,
2809155763U , 190157081U , 3340214818U , 2365432395U , 2548636180U ,
2894533366U , 3474657421U , 2372634704U , 2845748389U , 43024175U ,
2774226648U , 1987702864U , 3186502468U , 453610222U , 4204736567U ,
1392892630U , 2471323686U , 2470534280U , 3541393095U , 4269885866U ,
3909911300U , 759132955U , 1482612480U , 667715263U , 1795580598U ,
2337923983U , 3390586366U , 581426223U , 1515718634U , 476374295U ,
705213300U , 363062054U , 2084697697U , 2407503428U , 2292957699U ,
2426213835U , 2199989172U , 1987356470U , 4026755612U , 2147252133U ,
270400031U , 1367820199U , 2369854699U , 2844269403U , 79981964U , 624U } ;
memcpy ( & localDW -> ohe2ox1irr [ 0 ] , & tmp [ 0 ] , 625U * sizeof (
uint32_T ) ) ; } void mkwmuqmwun ( ahybgri1ag * localDW ) { static const
uint32_T tmp [ 625 ] = { 5489U , 1301868182U , 2938499221U , 2950281878U ,
1875628136U , 751856242U , 944701696U , 2243192071U , 694061057U , 219885934U
, 2066767472U , 3182869408U , 485472502U , 2336857883U , 1071588843U ,
3418470598U , 951210697U , 3693558366U , 2923482051U , 1793174584U ,
2982310801U , 1586906132U , 1951078751U , 1808158765U , 1733897588U ,
431328322U , 4202539044U , 530658942U , 1714810322U , 3025256284U ,
3342585396U , 1937033938U , 2640572511U , 1654299090U , 3692403553U ,
4233871309U , 3497650794U , 862629010U , 2943236032U , 2426458545U ,
1603307207U , 1133453895U , 3099196360U , 2208657629U , 2747653927U ,
931059398U , 761573964U , 3157853227U , 785880413U , 730313442U , 124945756U
, 2937117055U , 3295982469U , 1724353043U , 3021675344U , 3884886417U ,
4010150098U , 4056961966U , 699635835U , 2681338818U , 1339167484U ,
720757518U , 2800161476U , 2376097373U , 1532957371U , 3902664099U ,
1238982754U , 3725394514U , 3449176889U , 3570962471U , 4287636090U ,
4087307012U , 3603343627U , 202242161U , 2995682783U , 1620962684U ,
3704723357U , 371613603U , 2814834333U , 2111005706U , 624778151U ,
2094172212U , 4284947003U , 1211977835U , 991917094U , 1570449747U ,
2962370480U , 1259410321U , 170182696U , 146300961U , 2836829791U ,
619452428U , 2723670296U , 1881399711U , 1161269684U , 1675188680U ,
4132175277U , 780088327U , 3409462821U , 1036518241U , 1834958505U ,
3048448173U , 161811569U , 618488316U , 44795092U , 3918322701U , 1924681712U
, 3239478144U , 383254043U , 4042306580U , 2146983041U , 3992780527U ,
3518029708U , 3545545436U , 3901231469U , 1896136409U , 2028528556U ,
2339662006U , 501326714U , 2060962201U , 2502746480U , 561575027U ,
581893337U , 3393774360U , 1778912547U , 3626131687U , 2175155826U ,
319853231U , 986875531U , 819755096U , 2915734330U , 2688355739U ,
3482074849U , 2736559U , 2296975761U , 1029741190U , 2876812646U , 690154749U
, 579200347U , 4027461746U , 1285330465U , 2701024045U , 4117700889U ,
759495121U , 3332270341U , 2313004527U , 2277067795U , 4131855432U ,
2722057515U , 1264804546U , 3848622725U , 2211267957U , 4100593547U ,
959123777U , 2130745407U , 3194437393U , 486673947U , 1377371204U , 17472727U
, 352317554U , 3955548058U , 159652094U , 1232063192U , 3835177280U ,
49423123U , 3083993636U , 733092U , 2120519771U , 2573409834U , 1112952433U ,
3239502554U , 761045320U , 1087580692U , 2540165110U , 641058802U ,
1792435497U , 2261799288U , 1579184083U , 627146892U , 2165744623U ,
2200142389U , 2167590760U , 2381418376U , 1793358889U , 3081659520U ,
1663384067U , 2009658756U , 2689600308U , 739136266U , 2304581039U ,
3529067263U , 591360555U , 525209271U , 3131882996U , 294230224U ,
2076220115U , 3113580446U , 1245621585U , 1386885462U , 3203270426U ,
123512128U , 12350217U , 354956375U , 4282398238U , 3356876605U , 3888857667U
, 157639694U , 2616064085U , 1563068963U , 2762125883U , 4045394511U ,
4180452559U , 3294769488U , 1684529556U , 1002945951U , 3181438866U ,
22506664U , 691783457U , 2685221343U , 171579916U , 3878728600U , 2475806724U
, 2030324028U , 3331164912U , 1708711359U , 1970023127U , 2859691344U ,
2588476477U , 2748146879U , 136111222U , 2967685492U , 909517429U ,
2835297809U , 3206906216U , 3186870716U , 341264097U , 2542035121U ,
3353277068U , 548223577U , 3170936588U , 1678403446U , 297435620U ,
2337555430U , 466603495U , 1132321815U , 1208589219U , 696392160U ,
894244439U , 2562678859U , 470224582U , 3306867480U , 201364898U ,
2075966438U , 1767227936U , 2929737987U , 3674877796U , 2654196643U ,
3692734598U , 3528895099U , 2796780123U , 3048728353U , 842329300U ,
191554730U , 2922459673U , 3489020079U , 3979110629U , 1022523848U ,
2202932467U , 3583655201U , 3565113719U , 587085778U , 4176046313U ,
3013713762U , 950944241U , 396426791U , 3784844662U , 3477431613U ,
3594592395U , 2782043838U , 3392093507U , 3106564952U , 2829419931U ,
1358665591U , 2206918825U , 3170783123U , 31522386U , 2988194168U ,
1782249537U , 1105080928U , 843500134U , 1225290080U , 1521001832U ,
3605886097U , 2802786495U , 2728923319U , 3996284304U , 903417639U ,
1171249804U , 1020374987U , 2824535874U , 423621996U , 1988534473U ,
2493544470U , 1008604435U , 1756003503U , 1488867287U , 1386808992U ,
732088248U , 1780630732U , 2482101014U , 976561178U , 1543448953U ,
2602866064U , 2021139923U , 1952599828U , 2360242564U , 2117959962U ,
2753061860U , 2388623612U , 4138193781U , 2962920654U , 2284970429U ,
766920861U , 3457264692U , 2879611383U , 815055854U , 2332929068U ,
1254853997U , 3740375268U , 3799380844U , 4091048725U , 2006331129U ,
1982546212U , 686850534U , 1907447564U , 2682801776U , 2780821066U ,
998290361U , 1342433871U , 4195430425U , 607905174U , 3902331779U ,
2454067926U , 1708133115U , 1170874362U , 2008609376U , 3260320415U ,
2211196135U , 433538229U , 2728786374U , 2189520818U , 262554063U ,
1182318347U , 3710237267U , 1221022450U , 715966018U , 2417068910U ,
2591870721U , 2870691989U , 3418190842U , 4238214053U , 1540704231U ,
1575580968U , 2095917976U , 4078310857U , 2313532447U , 2110690783U ,
4056346629U , 4061784526U , 1123218514U , 551538993U , 597148360U ,
4120175196U , 3581618160U , 3181170517U , 422862282U , 3227524138U ,
1713114790U , 662317149U , 1230418732U , 928171837U , 1324564878U ,
1928816105U , 1786535431U , 2878099422U , 3290185549U , 539474248U ,
1657512683U , 552370646U , 1671741683U , 3655312128U , 1552739510U ,
2605208763U , 1441755014U , 181878989U , 3124053868U , 1447103986U ,
3183906156U , 1728556020U , 3502241336U , 3055466967U , 1013272474U ,
818402132U , 1715099063U , 2900113506U , 397254517U , 4194863039U ,
1009068739U , 232864647U , 2540223708U , 2608288560U , 2415367765U ,
478404847U , 3455100648U , 3182600021U , 2115988978U , 434269567U ,
4117179324U , 3461774077U , 887256537U , 3545801025U , 286388911U ,
3451742129U , 1981164769U , 786667016U , 3310123729U , 3097811076U ,
2224235657U , 2959658883U , 3370969234U , 2514770915U , 3345656436U ,
2677010851U , 2206236470U , 271648054U , 2342188545U , 4292848611U ,
3646533909U , 3754009956U , 3803931226U , 4160647125U , 1477814055U ,
4043852216U , 1876372354U , 3133294443U , 3871104810U , 3177020907U ,
2074304428U , 3479393793U , 759562891U , 164128153U , 1839069216U ,
2114162633U , 3989947309U , 3611054956U , 1333547922U , 835429831U ,
494987340U , 171987910U , 1252001001U , 370809172U , 3508925425U ,
2535703112U , 1276855041U , 1922855120U , 835673414U , 3030664304U ,
613287117U , 171219893U , 3423096126U , 3376881639U , 2287770315U ,
1658692645U , 1262815245U , 3957234326U , 1168096164U , 2968737525U ,
2655813712U , 2132313144U , 3976047964U , 326516571U , 353088456U ,
3679188938U , 3205649712U , 2654036126U , 1249024881U , 880166166U ,
691800469U , 2229503665U , 1673458056U , 4032208375U , 1851778863U ,
2563757330U , 376742205U , 1794655231U , 340247333U , 1505873033U ,
396524441U , 879666767U , 3335579166U , 3260764261U , 3335999539U ,
506221798U , 4214658741U , 975887814U , 2080536343U , 3360539560U ,
571586418U , 138896374U , 4234352651U , 2737620262U , 3928362291U ,
1516365296U , 38056726U , 3599462320U , 3585007266U , 3850961033U ,
471667319U , 1536883193U , 2310166751U , 1861637689U , 2530999841U ,
4139843801U , 2710569485U , 827578615U , 2012334720U , 2907369459U ,
3029312804U , 2820112398U , 1965028045U , 35518606U , 2478379033U ,
643747771U , 1924139484U , 4123405127U , 3811735531U , 3429660832U ,
3285177704U , 1948416081U , 1311525291U , 1183517742U , 1739192232U ,
3979815115U , 2567840007U , 4116821529U , 213304419U , 4125718577U ,
1473064925U , 2442436592U , 1893310111U , 4195361916U , 3747569474U ,
828465101U , 2991227658U , 750582866U , 1205170309U , 1409813056U ,
678418130U , 1171531016U , 3821236156U , 354504587U , 4202874632U ,
3882511497U , 1893248677U , 1903078632U , 26340130U , 2069166240U ,
3657122492U , 3725758099U , 831344905U , 811453383U , 3447711422U ,
2434543565U , 4166886888U , 3358210805U , 4142984013U , 2988152326U ,
3527824853U , 982082992U , 2809155763U , 190157081U , 3340214818U ,
2365432395U , 2548636180U , 2894533366U , 3474657421U , 2372634704U ,
2845748389U , 43024175U , 2774226648U , 1987702864U , 3186502468U ,
453610222U , 4204736567U , 1392892630U , 2471323686U , 2470534280U ,
3541393095U , 4269885866U , 3909911300U , 759132955U , 1482612480U ,
667715263U , 1795580598U , 2337923983U , 3390586366U , 581426223U ,
1515718634U , 476374295U , 705213300U , 363062054U , 2084697697U ,
2407503428U , 2292957699U , 2426213835U , 2199989172U , 1987356470U ,
4026755612U , 2147252133U , 270400031U , 1367820199U , 2369854699U ,
2844269403U , 79981964U , 624U } ; memcpy ( & localDW -> ohe2ox1irr [ 0 ] , &
tmp [ 0 ] , 625U * sizeof ( uint32_T ) ) ; } void miznmgwubb ( a2vszynkmk *
const oyeh2na5gr , ahybgri1ag * localDW ) { switch ( localDW -> opg3qq423q )
{ case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( oyeh2na5gr ->
_mdlRefSfcnS ) ; break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep
( oyeh2na5gr -> _mdlRefSfcnS ) ; break ; case 2 :
ssSetBlockStateForSolverChangedAtMajorStep ( oyeh2na5gr -> _mdlRefSfcnS ) ;
break ; } localDW -> opg3qq423q = - 1 ; } void b25ht45b1u ( a2vszynkmk *
const oyeh2na5gr , ahybgri1ag * localDW ) { uint32_T initSeed ; localDW ->
ikb3mmkawk = 0 ; ssSetBlockStateForSolverChangedAtMajorStep ( oyeh2na5gr ->
_mdlRefSfcnS ) ; ssSetBlockStateForSolverChangedAtMajorStep ( oyeh2na5gr ->
_mdlRefSfcnS ) ; ssSetBlockStateForSolverChangedAtMajorStep ( oyeh2na5gr ->
_mdlRefSfcnS ) ; localDW -> opg3qq423q = - 1 ; initSeed = ( uint32_T ) (
100000 * rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , & localDW ->
muw3lw2gbs , 1 ) ; RandSrcInitState_U_64 ( & localDW -> muw3lw2gbs , &
localDW -> lzj05kk1cp [ 0 ] , 1 ) ; } void Ulterasonic ( a2vszynkmk * const
oyeh2na5gr , const real_T prdnudtldf [ 3 ] , const real_T kn2jk00ojm [ 4 ] ,
real_T * a5kgv0edcy , a4khp4m4pw * localB , ahybgri1ag * localDW ) { creal_T
eiga_data [ 2 ] ; creal_T varargin_1_data [ 2 ] ; creal_T b_a ; creal_T yp ;
real_T c_a_data [ 4 ] ; real_T c [ 3 ] ; real_T ctmp [ 3 ] ; real_T tmp [ 2 ]
; real_T xc_p [ 2 ] ; real_T dzln4gjc2u ; real_T hc ; real_T i0vfiwgtcq ;
real_T ibq5ch2xue ; real_T js0r4f4zwu ; real_T keivuroe2c_idx_1 ; real_T
m554ys224a ; real_T mhcf1oxtj4 ; real_T rc ; real_T xc ; real_T xc_tmp ;
real_T yc ; int32_T c_a_size [ 2 ] ; int32_T companDim ; int32_T j ; int32_T
k1 ; int32_T k2 ; int8_T rtAction ; int8_T rtPrevAction ; boolean_T SCALEA ;
boolean_T SCALEB ; boolean_T exitg1 ; boolean_T exitg2 ; xc_tmp =
rtmGetTaskTime ( oyeh2na5gr , 0 ) ; k1 = 1 ; js0r4f4zwu = ( ( (
muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . ultrasonic . freqs
[ 0 ] * xc_tmp + bbmg2sw1cq . P_9 ) * bbmg2sw1cq . P_7 + bbmg2sw1cq . P_8 ) +
( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err . ultrasonic .
freqs [ 1 ] * xc_tmp + bbmg2sw1cq . P_9 ) * bbmg2sw1cq . P_7 + bbmg2sw1cq .
P_8 ) ) + ( muDoubleScalarSin ( 6.2831853071795862 * rtP_Sensor_err .
ultrasonic . freqs [ 2 ] * xc_tmp + bbmg2sw1cq . P_9 ) * bbmg2sw1cq . P_7 +
bbmg2sw1cq . P_8 ) ) * rtP_Sensor_err . ultrasonic . noise_Amp ; if (
rtmIsMajorTimeStep ( oyeh2na5gr ) && rtmIsSampleHit ( oyeh2na5gr , 1 , 0 ) )
{ mhcf1oxtj4 = ( ( kn2jk00ojm [ 0 ] * kn2jk00ojm [ 0 ] + kn2jk00ojm [ 1 ] *
kn2jk00ojm [ 1 ] ) + kn2jk00ojm [ 2 ] * kn2jk00ojm [ 2 ] ) + kn2jk00ojm [ 3 ]
* kn2jk00ojm [ 3 ] ; if ( rtmIsMajorTimeStep ( oyeh2na5gr ) ) { if ( localDW
-> ikb3mmkawk != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep (
oyeh2na5gr -> _mdlRefSfcnS ) ; localDW -> ikb3mmkawk = 0 ; } dzln4gjc2u =
muDoubleScalarSqrt ( mhcf1oxtj4 ) ; } else if ( mhcf1oxtj4 < 0.0 ) {
dzln4gjc2u = - muDoubleScalarSqrt ( muDoubleScalarAbs ( mhcf1oxtj4 ) ) ;
localDW -> ikb3mmkawk = 1 ; } else { dzln4gjc2u = muDoubleScalarSqrt (
mhcf1oxtj4 ) ; } mhcf1oxtj4 = kn2jk00ojm [ 0 ] / dzln4gjc2u ; ibq5ch2xue =
kn2jk00ojm [ 1 ] / dzln4gjc2u ; i0vfiwgtcq = kn2jk00ojm [ 2 ] / dzln4gjc2u ;
dzln4gjc2u = kn2jk00ojm [ 3 ] / dzln4gjc2u ; m554ys224a = ( ibq5ch2xue *
dzln4gjc2u - mhcf1oxtj4 * i0vfiwgtcq ) * - 2.0 ; rtPrevAction = localDW ->
opg3qq423q ; if ( m554ys224a > 1.0 ) { rtAction = 0 ; } else if ( m554ys224a
< - 1.0 ) { rtAction = 1 ; } else { rtAction = 2 ; } localDW -> opg3qq423q =
rtAction ; if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0
: ssSetBlockStateForSolverChangedAtMajorStep ( oyeh2na5gr -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( oyeh2na5gr ->
_mdlRefSfcnS ) ; break ; case 2 : ssSetBlockStateForSolverChangedAtMajorStep
( oyeh2na5gr -> _mdlRefSfcnS ) ; break ; } } switch ( rtAction ) { case 0 :
if ( rtAction != rtPrevAction ) { if ( rtmGetTaskTime ( oyeh2na5gr , 1 ) !=
rtmGetTStart ( oyeh2na5gr ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
oyeh2na5gr -> _mdlRefSfcnS ) ; } } m554ys224a = bbmg2sw1cq . P_5 ; srUpdateBC
( localDW -> n1nj5j05ls ) ; break ; case 1 : if ( rtAction != rtPrevAction )
{ if ( rtmGetTaskTime ( oyeh2na5gr , 1 ) != rtmGetTStart ( oyeh2na5gr ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( oyeh2na5gr -> _mdlRefSfcnS ) ; }
} m554ys224a = bbmg2sw1cq . P_6 ; srUpdateBC ( localDW -> ajmwx3dn53 ) ;
break ; default : if ( rtAction != rtPrevAction ) { if ( rtmGetTaskTime (
oyeh2na5gr , 1 ) != rtmGetTStart ( oyeh2na5gr ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( oyeh2na5gr -> _mdlRefSfcnS ) ; }
} srUpdateBC ( localDW -> nntejegq5z ) ; break ; } if ( m554ys224a > 1.0 ) {
m554ys224a = 1.0 ; } else if ( m554ys224a < - 1.0 ) { m554ys224a = - 1.0 ; }
keivuroe2c_idx_1 = muDoubleScalarAsin ( m554ys224a ) ; switch ( ( int32_T )
rtP_Selected_Env ) { case 1 : xc_p [ 0 ] = rtP_env . chimney1_1 . pos [ 0 ] -
prdnudtldf [ 0 ] ; xc_p [ 1 ] = rtP_env . chimney1_1 . pos [ 1 ] - prdnudtldf
[ 1 ] ; tmp [ 0 ] = rtP_env . chimney1_2 . pos [ 0 ] - prdnudtldf [ 0 ] ; tmp
[ 1 ] = rtP_env . chimney1_2 . pos [ 1 ] - prdnudtldf [ 1 ] ; if (
norm_Yd2SRzkc ( xc_p ) < norm_Yd2SRzkc ( tmp ) ) { xc = rtP_env . chimney1_1
. pos [ 0 ] ; yc = rtP_env . chimney1_1 . pos [ 1 ] ; hc = rtP_env .
chimney1_1 . h ; rc = rtP_env . chimney1_1 . r ; } else { xc = rtP_env .
chimney1_2 . pos [ 0 ] ; yc = rtP_env . chimney1_2 . pos [ 1 ] ; hc = rtP_env
. chimney1_2 . h ; rc = rtP_env . chimney1_2 . r ; } break ; case 2 : xc_tmp
= rtP_env . chimney2_1 . pos [ 0 ] - prdnudtldf [ 0 ] ; xc_p [ 0 ] = xc_tmp ;
hc = rtP_env . chimney2_1 . pos [ 1 ] - prdnudtldf [ 1 ] ; xc_p [ 1 ] = hc ;
xc = rtP_env . chimney2_2 . pos [ 0 ] - prdnudtldf [ 0 ] ; tmp [ 0 ] = xc ;
m554ys224a = rtP_env . chimney2_2 . pos [ 1 ] - prdnudtldf [ 1 ] ; tmp [ 1 ]
= m554ys224a ; if ( norm_Yd2SRzkc ( xc_p ) < norm_Yd2SRzkc ( tmp ) ) { xc_p [
0 ] = xc_tmp ; xc_p [ 1 ] = hc ; tmp [ 0 ] = rtP_env . chimney2_3 . pos [ 0 ]
- prdnudtldf [ 0 ] ; tmp [ 1 ] = rtP_env . chimney2_3 . pos [ 1 ] -
prdnudtldf [ 1 ] ; if ( norm_Yd2SRzkc ( xc_p ) < norm_Yd2SRzkc ( tmp ) ) { xc
= rtP_env . chimney2_1 . pos [ 0 ] ; yc = rtP_env . chimney2_1 . pos [ 1 ] ;
hc = rtP_env . chimney2_1 . h ; rc = rtP_env . chimney2_1 . r ; } else { xc =
rtP_env . chimney2_3 . pos [ 0 ] ; yc = rtP_env . chimney2_3 . pos [ 1 ] ; hc
= rtP_env . chimney2_3 . h ; rc = rtP_env . chimney2_3 . r ; } } else { xc_p
[ 0 ] = xc ; xc_p [ 1 ] = m554ys224a ; tmp [ 0 ] = rtP_env . chimney2_3 . pos
[ 0 ] - prdnudtldf [ 0 ] ; tmp [ 1 ] = rtP_env . chimney2_3 . pos [ 1 ] -
prdnudtldf [ 1 ] ; if ( norm_Yd2SRzkc ( xc_p ) < norm_Yd2SRzkc ( tmp ) ) { xc
= rtP_env . chimney2_2 . pos [ 0 ] ; yc = rtP_env . chimney2_2 . pos [ 1 ] ;
hc = rtP_env . chimney2_2 . h ; rc = rtP_env . chimney2_2 . r ; } else { xc =
rtP_env . chimney2_3 . pos [ 0 ] ; yc = rtP_env . chimney2_3 . pos [ 1 ] ; hc
= rtP_env . chimney2_3 . h ; rc = rtP_env . chimney2_3 . r ; } } break ; } xc
-= prdnudtldf [ 0 ] ; xc_p [ 0 ] = xc ; xc_tmp = yc - prdnudtldf [ 1 ] ; xc_p
[ 1 ] = xc_tmp ; m554ys224a = norm_Yd2SRzkc ( xc_p ) ; if ( m554ys224a - rc >
rtP_Sensor_err . ultrasonic . sup_range [ 1 ] ) { rc = ( rtNaN ) ; } else {
xc_p [ 0 ] = xc ; xc_p [ 1 ] = xc_tmp ; if ( norm_Yd2SRzkc ( xc_p ) - rc <
rtP_Sensor_err . ultrasonic . sup_range [ 0 ] ) { rc = ( rtNaN ) ; } else {
xc = muDoubleScalarAbs ( muDoubleScalarAtan2 ( ( ibq5ch2xue * i0vfiwgtcq +
mhcf1oxtj4 * dzln4gjc2u ) * 2.0 , ( ( mhcf1oxtj4 * mhcf1oxtj4 + ibq5ch2xue *
ibq5ch2xue ) - i0vfiwgtcq * i0vfiwgtcq ) - dzln4gjc2u * dzln4gjc2u ) -
muDoubleScalarAtan2 ( xc_tmp , xc ) ) ; yc = muDoubleScalarAbs (
muDoubleScalarTan ( xc ) ) ; c [ 0 ] = yc * yc + 1.0 ; c [ 1 ] = - 2.0 *
m554ys224a ; xc_tmp = rc * rc ; c [ 2 ] = m554ys224a * m554ys224a - xc_tmp ;
varargin_1_data [ 0 ] . re = 0.0 ; varargin_1_data [ 0 ] . im = 0.0 ;
varargin_1_data [ 1 ] . re = 0.0 ; varargin_1_data [ 1 ] . im = 0.0 ; while (
( k1 <= 3 ) && ( ! ( c [ k1 - 1 ] != 0.0 ) ) ) { k1 ++ ; } k2 = 3 ; while ( (
k2 >= k1 ) && ( ! ( c [ k2 - 1 ] != 0.0 ) ) ) { k2 -- ; } if ( k1 < k2 ) {
companDim = k2 - k1 ; exitg1 = false ; while ( ( ! exitg1 ) && ( companDim >
0 ) ) { j = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( j + 1 <= companDim
) ) { ctmp [ j ] = c [ k1 + j ] / c [ k1 - 1 ] ; if ( muDoubleScalarIsInf (
muDoubleScalarAbs ( ctmp [ j ] ) ) ) { exitg2 = true ; } else { j ++ ; } } if
( j + 1 > companDim ) { exitg1 = true ; } else { k1 ++ ; companDim -- ; } }
if ( companDim < 1 ) { if ( 1 > 3 - k2 ) { k1 = 0 ; } else { k1 = 3 - k2 ; }
} else { c_a_size [ 0 ] = companDim ; c_a_size [ 1 ] = companDim ; j =
companDim * companDim - 1 ; for ( k1 = 0 ; k1 <= j ; k1 ++ ) { c_a_data [ k1
] = 0.0 ; } k1 = 0 ; while ( k1 <= companDim - 2 ) { c_a_data [ 0 ] = - ctmp
[ 0 ] ; c_a_data [ 1 ] = 1.0 ; k1 = 1 ; } c_a_data [ companDim * ( companDim
- 1 ) ] = - ctmp [ companDim - 1 ] ; if ( 0 <= 2 - k2 ) { varargin_1_data [ 0
] . re = 0.0 ; varargin_1_data [ 0 ] . im = 0.0 ; } gfqrrt1mb1 ( c_a_data ,
c_a_size , eiga_data , & k1 ) ; for ( k1 = 0 ; k1 < companDim ; k1 ++ ) {
varargin_1_data [ ( k1 - k2 ) + 3 ] = eiga_data [ k1 ] ; } k1 = ( companDim -
k2 ) + 3 ; } } else if ( 1 > 3 - k2 ) { k1 = 0 ; } else { k1 = 3 - k2 ; } rc
= varargin_1_data [ 0 ] . re ; dzln4gjc2u = varargin_1_data [ 0 ] . im ; k2 =
2 ; while ( k2 <= k1 ) { if ( muDoubleScalarIsNaN ( varargin_1_data [ 1 ] .
re ) || muDoubleScalarIsNaN ( varargin_1_data [ 1 ] . im ) ) { SCALEA = false
; } else if ( muDoubleScalarIsNaN ( rc ) || muDoubleScalarIsNaN ( dzln4gjc2u
) ) { SCALEA = true ; } else { if ( ( muDoubleScalarAbs ( rc ) >
8.9884656743115785E+307 ) || ( muDoubleScalarAbs ( dzln4gjc2u ) >
8.9884656743115785E+307 ) ) { SCALEA = true ; } else { SCALEA = false ; } if
( ( muDoubleScalarAbs ( varargin_1_data [ 1 ] . re ) >
8.9884656743115785E+307 ) || ( muDoubleScalarAbs ( varargin_1_data [ 1 ] . im
) > 8.9884656743115785E+307 ) ) { SCALEB = true ; } else { SCALEB = false ; }
if ( SCALEA || SCALEB ) { ibq5ch2xue = muDoubleScalarHypot ( rc / 2.0 ,
dzln4gjc2u / 2.0 ) ; mhcf1oxtj4 = muDoubleScalarHypot ( varargin_1_data [ 1 ]
. re / 2.0 , varargin_1_data [ 1 ] . im / 2.0 ) ; } else { ibq5ch2xue =
muDoubleScalarHypot ( rc , dzln4gjc2u ) ; mhcf1oxtj4 = muDoubleScalarHypot (
varargin_1_data [ 1 ] . re , varargin_1_data [ 1 ] . im ) ; } if (
iseq_sJSIRDHq ( ibq5ch2xue , mhcf1oxtj4 ) ) { ibq5ch2xue =
muDoubleScalarAtan2 ( dzln4gjc2u , rc ) ; mhcf1oxtj4 = muDoubleScalarAtan2 (
varargin_1_data [ 1 ] . im , varargin_1_data [ 1 ] . re ) ; if (
iseq_sJSIRDHq ( ibq5ch2xue , mhcf1oxtj4 ) ) { mhcf1oxtj4 = varargin_1_data [
1 ] . re ; if ( rc != varargin_1_data [ 1 ] . re ) { if ( ibq5ch2xue >= 0.0 )
{ ibq5ch2xue = varargin_1_data [ 1 ] . re ; mhcf1oxtj4 = rc ; } else {
ibq5ch2xue = rc ; } } else if ( rc < 0.0 ) { ibq5ch2xue = varargin_1_data [ 1
] . im ; mhcf1oxtj4 = dzln4gjc2u ; } else { ibq5ch2xue = dzln4gjc2u ;
mhcf1oxtj4 = varargin_1_data [ 1 ] . im ; } if ( iseq_sJSIRDHq ( ibq5ch2xue ,
mhcf1oxtj4 ) ) { ibq5ch2xue = 0.0 ; mhcf1oxtj4 = 0.0 ; } } } SCALEA = (
ibq5ch2xue > mhcf1oxtj4 ) ; } if ( SCALEA ) { rc = varargin_1_data [ 1 ] . re
; dzln4gjc2u = varargin_1_data [ 1 ] . im ; } k2 = 3 ; } if ( dzln4gjc2u !=
0.0 ) { rc = ( rtNaN ) ; dzln4gjc2u = 0.0 ; yp . re = ( rtNaN ) ; yp . im =
0.0 ; } else { b_a . re = m554ys224a - rc ; yp . re = xc_tmp - b_a . re * b_a
. re ; mhcf1oxtj4 = b_a . re * 0.0 ; yp . im = 0.0 - ( mhcf1oxtj4 +
mhcf1oxtj4 ) ; sqrt_JVgK17Mi ( & yp ) ; } b_a . re = rc - m554ys224a ;
mhcf1oxtj4 = b_a . re * dzln4gjc2u ; b_a . re = xc_tmp - ( b_a . re * b_a .
re - dzln4gjc2u * dzln4gjc2u ) ; b_a . im = 0.0 - ( mhcf1oxtj4 + mhcf1oxtj4 )
; sqrt_JVgK17Mi ( & b_a ) ; m554ys224a = - ( ( 2.0 * rc - 2.0 * m554ys224a )
* 0.5 ) ; if ( b_a . im == 0.0 ) { mhcf1oxtj4 = m554ys224a / b_a . re ;
m554ys224a = 0.0 ; } else if ( b_a . re == 0.0 ) { if ( m554ys224a == 0.0 ) {
mhcf1oxtj4 = 0.0 / b_a . im ; m554ys224a = 0.0 ; } else { mhcf1oxtj4 = 0.0 ;
m554ys224a = - ( m554ys224a / b_a . im ) ; } } else { ibq5ch2xue =
muDoubleScalarAbs ( b_a . re ) ; mhcf1oxtj4 = muDoubleScalarAbs ( b_a . im )
; if ( ibq5ch2xue > mhcf1oxtj4 ) { ibq5ch2xue = b_a . im / b_a . re ; xc_tmp
= ibq5ch2xue * b_a . im + b_a . re ; mhcf1oxtj4 = ( ibq5ch2xue * 0.0 +
m554ys224a ) / xc_tmp ; m554ys224a = ( 0.0 - ibq5ch2xue * m554ys224a ) /
xc_tmp ; } else if ( mhcf1oxtj4 == ibq5ch2xue ) { xc_tmp = b_a . re > 0.0 ?
0.5 : - 0.5 ; dzln4gjc2u = b_a . im > 0.0 ? 0.5 : - 0.5 ; mhcf1oxtj4 = (
m554ys224a * xc_tmp + 0.0 * dzln4gjc2u ) / ibq5ch2xue ; m554ys224a = ( 0.0 *
xc_tmp - m554ys224a * dzln4gjc2u ) / ibq5ch2xue ; } else { ibq5ch2xue = b_a .
re / b_a . im ; xc_tmp = ibq5ch2xue * b_a . re + b_a . im ; mhcf1oxtj4 =
ibq5ch2xue * m554ys224a / xc_tmp ; m554ys224a = ( ibq5ch2xue * 0.0 -
m554ys224a ) / xc_tmp ; } } b_a . re = mhcf1oxtj4 ; b_a . im = m554ys224a ;
atan_NHvdu6PS ( & b_a ) ; b_a . re -= xc ; xc_tmp = muDoubleScalarAbs (
keivuroe2c_idx_1 ) ; if ( ( b_a . re - xc_tmp < 1.1344640137963142 ) ||
muDoubleScalarIsNaN ( rc ) ) { rc = ( rtNaN ) ; } else { xc =
3.3121686421112381E-170 ; mhcf1oxtj4 = muDoubleScalarAbs ( rc ) ; if (
mhcf1oxtj4 > 3.3121686421112381E-170 ) { rc = 1.0 ; xc = mhcf1oxtj4 ; } else
{ m554ys224a = mhcf1oxtj4 / 3.3121686421112381E-170 ; rc = m554ys224a *
m554ys224a ; } ibq5ch2xue = muDoubleScalarAbs ( yp . re ) ; if ( ibq5ch2xue >
xc ) { m554ys224a = xc / ibq5ch2xue ; rc = rc * m554ys224a * m554ys224a + 1.0
; xc = ibq5ch2xue ; } else { m554ys224a = ibq5ch2xue / xc ; rc += m554ys224a
* m554ys224a ; } dzln4gjc2u = muDoubleScalarAbs ( yp . im ) ; if ( dzln4gjc2u
> xc ) { m554ys224a = xc / dzln4gjc2u ; rc = rc * m554ys224a * m554ys224a +
1.0 ; xc = dzln4gjc2u ; } else { m554ys224a = dzln4gjc2u / xc ; rc +=
m554ys224a * m554ys224a ; } rc = xc * muDoubleScalarSqrt ( rc ) ; xc = rc *
muDoubleScalarTan ( keivuroe2c_idx_1 ) + prdnudtldf [ 2 ] ; yc =
3.3121686421112381E-170 ; if ( mhcf1oxtj4 > 3.3121686421112381E-170 ) { rc =
1.0 ; yc = mhcf1oxtj4 ; } else { mhcf1oxtj4 /= 3.3121686421112381E-170 ; rc =
mhcf1oxtj4 * mhcf1oxtj4 ; } if ( ibq5ch2xue > yc ) { mhcf1oxtj4 = yc /
ibq5ch2xue ; rc = rc * mhcf1oxtj4 * mhcf1oxtj4 + 1.0 ; yc = ibq5ch2xue ; }
else { mhcf1oxtj4 = ibq5ch2xue / yc ; rc += mhcf1oxtj4 * mhcf1oxtj4 ; } if (
dzln4gjc2u > yc ) { mhcf1oxtj4 = yc / dzln4gjc2u ; rc = rc * mhcf1oxtj4 *
mhcf1oxtj4 + 1.0 ; yc = dzln4gjc2u ; } else { mhcf1oxtj4 = dzln4gjc2u / yc ;
rc += mhcf1oxtj4 * mhcf1oxtj4 ; } m554ys224a = muDoubleScalarAbs ( xc ) ; if
( m554ys224a > yc ) { mhcf1oxtj4 = yc / m554ys224a ; rc = rc * mhcf1oxtj4 *
mhcf1oxtj4 + 1.0 ; yc = m554ys224a ; } else { mhcf1oxtj4 = m554ys224a / yc ;
rc += mhcf1oxtj4 * mhcf1oxtj4 ; } rc = yc * muDoubleScalarSqrt ( rc ) ; if (
( rc > rtP_Sensor_err . ultrasonic . sup_range [ 1 ] ) || ( rc <
rtP_Sensor_err . ultrasonic . sup_range [ 0 ] ) || ( xc > hc ) ) { rc = (
rtNaN ) ; } else { b_a . re = - ( ( 90.0 - b_a . re ) - xc_tmp ) ; b_a . im =
- ( 0.0 - b_a . im ) ; if ( b_a . im == 0.0 ) { b_a . re = muDoubleScalarExp
( b_a . re ) ; b_a . im = 0.0 ; } else if ( muDoubleScalarIsInf ( b_a . im )
&& muDoubleScalarIsInf ( b_a . re ) && ( b_a . re < 0.0 ) ) { b_a . re = 0.0
; b_a . im = 0.0 ; } else { hc = muDoubleScalarExp ( b_a . re / 2.0 ) ; b_a .
re = hc * muDoubleScalarCos ( b_a . im ) * hc ; b_a . im = hc *
muDoubleScalarSin ( b_a . im ) * hc ; } mhcf1oxtj4 = l0hp4g12nr ( localDW ) ;
if ( mhcf1oxtj4 > ( b_a . re * b_a . re - b_a . im * b_a . im ) * 0.005 ) {
rc = ( rtNaN ) ; } } } } } localB -> ona4nvm23h = rc ; } if (
rtmIsMajorTimeStep ( oyeh2na5gr ) && rtmIsSampleHit ( oyeh2na5gr , 2 , 0 ) )
{ RandSrc_U_D ( & localB -> nlb4kianuw , & bbmg2sw1cq . P_4 , 1 , &
bbmg2sw1cq . P_3 , 1 , localDW -> lzj05kk1cp , 1 , 1 ) ; } * a5kgv0edcy =
localB -> nlb4kianuw * js0r4f4zwu + localB -> ona4nvm23h ; } void
UlterasonicTID3 ( void ) { } void jcsf3n5svm ( void ) { } void jcsf3n5svmTID3
( void ) { } void ovvukifj1f ( a2vszynkmk * const oyeh2na5gr ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( oyeh2na5gr ->
_mdlRefSfcnS , "Ulterasonic" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" )
; } } void pmxxxo3kle ( SimStruct * _mdlRefSfcnS ,
ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , int_T mdlref_TID3 ,
a2vszynkmk * const oyeh2na5gr , a4khp4m4pw * localB , ahybgri1ag * localDW ,
void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI ,
const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( ( void * )
oyeh2na5gr , 0 , sizeof ( a2vszynkmk ) ) ; oyeh2na5gr -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; oyeh2na5gr -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; oyeh2na5gr -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; oyeh2na5gr -> Timing .
mdlref_GlobalTID [ 3 ] = mdlref_TID3 ; oyeh2na5gr -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( oyeh2na5gr -> _mdlRefSfcnS , "Ulterasonic" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> nlb4kianuw = 0.0
; localB -> ona4nvm23h = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 ,
sizeof ( ahybgri1ag ) ) ; { int32_T i ; for ( i = 0 ; i < 35 ; i ++ ) {
localDW -> lzj05kk1cp [ i ] = 0.0 ; } } Ulterasonic_InitializeDataMapInfo (
oyeh2na5gr , localDW , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != (
NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( *
rt_ParentMMI , rt_ChildMMIIdx , & ( oyeh2na5gr -> DataMapInfo . mmi ) ) ;
rtwCAPI_SetPath ( oyeh2na5gr -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( oyeh2na5gr -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes = 1 * sizeof ( real_T ) ;
mr_nonContOutputArray [ 0 ] [ 0 ] . currVal = ( char_T * ) & localB ->
nlb4kianuw ; mr_nonContOutputArray [ 0 ] [ 0 ] . next = & (
mr_nonContOutputArray [ 0 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 1 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 0 ] [ 1 ] . currVal = ( char_T * ) &
localB -> ona4nvm23h ; mr_nonContOutputArray [ 0 ] [ 1 ] . next = ( NULL ) ;
} } void mr_Ulterasonic_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_Ulterasonic , 77 ) ; * retVal = 1 ; }
static void mr_Ulterasonic_cacheDataAsMxArray ( mxArray * destArray , mwIndex
i , int j , const void * srcData , size_t numBytes ) ; static void
mr_Ulterasonic_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Ulterasonic_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Ulterasonic_restoreDataFromMxArray ( void * destData , const mxArray
* srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_Ulterasonic_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Ulterasonic_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int
j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Ulterasonic_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Ulterasonic_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_Ulterasonic_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static
void mr_Ulterasonic_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
{ uint8_T * varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber (
destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes
] , ( const uint8_T * ) srcData , numBytes ) ; } static void
mr_Ulterasonic_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_Ulterasonic_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Ulterasonic_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Ulterasonic_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_Ulterasonic_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Ulterasonic_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Ulterasonic_GetDWork ( const je3r5qpf5jf * mdlrefDW ) {
static const char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" ,
} ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Ulterasonic_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char *
rtdwDataFieldNames [ 8 ] = { "mdlrefDW->rtdw.lzj05kk1cp" ,
"mdlrefDW->rtdw.muw3lw2gbs" , "mdlrefDW->rtdw.ohe2ox1irr" ,
"mdlrefDW->rtdw.ikb3mmkawk" , "mdlrefDW->rtdw.opg3qq423q" ,
"mdlrefDW->rtdw.nntejegq5z" , "mdlrefDW->rtdw.ajmwx3dn53" ,
"mdlrefDW->rtdw.n1nj5j05ls" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 8 , rtdwDataFieldNames ) ; mr_Ulterasonic_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtdw . lzj05kk1cp ) ,
sizeof ( mdlrefDW -> rtdw . lzj05kk1cp ) ) ;
mr_Ulterasonic_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & (
mdlrefDW -> rtdw . muw3lw2gbs ) , sizeof ( mdlrefDW -> rtdw . muw3lw2gbs ) )
; mr_Ulterasonic_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & (
mdlrefDW -> rtdw . ohe2ox1irr ) , sizeof ( mdlrefDW -> rtdw . ohe2ox1irr ) )
; mr_Ulterasonic_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & (
mdlrefDW -> rtdw . ikb3mmkawk ) , sizeof ( mdlrefDW -> rtdw . ikb3mmkawk ) )
; mr_Ulterasonic_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
mdlrefDW -> rtdw . opg3qq423q ) , sizeof ( mdlrefDW -> rtdw . opg3qq423q ) )
; mr_Ulterasonic_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
mdlrefDW -> rtdw . nntejegq5z ) , sizeof ( mdlrefDW -> rtdw . nntejegq5z ) )
; mr_Ulterasonic_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & (
mdlrefDW -> rtdw . ajmwx3dn53 ) , sizeof ( mdlrefDW -> rtdw . ajmwx3dn53 ) )
; mr_Ulterasonic_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
mdlrefDW -> rtdw . n1nj5j05ls ) , sizeof ( mdlrefDW -> rtdw . n1nj5j05ls ) )
; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ;
return ssDW ; } void mr_Ulterasonic_SetDWork ( je3r5qpf5jf * mdlrefDW , const
mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_Ulterasonic_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb ) ,
ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_Ulterasonic_restoreDataFromMxArray (
( void * ) & ( mdlrefDW -> rtdw . lzj05kk1cp ) , rtdwData , 0 , 0 , sizeof (
mdlrefDW -> rtdw . lzj05kk1cp ) ) ; mr_Ulterasonic_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . muw3lw2gbs ) , rtdwData , 0 , 1 , sizeof (
mdlrefDW -> rtdw . muw3lw2gbs ) ) ; mr_Ulterasonic_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . ohe2ox1irr ) , rtdwData , 0 , 2 , sizeof (
mdlrefDW -> rtdw . ohe2ox1irr ) ) ; mr_Ulterasonic_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . ikb3mmkawk ) , rtdwData , 0 , 3 , sizeof (
mdlrefDW -> rtdw . ikb3mmkawk ) ) ; mr_Ulterasonic_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . opg3qq423q ) , rtdwData , 0 , 4 , sizeof (
mdlrefDW -> rtdw . opg3qq423q ) ) ; mr_Ulterasonic_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . nntejegq5z ) , rtdwData , 0 , 5 , sizeof (
mdlrefDW -> rtdw . nntejegq5z ) ) ; mr_Ulterasonic_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . ajmwx3dn53 ) , rtdwData , 0 , 6 , sizeof (
mdlrefDW -> rtdw . ajmwx3dn53 ) ) ; mr_Ulterasonic_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . n1nj5j05ls ) , rtdwData , 0 , 7 , sizeof (
mdlrefDW -> rtdw . n1nj5j05ls ) ) ; } } void
mr_Ulterasonic_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 3545052092U , 1971025482U , 906592616U , 1200083528U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "Ulterasonic" , & chksum [ 0 ] ) ;
} mxArray * mr_Ulterasonic_GetSimStateDisallowedBlocks ( ) { return NULL ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
