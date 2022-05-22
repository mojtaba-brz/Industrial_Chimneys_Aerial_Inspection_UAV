#include "Aerial_Inspection_Octa_Rotor_capi.h"
#include "Aerial_Inspection_Octa_Rotor.h"
#include "Aerial_Inspection_Octa_Rotor_private.h"
#include "rt_Spline2Derivd.h"
#include "look_SplNBinSScd.h"
#include "look_SplNBinSZcd.h"
#include "look1_binlxpw.h"
static RegMdlInfo rtMdlInfo_Aerial_Inspection_Octa_Rotor [ 53 ] = { {
"ee0qxomeisn" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "bgcwnpu3li" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "a4uqgfsmod" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "nko55pogye" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "mchmt5aitv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "ihmnk2iibr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "mnmdmnlsde" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "obzgstfl0b" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "dqqvs3rdg5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "igj4jtwsge" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "hnobnvw4pp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "oqhcpinx2u" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "cysfao30we" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "fiyuauag0n" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "jlj2dwkb5x" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "h5eucepwjv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "hmtijw3yi1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "pceanreruy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "lis2baqqvz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "jigavv4zqy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "aihrslg3td" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "glqprwxucg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "jrblk3hduc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "pvpgvdt1mc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "l5wtezk2iz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "ggvdx2b0lr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "lqjjhvy1z4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "dskmokn3vh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "Aerial_Inspection_Octa_Rotor" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "m0zps5vr3u" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "l4jrtudp3m" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "a0hhroei4y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , { "struct_zTFVkGK3i7bP8k5Cs9WrgE" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_EnOEpAeE3nmflqqaycPpeF" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_Ls8M3UvEy97B5ff1K3Tw2B" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_csn5FRHOzihLPlj7ahbGIH" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_Pz6Tj28WhUBpH2SAzHmELH" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_vVK887imL2KkaadxyFQyoD" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_73iqWC83UABBKShbCAzZNG" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "mr_Aerial_Inspection_Octa_Rotor_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , {
"mr_Aerial_Inspection_Octa_Rotor_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , {
"mr_Aerial_Inspection_Octa_Rotor_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , {
"mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , {
"mr_Aerial_Inspection_Octa_Rotor_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , {
"mr_Aerial_Inspection_Octa_Rotor_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , {
"mr_Aerial_Inspection_Octa_Rotor_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , {
"mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , {
"mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , {
"mr_Aerial_Inspection_Octa_Rotor_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Aerial_Inspection_Octa_Rotor" } , {
"mr_Aerial_Inspection_Octa_Rotor_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "Aerial_Inspection_Octa_Rotor" } , {
"mr_Aerial_Inspection_Octa_Rotor_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "Aerial_Inspection_Octa_Rotor" } , {
"Aerial_Inspection_Octa_Rotor.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL
) } , { "Aerial_Inspection_Octa_Rotor.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1
, ( void * ) "Aerial_Inspection_Octa_Rotor" } } ; p301ouc1q1q p301ouc1q1 = {
1.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , { -
40.0 , - 400.0 } , { - 16000.0 , - 160000.0 } , 400.0 , 0.0 , 0.0 , { - 40.0
, - 400.0 } , { - 16000.0 , - 160000.0 } , 400.0 , 0.0 , 0.0 , { - 16.0 , -
64.0 } , { - 1024.0 , - 4096.0 } , 64.0 , 0.0 , 0.0 , { - 10.0 , - 25.0 } , {
- 250.0 , - 625.0 } , 25.0 , 0.0 , 0.0 , { - 10.0 , - 25.0 } , { - 250.0 , -
625.0 } , 25.0 , 0.0 , 0.0 , { - 20.0 , - 100.0 } , { - 2000.0 , - 10000.0 }
, 100.0 , 0.0 , 0.0 , { - 20.0 , - 100.0 } , { - 2000.0 , - 10000.0 } , 100.0
, 0.0 , 0.0 , { - 20.0 , - 100.0 } , { - 2000.0 , - 10000.0 } , 100.0 , 0.0 ,
50.4 , { 0.0 , 3703.0 , 4005.0 , 4289.0 , 4575.0 , 5091.0 , 5635.0 , 6374.0 }
, { 0.0 , 0.5 , 0.55 , 0.6 , 0.65 , 0.75 , 0.85 , 1.0 } , { 0.0 , 3703.0 ,
4005.0 , 4289.0 , 4575.0 , 5091.0 , 5635.0 , 6374.0 } , { 0.0 , 0.5 , 0.55 ,
0.6 , 0.65 , 0.75 , 0.85 , 1.0 } , { 0.0 , 3703.0 , 4005.0 , 4289.0 , 4575.0
, 5091.0 , 5635.0 , 6374.0 } , { 0.0 , 0.5 , 0.55 , 0.6 , 0.65 , 0.75 , 0.85
, 1.0 } , { 0.0 , 3703.0 , 4005.0 , 4289.0 , 4575.0 , 5091.0 , 5635.0 ,
6374.0 } , { 0.0 , 0.5 , 0.55 , 0.6 , 0.65 , 0.75 , 0.85 , 1.0 } , { 0.0 ,
3703.0 , 4005.0 , 4289.0 , 4575.0 , 5091.0 , 5635.0 , 6374.0 } , { 0.0 , 0.5
, 0.55 , 0.6 , 0.65 , 0.75 , 0.85 , 1.0 } , { 0.0 , 3703.0 , 4005.0 , 4289.0
, 4575.0 , 5091.0 , 5635.0 , 6374.0 } , { 0.0 , 0.5 , 0.55 , 0.6 , 0.65 ,
0.75 , 0.85 , 1.0 } , { 0.0 , 3703.0 , 4005.0 , 4289.0 , 4575.0 , 5091.0 ,
5635.0 , 6374.0 } , { 0.0 , 0.5 , 0.55 , 0.6 , 0.65 , 0.75 , 0.85 , 1.0 } , {
0.0 , 3703.0 , 4005.0 , 4289.0 , 4575.0 , 5091.0 , 5635.0 , 6374.0 } , { 0.0
, 0.5 , 0.55 , 0.6 , 0.65 , 0.75 , 0.85 , 1.0 } , - 6.0 , - 40.0 , - 1600.0 ,
40.0 , 0.0 , 6.0 , - 40.0 , - 1600.0 , 40.0 , 0.0 , - 1.0 , - 6.0 , - 40.0 ,
- 1600.0 , 40.0 , 0.0 , - 1.0 , 6.0 , - 40.0 , - 1600.0 , 40.0 , 0.0 , - 1.0
, 6.0 , - 40.0 , - 1600.0 , 40.0 , 0.0 , - 6.0 , - 40.0 , - 1600.0 , 40.0 ,
0.0 , 6.0 , - 40.0 , - 1600.0 , 40.0 , 0.0 , - 1.0 , 6.0 , - 40.0 , - 1600.0
, 40.0 , - 0.16666666666666666 , { 0.0 , 27.477809999999998 ,
32.490719999999996 , 36.915029999999994 , 42.73236 , 52.699319999999993 ,
64.56942 , 82.541339999999991 } , { 0.0 , 3703.0 , 4005.0 , 4289.0 , 4575.0 ,
5091.0 , 5635.0 , 6374.0 } , - 1.0 , { 0.0 , 0.698301886792453 ,
0.789333333333333 , 0.884827586206897 , 0.977142857142857 , 1.18102669404517
, 1.4626497277677 , 1.86500907441016 } , { 0.0 , 3703.0 , 4005.0 , 4289.0 ,
4575.0 , 5091.0 , 5635.0 , 6374.0 } , - 1.0 , 0.16666666666666666 , { 0.0 ,
27.477809999999998 , 32.490719999999996 , 36.915029999999994 , 42.73236 ,
52.699319999999993 , 64.56942 , 82.541339999999991 } , { 0.0 , 3703.0 ,
4005.0 , 4289.0 , 4575.0 , 5091.0 , 5635.0 , 6374.0 } , 1.0 , { 0.0 ,
0.698301886792453 , 0.789333333333333 , 0.884827586206897 , 0.977142857142857
, 1.18102669404517 , 1.4626497277677 , 1.86500907441016 } , { 0.0 , 3703.0 ,
4005.0 , 4289.0 , 4575.0 , 5091.0 , 5635.0 , 6374.0 } , 1.0 , -
0.16666666666666666 , { 0.0 , 27.477809999999998 , 32.490719999999996 ,
36.915029999999994 , 42.73236 , 52.699319999999993 , 64.56942 ,
82.541339999999991 } , { 0.0 , 3703.0 , 4005.0 , 4289.0 , 4575.0 , 5091.0 ,
5635.0 , 6374.0 } , - 1.0 , { 0.0 , 0.698301886792453 , 0.789333333333333 ,
0.884827586206897 , 0.977142857142857 , 1.18102669404517 , 1.4626497277677 ,
1.86500907441016 } , { 0.0 , 3703.0 , 4005.0 , 4289.0 , 4575.0 , 5091.0 ,
5635.0 , 6374.0 } , - 1.0 , 0.16666666666666666 , { 0.0 , 27.477809999999998
, 32.490719999999996 , 36.915029999999994 , 42.73236 , 52.699319999999993 ,
64.56942 , 82.541339999999991 } , { 0.0 , 3703.0 , 4005.0 , 4289.0 , 4575.0 ,
5091.0 , 5635.0 , 6374.0 } , 1.0 , { 0.0 , 0.698301886792453 ,
0.789333333333333 , 0.884827586206897 , 0.977142857142857 , 1.18102669404517
, 1.4626497277677 , 1.86500907441016 } , { 0.0 , 3703.0 , 4005.0 , 4289.0 ,
4575.0 , 5091.0 , 5635.0 , 6374.0 } , 1.0 , 0.16666666666666666 , { 0.0 ,
27.477809999999998 , 32.490719999999996 , 36.915029999999994 , 42.73236 ,
52.699319999999993 , 64.56942 , 82.541339999999991 } , { 0.0 , 3703.0 ,
4005.0 , 4289.0 , 4575.0 , 5091.0 , 5635.0 , 6374.0 } , 1.0 , { 0.0 ,
0.698301886792453 , 0.789333333333333 , 0.884827586206897 , 0.977142857142857
, 1.18102669404517 , 1.4626497277677 , 1.86500907441016 } , { 0.0 , 3703.0 ,
4005.0 , 4289.0 , 4575.0 , 5091.0 , 5635.0 , 6374.0 } , 1.0 , -
0.16666666666666666 , { 0.0 , 27.477809999999998 , 32.490719999999996 ,
36.915029999999994 , 42.73236 , 52.699319999999993 , 64.56942 ,
82.541339999999991 } , { 0.0 , 3703.0 , 4005.0 , 4289.0 , 4575.0 , 5091.0 ,
5635.0 , 6374.0 } , - 1.0 , { 0.0 , 0.698301886792453 , 0.789333333333333 ,
0.884827586206897 , 0.977142857142857 , 1.18102669404517 , 1.4626497277677 ,
1.86500907441016 } , { 0.0 , 3703.0 , 4005.0 , 4289.0 , 4575.0 , 5091.0 ,
5635.0 , 6374.0 } , - 1.0 , 0.16666666666666666 , { 0.0 , 27.477809999999998
, 32.490719999999996 , 36.915029999999994 , 42.73236 , 52.699319999999993 ,
64.56942 , 82.541339999999991 } , { 0.0 , 3703.0 , 4005.0 , 4289.0 , 4575.0 ,
5091.0 , 5635.0 , 6374.0 } , 1.0 , { 0.0 , 0.698301886792453 ,
0.789333333333333 , 0.884827586206897 , 0.977142857142857 , 1.18102669404517
, 1.4626497277677 , 1.86500907441016 } , { 0.0 , 3703.0 , 4005.0 , 4289.0 ,
4575.0 , 5091.0 , 5635.0 , 6374.0 } , 1.0 , 0.16666666666666666 , { 0.0 ,
27.477809999999998 , 32.490719999999996 , 36.915029999999994 , 42.73236 ,
52.699319999999993 , 64.56942 , 82.541339999999991 } , { 0.0 , 3703.0 ,
4005.0 , 4289.0 , 4575.0 , 5091.0 , 5635.0 , 6374.0 } , - 1.0 , { 0.0 ,
0.698301886792453 , 0.789333333333333 , 0.884827586206897 , 0.977142857142857
, 1.18102669404517 , 1.4626497277677 , 1.86500907441016 } , { 0.0 , 3703.0 ,
4005.0 , 4289.0 , 4575.0 , 5091.0 , 5635.0 , 6374.0 } , - 1.0 , { 0.0 , 6.6 ,
8.6 , 9.9 , 12.4 , 17.1 , 23.2 , 34.0 } , { 0.0 , 3703.0 , 4005.0 , 4289.0 ,
4575.0 , 5091.0 , 5635.0 , 6374.0 } , { 0.0 , 6.6 , 8.6 , 9.9 , 12.4 , 17.1 ,
23.2 , 34.0 } , { 0.0 , 3703.0 , 4005.0 , 4289.0 , 4575.0 , 5091.0 , 5635.0 ,
6374.0 } , { 0.0 , 6.6 , 8.6 , 9.9 , 12.4 , 17.1 , 23.2 , 34.0 } , { 0.0 ,
3703.0 , 4005.0 , 4289.0 , 4575.0 , 5091.0 , 5635.0 , 6374.0 } , { 0.0 , 6.6
, 8.6 , 9.9 , 12.4 , 17.1 , 23.2 , 34.0 } , { 0.0 , 3703.0 , 4005.0 , 4289.0
, 4575.0 , 5091.0 , 5635.0 , 6374.0 } , { 0.0 , 6.6 , 8.6 , 9.9 , 12.4 , 17.1
, 23.2 , 34.0 } , { 0.0 , 3703.0 , 4005.0 , 4289.0 , 4575.0 , 5091.0 , 5635.0
, 6374.0 } , { 0.0 , 6.6 , 8.6 , 9.9 , 12.4 , 17.1 , 23.2 , 34.0 } , { 0.0 ,
3703.0 , 4005.0 , 4289.0 , 4575.0 , 5091.0 , 5635.0 , 6374.0 } , { 0.0 , 6.6
, 8.6 , 9.9 , 12.4 , 17.1 , 23.2 , 34.0 } , { 0.0 , 3703.0 , 4005.0 , 4289.0
, 4575.0 , 5091.0 , 5635.0 , 6374.0 } , { 0.0 , 6.6 , 8.6 , 9.9 , 12.4 , 17.1
, 23.2 , 34.0 } , { 0.0 , 3703.0 , 4005.0 , 4289.0 , 4575.0 , 5091.0 , 5635.0
, 6374.0 } , 5.5555555555555558E-5 , 0.01984126984126984 , 50.4 , 180.0 ,
90.0 , - 90.0 , 180.0 , 90.0 , 180.0 , 180.0 , 7U , 1U , { 1U , 0U } , 7U ,
1U , { 1U , 0U } , 7U , 1U , { 1U , 0U } , 7U , 1U , { 1U , 0U } , 7U , 1U ,
{ 1U , 0U } , 7U , 1U , { 1U , 0U } , 7U , 1U , { 1U , 0U } , 7U , 1U , { 1U
, 0U } , 7U , 1U , { 1U , 0U } , 7U , 1U , { 1U , 0U } , 7U , 1U , { 1U , 0U
} , 7U , 1U , { 1U , 0U } , 7U , 1U , { 1U , 0U } , 7U , 1U , { 1U , 0U } ,
7U , 1U , { 1U , 0U } , 7U , 1U , { 1U , 0U } , 7U , 1U , { 1U , 0U } , 7U ,
1U , { 1U , 0U } , 7U , 1U , { 1U , 0U } , 7U , 1U , { 1U , 0U } , 7U , 1U ,
{ 1U , 0U } , 7U , 1U , { 1U , 0U } , 7U , 1U , { 1U , 0U } , 7U , 1U , { 1U
, 0U } } ; void l5wtezk2iz ( cysfao30we * localDW , obzgstfl0b * localX ) {
localX -> p1v0h4exsb = p301ouc1q1 . P_2 ; localX -> dxhpmwzy2b = p301ouc1q1 .
P_3 ; localX -> nv0jw30s25 = p301ouc1q1 . P_4 ; localX -> losfm0ag3e =
p301ouc1q1 . P_5 ; localX -> fhi4ekx3s4 = p301ouc1q1 . P_6 ; localX ->
a4wdpuewmu = p301ouc1q1 . P_7 ; localX -> knn0fgcr4b = p301ouc1q1 . P_8 ;
localX -> izdmv0eo0b = p301ouc1q1 . P_9 ; localX -> aei12ppdcn = p301ouc1q1 .
P_10 ; localX -> gbyi34exyn = p301ouc1q1 . P_11 ; localX -> j3kusqpu1x =
p301ouc1q1 . P_15 ; localX -> czbclz1zip = p301ouc1q1 . P_16 ; localX ->
kfizngqa5k = p301ouc1q1 . P_20 ; localX -> drlfddh2uj = p301ouc1q1 . P_21 ;
localX -> jfgyjkjhcr = p301ouc1q1 . P_25 ; localX -> lhrpvc5j0p = p301ouc1q1
. P_26 ; localX -> ebj5mdxeis = p301ouc1q1 . P_30 ; localX -> npzgeukbuo =
p301ouc1q1 . P_31 ; localX -> ilor50wsw1 = p301ouc1q1 . P_35 ; localX ->
kawda2xgxq = p301ouc1q1 . P_36 ; localX -> pahj1trcml = p301ouc1q1 . P_40 ;
localX -> pi4unvpwxt = p301ouc1q1 . P_41 ; localX -> fbn0sbu0o0 = p301ouc1q1
. P_45 ; localX -> mqbxf1omqg = p301ouc1q1 . P_46 ; localX -> ghhbezp2mj [ 0
] = 0.0 ; localX -> oyihqzforx [ 0 ] = 0.0 ; localX -> oofjhbkw2h [ 0 ] = 0.0
; localX -> imazphqvq3 [ 0 ] = 0.0 ; localX -> ha5wa0eu12 [ 0 ] = 0.0 ;
localX -> h0tephdmgw [ 0 ] = 0.0 ; localX -> cw0wpxwlqz [ 0 ] = 0.0 ; localX
-> mjuwnhdkfa [ 0 ] = 0.0 ; localX -> ghhbezp2mj [ 1 ] = 0.0 ; localX ->
oyihqzforx [ 1 ] = 0.0 ; localX -> oofjhbkw2h [ 1 ] = 0.0 ; localX ->
imazphqvq3 [ 1 ] = 0.0 ; localX -> ha5wa0eu12 [ 1 ] = 0.0 ; localX ->
h0tephdmgw [ 1 ] = 0.0 ; localX -> cw0wpxwlqz [ 1 ] = 0.0 ; localX ->
mjuwnhdkfa [ 1 ] = 0.0 ; localX -> jhsh4lfjex = p301ouc1q1 . P_50 ; localDW
-> onn5vmv02x = p301ouc1q1 . P_51 ; localX -> njt3hse4a3 = 0.0 ; localX ->
kl5p04vpi5 = p301ouc1q1 . P_72 ; localX -> kn3ylsggay = 0.0 ; localX ->
a3pwm4zjas = p301ouc1q1 . P_77 ; localX -> krv1vdajfr = 0.0 ; localX ->
o3nqw2wnxl = p301ouc1q1 . P_83 ; localX -> bn00q3futv = 0.0 ; localX ->
ievagdlgod = p301ouc1q1 . P_89 ; localX -> ldh2nq2aww = 0.0 ; localX ->
lyvz3kakue = p301ouc1q1 . P_95 ; localX -> h5f3s5wdap = 0.0 ; localX ->
hkg4jofz4c = p301ouc1q1 . P_100 ; localX -> enzktrcwpo = 0.0 ; localX ->
aenbz1vnok = p301ouc1q1 . P_105 ; localX -> j1ypm44kqt = 0.0 ; } void
pvpgvdt1mc ( cysfao30we * localDW , obzgstfl0b * localX ) { localX ->
p1v0h4exsb = p301ouc1q1 . P_2 ; localX -> dxhpmwzy2b = p301ouc1q1 . P_3 ;
localX -> nv0jw30s25 = p301ouc1q1 . P_4 ; localX -> losfm0ag3e = p301ouc1q1 .
P_5 ; localX -> fhi4ekx3s4 = p301ouc1q1 . P_6 ; localX -> a4wdpuewmu =
p301ouc1q1 . P_7 ; localX -> knn0fgcr4b = p301ouc1q1 . P_8 ; localX ->
izdmv0eo0b = p301ouc1q1 . P_9 ; localX -> aei12ppdcn = p301ouc1q1 . P_10 ;
localX -> gbyi34exyn = p301ouc1q1 . P_11 ; localX -> j3kusqpu1x = p301ouc1q1
. P_15 ; localX -> czbclz1zip = p301ouc1q1 . P_16 ; localX -> kfizngqa5k =
p301ouc1q1 . P_20 ; localX -> drlfddh2uj = p301ouc1q1 . P_21 ; localX ->
jfgyjkjhcr = p301ouc1q1 . P_25 ; localX -> lhrpvc5j0p = p301ouc1q1 . P_26 ;
localX -> ebj5mdxeis = p301ouc1q1 . P_30 ; localX -> npzgeukbuo = p301ouc1q1
. P_31 ; localX -> ilor50wsw1 = p301ouc1q1 . P_35 ; localX -> kawda2xgxq =
p301ouc1q1 . P_36 ; localX -> pahj1trcml = p301ouc1q1 . P_40 ; localX ->
pi4unvpwxt = p301ouc1q1 . P_41 ; localX -> fbn0sbu0o0 = p301ouc1q1 . P_45 ;
localX -> mqbxf1omqg = p301ouc1q1 . P_46 ; localX -> ghhbezp2mj [ 0 ] = 0.0 ;
localX -> oyihqzforx [ 0 ] = 0.0 ; localX -> oofjhbkw2h [ 0 ] = 0.0 ; localX
-> imazphqvq3 [ 0 ] = 0.0 ; localX -> ha5wa0eu12 [ 0 ] = 0.0 ; localX ->
h0tephdmgw [ 0 ] = 0.0 ; localX -> cw0wpxwlqz [ 0 ] = 0.0 ; localX ->
mjuwnhdkfa [ 0 ] = 0.0 ; localX -> ghhbezp2mj [ 1 ] = 0.0 ; localX ->
oyihqzforx [ 1 ] = 0.0 ; localX -> oofjhbkw2h [ 1 ] = 0.0 ; localX ->
imazphqvq3 [ 1 ] = 0.0 ; localX -> ha5wa0eu12 [ 1 ] = 0.0 ; localX ->
h0tephdmgw [ 1 ] = 0.0 ; localX -> cw0wpxwlqz [ 1 ] = 0.0 ; localX ->
mjuwnhdkfa [ 1 ] = 0.0 ; localX -> jhsh4lfjex = p301ouc1q1 . P_50 ; localDW
-> onn5vmv02x = p301ouc1q1 . P_51 ; localX -> njt3hse4a3 = 0.0 ; localX ->
kl5p04vpi5 = p301ouc1q1 . P_72 ; localX -> kn3ylsggay = 0.0 ; localX ->
a3pwm4zjas = p301ouc1q1 . P_77 ; localX -> krv1vdajfr = 0.0 ; localX ->
o3nqw2wnxl = p301ouc1q1 . P_83 ; localX -> bn00q3futv = 0.0 ; localX ->
ievagdlgod = p301ouc1q1 . P_89 ; localX -> ldh2nq2aww = 0.0 ; localX ->
lyvz3kakue = p301ouc1q1 . P_95 ; localX -> h5f3s5wdap = 0.0 ; localX ->
hkg4jofz4c = p301ouc1q1 . P_100 ; localX -> enzktrcwpo = 0.0 ; localX ->
aenbz1vnok = p301ouc1q1 . P_105 ; localX -> j1ypm44kqt = 0.0 ; } void
pceanreruy ( a0hhroei4y * const dow0ryovld , cysfao30we * localDW ) { switch
( localDW -> e5xpj42ysr ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( dow0ryovld -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( dow0ryovld ->
_mdlRefSfcnS ) ; break ; case 2 : ssSetBlockStateForSolverChangedAtMajorStep
( dow0ryovld -> _mdlRefSfcnS ) ; break ; } localDW -> e5xpj42ysr = - 1 ; }
void lqjjhvy1z4 ( a0hhroei4y * const dow0ryovld , fiyuauag0n * localB ,
cysfao30we * localDW , obzgstfl0b * localX , nko55pogye * localXPerturbMin ,
a4uqgfsmod * localXPerturbMax ) { NeModelParameters modelParameters ;
NeModelParameters modelParameters_e ; NeModelParameters modelParameters_p ;
NeslSimulationData * simulationData ; NeslSimulator * tmp ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; NeuDiagnosticTree * diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_i
; NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char * msg_e ; char *
msg_i ; char * msg_p ; real_T tmp_m [ 128 ] ; real_T time ; real_T tmp_e ;
int32_T tmp_i ; int_T tmp_g [ 33 ] ; boolean_T tmp_p ; boolean_T val ; tmp =
nesl_lease_simulator ( "Aerial_Inspection_Octa_Rotor/Solver Configuration_1"
, 0 , 0 ) ; localDW -> pak131zhvo = ( void * ) tmp ; tmp_p = pointer_is_null
( localDW -> pak131zhvo ) ; if ( tmp_p ) {
Aerial_Inspection_Octa_Rotor_5bdcd402_1_gateway ( ) ; tmp =
nesl_lease_simulator ( "Aerial_Inspection_Octa_Rotor/Solver Configuration_1"
, 0 , 0 ) ; localDW -> pak131zhvo = ( void * ) tmp ; }
slsaSaveRawMemoryForSimTargetOP ( dow0ryovld -> _mdlRefSfcnS ,
"Aerial_Inspection_Octa_Rotor/Solver Configuration_100" , ( void * * ) ( &
localDW -> pak131zhvo ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
localDW -> bhq0wza4qw = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; localDW -> epe2vsgg3i = ( void * )
diagnosticManager ; modelParameters . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters . mSolverTolerance = 0.001 ; modelParameters .
mVariableStepSolver = true ; modelParameters . mIsUsingODEN = false ;
modelParameters . mFixedStepSize = 0.001 ; modelParameters . mStartTime = 0.0
; modelParameters . mLoadInitialState = false ; modelParameters .
mUseSimState = false ; modelParameters . mLinTrimCompile = false ;
modelParameters . mLoggingMode = SSC_LOGGING_NONE ; modelParameters .
mRTWModifiedTimeStamp = 5.7425543E+8 ; tmp_e = 0.001 ; modelParameters .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters . mVariableStepSolver = tmp_p ; tmp_p
= false ; modelParameters . mIsUsingODEN = tmp_p ; val = false ; tmp_p =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp_p ) { tmp_p =
ssGetGlobalInitialStatesAvailable ( dow0ryovld -> _mdlRefSfcnS ) ; val = (
tmp_p && rtmIsFirstInitCond ( dow0ryovld ) ) ; } modelParameters .
mLoadInitialState = val ; diagnosticManager = ( NeuDiagnosticManager * )
localDW -> epe2vsgg3i ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) localDW -> pak131zhvo , &
modelParameters , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( dow0ryovld -> _mdlRefSfcnS ) ) ;
if ( tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( dow0ryovld -> _mdlRefSfcnS , msg ) ; } } simulationData =
( NeslSimulationData * ) localDW -> bhq0wza4qw ; time = rtmGetTaskTime (
dow0ryovld , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 337 ; simulationData -> mData -> mContStates . mX = & localX -> f4cwt4gmec
[ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData ->
mData -> mDiscStates . mX = & localDW -> i5wehflxkv ; simulationData -> mData
-> mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = &
localDW -> opoqs3zl5e ; tmp_p = ( rtmIsMajorTimeStep ( dow0ryovld ) &&
ssGetSolverFoundContZcEvents ( dow0ryovld -> _mdlRefSfcnS ) ) ;
simulationData -> mData -> mFoundZcEvents = tmp_p ; simulationData -> mData
-> mIsMajorTimeStep = rtmIsMajorTimeStep ( dow0ryovld ) ; tmp_p =
_ssGetSolverAssertCheck ( dow0ryovld -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp_p ; tmp_p = ssIsSolverCheckingCIC (
dow0ryovld -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian (
dow0ryovld -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp_p ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( dow0ryovld -> _mdlRefSfcnS ) != 0 ) ; tmp_p =
ssIsSolverRequestingReset ( dow0ryovld -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverRequestingReset = tmp_p ; tmp_p = ssGetIsOkayToUpdateMode (
dow0ryovld -> _mdlRefSfcnS ) ; simulationData -> mData -> mIsOkayToUpdateMode
= tmp_p ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = localB -> evgjlxf1ht [ 0 ] ; tmp_m
[ 1 ] = localB -> evgjlxf1ht [ 1 ] ; tmp_m [ 2 ] = localB -> evgjlxf1ht [ 2 ]
; tmp_m [ 3 ] = localB -> evgjlxf1ht [ 3 ] ; tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] =
localB -> i5l4at4n2i [ 0 ] ; tmp_m [ 5 ] = localB -> i5l4at4n2i [ 1 ] ; tmp_m
[ 6 ] = localB -> i5l4at4n2i [ 2 ] ; tmp_m [ 7 ] = localB -> i5l4at4n2i [ 3 ]
; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = localB -> eqi5ccufrp [ 0 ] ; tmp_m [ 9 ] =
localB -> eqi5ccufrp [ 1 ] ; tmp_m [ 10 ] = localB -> eqi5ccufrp [ 2 ] ;
tmp_m [ 11 ] = localB -> eqi5ccufrp [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] =
localB -> i1k4tod4de [ 0 ] ; tmp_m [ 13 ] = localB -> i1k4tod4de [ 1 ] ;
tmp_m [ 14 ] = localB -> i1k4tod4de [ 2 ] ; tmp_m [ 15 ] = localB ->
i1k4tod4de [ 3 ] ; tmp_g [ 4 ] = 16 ; tmp_m [ 16 ] = localB -> mr3naztf0y [ 0
] ; tmp_m [ 17 ] = localB -> mr3naztf0y [ 1 ] ; tmp_m [ 18 ] = localB ->
mr3naztf0y [ 2 ] ; tmp_m [ 19 ] = localB -> mr3naztf0y [ 3 ] ; tmp_g [ 5 ] =
20 ; tmp_m [ 20 ] = localB -> karsi5ef1u [ 0 ] ; tmp_m [ 21 ] = localB ->
karsi5ef1u [ 1 ] ; tmp_m [ 22 ] = localB -> karsi5ef1u [ 2 ] ; tmp_m [ 23 ] =
localB -> karsi5ef1u [ 3 ] ; tmp_g [ 6 ] = 24 ; tmp_m [ 24 ] = localB ->
bavqzbkzht [ 0 ] ; tmp_m [ 25 ] = localB -> bavqzbkzht [ 1 ] ; tmp_m [ 26 ] =
localB -> bavqzbkzht [ 2 ] ; tmp_m [ 27 ] = localB -> bavqzbkzht [ 3 ] ;
tmp_g [ 7 ] = 28 ; tmp_m [ 28 ] = localB -> nzss3y2ceo [ 0 ] ; tmp_m [ 29 ] =
localB -> nzss3y2ceo [ 1 ] ; tmp_m [ 30 ] = localB -> nzss3y2ceo [ 2 ] ;
tmp_m [ 31 ] = localB -> nzss3y2ceo [ 3 ] ; tmp_g [ 8 ] = 32 ; tmp_m [ 32 ] =
localB -> liu5zcrfj4 [ 0 ] ; tmp_m [ 33 ] = localB -> liu5zcrfj4 [ 1 ] ;
tmp_m [ 34 ] = localB -> liu5zcrfj4 [ 2 ] ; tmp_m [ 35 ] = localB ->
liu5zcrfj4 [ 3 ] ; tmp_g [ 9 ] = 36 ; tmp_m [ 36 ] = localB -> aouy4fq24a [ 0
] ; tmp_m [ 37 ] = localB -> aouy4fq24a [ 1 ] ; tmp_m [ 38 ] = localB ->
aouy4fq24a [ 2 ] ; tmp_m [ 39 ] = localB -> aouy4fq24a [ 3 ] ; tmp_g [ 10 ] =
40 ; tmp_m [ 40 ] = localB -> p2s2cafweo [ 0 ] ; tmp_m [ 41 ] = localB ->
p2s2cafweo [ 1 ] ; tmp_m [ 42 ] = localB -> p2s2cafweo [ 2 ] ; tmp_m [ 43 ] =
localB -> p2s2cafweo [ 3 ] ; tmp_g [ 11 ] = 44 ; tmp_m [ 44 ] = localB ->
nye3tmgwgy [ 0 ] ; tmp_m [ 45 ] = localB -> nye3tmgwgy [ 1 ] ; tmp_m [ 46 ] =
localB -> nye3tmgwgy [ 2 ] ; tmp_m [ 47 ] = localB -> nye3tmgwgy [ 3 ] ;
tmp_g [ 12 ] = 48 ; tmp_m [ 48 ] = localB -> bi0hotz3gn [ 0 ] ; tmp_m [ 49 ]
= localB -> bi0hotz3gn [ 1 ] ; tmp_m [ 50 ] = localB -> bi0hotz3gn [ 2 ] ;
tmp_m [ 51 ] = localB -> bi0hotz3gn [ 3 ] ; tmp_g [ 13 ] = 52 ; tmp_m [ 52 ]
= localB -> g51ukhglo4 [ 0 ] ; tmp_m [ 53 ] = localB -> g51ukhglo4 [ 1 ] ;
tmp_m [ 54 ] = localB -> g51ukhglo4 [ 2 ] ; tmp_m [ 55 ] = localB ->
g51ukhglo4 [ 3 ] ; tmp_g [ 14 ] = 56 ; tmp_m [ 56 ] = localB -> pvdrbthk0m [
0 ] ; tmp_m [ 57 ] = localB -> pvdrbthk0m [ 1 ] ; tmp_m [ 58 ] = localB ->
pvdrbthk0m [ 2 ] ; tmp_m [ 59 ] = localB -> pvdrbthk0m [ 3 ] ; tmp_g [ 15 ] =
60 ; tmp_m [ 60 ] = localB -> mvrr1vhnj4 [ 0 ] ; tmp_m [ 61 ] = localB ->
mvrr1vhnj4 [ 1 ] ; tmp_m [ 62 ] = localB -> mvrr1vhnj4 [ 2 ] ; tmp_m [ 63 ] =
localB -> mvrr1vhnj4 [ 3 ] ; tmp_g [ 16 ] = 64 ; tmp_m [ 64 ] = localB ->
bshxu2dzdn [ 0 ] ; tmp_m [ 65 ] = localB -> bshxu2dzdn [ 1 ] ; tmp_m [ 66 ] =
localB -> bshxu2dzdn [ 2 ] ; tmp_m [ 67 ] = localB -> bshxu2dzdn [ 3 ] ;
tmp_g [ 17 ] = 68 ; tmp_m [ 68 ] = localB -> dcxpo3gwp5 [ 0 ] ; tmp_m [ 69 ]
= localB -> dcxpo3gwp5 [ 1 ] ; tmp_m [ 70 ] = localB -> dcxpo3gwp5 [ 2 ] ;
tmp_m [ 71 ] = localB -> dcxpo3gwp5 [ 3 ] ; tmp_g [ 18 ] = 72 ; tmp_m [ 72 ]
= localB -> pyvnbbh4e0 [ 0 ] ; tmp_m [ 73 ] = localB -> pyvnbbh4e0 [ 1 ] ;
tmp_m [ 74 ] = localB -> pyvnbbh4e0 [ 2 ] ; tmp_m [ 75 ] = localB ->
pyvnbbh4e0 [ 3 ] ; tmp_g [ 19 ] = 76 ; tmp_m [ 76 ] = localB -> kal5vypdsn [
0 ] ; tmp_m [ 77 ] = localB -> kal5vypdsn [ 1 ] ; tmp_m [ 78 ] = localB ->
kal5vypdsn [ 2 ] ; tmp_m [ 79 ] = localB -> kal5vypdsn [ 3 ] ; tmp_g [ 20 ] =
80 ; tmp_m [ 80 ] = localB -> d1gahwve5x [ 0 ] ; tmp_m [ 81 ] = localB ->
d1gahwve5x [ 1 ] ; tmp_m [ 82 ] = localB -> d1gahwve5x [ 2 ] ; tmp_m [ 83 ] =
localB -> d1gahwve5x [ 3 ] ; tmp_g [ 21 ] = 84 ; tmp_m [ 84 ] = localB ->
em0vsjuvjn [ 0 ] ; tmp_m [ 85 ] = localB -> em0vsjuvjn [ 1 ] ; tmp_m [ 86 ] =
localB -> em0vsjuvjn [ 2 ] ; tmp_m [ 87 ] = localB -> em0vsjuvjn [ 3 ] ;
tmp_g [ 22 ] = 88 ; tmp_m [ 88 ] = localB -> dlgwn2r2ef [ 0 ] ; tmp_m [ 89 ]
= localB -> dlgwn2r2ef [ 1 ] ; tmp_m [ 90 ] = localB -> dlgwn2r2ef [ 2 ] ;
tmp_m [ 91 ] = localB -> dlgwn2r2ef [ 3 ] ; tmp_g [ 23 ] = 92 ; tmp_m [ 92 ]
= localB -> j3jb4ek1c4 [ 0 ] ; tmp_m [ 93 ] = localB -> j3jb4ek1c4 [ 1 ] ;
tmp_m [ 94 ] = localB -> j3jb4ek1c4 [ 2 ] ; tmp_m [ 95 ] = localB ->
j3jb4ek1c4 [ 3 ] ; tmp_g [ 24 ] = 96 ; tmp_m [ 96 ] = localB -> chdmmuvupy [
0 ] ; tmp_m [ 97 ] = localB -> chdmmuvupy [ 1 ] ; tmp_m [ 98 ] = localB ->
chdmmuvupy [ 2 ] ; tmp_m [ 99 ] = localB -> chdmmuvupy [ 3 ] ; tmp_g [ 25 ] =
100 ; tmp_m [ 100 ] = localB -> if4fdhdm21 [ 0 ] ; tmp_m [ 101 ] = localB ->
if4fdhdm21 [ 1 ] ; tmp_m [ 102 ] = localB -> if4fdhdm21 [ 2 ] ; tmp_m [ 103 ]
= localB -> if4fdhdm21 [ 3 ] ; tmp_g [ 26 ] = 104 ; tmp_m [ 104 ] = localB ->
g3exmselxb [ 0 ] ; tmp_m [ 105 ] = localB -> g3exmselxb [ 1 ] ; tmp_m [ 106 ]
= localB -> g3exmselxb [ 2 ] ; tmp_m [ 107 ] = localB -> g3exmselxb [ 3 ] ;
tmp_g [ 27 ] = 108 ; tmp_m [ 108 ] = localB -> lhltvb5x0u [ 0 ] ; tmp_m [ 109
] = localB -> lhltvb5x0u [ 1 ] ; tmp_m [ 110 ] = localB -> lhltvb5x0u [ 2 ] ;
tmp_m [ 111 ] = localB -> lhltvb5x0u [ 3 ] ; tmp_g [ 28 ] = 112 ; tmp_m [ 112
] = localB -> fvvjmasvex [ 0 ] ; tmp_m [ 113 ] = localB -> fvvjmasvex [ 1 ] ;
tmp_m [ 114 ] = localB -> fvvjmasvex [ 2 ] ; tmp_m [ 115 ] = localB ->
fvvjmasvex [ 3 ] ; tmp_g [ 29 ] = 116 ; tmp_m [ 116 ] = localB -> b0o3ycinko
[ 0 ] ; tmp_m [ 117 ] = localB -> b0o3ycinko [ 1 ] ; tmp_m [ 118 ] = localB
-> b0o3ycinko [ 2 ] ; tmp_m [ 119 ] = localB -> b0o3ycinko [ 3 ] ; tmp_g [ 30
] = 120 ; tmp_m [ 120 ] = localB -> kimp5cuqck [ 0 ] ; tmp_m [ 121 ] = localB
-> kimp5cuqck [ 1 ] ; tmp_m [ 122 ] = localB -> kimp5cuqck [ 2 ] ; tmp_m [
123 ] = localB -> kimp5cuqck [ 3 ] ; tmp_g [ 31 ] = 124 ; tmp_m [ 124 ] =
localB -> moqx30egka [ 0 ] ; tmp_m [ 125 ] = localB -> moqx30egka [ 1 ] ;
tmp_m [ 126 ] = localB -> moqx30egka [ 2 ] ; tmp_m [ 127 ] = localB ->
moqx30egka [ 3 ] ; tmp_g [ 32 ] = 128 ; simulationData -> mData ->
mInputValues . mN = 128 ; simulationData -> mData -> mInputValues . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 33 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mNumjacDxLo . mN = 337 ; simulationData -> mData
-> mNumjacDxLo . mX = & localXPerturbMin -> f4cwt4gmec [ 0 ] ; simulationData
-> mData -> mNumjacDxHi . mN = 337 ; simulationData -> mData -> mNumjacDxHi .
mX = & localXPerturbMax -> f4cwt4gmec [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) localDW -> epe2vsgg3i ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) localDW -> pak131zhvo ,
NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( dow0ryovld ->
_mdlRefSfcnS ) ) ; if ( tmp_p ) { msg_p = rtw_diagnostics_msg (
diagnosticTree_p ) ; ssSetErrorStatus ( dow0ryovld -> _mdlRefSfcnS , msg_p )
; } } tmp = nesl_lease_simulator (
"Aerial_Inspection_Octa_Rotor/Solver Configuration_1" , 1 , 0 ) ; localDW ->
aedc40alcv = ( void * ) tmp ; tmp_p = pointer_is_null ( localDW -> aedc40alcv
) ; if ( tmp_p ) { Aerial_Inspection_Octa_Rotor_5bdcd402_1_gateway ( ) ; tmp
= nesl_lease_simulator (
"Aerial_Inspection_Octa_Rotor/Solver Configuration_1" , 1 , 0 ) ; localDW ->
aedc40alcv = ( void * ) tmp ; } slsaSaveRawMemoryForSimTargetOP ( dow0ryovld
-> _mdlRefSfcnS , "Aerial_Inspection_Octa_Rotor/Solver Configuration_110" , (
void * * ) ( & localDW -> aedc40alcv ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; localDW -> hfpiwl51gz = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; localDW ->
k0b5odwie3 = ( void * ) diagnosticManager ; modelParameters_p . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_p . mSolverTolerance = 0.001 ;
modelParameters_p . mVariableStepSolver = true ; modelParameters_p .
mIsUsingODEN = false ; modelParameters_p . mFixedStepSize = 0.001 ;
modelParameters_p . mStartTime = 0.0 ; modelParameters_p . mLoadInitialState
= false ; modelParameters_p . mUseSimState = false ; modelParameters_p .
mLinTrimCompile = false ; modelParameters_p . mLoggingMode = SSC_LOGGING_NONE
; modelParameters_p . mRTWModifiedTimeStamp = 5.7425543E+8 ; tmp_e = 0.001 ;
modelParameters_p . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_p . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters_p
. mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_p .
mIsUsingODEN = tmp_p ; val = false ; tmp_p = slIsRapidAcceleratorSimulating (
) ; if ( tmp_p ) { tmp_p = ssGetGlobalInitialStatesAvailable ( dow0ryovld ->
_mdlRefSfcnS ) ; val = ( tmp_p && rtmIsFirstInitCond ( dow0ryovld ) ) ; }
modelParameters_p . mLoadInitialState = val ; diagnosticManager = (
NeuDiagnosticManager * ) localDW -> k0b5odwie3 ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) localDW -> aedc40alcv , &
modelParameters_p , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( dow0ryovld -> _mdlRefSfcnS ) ) ;
if ( tmp_p ) { msg_e = rtw_diagnostics_msg ( diagnosticTree_e ) ;
ssSetErrorStatus ( dow0ryovld -> _mdlRefSfcnS , msg_e ) ; } } { rt_LUTnWork *
TWork_start = ( rt_LUTnWork * ) & localDW -> dx00p0tgg2 [ 0 ] ; void * *
bpDataSet = ( void * * ) & localDW -> flzjrfaufd ; TWork_start -> m_dimSizes
= ( const uint32_T * ) & p301ouc1q1 . P_194 ; TWork_start -> m_tableData = (
void * ) p301ouc1q1 . P_112 ; TWork_start -> m_bpDataSet = bpDataSet ;
TWork_start -> m_bpIndex = & localDW -> j0jukssvs4 ; TWork_start ->
m_bpLambda = & localDW -> pcnwcb0ubp ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_193 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_113 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
g3lqamfvdx [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
dx00p0tgg2 [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> ow5vllohzr ; rt_SplWk ->
m_yyB = & localDW -> emnm2ffsad ; rt_SplWk -> m_yy2 = & localDW -> c5yf2rpogw
; rt_SplWk -> m_up = & localDW -> obejuicafg [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> k45ghuvsky [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_195
; rt_SplWk -> m_reCalc = & localDW -> kunjroudei ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> lnsv4yt1y1 [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> o5vesz4r2i ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_197 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_115 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> awl0r0xq4b ; TWork_start
-> m_bpLambda = & localDW -> edg55qeb4d ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_196 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_116 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
kvgvmp1en5 [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
lnsv4yt1y1 [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> mj0xbsq2w3 ; rt_SplWk ->
m_yyB = & localDW -> bmql4chnpq ; rt_SplWk -> m_yy2 = & localDW -> op2dymxuq1
; rt_SplWk -> m_up = & localDW -> orjk2gfqrn [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> nrlfz5eaxk [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_198
; rt_SplWk -> m_reCalc = & localDW -> eafmghgkg2 ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> a5vubmgwq4 [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> powzoq2g5u ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_200 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_119 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> kjksxbfd0l ; TWork_start
-> m_bpLambda = & localDW -> kh2adsnm1q ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_199 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_120 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
jr11dwmdux [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
a5vubmgwq4 [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> mblmikbf0f ; rt_SplWk ->
m_yyB = & localDW -> m3jcpbafqz ; rt_SplWk -> m_yy2 = & localDW -> e5ryjhnqnq
; rt_SplWk -> m_up = & localDW -> ib0hpc5hea [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> eed3c4tzny [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_201
; rt_SplWk -> m_reCalc = & localDW -> gg2ctyfptk ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> mqyxtrfsse [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> p1tyy5grtb ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_203 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_122 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> bk4ihbivnk ; TWork_start
-> m_bpLambda = & localDW -> go3k25h13t ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_202 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_123 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
j0pxwkhh5y [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
mqyxtrfsse [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> ntzo30npzj ; rt_SplWk ->
m_yyB = & localDW -> ecoelytsio ; rt_SplWk -> m_yy2 = & localDW -> bsmesx5als
; rt_SplWk -> m_up = & localDW -> j0xzihzavo [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> m5jeoymdtx [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_204
; rt_SplWk -> m_reCalc = & localDW -> kgmrq35r1d ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> no4cg2qwxs [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> mj32s3uqhi ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_206 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_126 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> bgw5ytfnw1 ; TWork_start
-> m_bpLambda = & localDW -> gm2kmanbfl ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_205 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_127 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
lp3fmx4wp1 [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
no4cg2qwxs [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> igxfyznirl ; rt_SplWk ->
m_yyB = & localDW -> lwcqf3ezzk ; rt_SplWk -> m_yy2 = & localDW -> l4rgwczqhc
; rt_SplWk -> m_up = & localDW -> eytyslgh2k [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> povjdgfhin [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_207
; rt_SplWk -> m_reCalc = & localDW -> pfeghevp3b ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> oqy244kjuk [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> lxu12x0mtl ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_209 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_129 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> boo4xfpus1 ; TWork_start
-> m_bpLambda = & localDW -> g5qmb3qhc4 ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_208 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_130 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
fstxtu1dhv [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
oqy244kjuk [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> fx12dxjgoz ; rt_SplWk ->
m_yyB = & localDW -> ihq0d41a2e ; rt_SplWk -> m_yy2 = & localDW -> mqkvegdktp
; rt_SplWk -> m_up = & localDW -> hx5girvbxs [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> hru1uiypuh [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_210
; rt_SplWk -> m_reCalc = & localDW -> fxfjh3uza5 ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> gynxj5zdqi [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> bfpmdqs0fg ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_212 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_133 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> mlxyhs3cpz ; TWork_start
-> m_bpLambda = & localDW -> og2wfdujcm ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_211 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_134 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
i2srqnkevu [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
gynxj5zdqi [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> ctj2bho0yp ; rt_SplWk ->
m_yyB = & localDW -> ishlrl4nwz ; rt_SplWk -> m_yy2 = & localDW -> m0ldh3g2jq
; rt_SplWk -> m_up = & localDW -> heividnr1k [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> ko5bk1dgvg [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_213
; rt_SplWk -> m_reCalc = & localDW -> cqdisjrtu0 ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> hbwkl1s0zj [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> ebifubdvjw ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_215 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_136 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> iualn21z42 ; TWork_start
-> m_bpLambda = & localDW -> jp5mc5vhca ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_214 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_137 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
m2ceaoqqad [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
hbwkl1s0zj [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> keklbuafg3 ; rt_SplWk ->
m_yyB = & localDW -> pxu0fofv1e ; rt_SplWk -> m_yy2 = & localDW -> n452s4e4iw
; rt_SplWk -> m_up = & localDW -> btp0wsoaw3 [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> etlbfvymuh [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_216
; rt_SplWk -> m_reCalc = & localDW -> hrfi0yiu4u ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> dugulvgeyj [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> ldxqgonptd ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_218 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_140 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> hviz4etddq ; TWork_start
-> m_bpLambda = & localDW -> i1u244qywa ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_217 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_141 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
bc1sge0wmr [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
dugulvgeyj [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> on2jorwm5c ; rt_SplWk ->
m_yyB = & localDW -> hyj1pbc41o ; rt_SplWk -> m_yy2 = & localDW -> fshqpe3da4
; rt_SplWk -> m_up = & localDW -> blbvdczw00 [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> om4r50j0ua [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_219
; rt_SplWk -> m_reCalc = & localDW -> eghpxvkniz ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> mrtzoyuo4l [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> pvcmwnx5zm ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_221 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_143 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> d5djwo2yyn ; TWork_start
-> m_bpLambda = & localDW -> cwx5fu4ktk ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_220 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_144 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
p1vwyenuhf [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
mrtzoyuo4l [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> lmez50dezv ; rt_SplWk ->
m_yyB = & localDW -> ptccs2iwze ; rt_SplWk -> m_yy2 = & localDW -> pkxq5fago0
; rt_SplWk -> m_up = & localDW -> hqms323kfd [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> knfybvfydq [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_222
; rt_SplWk -> m_reCalc = & localDW -> dj4vnxq0rt ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> mo3coq5zk1 [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> plixojjxet ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_224 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_147 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> mylnfcphte ; TWork_start
-> m_bpLambda = & localDW -> pnyrvw5ztj ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_223 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_148 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
hqmavjplkw [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
mo3coq5zk1 [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> f2rr4ira1h ; rt_SplWk ->
m_yyB = & localDW -> pcu35m2eta ; rt_SplWk -> m_yy2 = & localDW -> nj5pmpqqf3
; rt_SplWk -> m_up = & localDW -> byscbandzd [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> lbmjvdypjj [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_225
; rt_SplWk -> m_reCalc = & localDW -> cstvtpbqtb ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> kwori4adx1 [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> pe4mwlf5sg ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_227 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_150 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> d0b0rzrkp4 ; TWork_start
-> m_bpLambda = & localDW -> clgj4oa4pn ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_226 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_151 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
evh0xf0evg [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
kwori4adx1 [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> pe4abat22x ; rt_SplWk ->
m_yyB = & localDW -> laux3z5rot ; rt_SplWk -> m_yy2 = & localDW -> lfncl4pmix
; rt_SplWk -> m_up = & localDW -> kbkknb0gcp [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> mt12tk1q4n [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_228
; rt_SplWk -> m_reCalc = & localDW -> bslmwz5chr ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> iup2l4ap2i [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> cy0y2clwmc ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_230 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_154 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> djcqsk0pjv ; TWork_start
-> m_bpLambda = & localDW -> jdmzk0jkqo ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_229 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_155 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
atcvcknmbv [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
iup2l4ap2i [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> fcdlsz1jpj ; rt_SplWk ->
m_yyB = & localDW -> mzgko5hhco ; rt_SplWk -> m_yy2 = & localDW -> czv5olhqpd
; rt_SplWk -> m_up = & localDW -> j3wxtue1rg [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> acts2xblll [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_231
; rt_SplWk -> m_reCalc = & localDW -> p1syfnw3hu ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> cmyqhpykg0 [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> p1n2akyq54 ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_233 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_157 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> o33zcmmyog ; TWork_start
-> m_bpLambda = & localDW -> fvutboy5xz ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_232 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_158 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
dxstr2xzrv [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
cmyqhpykg0 [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> my0zgfdskq ; rt_SplWk ->
m_yyB = & localDW -> c5wuvc2xhv ; rt_SplWk -> m_yy2 = & localDW -> fxraqrvxyw
; rt_SplWk -> m_up = & localDW -> d2srxt2k4v [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> ezxuclwxue [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_234
; rt_SplWk -> m_reCalc = & localDW -> g2lis3sfb3 ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> cxjzemhoet [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> fkztwxmqxh ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_236 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_161 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> lrmgx0sfud ; TWork_start
-> m_bpLambda = & localDW -> ikssb4qksk ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_235 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_162 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
aonevnxfxu [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
cxjzemhoet [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> hkju4dig11 ; rt_SplWk ->
m_yyB = & localDW -> fglgh3yqit ; rt_SplWk -> m_yy2 = & localDW -> dnoxil325k
; rt_SplWk -> m_up = & localDW -> lerxprnzhx [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> og31bt2h3i [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_237
; rt_SplWk -> m_reCalc = & localDW -> aniuqzhx2h ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> jve5xr20hc [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> os3xgcifel ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_239 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_164 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> p3kgj2bbob ; TWork_start
-> m_bpLambda = & localDW -> pdunoq3brb ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_238 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_165 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
diyvxmkdei [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
jve5xr20hc [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> gj2ggwn2l0 ; rt_SplWk ->
m_yyB = & localDW -> iz24wb4wj4 ; rt_SplWk -> m_yy2 = & localDW -> iblwevhc5b
; rt_SplWk -> m_up = & localDW -> n2nc4r3ybm [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> caswz5hz11 [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_240
; rt_SplWk -> m_reCalc = & localDW -> gdj3xqj1np ; * rt_SplWk -> m_reCalc = 1
; } tmp = nesl_lease_simulator (
"Aerial_Inspection_Octa_Rotor/Solver Configuration_1" , 1 , 1 ) ; localDW ->
dm12q5nbkt = ( void * ) tmp ; tmp_p = pointer_is_null ( localDW -> dm12q5nbkt
) ; if ( tmp_p ) { Aerial_Inspection_Octa_Rotor_5bdcd402_1_gateway ( ) ; tmp
= nesl_lease_simulator (
"Aerial_Inspection_Octa_Rotor/Solver Configuration_1" , 1 , 1 ) ; localDW ->
dm12q5nbkt = ( void * ) tmp ; } slsaSaveRawMemoryForSimTargetOP ( dow0ryovld
-> _mdlRefSfcnS , "Aerial_Inspection_Octa_Rotor/Solver Configuration_111" , (
void * * ) ( & localDW -> dm12q5nbkt ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; localDW -> castbtcvps = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; localDW ->
icwkl4z4im = ( void * ) diagnosticManager ; modelParameters_e . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_e . mSolverTolerance = 0.001 ;
modelParameters_e . mVariableStepSolver = true ; modelParameters_e .
mIsUsingODEN = false ; modelParameters_e . mFixedStepSize = 0.001 ;
modelParameters_e . mStartTime = 0.0 ; modelParameters_e . mLoadInitialState
= false ; modelParameters_e . mUseSimState = false ; modelParameters_e .
mLinTrimCompile = false ; modelParameters_e . mLoggingMode = SSC_LOGGING_NONE
; modelParameters_e . mRTWModifiedTimeStamp = 5.7425543E+8 ; tmp_e = 0.001 ;
modelParameters_e . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_e . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters_e
. mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_e .
mIsUsingODEN = tmp_p ; val = false ; tmp_p = slIsRapidAcceleratorSimulating (
) ; if ( tmp_p ) { tmp_p = ssGetGlobalInitialStatesAvailable ( dow0ryovld ->
_mdlRefSfcnS ) ; val = ( tmp_p && rtmIsFirstInitCond ( dow0ryovld ) ) ; }
modelParameters_e . mLoadInitialState = val ; diagnosticManager = (
NeuDiagnosticManager * ) localDW -> icwkl4z4im ; diagnosticTree_i =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) localDW -> dm12q5nbkt , &
modelParameters_e , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( dow0ryovld -> _mdlRefSfcnS ) ) ;
if ( tmp_p ) { msg_i = rtw_diagnostics_msg ( diagnosticTree_i ) ;
ssSetErrorStatus ( dow0ryovld -> _mdlRefSfcnS , msg_i ) ; } } localDW ->
m204rvu0ko = 0 ; ssSetBlockStateForSolverChangedAtMajorStep ( dow0ryovld ->
_mdlRefSfcnS ) ; ssSetBlockStateForSolverChangedAtMajorStep ( dow0ryovld ->
_mdlRefSfcnS ) ; ssSetBlockStateForSolverChangedAtMajorStep ( dow0ryovld ->
_mdlRefSfcnS ) ; localDW -> e5xpj42ysr = - 1 ; { rt_LUTnWork * TWork_start =
( rt_LUTnWork * ) & localDW -> hvxubfm5vn [ 0 ] ; void * * bpDataSet = ( void
* * ) & localDW -> b45l3vy3g4 ; TWork_start -> m_dimSizes = ( const uint32_T
* ) & p301ouc1q1 . P_242 ; TWork_start -> m_tableData = ( void * ) p301ouc1q1
. P_167 ; TWork_start -> m_bpDataSet = bpDataSet ; TWork_start -> m_bpIndex =
& localDW -> k4fmvxudnp ; TWork_start -> m_bpLambda = & localDW -> cy4vzqay5m
; TWork_start -> m_maxIndex = ( const uint32_T * ) & p301ouc1q1 . P_241 ;
bpDataSet [ 0 ] = ( void * ) p301ouc1q1 . P_168 ; } { rt_LUTSplineWork *
rt_SplWk = ( rt_LUTSplineWork * ) & localDW -> pgasqj3fqb [ 0 ] ; rt_SplWk ->
m_TWork = ( rt_LUTnWork * ) & localDW -> hvxubfm5vn [ 0 ] ; rt_SplWk -> m_yyA
= & localDW -> fdt32qa3g5 ; rt_SplWk -> m_yyB = & localDW -> a3klqroluh ;
rt_SplWk -> m_yy2 = & localDW -> hum1u2staw ; rt_SplWk -> m_up = & localDW ->
k0sp40t1m3 [ 0 ] ; rt_SplWk -> m_y2 = & localDW -> oyuxpxl2fv [ 0 ] ;
rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_243 ; rt_SplWk -> m_reCalc = &
localDW -> m3p0qccui3 ; * rt_SplWk -> m_reCalc = 1 ; } { rt_LUTnWork *
TWork_start = ( rt_LUTnWork * ) & localDW -> h0djfchqvw [ 0 ] ; void * *
bpDataSet = ( void * * ) & localDW -> ed3s0eakx0 ; TWork_start -> m_dimSizes
= ( const uint32_T * ) & p301ouc1q1 . P_245 ; TWork_start -> m_tableData = (
void * ) p301ouc1q1 . P_169 ; TWork_start -> m_bpDataSet = bpDataSet ;
TWork_start -> m_bpIndex = & localDW -> eo0qqmj5ab ; TWork_start ->
m_bpLambda = & localDW -> jx1n4fwcas ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_244 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_170 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
er0jqa5cdn [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
h0djfchqvw [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> az4m05iaqy ; rt_SplWk ->
m_yyB = & localDW -> ogwkkwd2gc ; rt_SplWk -> m_yy2 = & localDW -> f23eeiqpvw
; rt_SplWk -> m_up = & localDW -> eju0fgfags [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> d3hjjaohgw [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_246
; rt_SplWk -> m_reCalc = & localDW -> n2xswyacim ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> hzcbkle44i [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> hurqk0x40t ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_248 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_171 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> go0slkjltn ; TWork_start
-> m_bpLambda = & localDW -> a5xy0pxcav ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_247 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_172 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
dfyeynzkng [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
hzcbkle44i [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> br31aegqel ; rt_SplWk ->
m_yyB = & localDW -> fcxv2bpb2l ; rt_SplWk -> m_yy2 = & localDW -> maqcb0qcls
; rt_SplWk -> m_up = & localDW -> mwtdofttkk [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> ndtrhsjunc [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_249
; rt_SplWk -> m_reCalc = & localDW -> mzb2q4hcny ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> antjkfp45l [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> i5rjuzlbg5 ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_251 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_173 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> fmnremskar ; TWork_start
-> m_bpLambda = & localDW -> d4oa3ao0lk ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_250 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_174 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
p15bhe0yyw [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
antjkfp45l [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> npog30pazp ; rt_SplWk ->
m_yyB = & localDW -> b3hzwhbapy ; rt_SplWk -> m_yy2 = & localDW -> lsie2mcdul
; rt_SplWk -> m_up = & localDW -> axiohyxxrb [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> a5xg42ugty [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_252
; rt_SplWk -> m_reCalc = & localDW -> efywbwsjif ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> igpiopqxes [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> ch4bfriv1j ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_254 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_175 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> joqyb452tl ; TWork_start
-> m_bpLambda = & localDW -> oyis1n0vff ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_253 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_176 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
ezjfbszqd0 [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
igpiopqxes [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> cytlgpiage ; rt_SplWk ->
m_yyB = & localDW -> gs5ogevjja ; rt_SplWk -> m_yy2 = & localDW -> dyz5254gvz
; rt_SplWk -> m_up = & localDW -> g3qa1vsrqy [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> ifvb53yn5o [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_255
; rt_SplWk -> m_reCalc = & localDW -> bn3qvuzmed ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> dpcxhefhrk [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> ihpmbc5dmq ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_257 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_177 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> pztnkomlmy ; TWork_start
-> m_bpLambda = & localDW -> ac3hq5dukp ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_256 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_178 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
a0m3yv2bcl [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
dpcxhefhrk [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> iaag2vb5di ; rt_SplWk ->
m_yyB = & localDW -> nsdk2u5ox5 ; rt_SplWk -> m_yy2 = & localDW -> dlzfaqntdm
; rt_SplWk -> m_up = & localDW -> deumqpbfp3 [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> g2kpxz2mtc [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_258
; rt_SplWk -> m_reCalc = & localDW -> pgzsern3x0 ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> njipo3d3ch [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> gdifabdzjt ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_260 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_179 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> ohjdevi5e1 ; TWork_start
-> m_bpLambda = & localDW -> os44nl1epf ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_259 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_180 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
aofyrqldyl [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
njipo3d3ch [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> kwmr4nlaqp ; rt_SplWk ->
m_yyB = & localDW -> eshf41aqvv ; rt_SplWk -> m_yy2 = & localDW -> joxr3b1sfc
; rt_SplWk -> m_up = & localDW -> kpswqnxvqy [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> kftmvz4vis [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_261
; rt_SplWk -> m_reCalc = & localDW -> kt4acua1kk ; * rt_SplWk -> m_reCalc = 1
; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * ) & localDW -> gflp325mrd [
0 ] ; void * * bpDataSet = ( void * * ) & localDW -> f4bvc1aw1g ; TWork_start
-> m_dimSizes = ( const uint32_T * ) & p301ouc1q1 . P_263 ; TWork_start ->
m_tableData = ( void * ) p301ouc1q1 . P_181 ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & localDW -> p50oq1qzq5 ; TWork_start
-> m_bpLambda = & localDW -> oyl4sco5g1 ; TWork_start -> m_maxIndex = ( const
uint32_T * ) & p301ouc1q1 . P_262 ; bpDataSet [ 0 ] = ( void * ) p301ouc1q1 .
P_182 ; } { rt_LUTSplineWork * rt_SplWk = ( rt_LUTSplineWork * ) & localDW ->
fsbwf5wyi1 [ 0 ] ; rt_SplWk -> m_TWork = ( rt_LUTnWork * ) & localDW ->
gflp325mrd [ 0 ] ; rt_SplWk -> m_yyA = & localDW -> jxa4k1azlz ; rt_SplWk ->
m_yyB = & localDW -> jb4geb1nti ; rt_SplWk -> m_yy2 = & localDW -> gn52a5ccfk
; rt_SplWk -> m_up = & localDW -> glmtffe1yp [ 0 ] ; rt_SplWk -> m_y2 = &
localDW -> hbyhlaq5mn [ 0 ] ; rt_SplWk -> m_numYWorkElts = p301ouc1q1 . P_264
; rt_SplWk -> m_reCalc = & localDW -> pu1g0m4jmc ; * rt_SplWk -> m_reCalc = 1
; } } void Aerial_Inspection_Octa_Rotor ( a0hhroei4y * const dow0ryovld ,
const real_T kinegxqpfo [ 6 ] , const real_T d1dgncrrfm [ 8 ] , const real_T
cwz0ue1s4z [ 2 ] , real_T * d3y0blcew4 , real_T pnbqobymjt [ 19 ] , real_T
inhbcp4mce [ 2 ] , real_T dzqnhl0ntf [ 6 ] , real_T myoecrrt24 [ 8 ] , real_T
j3xkxzcsl1 [ 3 ] , real_T h44z2ibzzi [ 3 ] , real_T bkrgwiz53i [ 5 ] ,
fiyuauag0n * localB , cysfao30we * localDW , obzgstfl0b * localX ) { real_T
kcvuztzmwq ; real_T pypeisjlzp ; real_T ntegvhvnrh ; real_T eetkfd2hih ;
real_T gzsx3hybhq ; real_T ffdjceglxx ; real_T cqfw2igf2y ; real_T nyrgqk1fox
; real_T ocd22oednu ; real_T lsvfuhaswz ; real_T jurnzdb3e3 ; real_T
j0qudhwgrt ; real_T oarcvzq3xd ; real_T jfhleuwifq ; real_T on32gwfhy3 ;
real_T bqzcbvgo0k ; real_T ldmfpa0dr1 ; real_T bi4n0bwh45 ; real_T d022peazfq
; real_T b1npu1rlno ; real_T o53bhlvsme ; real_T hskx2osyh4 ; real_T
ahlhwrc3ei ; real_T isxbdyljap ; NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; NeuDiagnosticTree * diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_p
; char * msg ; char * msg_e ; char * msg_p ; real_T tmp_j [ 465 ] ; real_T
tmp_m [ 465 ] ; real_T tmp_e [ 128 ] ; real_T tmpForInput [ 8 ] ; real_T
bfbtb53srr_p ; real_T c0jnethwvi_p ; real_T k2e5440l32_p ; real_T
kuccsxa2hg_p ; real_T ms0mskwb5v_p ; real_T myzkbnzlx1_p ; real_T time ;
real_T time_e ; real_T time_p ; real_T time_tmp ; real_T tmp_b ; real_T tmp_c
; real_T tmp_k ; real_T tmp_l ; real_T tmp_n ; int32_T i ; int_T tmp_f [ 34 ]
; int_T tmp_g [ 34 ] ; int_T tmp_i [ 33 ] ; int8_T rtAction ; int8_T
rtPrevAction ; boolean_T tmp ; boolean_T tmp_p ; myoecrrt24 [ 0 ] = localX ->
p1v0h4exsb ; myoecrrt24 [ 1 ] = localX -> dxhpmwzy2b ; myoecrrt24 [ 2 ] =
localX -> nv0jw30s25 ; myoecrrt24 [ 3 ] = localX -> losfm0ag3e ; myoecrrt24 [
4 ] = localX -> fhi4ekx3s4 ; myoecrrt24 [ 5 ] = localX -> a4wdpuewmu ;
myoecrrt24 [ 6 ] = localX -> knn0fgcr4b ; myoecrrt24 [ 7 ] = localX ->
izdmv0eo0b ; inhbcp4mce [ 0 ] = localX -> aei12ppdcn ; localB -> iswndugjl3 =
localX -> gbyi34exyn ; localB -> av5xzkqelq = 0.0 ; localB -> av5xzkqelq +=
p301ouc1q1 . P_13 [ 0 ] * localX -> ghhbezp2mj [ 0 ] ; localB -> av5xzkqelq
+= p301ouc1q1 . P_13 [ 1 ] * localX -> ghhbezp2mj [ 1 ] ; localB ->
av5xzkqelq += p301ouc1q1 . P_14 * cwz0ue1s4z [ 1 ] ; localB -> evgjlxf1ht [ 0
] = ( p301ouc1q1 . P_186 + localX -> aei12ppdcn ) * 0.017453292519943295 ;
localB -> evgjlxf1ht [ 1 ] = 0.017453292519943295 * localB -> iswndugjl3 ;
localB -> evgjlxf1ht [ 2 ] = 0.017453292519943295 * localB -> av5xzkqelq ;
localB -> evgjlxf1ht [ 3 ] = 0.0 ; inhbcp4mce [ 1 ] = localX -> j3kusqpu1x ;
localB -> f23xm2xajr = localX -> czbclz1zip ; localB -> gpzwxdvjt0 = 0.0 ;
localB -> gpzwxdvjt0 += p301ouc1q1 . P_18 [ 0 ] * localX -> oyihqzforx [ 0 ]
; localB -> gpzwxdvjt0 += p301ouc1q1 . P_18 [ 1 ] * localX -> oyihqzforx [ 1
] ; localB -> gpzwxdvjt0 += p301ouc1q1 . P_19 * cwz0ue1s4z [ 0 ] ; localB ->
i5l4at4n2i [ 0 ] = 0.017453292519943295 * localX -> j3kusqpu1x ; localB ->
i5l4at4n2i [ 1 ] = 0.017453292519943295 * localB -> f23xm2xajr ; localB ->
i5l4at4n2i [ 2 ] = 0.017453292519943295 * localB -> gpzwxdvjt0 ; localB ->
i5l4at4n2i [ 3 ] = 0.0 ; dzqnhl0ntf [ 0 ] = localX -> kfizngqa5k ; localB ->
j2hk55tkjw = localX -> drlfddh2uj ; localB -> mswlix3eoq = 0.0 ; localB ->
mswlix3eoq += p301ouc1q1 . P_23 [ 0 ] * localX -> oofjhbkw2h [ 0 ] ; localB
-> mswlix3eoq += p301ouc1q1 . P_23 [ 1 ] * localX -> oofjhbkw2h [ 1 ] ;
localB -> mswlix3eoq += p301ouc1q1 . P_24 * kinegxqpfo [ 0 ] ; localB ->
eqi5ccufrp [ 0 ] = ( p301ouc1q1 . P_189 + localX -> kfizngqa5k ) *
0.017453292519943295 ; localB -> eqi5ccufrp [ 1 ] = 0.017453292519943295 *
localB -> j2hk55tkjw ; localB -> eqi5ccufrp [ 2 ] = 0.017453292519943295 *
localB -> mswlix3eoq ; localB -> eqi5ccufrp [ 3 ] = 0.0 ; dzqnhl0ntf [ 1 ] =
localX -> jfgyjkjhcr ; localB -> dfdj0albpo = localX -> lhrpvc5j0p ; localB
-> ojd4vjol3c = 0.0 ; localB -> ojd4vjol3c += p301ouc1q1 . P_28 [ 0 ] *
localX -> imazphqvq3 [ 0 ] ; localB -> ojd4vjol3c += p301ouc1q1 . P_28 [ 1 ]
* localX -> imazphqvq3 [ 1 ] ; localB -> ojd4vjol3c += p301ouc1q1 . P_29 *
kinegxqpfo [ 1 ] ; localB -> i1k4tod4de [ 0 ] = ( p301ouc1q1 . P_187 + localX
-> jfgyjkjhcr ) * 0.017453292519943295 ; localB -> i1k4tod4de [ 1 ] =
0.017453292519943295 * localB -> dfdj0albpo ; localB -> i1k4tod4de [ 2 ] =
0.017453292519943295 * localB -> ojd4vjol3c ; localB -> i1k4tod4de [ 3 ] =
0.0 ; dzqnhl0ntf [ 2 ] = localX -> ebj5mdxeis ; localB -> bktriqmwde = localX
-> npzgeukbuo ; localB -> brcauwamwe = 0.0 ; localB -> brcauwamwe +=
p301ouc1q1 . P_33 [ 0 ] * localX -> ha5wa0eu12 [ 0 ] ; localB -> brcauwamwe
+= p301ouc1q1 . P_33 [ 1 ] * localX -> ha5wa0eu12 [ 1 ] ; localB ->
brcauwamwe += p301ouc1q1 . P_34 * kinegxqpfo [ 2 ] ; localB -> mr3naztf0y [ 0
] = ( p301ouc1q1 . P_188 + localX -> ebj5mdxeis ) * 0.017453292519943295 ;
localB -> mr3naztf0y [ 1 ] = 0.017453292519943295 * localB -> bktriqmwde ;
localB -> mr3naztf0y [ 2 ] = 0.017453292519943295 * localB -> brcauwamwe ;
localB -> mr3naztf0y [ 3 ] = 0.0 ; kuccsxa2hg_p = localX -> ilor50wsw1 ;
localB -> grf0b2xpyc = localX -> kawda2xgxq ; localB -> eez4t55rmd = 0.0 ;
localB -> eez4t55rmd += p301ouc1q1 . P_38 [ 0 ] * localX -> h0tephdmgw [ 0 ]
; localB -> eez4t55rmd += p301ouc1q1 . P_38 [ 1 ] * localX -> h0tephdmgw [ 1
] ; localB -> eez4t55rmd += p301ouc1q1 . P_39 * kinegxqpfo [ 5 ] ; localB ->
karsi5ef1u [ 0 ] = ( p301ouc1q1 . P_190 + localX -> ilor50wsw1 ) *
0.017453292519943295 ; localB -> karsi5ef1u [ 1 ] = 0.017453292519943295 *
localB -> grf0b2xpyc ; localB -> karsi5ef1u [ 2 ] = 0.017453292519943295 *
localB -> eez4t55rmd ; localB -> karsi5ef1u [ 3 ] = 0.0 ; k2e5440l32_p =
localX -> pahj1trcml ; localB -> glwluawtyp = localX -> pi4unvpwxt ; localB
-> kftr21z525 = 0.0 ; localB -> kftr21z525 += p301ouc1q1 . P_43 [ 0 ] *
localX -> cw0wpxwlqz [ 0 ] ; localB -> kftr21z525 += p301ouc1q1 . P_43 [ 1 ]
* localX -> cw0wpxwlqz [ 1 ] ; localB -> kftr21z525 += p301ouc1q1 . P_44 *
kinegxqpfo [ 4 ] ; localB -> bavqzbkzht [ 0 ] = ( p301ouc1q1 . P_191 + localX
-> pahj1trcml ) * 0.017453292519943295 ; localB -> bavqzbkzht [ 1 ] =
0.017453292519943295 * localB -> glwluawtyp ; localB -> bavqzbkzht [ 2 ] =
0.017453292519943295 * localB -> kftr21z525 ; localB -> bavqzbkzht [ 3 ] =
0.0 ; dzqnhl0ntf [ 3 ] = localX -> fbn0sbu0o0 ; localB -> idoqx1nxf2 = localX
-> mqbxf1omqg ; localB -> lczqcapei4 = 0.0 ; localB -> lczqcapei4 +=
p301ouc1q1 . P_48 [ 0 ] * localX -> mjuwnhdkfa [ 0 ] ; localB -> lczqcapei4
+= p301ouc1q1 . P_48 [ 1 ] * localX -> mjuwnhdkfa [ 1 ] ; localB ->
lczqcapei4 += p301ouc1q1 . P_49 * kinegxqpfo [ 3 ] ; localB -> nzss3y2ceo [ 0
] = ( p301ouc1q1 . P_192 + localX -> fbn0sbu0o0 ) * 0.017453292519943295 ;
localB -> nzss3y2ceo [ 1 ] = 0.017453292519943295 * localB -> idoqx1nxf2 ;
localB -> nzss3y2ceo [ 2 ] = 0.017453292519943295 * localB -> lczqcapei4 ;
localB -> nzss3y2ceo [ 3 ] = 0.0 ; localB -> dkpbryd3fi = localX ->
jhsh4lfjex ; if ( rtmIsMajorTimeStep ( dow0ryovld ) && rtmIsSampleHit (
dow0ryovld , 2 , 0 ) ) { localB -> opyct5vfe0 = localDW -> onn5vmv02x ; }
localB -> bhqis4sxt5 [ 0 ] = localB -> opyct5vfe0 * look1_binlxpw (
d1dgncrrfm [ 0 ] , p301ouc1q1 . P_53 , p301ouc1q1 . P_52 , 7U ) ; localB ->
bhqis4sxt5 [ 1 ] = localB -> opyct5vfe0 * look1_binlxpw ( d1dgncrrfm [ 1 ] ,
p301ouc1q1 . P_55 , p301ouc1q1 . P_54 , 7U ) ; localB -> bhqis4sxt5 [ 2 ] =
localB -> opyct5vfe0 * look1_binlxpw ( d1dgncrrfm [ 2 ] , p301ouc1q1 . P_57 ,
p301ouc1q1 . P_56 , 7U ) ; localB -> bhqis4sxt5 [ 3 ] = localB -> opyct5vfe0
* look1_binlxpw ( d1dgncrrfm [ 3 ] , p301ouc1q1 . P_59 , p301ouc1q1 . P_58 ,
7U ) ; localB -> bhqis4sxt5 [ 4 ] = localB -> opyct5vfe0 * look1_binlxpw (
d1dgncrrfm [ 4 ] , p301ouc1q1 . P_61 , p301ouc1q1 . P_60 , 7U ) ; localB ->
bhqis4sxt5 [ 5 ] = localB -> opyct5vfe0 * look1_binlxpw ( d1dgncrrfm [ 5 ] ,
p301ouc1q1 . P_63 , p301ouc1q1 . P_62 , 7U ) ; localB -> bhqis4sxt5 [ 6 ] =
localB -> opyct5vfe0 * look1_binlxpw ( d1dgncrrfm [ 6 ] , p301ouc1q1 . P_65 ,
p301ouc1q1 . P_64 , 7U ) ; localB -> bhqis4sxt5 [ 7 ] = localB -> opyct5vfe0
* look1_binlxpw ( d1dgncrrfm [ 7 ] , p301ouc1q1 . P_67 , p301ouc1q1 . P_66 ,
7U ) ; localB -> ng4yajypde = p301ouc1q1 . P_68 * localB -> bhqis4sxt5 [ 7 ]
; localB -> of4kngakq4 = 0.0 ; localB -> of4kngakq4 += p301ouc1q1 . P_70 *
localX -> njt3hse4a3 ; localB -> of4kngakq4 += p301ouc1q1 . P_71 * localB ->
ng4yajypde ; localB -> liu5zcrfj4 [ 0 ] = 0.017453292519943295 * localX ->
izdmv0eo0b ; localB -> liu5zcrfj4 [ 1 ] = 0.017453292519943295 * localB ->
dkpbryd3fi ; localB -> liu5zcrfj4 [ 2 ] = 0.017453292519943295 * localB ->
of4kngakq4 ; localB -> liu5zcrfj4 [ 3 ] = 0.0 ; localB -> fscn2aw4fg = localX
-> kl5p04vpi5 ; localB -> o02swqx0th = p301ouc1q1 . P_73 * localB ->
bhqis4sxt5 [ 3 ] ; localB -> obxf23ymvb = 0.0 ; localB -> obxf23ymvb +=
p301ouc1q1 . P_75 * localX -> kn3ylsggay ; localB -> obxf23ymvb += p301ouc1q1
. P_76 * localB -> o02swqx0th ; localB -> aouy4fq24a [ 0 ] =
0.017453292519943295 * localX -> losfm0ag3e ; localB -> aouy4fq24a [ 1 ] =
0.017453292519943295 * localB -> fscn2aw4fg ; localB -> aouy4fq24a [ 2 ] =
0.017453292519943295 * localB -> obxf23ymvb ; localB -> aouy4fq24a [ 3 ] =
0.0 ; localB -> cwi4n21kaf = localX -> a3pwm4zjas ; localB -> ajzjd1xedp =
p301ouc1q1 . P_78 * localB -> bhqis4sxt5 [ 4 ] * p301ouc1q1 . P_79 ; localB
-> nankzjs21u = 0.0 ; localB -> nankzjs21u += p301ouc1q1 . P_81 * localX ->
krv1vdajfr ; localB -> nankzjs21u += p301ouc1q1 . P_82 * localB -> ajzjd1xedp
; localB -> p2s2cafweo [ 0 ] = 0.017453292519943295 * localX -> fhi4ekx3s4 ;
localB -> p2s2cafweo [ 1 ] = 0.017453292519943295 * localB -> cwi4n21kaf ;
localB -> p2s2cafweo [ 2 ] = 0.017453292519943295 * localB -> nankzjs21u ;
localB -> p2s2cafweo [ 3 ] = 0.0 ; localB -> ezgwilii4z = localX ->
o3nqw2wnxl ; localB -> iogl13ovh1 = p301ouc1q1 . P_84 * localB -> bhqis4sxt5
[ 2 ] * p301ouc1q1 . P_85 ; localB -> khkk4tmnkb = 0.0 ; localB -> khkk4tmnkb
+= p301ouc1q1 . P_87 * localX -> bn00q3futv ; localB -> khkk4tmnkb +=
p301ouc1q1 . P_88 * localB -> iogl13ovh1 ; localB -> nye3tmgwgy [ 0 ] =
0.017453292519943295 * localX -> nv0jw30s25 ; localB -> nye3tmgwgy [ 1 ] =
0.017453292519943295 * localB -> ezgwilii4z ; localB -> nye3tmgwgy [ 2 ] =
0.017453292519943295 * localB -> khkk4tmnkb ; localB -> nye3tmgwgy [ 3 ] =
0.0 ; localB -> dfeop2ipba = localX -> ievagdlgod ; localB -> nsw25g00j0 =
p301ouc1q1 . P_90 * localB -> bhqis4sxt5 [ 0 ] * p301ouc1q1 . P_91 ; localB
-> j4t5zorru2 = 0.0 ; localB -> j4t5zorru2 += p301ouc1q1 . P_93 * localX ->
ldh2nq2aww ; localB -> j4t5zorru2 += p301ouc1q1 . P_94 * localB -> nsw25g00j0
; localB -> bi0hotz3gn [ 0 ] = 0.017453292519943295 * localX -> p1v0h4exsb ;
localB -> bi0hotz3gn [ 1 ] = 0.017453292519943295 * localB -> dfeop2ipba ;
localB -> bi0hotz3gn [ 2 ] = 0.017453292519943295 * localB -> j4t5zorru2 ;
localB -> bi0hotz3gn [ 3 ] = 0.0 ; localB -> g5z2zydp3y = localX ->
lyvz3kakue ; localB -> ma33ikna4q = p301ouc1q1 . P_96 * localB -> bhqis4sxt5
[ 5 ] ; localB -> aubfmyym2m = 0.0 ; localB -> aubfmyym2m += p301ouc1q1 .
P_98 * localX -> h5f3s5wdap ; localB -> aubfmyym2m += p301ouc1q1 . P_99 *
localB -> ma33ikna4q ; localB -> g51ukhglo4 [ 0 ] = 0.017453292519943295 *
localX -> a4wdpuewmu ; localB -> g51ukhglo4 [ 1 ] = 0.017453292519943295 *
localB -> g5z2zydp3y ; localB -> g51ukhglo4 [ 2 ] = 0.017453292519943295 *
localB -> aubfmyym2m ; localB -> g51ukhglo4 [ 3 ] = 0.0 ; localB ->
jff4a1tvq2 = localX -> hkg4jofz4c ; localB -> kiqk2sgpre = p301ouc1q1 . P_101
* localB -> bhqis4sxt5 [ 1 ] ; localB -> pyzm1400py = 0.0 ; localB ->
pyzm1400py += p301ouc1q1 . P_103 * localX -> enzktrcwpo ; localB ->
pyzm1400py += p301ouc1q1 . P_104 * localB -> kiqk2sgpre ; localB ->
pvdrbthk0m [ 0 ] = 0.017453292519943295 * localX -> dxhpmwzy2b ; localB ->
pvdrbthk0m [ 1 ] = 0.017453292519943295 * localB -> jff4a1tvq2 ; localB ->
pvdrbthk0m [ 2 ] = 0.017453292519943295 * localB -> pyzm1400py ; localB ->
pvdrbthk0m [ 3 ] = 0.0 ; localB -> mi41qgkbu0 = localX -> aenbz1vnok ; localB
-> kq20gpz3sx = p301ouc1q1 . P_106 * localB -> bhqis4sxt5 [ 6 ] * p301ouc1q1
. P_107 ; localB -> k2fagdii4h = 0.0 ; localB -> k2fagdii4h += p301ouc1q1 .
P_109 * localX -> j1ypm44kqt ; localB -> k2fagdii4h += p301ouc1q1 . P_110 *
localB -> kq20gpz3sx ; localB -> mvrr1vhnj4 [ 0 ] = 0.017453292519943295 *
localX -> knn0fgcr4b ; localB -> mvrr1vhnj4 [ 1 ] = 0.017453292519943295 *
localB -> mi41qgkbu0 ; localB -> mvrr1vhnj4 [ 2 ] = 0.017453292519943295 *
localB -> k2fagdii4h ; localB -> mvrr1vhnj4 [ 3 ] = 0.0 ; simulationData = (
NeslSimulationData * ) localDW -> bhq0wza4qw ; time_tmp = rtmGetTaskTime (
dow0ryovld , 0 ) ; time = time_tmp ; simulationData -> mData -> mTime . mN =
1 ; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData
-> mContStates . mN = 337 ; simulationData -> mData -> mContStates . mX = &
localX -> f4cwt4gmec [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & localDW -> i5wehflxkv ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & localDW -> opoqs3zl5e ; tmp = ( rtmIsMajorTimeStep (
dow0ryovld ) && ssGetSolverFoundContZcEvents ( dow0ryovld -> _mdlRefSfcnS ) )
; simulationData -> mData -> mFoundZcEvents = tmp ; tmp = rtmIsMajorTimeStep
( dow0ryovld ) ; simulationData -> mData -> mIsMajorTimeStep = tmp ; tmp_p =
_ssGetSolverAssertCheck ( dow0ryovld -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp_p ; tmp_p = ssIsSolverCheckingCIC (
dow0ryovld -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian (
dow0ryovld -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp_p ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( dow0ryovld -> _mdlRefSfcnS ) != 0 ) ; tmp_p =
ssIsSolverRequestingReset ( dow0ryovld -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverRequestingReset = tmp_p ; tmp_p = ssGetIsOkayToUpdateMode (
dow0ryovld -> _mdlRefSfcnS ) ; simulationData -> mData -> mIsOkayToUpdateMode
= tmp_p ; tmp_i [ 0 ] = 0 ; tmp_e [ 0 ] = localB -> evgjlxf1ht [ 0 ] ; tmp_e
[ 1 ] = localB -> evgjlxf1ht [ 1 ] ; tmp_e [ 2 ] = localB -> evgjlxf1ht [ 2 ]
; tmp_e [ 3 ] = localB -> evgjlxf1ht [ 3 ] ; tmp_i [ 1 ] = 4 ; tmp_e [ 4 ] =
localB -> i5l4at4n2i [ 0 ] ; tmp_e [ 5 ] = localB -> i5l4at4n2i [ 1 ] ; tmp_e
[ 6 ] = localB -> i5l4at4n2i [ 2 ] ; tmp_e [ 7 ] = localB -> i5l4at4n2i [ 3 ]
; tmp_i [ 2 ] = 8 ; tmp_e [ 8 ] = localB -> eqi5ccufrp [ 0 ] ; tmp_e [ 9 ] =
localB -> eqi5ccufrp [ 1 ] ; tmp_e [ 10 ] = localB -> eqi5ccufrp [ 2 ] ;
tmp_e [ 11 ] = localB -> eqi5ccufrp [ 3 ] ; tmp_i [ 3 ] = 12 ; tmp_e [ 12 ] =
localB -> i1k4tod4de [ 0 ] ; tmp_e [ 13 ] = localB -> i1k4tod4de [ 1 ] ;
tmp_e [ 14 ] = localB -> i1k4tod4de [ 2 ] ; tmp_e [ 15 ] = localB ->
i1k4tod4de [ 3 ] ; tmp_i [ 4 ] = 16 ; tmp_e [ 16 ] = localB -> mr3naztf0y [ 0
] ; tmp_e [ 17 ] = localB -> mr3naztf0y [ 1 ] ; tmp_e [ 18 ] = localB ->
mr3naztf0y [ 2 ] ; tmp_e [ 19 ] = localB -> mr3naztf0y [ 3 ] ; tmp_i [ 5 ] =
20 ; tmp_e [ 20 ] = localB -> karsi5ef1u [ 0 ] ; tmp_e [ 21 ] = localB ->
karsi5ef1u [ 1 ] ; tmp_e [ 22 ] = localB -> karsi5ef1u [ 2 ] ; tmp_e [ 23 ] =
localB -> karsi5ef1u [ 3 ] ; tmp_i [ 6 ] = 24 ; tmp_e [ 24 ] = localB ->
bavqzbkzht [ 0 ] ; tmp_e [ 25 ] = localB -> bavqzbkzht [ 1 ] ; tmp_e [ 26 ] =
localB -> bavqzbkzht [ 2 ] ; tmp_e [ 27 ] = localB -> bavqzbkzht [ 3 ] ;
tmp_i [ 7 ] = 28 ; tmp_e [ 28 ] = localB -> nzss3y2ceo [ 0 ] ; tmp_e [ 29 ] =
localB -> nzss3y2ceo [ 1 ] ; tmp_e [ 30 ] = localB -> nzss3y2ceo [ 2 ] ;
tmp_e [ 31 ] = localB -> nzss3y2ceo [ 3 ] ; tmp_i [ 8 ] = 32 ; tmp_e [ 32 ] =
localB -> liu5zcrfj4 [ 0 ] ; tmp_e [ 33 ] = localB -> liu5zcrfj4 [ 1 ] ;
tmp_e [ 34 ] = localB -> liu5zcrfj4 [ 2 ] ; tmp_e [ 35 ] = localB ->
liu5zcrfj4 [ 3 ] ; tmp_i [ 9 ] = 36 ; tmp_e [ 36 ] = localB -> aouy4fq24a [ 0
] ; tmp_e [ 37 ] = localB -> aouy4fq24a [ 1 ] ; tmp_e [ 38 ] = localB ->
aouy4fq24a [ 2 ] ; tmp_e [ 39 ] = localB -> aouy4fq24a [ 3 ] ; tmp_i [ 10 ] =
40 ; tmp_e [ 40 ] = localB -> p2s2cafweo [ 0 ] ; tmp_e [ 41 ] = localB ->
p2s2cafweo [ 1 ] ; tmp_e [ 42 ] = localB -> p2s2cafweo [ 2 ] ; tmp_e [ 43 ] =
localB -> p2s2cafweo [ 3 ] ; tmp_i [ 11 ] = 44 ; tmp_e [ 44 ] = localB ->
nye3tmgwgy [ 0 ] ; tmp_e [ 45 ] = localB -> nye3tmgwgy [ 1 ] ; tmp_e [ 46 ] =
localB -> nye3tmgwgy [ 2 ] ; tmp_e [ 47 ] = localB -> nye3tmgwgy [ 3 ] ;
tmp_i [ 12 ] = 48 ; tmp_e [ 48 ] = localB -> bi0hotz3gn [ 0 ] ; tmp_e [ 49 ]
= localB -> bi0hotz3gn [ 1 ] ; tmp_e [ 50 ] = localB -> bi0hotz3gn [ 2 ] ;
tmp_e [ 51 ] = localB -> bi0hotz3gn [ 3 ] ; tmp_i [ 13 ] = 52 ; tmp_e [ 52 ]
= localB -> g51ukhglo4 [ 0 ] ; tmp_e [ 53 ] = localB -> g51ukhglo4 [ 1 ] ;
tmp_e [ 54 ] = localB -> g51ukhglo4 [ 2 ] ; tmp_e [ 55 ] = localB ->
g51ukhglo4 [ 3 ] ; tmp_i [ 14 ] = 56 ; tmp_e [ 56 ] = localB -> pvdrbthk0m [
0 ] ; tmp_e [ 57 ] = localB -> pvdrbthk0m [ 1 ] ; tmp_e [ 58 ] = localB ->
pvdrbthk0m [ 2 ] ; tmp_e [ 59 ] = localB -> pvdrbthk0m [ 3 ] ; tmp_i [ 15 ] =
60 ; tmp_e [ 60 ] = localB -> mvrr1vhnj4 [ 0 ] ; tmp_e [ 61 ] = localB ->
mvrr1vhnj4 [ 1 ] ; tmp_e [ 62 ] = localB -> mvrr1vhnj4 [ 2 ] ; tmp_e [ 63 ] =
localB -> mvrr1vhnj4 [ 3 ] ; tmp_i [ 16 ] = 64 ; tmp_e [ 64 ] = localB ->
bshxu2dzdn [ 0 ] ; tmp_e [ 65 ] = localB -> bshxu2dzdn [ 1 ] ; tmp_e [ 66 ] =
localB -> bshxu2dzdn [ 2 ] ; tmp_e [ 67 ] = localB -> bshxu2dzdn [ 3 ] ;
tmp_i [ 17 ] = 68 ; tmp_e [ 68 ] = localB -> dcxpo3gwp5 [ 0 ] ; tmp_e [ 69 ]
= localB -> dcxpo3gwp5 [ 1 ] ; tmp_e [ 70 ] = localB -> dcxpo3gwp5 [ 2 ] ;
tmp_e [ 71 ] = localB -> dcxpo3gwp5 [ 3 ] ; tmp_i [ 18 ] = 72 ; tmp_e [ 72 ]
= localB -> pyvnbbh4e0 [ 0 ] ; tmp_e [ 73 ] = localB -> pyvnbbh4e0 [ 1 ] ;
tmp_e [ 74 ] = localB -> pyvnbbh4e0 [ 2 ] ; tmp_e [ 75 ] = localB ->
pyvnbbh4e0 [ 3 ] ; tmp_i [ 19 ] = 76 ; tmp_e [ 76 ] = localB -> kal5vypdsn [
0 ] ; tmp_e [ 77 ] = localB -> kal5vypdsn [ 1 ] ; tmp_e [ 78 ] = localB ->
kal5vypdsn [ 2 ] ; tmp_e [ 79 ] = localB -> kal5vypdsn [ 3 ] ; tmp_i [ 20 ] =
80 ; tmp_e [ 80 ] = localB -> d1gahwve5x [ 0 ] ; tmp_e [ 81 ] = localB ->
d1gahwve5x [ 1 ] ; tmp_e [ 82 ] = localB -> d1gahwve5x [ 2 ] ; tmp_e [ 83 ] =
localB -> d1gahwve5x [ 3 ] ; tmp_i [ 21 ] = 84 ; tmp_e [ 84 ] = localB ->
em0vsjuvjn [ 0 ] ; tmp_e [ 85 ] = localB -> em0vsjuvjn [ 1 ] ; tmp_e [ 86 ] =
localB -> em0vsjuvjn [ 2 ] ; tmp_e [ 87 ] = localB -> em0vsjuvjn [ 3 ] ;
tmp_i [ 22 ] = 88 ; tmp_e [ 88 ] = localB -> dlgwn2r2ef [ 0 ] ; tmp_e [ 89 ]
= localB -> dlgwn2r2ef [ 1 ] ; tmp_e [ 90 ] = localB -> dlgwn2r2ef [ 2 ] ;
tmp_e [ 91 ] = localB -> dlgwn2r2ef [ 3 ] ; tmp_i [ 23 ] = 92 ; tmp_e [ 92 ]
= localB -> j3jb4ek1c4 [ 0 ] ; tmp_e [ 93 ] = localB -> j3jb4ek1c4 [ 1 ] ;
tmp_e [ 94 ] = localB -> j3jb4ek1c4 [ 2 ] ; tmp_e [ 95 ] = localB ->
j3jb4ek1c4 [ 3 ] ; tmp_i [ 24 ] = 96 ; tmp_e [ 96 ] = localB -> chdmmuvupy [
0 ] ; tmp_e [ 97 ] = localB -> chdmmuvupy [ 1 ] ; tmp_e [ 98 ] = localB ->
chdmmuvupy [ 2 ] ; tmp_e [ 99 ] = localB -> chdmmuvupy [ 3 ] ; tmp_i [ 25 ] =
100 ; tmp_e [ 100 ] = localB -> if4fdhdm21 [ 0 ] ; tmp_e [ 101 ] = localB ->
if4fdhdm21 [ 1 ] ; tmp_e [ 102 ] = localB -> if4fdhdm21 [ 2 ] ; tmp_e [ 103 ]
= localB -> if4fdhdm21 [ 3 ] ; tmp_i [ 26 ] = 104 ; tmp_e [ 104 ] = localB ->
g3exmselxb [ 0 ] ; tmp_e [ 105 ] = localB -> g3exmselxb [ 1 ] ; tmp_e [ 106 ]
= localB -> g3exmselxb [ 2 ] ; tmp_e [ 107 ] = localB -> g3exmselxb [ 3 ] ;
tmp_i [ 27 ] = 108 ; tmp_e [ 108 ] = localB -> lhltvb5x0u [ 0 ] ; tmp_e [ 109
] = localB -> lhltvb5x0u [ 1 ] ; tmp_e [ 110 ] = localB -> lhltvb5x0u [ 2 ] ;
tmp_e [ 111 ] = localB -> lhltvb5x0u [ 3 ] ; tmp_i [ 28 ] = 112 ; tmp_e [ 112
] = localB -> fvvjmasvex [ 0 ] ; tmp_e [ 113 ] = localB -> fvvjmasvex [ 1 ] ;
tmp_e [ 114 ] = localB -> fvvjmasvex [ 2 ] ; tmp_e [ 115 ] = localB ->
fvvjmasvex [ 3 ] ; tmp_i [ 29 ] = 116 ; tmp_e [ 116 ] = localB -> b0o3ycinko
[ 0 ] ; tmp_e [ 117 ] = localB -> b0o3ycinko [ 1 ] ; tmp_e [ 118 ] = localB
-> b0o3ycinko [ 2 ] ; tmp_e [ 119 ] = localB -> b0o3ycinko [ 3 ] ; tmp_i [ 30
] = 120 ; tmp_e [ 120 ] = localB -> kimp5cuqck [ 0 ] ; tmp_e [ 121 ] = localB
-> kimp5cuqck [ 1 ] ; tmp_e [ 122 ] = localB -> kimp5cuqck [ 2 ] ; tmp_e [
123 ] = localB -> kimp5cuqck [ 3 ] ; tmp_i [ 31 ] = 124 ; tmp_e [ 124 ] =
localB -> moqx30egka [ 0 ] ; tmp_e [ 125 ] = localB -> moqx30egka [ 1 ] ;
tmp_e [ 126 ] = localB -> moqx30egka [ 2 ] ; tmp_e [ 127 ] = localB ->
moqx30egka [ 3 ] ; tmp_i [ 32 ] = 128 ; simulationData -> mData ->
mInputValues . mN = 128 ; simulationData -> mData -> mInputValues . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 33 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_i [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 337 ; simulationData -> mData ->
mOutputs . mX = & localB -> oqxwd0wuz4 [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) localDW -> epe2vsgg3i ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; i = ne_simulator_method ( ( NeslSimulator * ) localDW -> pak131zhvo ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( i != 0 ) {
tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( dow0ryovld -> _mdlRefSfcnS
) ) ; if ( tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( dow0ryovld -> _mdlRefSfcnS , msg ) ; } } if ( tmp &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( dow0ryovld -> _mdlRefSfcnS ) ; }
simulationData = ( NeslSimulationData * ) localDW -> hfpiwl51gz ; time_p =
time_tmp ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates . mN
= 0 ; simulationData -> mData -> mContStates . mX = NULL ; simulationData ->
mData -> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX =
& localDW -> la3n4fkj1w ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & localDW -> fxjgijpbdk ; tmp_p
= ( rtmIsMajorTimeStep ( dow0ryovld ) && ssGetSolverFoundContZcEvents (
dow0ryovld -> _mdlRefSfcnS ) ) ; simulationData -> mData -> mFoundZcEvents =
tmp_p ; simulationData -> mData -> mIsMajorTimeStep = tmp ; tmp_p =
_ssGetSolverAssertCheck ( dow0ryovld -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp_p ; tmp_p = ssIsSolverCheckingCIC (
dow0ryovld -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; tmp_p = ssIsSolverRequestingReset ( dow0ryovld -> _mdlRefSfcnS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp_p ; tmp_p =
ssGetIsOkayToUpdateMode ( dow0ryovld -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsOkayToUpdateMode = tmp_p ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = localB
-> evgjlxf1ht [ 0 ] ; tmp_m [ 1 ] = localB -> evgjlxf1ht [ 1 ] ; tmp_m [ 2 ]
= localB -> evgjlxf1ht [ 2 ] ; tmp_m [ 3 ] = localB -> evgjlxf1ht [ 3 ] ;
tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = localB -> i5l4at4n2i [ 0 ] ; tmp_m [ 5 ] =
localB -> i5l4at4n2i [ 1 ] ; tmp_m [ 6 ] = localB -> i5l4at4n2i [ 2 ] ; tmp_m
[ 7 ] = localB -> i5l4at4n2i [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = localB
-> eqi5ccufrp [ 0 ] ; tmp_m [ 9 ] = localB -> eqi5ccufrp [ 1 ] ; tmp_m [ 10 ]
= localB -> eqi5ccufrp [ 2 ] ; tmp_m [ 11 ] = localB -> eqi5ccufrp [ 3 ] ;
tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] = localB -> i1k4tod4de [ 0 ] ; tmp_m [ 13 ] =
localB -> i1k4tod4de [ 1 ] ; tmp_m [ 14 ] = localB -> i1k4tod4de [ 2 ] ;
tmp_m [ 15 ] = localB -> i1k4tod4de [ 3 ] ; tmp_g [ 4 ] = 16 ; tmp_m [ 16 ] =
localB -> mr3naztf0y [ 0 ] ; tmp_m [ 17 ] = localB -> mr3naztf0y [ 1 ] ;
tmp_m [ 18 ] = localB -> mr3naztf0y [ 2 ] ; tmp_m [ 19 ] = localB ->
mr3naztf0y [ 3 ] ; tmp_g [ 5 ] = 20 ; tmp_m [ 20 ] = localB -> karsi5ef1u [ 0
] ; tmp_m [ 21 ] = localB -> karsi5ef1u [ 1 ] ; tmp_m [ 22 ] = localB ->
karsi5ef1u [ 2 ] ; tmp_m [ 23 ] = localB -> karsi5ef1u [ 3 ] ; tmp_g [ 6 ] =
24 ; tmp_m [ 24 ] = localB -> bavqzbkzht [ 0 ] ; tmp_m [ 25 ] = localB ->
bavqzbkzht [ 1 ] ; tmp_m [ 26 ] = localB -> bavqzbkzht [ 2 ] ; tmp_m [ 27 ] =
localB -> bavqzbkzht [ 3 ] ; tmp_g [ 7 ] = 28 ; tmp_m [ 28 ] = localB ->
nzss3y2ceo [ 0 ] ; tmp_m [ 29 ] = localB -> nzss3y2ceo [ 1 ] ; tmp_m [ 30 ] =
localB -> nzss3y2ceo [ 2 ] ; tmp_m [ 31 ] = localB -> nzss3y2ceo [ 3 ] ;
tmp_g [ 8 ] = 32 ; tmp_m [ 32 ] = localB -> liu5zcrfj4 [ 0 ] ; tmp_m [ 33 ] =
localB -> liu5zcrfj4 [ 1 ] ; tmp_m [ 34 ] = localB -> liu5zcrfj4 [ 2 ] ;
tmp_m [ 35 ] = localB -> liu5zcrfj4 [ 3 ] ; tmp_g [ 9 ] = 36 ; tmp_m [ 36 ] =
localB -> aouy4fq24a [ 0 ] ; tmp_m [ 37 ] = localB -> aouy4fq24a [ 1 ] ;
tmp_m [ 38 ] = localB -> aouy4fq24a [ 2 ] ; tmp_m [ 39 ] = localB ->
aouy4fq24a [ 3 ] ; tmp_g [ 10 ] = 40 ; tmp_m [ 40 ] = localB -> p2s2cafweo [
0 ] ; tmp_m [ 41 ] = localB -> p2s2cafweo [ 1 ] ; tmp_m [ 42 ] = localB ->
p2s2cafweo [ 2 ] ; tmp_m [ 43 ] = localB -> p2s2cafweo [ 3 ] ; tmp_g [ 11 ] =
44 ; tmp_m [ 44 ] = localB -> nye3tmgwgy [ 0 ] ; tmp_m [ 45 ] = localB ->
nye3tmgwgy [ 1 ] ; tmp_m [ 46 ] = localB -> nye3tmgwgy [ 2 ] ; tmp_m [ 47 ] =
localB -> nye3tmgwgy [ 3 ] ; tmp_g [ 12 ] = 48 ; tmp_m [ 48 ] = localB ->
bi0hotz3gn [ 0 ] ; tmp_m [ 49 ] = localB -> bi0hotz3gn [ 1 ] ; tmp_m [ 50 ] =
localB -> bi0hotz3gn [ 2 ] ; tmp_m [ 51 ] = localB -> bi0hotz3gn [ 3 ] ;
tmp_g [ 13 ] = 52 ; tmp_m [ 52 ] = localB -> g51ukhglo4 [ 0 ] ; tmp_m [ 53 ]
= localB -> g51ukhglo4 [ 1 ] ; tmp_m [ 54 ] = localB -> g51ukhglo4 [ 2 ] ;
tmp_m [ 55 ] = localB -> g51ukhglo4 [ 3 ] ; tmp_g [ 14 ] = 56 ; tmp_m [ 56 ]
= localB -> pvdrbthk0m [ 0 ] ; tmp_m [ 57 ] = localB -> pvdrbthk0m [ 1 ] ;
tmp_m [ 58 ] = localB -> pvdrbthk0m [ 2 ] ; tmp_m [ 59 ] = localB ->
pvdrbthk0m [ 3 ] ; tmp_g [ 15 ] = 60 ; tmp_m [ 60 ] = localB -> mvrr1vhnj4 [
0 ] ; tmp_m [ 61 ] = localB -> mvrr1vhnj4 [ 1 ] ; tmp_m [ 62 ] = localB ->
mvrr1vhnj4 [ 2 ] ; tmp_m [ 63 ] = localB -> mvrr1vhnj4 [ 3 ] ; tmp_g [ 16 ] =
64 ; tmp_m [ 64 ] = localB -> bshxu2dzdn [ 0 ] ; tmp_m [ 65 ] = localB ->
bshxu2dzdn [ 1 ] ; tmp_m [ 66 ] = localB -> bshxu2dzdn [ 2 ] ; tmp_m [ 67 ] =
localB -> bshxu2dzdn [ 3 ] ; tmp_g [ 17 ] = 68 ; tmp_m [ 68 ] = localB ->
dcxpo3gwp5 [ 0 ] ; tmp_m [ 69 ] = localB -> dcxpo3gwp5 [ 1 ] ; tmp_m [ 70 ] =
localB -> dcxpo3gwp5 [ 2 ] ; tmp_m [ 71 ] = localB -> dcxpo3gwp5 [ 3 ] ;
tmp_g [ 18 ] = 72 ; tmp_m [ 72 ] = localB -> pyvnbbh4e0 [ 0 ] ; tmp_m [ 73 ]
= localB -> pyvnbbh4e0 [ 1 ] ; tmp_m [ 74 ] = localB -> pyvnbbh4e0 [ 2 ] ;
tmp_m [ 75 ] = localB -> pyvnbbh4e0 [ 3 ] ; tmp_g [ 19 ] = 76 ; tmp_m [ 76 ]
= localB -> kal5vypdsn [ 0 ] ; tmp_m [ 77 ] = localB -> kal5vypdsn [ 1 ] ;
tmp_m [ 78 ] = localB -> kal5vypdsn [ 2 ] ; tmp_m [ 79 ] = localB ->
kal5vypdsn [ 3 ] ; tmp_g [ 20 ] = 80 ; tmp_m [ 80 ] = localB -> d1gahwve5x [
0 ] ; tmp_m [ 81 ] = localB -> d1gahwve5x [ 1 ] ; tmp_m [ 82 ] = localB ->
d1gahwve5x [ 2 ] ; tmp_m [ 83 ] = localB -> d1gahwve5x [ 3 ] ; tmp_g [ 21 ] =
84 ; tmp_m [ 84 ] = localB -> em0vsjuvjn [ 0 ] ; tmp_m [ 85 ] = localB ->
em0vsjuvjn [ 1 ] ; tmp_m [ 86 ] = localB -> em0vsjuvjn [ 2 ] ; tmp_m [ 87 ] =
localB -> em0vsjuvjn [ 3 ] ; tmp_g [ 22 ] = 88 ; tmp_m [ 88 ] = localB ->
dlgwn2r2ef [ 0 ] ; tmp_m [ 89 ] = localB -> dlgwn2r2ef [ 1 ] ; tmp_m [ 90 ] =
localB -> dlgwn2r2ef [ 2 ] ; tmp_m [ 91 ] = localB -> dlgwn2r2ef [ 3 ] ;
tmp_g [ 23 ] = 92 ; tmp_m [ 92 ] = localB -> j3jb4ek1c4 [ 0 ] ; tmp_m [ 93 ]
= localB -> j3jb4ek1c4 [ 1 ] ; tmp_m [ 94 ] = localB -> j3jb4ek1c4 [ 2 ] ;
tmp_m [ 95 ] = localB -> j3jb4ek1c4 [ 3 ] ; tmp_g [ 24 ] = 96 ; tmp_m [ 96 ]
= localB -> chdmmuvupy [ 0 ] ; tmp_m [ 97 ] = localB -> chdmmuvupy [ 1 ] ;
tmp_m [ 98 ] = localB -> chdmmuvupy [ 2 ] ; tmp_m [ 99 ] = localB ->
chdmmuvupy [ 3 ] ; tmp_g [ 25 ] = 100 ; tmp_m [ 100 ] = localB -> if4fdhdm21
[ 0 ] ; tmp_m [ 101 ] = localB -> if4fdhdm21 [ 1 ] ; tmp_m [ 102 ] = localB
-> if4fdhdm21 [ 2 ] ; tmp_m [ 103 ] = localB -> if4fdhdm21 [ 3 ] ; tmp_g [ 26
] = 104 ; tmp_m [ 104 ] = localB -> g3exmselxb [ 0 ] ; tmp_m [ 105 ] = localB
-> g3exmselxb [ 1 ] ; tmp_m [ 106 ] = localB -> g3exmselxb [ 2 ] ; tmp_m [
107 ] = localB -> g3exmselxb [ 3 ] ; tmp_g [ 27 ] = 108 ; tmp_m [ 108 ] =
localB -> lhltvb5x0u [ 0 ] ; tmp_m [ 109 ] = localB -> lhltvb5x0u [ 1 ] ;
tmp_m [ 110 ] = localB -> lhltvb5x0u [ 2 ] ; tmp_m [ 111 ] = localB ->
lhltvb5x0u [ 3 ] ; tmp_g [ 28 ] = 112 ; tmp_m [ 112 ] = localB -> fvvjmasvex
[ 0 ] ; tmp_m [ 113 ] = localB -> fvvjmasvex [ 1 ] ; tmp_m [ 114 ] = localB
-> fvvjmasvex [ 2 ] ; tmp_m [ 115 ] = localB -> fvvjmasvex [ 3 ] ; tmp_g [ 29
] = 116 ; tmp_m [ 116 ] = localB -> b0o3ycinko [ 0 ] ; tmp_m [ 117 ] = localB
-> b0o3ycinko [ 1 ] ; tmp_m [ 118 ] = localB -> b0o3ycinko [ 2 ] ; tmp_m [
119 ] = localB -> b0o3ycinko [ 3 ] ; tmp_g [ 30 ] = 120 ; tmp_m [ 120 ] =
localB -> kimp5cuqck [ 0 ] ; tmp_m [ 121 ] = localB -> kimp5cuqck [ 1 ] ;
tmp_m [ 122 ] = localB -> kimp5cuqck [ 2 ] ; tmp_m [ 123 ] = localB ->
kimp5cuqck [ 3 ] ; tmp_g [ 31 ] = 124 ; tmp_m [ 124 ] = localB -> moqx30egka
[ 0 ] ; tmp_m [ 125 ] = localB -> moqx30egka [ 1 ] ; tmp_m [ 126 ] = localB
-> moqx30egka [ 2 ] ; tmp_m [ 127 ] = localB -> moqx30egka [ 3 ] ; tmp_g [ 32
] = 128 ; memcpy ( & tmp_m [ 128 ] , & localB -> oqxwd0wuz4 [ 0 ] , 337U *
sizeof ( real_T ) ) ; tmp_g [ 33 ] = 465 ; simulationData -> mData ->
mInputValues . mN = 465 ; simulationData -> mData -> mInputValues . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 34 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 18 ; simulationData -> mData ->
mOutputs . mX = & localB -> fgwsff3ksj [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) localDW -> k0b5odwie3 ;
diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( ( NeslSimulator * ) localDW
-> aedc40alcv , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if
( i != 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( dow0ryovld ->
_mdlRefSfcnS ) ) ; if ( tmp_p ) { msg_p = rtw_diagnostics_msg (
diagnosticTree_p ) ; ssSetErrorStatus ( dow0ryovld -> _mdlRefSfcnS , msg_p )
; } } if ( tmp && simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( dow0ryovld -> _mdlRefSfcnS ) ; }
localB -> gslo1fw4wd = p301ouc1q1 . P_111 * localB -> dkpbryd3fi ; kcvuztzmwq
= look_SplNBinSScd ( 1U , & localB -> gslo1fw4wd , ( rt_LUTSplineWork * ) &
localDW -> g3lqamfvdx [ 0 ] ) ; localB -> bshxu2dzdn [ 0 ] = p301ouc1q1 .
P_114 * kcvuztzmwq ; localB -> bshxu2dzdn [ 1 ] = 0.0 ; localB -> bshxu2dzdn
[ 2 ] = 0.0 ; localB -> bshxu2dzdn [ 3 ] = 0.0 ; pypeisjlzp =
look_SplNBinSScd ( 1U , & localB -> gslo1fw4wd , ( rt_LUTSplineWork * ) &
localDW -> kvgvmp1en5 [ 0 ] ) ; localB -> dcxpo3gwp5 [ 0 ] = p301ouc1q1 .
P_117 * pypeisjlzp ; localB -> dcxpo3gwp5 [ 1 ] = 0.0 ; localB -> dcxpo3gwp5
[ 2 ] = 0.0 ; localB -> dcxpo3gwp5 [ 3 ] = 0.0 ; localB -> if3wrp44ig =
p301ouc1q1 . P_118 * localB -> fscn2aw4fg ; ntegvhvnrh = look_SplNBinSScd (
1U , & localB -> if3wrp44ig , ( rt_LUTSplineWork * ) & localDW -> jr11dwmdux
[ 0 ] ) ; localB -> pyvnbbh4e0 [ 0 ] = p301ouc1q1 . P_121 * ntegvhvnrh ;
localB -> pyvnbbh4e0 [ 1 ] = 0.0 ; localB -> pyvnbbh4e0 [ 2 ] = 0.0 ; localB
-> pyvnbbh4e0 [ 3 ] = 0.0 ; eetkfd2hih = look_SplNBinSScd ( 1U , & localB ->
if3wrp44ig , ( rt_LUTSplineWork * ) & localDW -> j0pxwkhh5y [ 0 ] ) ; localB
-> kal5vypdsn [ 0 ] = p301ouc1q1 . P_124 * eetkfd2hih ; localB -> kal5vypdsn
[ 1 ] = 0.0 ; localB -> kal5vypdsn [ 2 ] = 0.0 ; localB -> kal5vypdsn [ 3 ] =
0.0 ; localB -> ofkj1y051u = p301ouc1q1 . P_125 * localB -> cwi4n21kaf ;
gzsx3hybhq = look_SplNBinSScd ( 1U , & localB -> ofkj1y051u , (
rt_LUTSplineWork * ) & localDW -> lp3fmx4wp1 [ 0 ] ) ; localB -> d1gahwve5x [
0 ] = p301ouc1q1 . P_128 * gzsx3hybhq ; localB -> d1gahwve5x [ 1 ] = 0.0 ;
localB -> d1gahwve5x [ 2 ] = 0.0 ; localB -> d1gahwve5x [ 3 ] = 0.0 ;
ffdjceglxx = look_SplNBinSScd ( 1U , & localB -> ofkj1y051u , (
rt_LUTSplineWork * ) & localDW -> fstxtu1dhv [ 0 ] ) ; localB -> em0vsjuvjn [
0 ] = p301ouc1q1 . P_131 * ffdjceglxx ; localB -> em0vsjuvjn [ 1 ] = 0.0 ;
localB -> em0vsjuvjn [ 2 ] = 0.0 ; localB -> em0vsjuvjn [ 3 ] = 0.0 ; localB
-> pnqsmo1s42 = p301ouc1q1 . P_132 * localB -> ezgwilii4z ; cqfw2igf2y =
look_SplNBinSScd ( 1U , & localB -> pnqsmo1s42 , ( rt_LUTSplineWork * ) &
localDW -> i2srqnkevu [ 0 ] ) ; localB -> dlgwn2r2ef [ 0 ] = p301ouc1q1 .
P_135 * cqfw2igf2y ; localB -> dlgwn2r2ef [ 1 ] = 0.0 ; localB -> dlgwn2r2ef
[ 2 ] = 0.0 ; localB -> dlgwn2r2ef [ 3 ] = 0.0 ; nyrgqk1fox =
look_SplNBinSScd ( 1U , & localB -> pnqsmo1s42 , ( rt_LUTSplineWork * ) &
localDW -> m2ceaoqqad [ 0 ] ) ; localB -> j3jb4ek1c4 [ 0 ] = p301ouc1q1 .
P_138 * nyrgqk1fox ; localB -> j3jb4ek1c4 [ 1 ] = 0.0 ; localB -> j3jb4ek1c4
[ 2 ] = 0.0 ; localB -> j3jb4ek1c4 [ 3 ] = 0.0 ; localB -> mwydcaaqdi =
p301ouc1q1 . P_139 * localB -> dfeop2ipba ; ocd22oednu = look_SplNBinSScd (
1U , & localB -> mwydcaaqdi , ( rt_LUTSplineWork * ) & localDW -> bc1sge0wmr
[ 0 ] ) ; localB -> chdmmuvupy [ 0 ] = p301ouc1q1 . P_142 * ocd22oednu ;
localB -> chdmmuvupy [ 1 ] = 0.0 ; localB -> chdmmuvupy [ 2 ] = 0.0 ; localB
-> chdmmuvupy [ 3 ] = 0.0 ; lsvfuhaswz = look_SplNBinSScd ( 1U , & localB ->
mwydcaaqdi , ( rt_LUTSplineWork * ) & localDW -> p1vwyenuhf [ 0 ] ) ; localB
-> if4fdhdm21 [ 0 ] = p301ouc1q1 . P_145 * lsvfuhaswz ; localB -> if4fdhdm21
[ 1 ] = 0.0 ; localB -> if4fdhdm21 [ 2 ] = 0.0 ; localB -> if4fdhdm21 [ 3 ] =
0.0 ; localB -> mpa2fder4v = p301ouc1q1 . P_146 * localB -> g5z2zydp3y ;
jurnzdb3e3 = look_SplNBinSScd ( 1U , & localB -> mpa2fder4v , (
rt_LUTSplineWork * ) & localDW -> hqmavjplkw [ 0 ] ) ; localB -> g3exmselxb [
0 ] = p301ouc1q1 . P_149 * jurnzdb3e3 ; localB -> g3exmselxb [ 1 ] = 0.0 ;
localB -> g3exmselxb [ 2 ] = 0.0 ; localB -> g3exmselxb [ 3 ] = 0.0 ;
j0qudhwgrt = look_SplNBinSScd ( 1U , & localB -> mpa2fder4v , (
rt_LUTSplineWork * ) & localDW -> evh0xf0evg [ 0 ] ) ; localB -> lhltvb5x0u [
0 ] = p301ouc1q1 . P_152 * j0qudhwgrt ; localB -> lhltvb5x0u [ 1 ] = 0.0 ;
localB -> lhltvb5x0u [ 2 ] = 0.0 ; localB -> lhltvb5x0u [ 3 ] = 0.0 ; localB
-> bibwf5b5cm = p301ouc1q1 . P_153 * localB -> jff4a1tvq2 ; oarcvzq3xd =
look_SplNBinSScd ( 1U , & localB -> bibwf5b5cm , ( rt_LUTSplineWork * ) &
localDW -> atcvcknmbv [ 0 ] ) ; localB -> fvvjmasvex [ 0 ] = p301ouc1q1 .
P_156 * oarcvzq3xd ; localB -> fvvjmasvex [ 1 ] = 0.0 ; localB -> fvvjmasvex
[ 2 ] = 0.0 ; localB -> fvvjmasvex [ 3 ] = 0.0 ; jfhleuwifq =
look_SplNBinSScd ( 1U , & localB -> bibwf5b5cm , ( rt_LUTSplineWork * ) &
localDW -> dxstr2xzrv [ 0 ] ) ; localB -> b0o3ycinko [ 0 ] = p301ouc1q1 .
P_159 * jfhleuwifq ; localB -> b0o3ycinko [ 1 ] = 0.0 ; localB -> b0o3ycinko
[ 2 ] = 0.0 ; localB -> b0o3ycinko [ 3 ] = 0.0 ; localB -> cgpua1kcf5 =
p301ouc1q1 . P_160 * localB -> mi41qgkbu0 ; on32gwfhy3 = look_SplNBinSScd (
1U , & localB -> cgpua1kcf5 , ( rt_LUTSplineWork * ) & localDW -> aonevnxfxu
[ 0 ] ) ; localB -> kimp5cuqck [ 0 ] = p301ouc1q1 . P_163 * on32gwfhy3 ;
localB -> kimp5cuqck [ 1 ] = 0.0 ; localB -> kimp5cuqck [ 2 ] = 0.0 ; localB
-> kimp5cuqck [ 3 ] = 0.0 ; bqzcbvgo0k = look_SplNBinSScd ( 1U , & localB ->
cgpua1kcf5 , ( rt_LUTSplineWork * ) & localDW -> diyvxmkdei [ 0 ] ) ; localB
-> moqx30egka [ 0 ] = p301ouc1q1 . P_166 * bqzcbvgo0k ; localB -> moqx30egka
[ 1 ] = 0.0 ; localB -> moqx30egka [ 2 ] = 0.0 ; localB -> moqx30egka [ 3 ] =
0.0 ; simulationData = ( NeslSimulationData * ) localDW -> castbtcvps ;
time_e = time_tmp ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_e ; simulationData -> mData ->
mContStates . mN = 0 ; simulationData -> mData -> mContStates . mX = NULL ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & localDW -> ls4avg3ooq ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = &
localDW -> fftwuvrgms ; tmp_p = ( rtmIsMajorTimeStep ( dow0ryovld ) &&
ssGetSolverFoundContZcEvents ( dow0ryovld -> _mdlRefSfcnS ) ) ;
simulationData -> mData -> mFoundZcEvents = tmp_p ; simulationData -> mData
-> mIsMajorTimeStep = tmp ; tmp_p = _ssGetSolverAssertCheck ( dow0ryovld ->
_mdlRefSfcnS ) ; simulationData -> mData -> mIsSolverAssertCheck = tmp_p ;
tmp_p = ssIsSolverCheckingCIC ( dow0ryovld -> _mdlRefSfcnS ) ; simulationData
-> mData -> mIsSolverCheckingCIC = tmp_p ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; tmp_p = ssIsSolverRequestingReset ( dow0ryovld -> _mdlRefSfcnS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp_p ; tmp_p =
ssGetIsOkayToUpdateMode ( dow0ryovld -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsOkayToUpdateMode = tmp_p ; tmp_f [ 0 ] = 0 ; tmp_j [ 0 ] = localB
-> evgjlxf1ht [ 0 ] ; tmp_j [ 1 ] = localB -> evgjlxf1ht [ 1 ] ; tmp_j [ 2 ]
= localB -> evgjlxf1ht [ 2 ] ; tmp_j [ 3 ] = localB -> evgjlxf1ht [ 3 ] ;
tmp_f [ 1 ] = 4 ; tmp_j [ 4 ] = localB -> i5l4at4n2i [ 0 ] ; tmp_j [ 5 ] =
localB -> i5l4at4n2i [ 1 ] ; tmp_j [ 6 ] = localB -> i5l4at4n2i [ 2 ] ; tmp_j
[ 7 ] = localB -> i5l4at4n2i [ 3 ] ; tmp_f [ 2 ] = 8 ; tmp_j [ 8 ] = localB
-> eqi5ccufrp [ 0 ] ; tmp_j [ 9 ] = localB -> eqi5ccufrp [ 1 ] ; tmp_j [ 10 ]
= localB -> eqi5ccufrp [ 2 ] ; tmp_j [ 11 ] = localB -> eqi5ccufrp [ 3 ] ;
tmp_f [ 3 ] = 12 ; tmp_j [ 12 ] = localB -> i1k4tod4de [ 0 ] ; tmp_j [ 13 ] =
localB -> i1k4tod4de [ 1 ] ; tmp_j [ 14 ] = localB -> i1k4tod4de [ 2 ] ;
tmp_j [ 15 ] = localB -> i1k4tod4de [ 3 ] ; tmp_f [ 4 ] = 16 ; tmp_j [ 16 ] =
localB -> mr3naztf0y [ 0 ] ; tmp_j [ 17 ] = localB -> mr3naztf0y [ 1 ] ;
tmp_j [ 18 ] = localB -> mr3naztf0y [ 2 ] ; tmp_j [ 19 ] = localB ->
mr3naztf0y [ 3 ] ; tmp_f [ 5 ] = 20 ; tmp_j [ 20 ] = localB -> karsi5ef1u [ 0
] ; tmp_j [ 21 ] = localB -> karsi5ef1u [ 1 ] ; tmp_j [ 22 ] = localB ->
karsi5ef1u [ 2 ] ; tmp_j [ 23 ] = localB -> karsi5ef1u [ 3 ] ; tmp_f [ 6 ] =
24 ; tmp_j [ 24 ] = localB -> bavqzbkzht [ 0 ] ; tmp_j [ 25 ] = localB ->
bavqzbkzht [ 1 ] ; tmp_j [ 26 ] = localB -> bavqzbkzht [ 2 ] ; tmp_j [ 27 ] =
localB -> bavqzbkzht [ 3 ] ; tmp_f [ 7 ] = 28 ; tmp_j [ 28 ] = localB ->
nzss3y2ceo [ 0 ] ; tmp_j [ 29 ] = localB -> nzss3y2ceo [ 1 ] ; tmp_j [ 30 ] =
localB -> nzss3y2ceo [ 2 ] ; tmp_j [ 31 ] = localB -> nzss3y2ceo [ 3 ] ;
tmp_f [ 8 ] = 32 ; tmp_j [ 32 ] = localB -> liu5zcrfj4 [ 0 ] ; tmp_j [ 33 ] =
localB -> liu5zcrfj4 [ 1 ] ; tmp_j [ 34 ] = localB -> liu5zcrfj4 [ 2 ] ;
tmp_j [ 35 ] = localB -> liu5zcrfj4 [ 3 ] ; tmp_f [ 9 ] = 36 ; tmp_j [ 36 ] =
localB -> aouy4fq24a [ 0 ] ; tmp_j [ 37 ] = localB -> aouy4fq24a [ 1 ] ;
tmp_j [ 38 ] = localB -> aouy4fq24a [ 2 ] ; tmp_j [ 39 ] = localB ->
aouy4fq24a [ 3 ] ; tmp_f [ 10 ] = 40 ; tmp_j [ 40 ] = localB -> p2s2cafweo [
0 ] ; tmp_j [ 41 ] = localB -> p2s2cafweo [ 1 ] ; tmp_j [ 42 ] = localB ->
p2s2cafweo [ 2 ] ; tmp_j [ 43 ] = localB -> p2s2cafweo [ 3 ] ; tmp_f [ 11 ] =
44 ; tmp_j [ 44 ] = localB -> nye3tmgwgy [ 0 ] ; tmp_j [ 45 ] = localB ->
nye3tmgwgy [ 1 ] ; tmp_j [ 46 ] = localB -> nye3tmgwgy [ 2 ] ; tmp_j [ 47 ] =
localB -> nye3tmgwgy [ 3 ] ; tmp_f [ 12 ] = 48 ; tmp_j [ 48 ] = localB ->
bi0hotz3gn [ 0 ] ; tmp_j [ 49 ] = localB -> bi0hotz3gn [ 1 ] ; tmp_j [ 50 ] =
localB -> bi0hotz3gn [ 2 ] ; tmp_j [ 51 ] = localB -> bi0hotz3gn [ 3 ] ;
tmp_f [ 13 ] = 52 ; tmp_j [ 52 ] = localB -> g51ukhglo4 [ 0 ] ; tmp_j [ 53 ]
= localB -> g51ukhglo4 [ 1 ] ; tmp_j [ 54 ] = localB -> g51ukhglo4 [ 2 ] ;
tmp_j [ 55 ] = localB -> g51ukhglo4 [ 3 ] ; tmp_f [ 14 ] = 56 ; tmp_j [ 56 ]
= localB -> pvdrbthk0m [ 0 ] ; tmp_j [ 57 ] = localB -> pvdrbthk0m [ 1 ] ;
tmp_j [ 58 ] = localB -> pvdrbthk0m [ 2 ] ; tmp_j [ 59 ] = localB ->
pvdrbthk0m [ 3 ] ; tmp_f [ 15 ] = 60 ; tmp_j [ 60 ] = localB -> mvrr1vhnj4 [
0 ] ; tmp_j [ 61 ] = localB -> mvrr1vhnj4 [ 1 ] ; tmp_j [ 62 ] = localB ->
mvrr1vhnj4 [ 2 ] ; tmp_j [ 63 ] = localB -> mvrr1vhnj4 [ 3 ] ; tmp_f [ 16 ] =
64 ; tmp_j [ 64 ] = localB -> bshxu2dzdn [ 0 ] ; tmp_j [ 65 ] = localB ->
bshxu2dzdn [ 1 ] ; tmp_j [ 66 ] = localB -> bshxu2dzdn [ 2 ] ; tmp_j [ 67 ] =
localB -> bshxu2dzdn [ 3 ] ; tmp_f [ 17 ] = 68 ; tmp_j [ 68 ] = localB ->
dcxpo3gwp5 [ 0 ] ; tmp_j [ 69 ] = localB -> dcxpo3gwp5 [ 1 ] ; tmp_j [ 70 ] =
localB -> dcxpo3gwp5 [ 2 ] ; tmp_j [ 71 ] = localB -> dcxpo3gwp5 [ 3 ] ;
tmp_f [ 18 ] = 72 ; tmp_j [ 72 ] = localB -> pyvnbbh4e0 [ 0 ] ; tmp_j [ 73 ]
= localB -> pyvnbbh4e0 [ 1 ] ; tmp_j [ 74 ] = localB -> pyvnbbh4e0 [ 2 ] ;
tmp_j [ 75 ] = localB -> pyvnbbh4e0 [ 3 ] ; tmp_f [ 19 ] = 76 ; tmp_j [ 76 ]
= localB -> kal5vypdsn [ 0 ] ; tmp_j [ 77 ] = localB -> kal5vypdsn [ 1 ] ;
tmp_j [ 78 ] = localB -> kal5vypdsn [ 2 ] ; tmp_j [ 79 ] = localB ->
kal5vypdsn [ 3 ] ; tmp_f [ 20 ] = 80 ; tmp_j [ 80 ] = localB -> d1gahwve5x [
0 ] ; tmp_j [ 81 ] = localB -> d1gahwve5x [ 1 ] ; tmp_j [ 82 ] = localB ->
d1gahwve5x [ 2 ] ; tmp_j [ 83 ] = localB -> d1gahwve5x [ 3 ] ; tmp_f [ 21 ] =
84 ; tmp_j [ 84 ] = localB -> em0vsjuvjn [ 0 ] ; tmp_j [ 85 ] = localB ->
em0vsjuvjn [ 1 ] ; tmp_j [ 86 ] = localB -> em0vsjuvjn [ 2 ] ; tmp_j [ 87 ] =
localB -> em0vsjuvjn [ 3 ] ; tmp_f [ 22 ] = 88 ; tmp_j [ 88 ] = localB ->
dlgwn2r2ef [ 0 ] ; tmp_j [ 89 ] = localB -> dlgwn2r2ef [ 1 ] ; tmp_j [ 90 ] =
localB -> dlgwn2r2ef [ 2 ] ; tmp_j [ 91 ] = localB -> dlgwn2r2ef [ 3 ] ;
tmp_f [ 23 ] = 92 ; tmp_j [ 92 ] = localB -> j3jb4ek1c4 [ 0 ] ; tmp_j [ 93 ]
= localB -> j3jb4ek1c4 [ 1 ] ; tmp_j [ 94 ] = localB -> j3jb4ek1c4 [ 2 ] ;
tmp_j [ 95 ] = localB -> j3jb4ek1c4 [ 3 ] ; tmp_f [ 24 ] = 96 ; tmp_j [ 96 ]
= localB -> chdmmuvupy [ 0 ] ; tmp_j [ 97 ] = localB -> chdmmuvupy [ 1 ] ;
tmp_j [ 98 ] = localB -> chdmmuvupy [ 2 ] ; tmp_j [ 99 ] = localB ->
chdmmuvupy [ 3 ] ; tmp_f [ 25 ] = 100 ; tmp_j [ 100 ] = localB -> if4fdhdm21
[ 0 ] ; tmp_j [ 101 ] = localB -> if4fdhdm21 [ 1 ] ; tmp_j [ 102 ] = localB
-> if4fdhdm21 [ 2 ] ; tmp_j [ 103 ] = localB -> if4fdhdm21 [ 3 ] ; tmp_f [ 26
] = 104 ; tmp_j [ 104 ] = localB -> g3exmselxb [ 0 ] ; tmp_j [ 105 ] = localB
-> g3exmselxb [ 1 ] ; tmp_j [ 106 ] = localB -> g3exmselxb [ 2 ] ; tmp_j [
107 ] = localB -> g3exmselxb [ 3 ] ; tmp_f [ 27 ] = 108 ; tmp_j [ 108 ] =
localB -> lhltvb5x0u [ 0 ] ; tmp_j [ 109 ] = localB -> lhltvb5x0u [ 1 ] ;
tmp_j [ 110 ] = localB -> lhltvb5x0u [ 2 ] ; tmp_j [ 111 ] = localB ->
lhltvb5x0u [ 3 ] ; tmp_f [ 28 ] = 112 ; tmp_j [ 112 ] = localB -> fvvjmasvex
[ 0 ] ; tmp_j [ 113 ] = localB -> fvvjmasvex [ 1 ] ; tmp_j [ 114 ] = localB
-> fvvjmasvex [ 2 ] ; tmp_j [ 115 ] = localB -> fvvjmasvex [ 3 ] ; tmp_f [ 29
] = 116 ; tmp_j [ 116 ] = localB -> b0o3ycinko [ 0 ] ; tmp_j [ 117 ] = localB
-> b0o3ycinko [ 1 ] ; tmp_j [ 118 ] = localB -> b0o3ycinko [ 2 ] ; tmp_j [
119 ] = localB -> b0o3ycinko [ 3 ] ; tmp_f [ 30 ] = 120 ; tmp_j [ 120 ] =
localB -> kimp5cuqck [ 0 ] ; tmp_j [ 121 ] = localB -> kimp5cuqck [ 1 ] ;
tmp_j [ 122 ] = localB -> kimp5cuqck [ 2 ] ; tmp_j [ 123 ] = localB ->
kimp5cuqck [ 3 ] ; tmp_f [ 31 ] = 124 ; tmp_j [ 124 ] = localB -> moqx30egka
[ 0 ] ; tmp_j [ 125 ] = localB -> moqx30egka [ 1 ] ; tmp_j [ 126 ] = localB
-> moqx30egka [ 2 ] ; tmp_j [ 127 ] = localB -> moqx30egka [ 3 ] ; tmp_f [ 32
] = 128 ; memcpy ( & tmp_j [ 128 ] , & localB -> oqxwd0wuz4 [ 0 ] , 337U *
sizeof ( real_T ) ) ; tmp_f [ 33 ] = 465 ; simulationData -> mData ->
mInputValues . mN = 465 ; simulationData -> mData -> mInputValues . mX = &
tmp_j [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 34 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_f [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 6 ; simulationData -> mData ->
mOutputs . mX = & localB -> i30ign0fy1 [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) localDW -> icwkl4z4im ;
diagnosticTree_e = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( ( NeslSimulator * ) localDW
-> dm12q5nbkt , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if
( i != 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( dow0ryovld ->
_mdlRefSfcnS ) ) ; if ( tmp_p ) { msg_e = rtw_diagnostics_msg (
diagnosticTree_e ) ; ssSetErrorStatus ( dow0ryovld -> _mdlRefSfcnS , msg_e )
; } } if ( tmp && simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( dow0ryovld -> _mdlRefSfcnS ) ; }
pnbqobymjt [ 0 ] = localB -> fgwsff3ksj [ 5 ] ; pnbqobymjt [ 1 ] = localB ->
fgwsff3ksj [ 6 ] ; pnbqobymjt [ 2 ] = localB -> i30ign0fy1 [ 0 ] ; pnbqobymjt
[ 3 ] = localB -> fgwsff3ksj [ 7 ] ; pnbqobymjt [ 4 ] = localB -> fgwsff3ksj
[ 8 ] ; pnbqobymjt [ 5 ] = localB -> i30ign0fy1 [ 1 ] ; pnbqobymjt [ 6 ] =
localB -> fgwsff3ksj [ 9 ] ; pnbqobymjt [ 7 ] = localB -> fgwsff3ksj [ 10 ] ;
pnbqobymjt [ 8 ] = localB -> i30ign0fy1 [ 2 ] ; for ( i = 0 ; i < 7 ; i ++ )
{ pnbqobymjt [ i + 9 ] = localB -> fgwsff3ksj [ i + 11 ] ; } pnbqobymjt [ 16
] = localB -> i30ign0fy1 [ 3 ] ; pnbqobymjt [ 17 ] = localB -> i30ign0fy1 [ 4
] ; pnbqobymjt [ 18 ] = localB -> i30ign0fy1 [ 5 ] ; ms0mskwb5v_p = localB ->
fgwsff3ksj [ 11 ] * localB -> fgwsff3ksj [ 11 ] ; myzkbnzlx1_p = localB ->
fgwsff3ksj [ 12 ] * localB -> fgwsff3ksj [ 12 ] ; bfbtb53srr_p = localB ->
fgwsff3ksj [ 13 ] * localB -> fgwsff3ksj [ 13 ] ; c0jnethwvi_p = localB ->
fgwsff3ksj [ 14 ] * localB -> fgwsff3ksj [ 14 ] ; myzkbnzlx1_p = ( (
ms0mskwb5v_p + myzkbnzlx1_p ) + bfbtb53srr_p ) + c0jnethwvi_p ; if (
rtmIsMajorTimeStep ( dow0ryovld ) ) { if ( localDW -> m204rvu0ko != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( dow0ryovld -> _mdlRefSfcnS ) ;
localDW -> m204rvu0ko = 0 ; } ms0mskwb5v_p = muDoubleScalarSqrt (
myzkbnzlx1_p ) ; } else if ( myzkbnzlx1_p < 0.0 ) { ms0mskwb5v_p = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( myzkbnzlx1_p ) ) ; localDW ->
m204rvu0ko = 1 ; } else { ms0mskwb5v_p = muDoubleScalarSqrt ( myzkbnzlx1_p )
; } myzkbnzlx1_p = localB -> fgwsff3ksj [ 11 ] / ms0mskwb5v_p ; bfbtb53srr_p
= localB -> fgwsff3ksj [ 12 ] / ms0mskwb5v_p ; c0jnethwvi_p = localB ->
fgwsff3ksj [ 13 ] / ms0mskwb5v_p ; ms0mskwb5v_p = localB -> fgwsff3ksj [ 14 ]
/ ms0mskwb5v_p ; localB -> dtqgh3atwp = ( bfbtb53srr_p * ms0mskwb5v_p -
myzkbnzlx1_p * c0jnethwvi_p ) * - 2.0 ; rtPrevAction = localDW -> e5xpj42ysr
; if ( rtmIsMajorTimeStep ( dow0ryovld ) ) { if ( localB -> dtqgh3atwp > 1.0
) { rtAction = 0 ; } else if ( localB -> dtqgh3atwp < - 1.0 ) { rtAction = 1
; } else { rtAction = 2 ; } localDW -> e5xpj42ysr = rtAction ; } else {
rtAction = localDW -> e5xpj42ysr ; } if ( rtPrevAction != rtAction ) { switch
( rtPrevAction ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep (
dow0ryovld -> _mdlRefSfcnS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( dow0ryovld -> _mdlRefSfcnS ) ;
break ; case 2 : ssSetBlockStateForSolverChangedAtMajorStep ( dow0ryovld ->
_mdlRefSfcnS ) ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction !=
rtPrevAction ) { if ( rtmGetTaskTime ( dow0ryovld , 0 ) != rtmGetTStart (
dow0ryovld ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( dow0ryovld ->
_mdlRefSfcnS ) ; } } if ( rtmIsMajorTimeStep ( dow0ryovld ) && rtmIsSampleHit
( dow0ryovld , 1 , 0 ) ) { localB -> havnmixejb = p301ouc1q1 . P_0 ; } if (
rtmIsMajorTimeStep ( dow0ryovld ) ) { srUpdateBC ( localDW -> imoucwn4pi ) ;
} break ; case 1 : if ( rtAction != rtPrevAction ) { if ( rtmGetTaskTime (
dow0ryovld , 0 ) != rtmGetTStart ( dow0ryovld ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( dow0ryovld -> _mdlRefSfcnS ) ; }
} if ( rtmIsMajorTimeStep ( dow0ryovld ) && rtmIsSampleHit ( dow0ryovld , 1 ,
0 ) ) { localB -> havnmixejb = p301ouc1q1 . P_1 ; } if ( rtmIsMajorTimeStep (
dow0ryovld ) ) { srUpdateBC ( localDW -> jpbdwgjnfq ) ; } break ; case 2 : if
( rtAction != rtPrevAction ) { if ( rtmGetTaskTime ( dow0ryovld , 0 ) !=
rtmGetTStart ( dow0ryovld ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
dow0ryovld -> _mdlRefSfcnS ) ; } } localB -> havnmixejb = localB ->
dtqgh3atwp ; if ( rtmIsMajorTimeStep ( dow0ryovld ) ) { srUpdateBC ( localDW
-> mpbcjlf4vh ) ; } break ; } tmp_k = myzkbnzlx1_p * myzkbnzlx1_p ; tmp_b =
bfbtb53srr_p * bfbtb53srr_p ; tmp_n = c0jnethwvi_p * c0jnethwvi_p ; tmp_l =
ms0mskwb5v_p * ms0mskwb5v_p ; j3xkxzcsl1 [ 0 ] = muDoubleScalarAtan2 ( (
c0jnethwvi_p * ms0mskwb5v_p + myzkbnzlx1_p * bfbtb53srr_p ) * 2.0 , ( ( tmp_k
- tmp_b ) - tmp_n ) + tmp_l ) ; if ( localB -> havnmixejb > 1.0 ) { tmp_c =
1.0 ; } else if ( localB -> havnmixejb < - 1.0 ) { tmp_c = - 1.0 ; } else {
tmp_c = localB -> havnmixejb ; } j3xkxzcsl1 [ 1 ] = muDoubleScalarAsin (
tmp_c ) ; j3xkxzcsl1 [ 2 ] = muDoubleScalarAtan2 ( ( bfbtb53srr_p *
c0jnethwvi_p + myzkbnzlx1_p * ms0mskwb5v_p ) * 2.0 , ( ( tmp_k + tmp_b ) -
tmp_n ) - tmp_l ) ; h44z2ibzzi [ 0 ] = localB -> fgwsff3ksj [ 5 ] ;
h44z2ibzzi [ 1 ] = localB -> fgwsff3ksj [ 7 ] ; h44z2ibzzi [ 2 ] = localB ->
fgwsff3ksj [ 9 ] ; ldmfpa0dr1 = look_SplNBinSZcd ( 1U , & localB ->
bhqis4sxt5 [ 2 ] , ( rt_LUTSplineWork * ) & localDW -> pgasqj3fqb [ 0 ] ) ;
bi4n0bwh45 = look_SplNBinSZcd ( 1U , & localB -> bhqis4sxt5 [ 3 ] , (
rt_LUTSplineWork * ) & localDW -> er0jqa5cdn [ 0 ] ) ; d022peazfq =
look_SplNBinSZcd ( 1U , & localB -> bhqis4sxt5 [ 4 ] , ( rt_LUTSplineWork * )
& localDW -> dfyeynzkng [ 0 ] ) ; b1npu1rlno = look_SplNBinSZcd ( 1U , &
localB -> bhqis4sxt5 [ 5 ] , ( rt_LUTSplineWork * ) & localDW -> p15bhe0yyw [
0 ] ) ; o53bhlvsme = look_SplNBinSZcd ( 1U , & localB -> bhqis4sxt5 [ 6 ] , (
rt_LUTSplineWork * ) & localDW -> ezjfbszqd0 [ 0 ] ) ; hskx2osyh4 =
look_SplNBinSZcd ( 1U , & localB -> bhqis4sxt5 [ 7 ] , ( rt_LUTSplineWork * )
& localDW -> a0m3yv2bcl [ 0 ] ) ; ahlhwrc3ei = look_SplNBinSZcd ( 1U , &
localB -> bhqis4sxt5 [ 0 ] , ( rt_LUTSplineWork * ) & localDW -> aofyrqldyl [
0 ] ) ; isxbdyljap = look_SplNBinSZcd ( 1U , & localB -> bhqis4sxt5 [ 1 ] , (
rt_LUTSplineWork * ) & localDW -> fsbwf5wyi1 [ 0 ] ) ; tmpForInput [ 0 ] =
ahlhwrc3ei ; tmpForInput [ 1 ] = isxbdyljap ; tmpForInput [ 2 ] = ldmfpa0dr1
; tmpForInput [ 3 ] = bi4n0bwh45 ; tmpForInput [ 4 ] = d022peazfq ;
tmpForInput [ 5 ] = b1npu1rlno ; tmpForInput [ 6 ] = o53bhlvsme ; tmpForInput
[ 7 ] = hskx2osyh4 ; ms0mskwb5v_p = - 0.0 ; for ( i = 0 ; i < 8 ; i ++ ) {
ms0mskwb5v_p += tmpForInput [ i ] ; } * d3y0blcew4 = p301ouc1q1 . P_185 -
p301ouc1q1 . P_183 * ms0mskwb5v_p * time_tmp ; localB -> mpfdfeery1 =
p301ouc1q1 . P_184 * * d3y0blcew4 ; dzqnhl0ntf [ 4 ] = k2e5440l32_p ;
dzqnhl0ntf [ 5 ] = kuccsxa2hg_p ; for ( i = 0 ; i < 5 ; i ++ ) { bkrgwiz53i [
i ] = localB -> fgwsff3ksj [ i ] ; } } void Aerial_Inspection_Octa_RotorTID3
( void ) { } void jrblk3hduc ( a0hhroei4y * const dow0ryovld , fiyuauag0n *
localB , cysfao30we * localDW , obzgstfl0b * localX ) { NeslSimulationData *
simulationData ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree
* diagnosticTree ; char * msg ; real_T tmp_p [ 128 ] ; real_T time ; int32_T
tmp_i ; int_T tmp_e [ 33 ] ; boolean_T tmp ; if ( rtmIsMajorTimeStep (
dow0ryovld ) ) { if ( memcmp ( dow0ryovld -> nonContDerivSignal [ 0 ] .
pCurrVal , dow0ryovld -> nonContDerivSignal [ 0 ] . pPrevVal , dow0ryovld ->
nonContDerivSignal [ 0 ] . sizeInBytes ) != 0 ) { ( void ) memcpy (
dow0ryovld -> nonContDerivSignal [ 0 ] . pPrevVal , dow0ryovld ->
nonContDerivSignal [ 0 ] . pCurrVal , dow0ryovld -> nonContDerivSignal [ 0 ]
. sizeInBytes ) ; ssSetSolverNeedsReset ( dow0ryovld -> _mdlRefSfcnS ) ; } }
if ( rtmIsMajorTimeStep ( dow0ryovld ) && rtmIsSampleHit ( dow0ryovld , 2 , 0
) ) { localDW -> onn5vmv02x = localB -> mpfdfeery1 ; } simulationData = (
NeslSimulationData * ) localDW -> bhq0wza4qw ; time = rtmGetTaskTime (
dow0ryovld , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 337 ; simulationData -> mData -> mContStates . mX = & localX -> f4cwt4gmec
[ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData ->
mData -> mDiscStates . mX = & localDW -> i5wehflxkv ; simulationData -> mData
-> mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = &
localDW -> opoqs3zl5e ; tmp = ( rtmIsMajorTimeStep ( dow0ryovld ) &&
ssGetSolverFoundContZcEvents ( dow0ryovld -> _mdlRefSfcnS ) ) ;
simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = rtmIsMajorTimeStep ( dow0ryovld ) ; tmp =
_ssGetSolverAssertCheck ( dow0ryovld -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC (
dow0ryovld -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( dow0ryovld
-> _mdlRefSfcnS ) ; simulationData -> mData -> mIsComputingJacobian = tmp ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
dow0ryovld -> _mdlRefSfcnS ) != 0 ) ; tmp = ssIsSolverRequestingReset (
dow0ryovld -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp = ssGetIsOkayToUpdateMode ( dow0ryovld
-> _mdlRefSfcnS ) ; simulationData -> mData -> mIsOkayToUpdateMode = tmp ;
tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = localB -> evgjlxf1ht [ 0 ] ; tmp_p [ 1 ] =
localB -> evgjlxf1ht [ 1 ] ; tmp_p [ 2 ] = localB -> evgjlxf1ht [ 2 ] ; tmp_p
[ 3 ] = localB -> evgjlxf1ht [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB
-> i5l4at4n2i [ 0 ] ; tmp_p [ 5 ] = localB -> i5l4at4n2i [ 1 ] ; tmp_p [ 6 ]
= localB -> i5l4at4n2i [ 2 ] ; tmp_p [ 7 ] = localB -> i5l4at4n2i [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = localB -> eqi5ccufrp [ 0 ] ; tmp_p [ 9 ] =
localB -> eqi5ccufrp [ 1 ] ; tmp_p [ 10 ] = localB -> eqi5ccufrp [ 2 ] ;
tmp_p [ 11 ] = localB -> eqi5ccufrp [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
localB -> i1k4tod4de [ 0 ] ; tmp_p [ 13 ] = localB -> i1k4tod4de [ 1 ] ;
tmp_p [ 14 ] = localB -> i1k4tod4de [ 2 ] ; tmp_p [ 15 ] = localB ->
i1k4tod4de [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = localB -> mr3naztf0y [ 0
] ; tmp_p [ 17 ] = localB -> mr3naztf0y [ 1 ] ; tmp_p [ 18 ] = localB ->
mr3naztf0y [ 2 ] ; tmp_p [ 19 ] = localB -> mr3naztf0y [ 3 ] ; tmp_e [ 5 ] =
20 ; tmp_p [ 20 ] = localB -> karsi5ef1u [ 0 ] ; tmp_p [ 21 ] = localB ->
karsi5ef1u [ 1 ] ; tmp_p [ 22 ] = localB -> karsi5ef1u [ 2 ] ; tmp_p [ 23 ] =
localB -> karsi5ef1u [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = localB ->
bavqzbkzht [ 0 ] ; tmp_p [ 25 ] = localB -> bavqzbkzht [ 1 ] ; tmp_p [ 26 ] =
localB -> bavqzbkzht [ 2 ] ; tmp_p [ 27 ] = localB -> bavqzbkzht [ 3 ] ;
tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = localB -> nzss3y2ceo [ 0 ] ; tmp_p [ 29 ] =
localB -> nzss3y2ceo [ 1 ] ; tmp_p [ 30 ] = localB -> nzss3y2ceo [ 2 ] ;
tmp_p [ 31 ] = localB -> nzss3y2ceo [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
localB -> liu5zcrfj4 [ 0 ] ; tmp_p [ 33 ] = localB -> liu5zcrfj4 [ 1 ] ;
tmp_p [ 34 ] = localB -> liu5zcrfj4 [ 2 ] ; tmp_p [ 35 ] = localB ->
liu5zcrfj4 [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = localB -> aouy4fq24a [ 0
] ; tmp_p [ 37 ] = localB -> aouy4fq24a [ 1 ] ; tmp_p [ 38 ] = localB ->
aouy4fq24a [ 2 ] ; tmp_p [ 39 ] = localB -> aouy4fq24a [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = localB -> p2s2cafweo [ 0 ] ; tmp_p [ 41 ] = localB ->
p2s2cafweo [ 1 ] ; tmp_p [ 42 ] = localB -> p2s2cafweo [ 2 ] ; tmp_p [ 43 ] =
localB -> p2s2cafweo [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = localB ->
nye3tmgwgy [ 0 ] ; tmp_p [ 45 ] = localB -> nye3tmgwgy [ 1 ] ; tmp_p [ 46 ] =
localB -> nye3tmgwgy [ 2 ] ; tmp_p [ 47 ] = localB -> nye3tmgwgy [ 3 ] ;
tmp_e [ 12 ] = 48 ; tmp_p [ 48 ] = localB -> bi0hotz3gn [ 0 ] ; tmp_p [ 49 ]
= localB -> bi0hotz3gn [ 1 ] ; tmp_p [ 50 ] = localB -> bi0hotz3gn [ 2 ] ;
tmp_p [ 51 ] = localB -> bi0hotz3gn [ 3 ] ; tmp_e [ 13 ] = 52 ; tmp_p [ 52 ]
= localB -> g51ukhglo4 [ 0 ] ; tmp_p [ 53 ] = localB -> g51ukhglo4 [ 1 ] ;
tmp_p [ 54 ] = localB -> g51ukhglo4 [ 2 ] ; tmp_p [ 55 ] = localB ->
g51ukhglo4 [ 3 ] ; tmp_e [ 14 ] = 56 ; tmp_p [ 56 ] = localB -> pvdrbthk0m [
0 ] ; tmp_p [ 57 ] = localB -> pvdrbthk0m [ 1 ] ; tmp_p [ 58 ] = localB ->
pvdrbthk0m [ 2 ] ; tmp_p [ 59 ] = localB -> pvdrbthk0m [ 3 ] ; tmp_e [ 15 ] =
60 ; tmp_p [ 60 ] = localB -> mvrr1vhnj4 [ 0 ] ; tmp_p [ 61 ] = localB ->
mvrr1vhnj4 [ 1 ] ; tmp_p [ 62 ] = localB -> mvrr1vhnj4 [ 2 ] ; tmp_p [ 63 ] =
localB -> mvrr1vhnj4 [ 3 ] ; tmp_e [ 16 ] = 64 ; tmp_p [ 64 ] = localB ->
bshxu2dzdn [ 0 ] ; tmp_p [ 65 ] = localB -> bshxu2dzdn [ 1 ] ; tmp_p [ 66 ] =
localB -> bshxu2dzdn [ 2 ] ; tmp_p [ 67 ] = localB -> bshxu2dzdn [ 3 ] ;
tmp_e [ 17 ] = 68 ; tmp_p [ 68 ] = localB -> dcxpo3gwp5 [ 0 ] ; tmp_p [ 69 ]
= localB -> dcxpo3gwp5 [ 1 ] ; tmp_p [ 70 ] = localB -> dcxpo3gwp5 [ 2 ] ;
tmp_p [ 71 ] = localB -> dcxpo3gwp5 [ 3 ] ; tmp_e [ 18 ] = 72 ; tmp_p [ 72 ]
= localB -> pyvnbbh4e0 [ 0 ] ; tmp_p [ 73 ] = localB -> pyvnbbh4e0 [ 1 ] ;
tmp_p [ 74 ] = localB -> pyvnbbh4e0 [ 2 ] ; tmp_p [ 75 ] = localB ->
pyvnbbh4e0 [ 3 ] ; tmp_e [ 19 ] = 76 ; tmp_p [ 76 ] = localB -> kal5vypdsn [
0 ] ; tmp_p [ 77 ] = localB -> kal5vypdsn [ 1 ] ; tmp_p [ 78 ] = localB ->
kal5vypdsn [ 2 ] ; tmp_p [ 79 ] = localB -> kal5vypdsn [ 3 ] ; tmp_e [ 20 ] =
80 ; tmp_p [ 80 ] = localB -> d1gahwve5x [ 0 ] ; tmp_p [ 81 ] = localB ->
d1gahwve5x [ 1 ] ; tmp_p [ 82 ] = localB -> d1gahwve5x [ 2 ] ; tmp_p [ 83 ] =
localB -> d1gahwve5x [ 3 ] ; tmp_e [ 21 ] = 84 ; tmp_p [ 84 ] = localB ->
em0vsjuvjn [ 0 ] ; tmp_p [ 85 ] = localB -> em0vsjuvjn [ 1 ] ; tmp_p [ 86 ] =
localB -> em0vsjuvjn [ 2 ] ; tmp_p [ 87 ] = localB -> em0vsjuvjn [ 3 ] ;
tmp_e [ 22 ] = 88 ; tmp_p [ 88 ] = localB -> dlgwn2r2ef [ 0 ] ; tmp_p [ 89 ]
= localB -> dlgwn2r2ef [ 1 ] ; tmp_p [ 90 ] = localB -> dlgwn2r2ef [ 2 ] ;
tmp_p [ 91 ] = localB -> dlgwn2r2ef [ 3 ] ; tmp_e [ 23 ] = 92 ; tmp_p [ 92 ]
= localB -> j3jb4ek1c4 [ 0 ] ; tmp_p [ 93 ] = localB -> j3jb4ek1c4 [ 1 ] ;
tmp_p [ 94 ] = localB -> j3jb4ek1c4 [ 2 ] ; tmp_p [ 95 ] = localB ->
j3jb4ek1c4 [ 3 ] ; tmp_e [ 24 ] = 96 ; tmp_p [ 96 ] = localB -> chdmmuvupy [
0 ] ; tmp_p [ 97 ] = localB -> chdmmuvupy [ 1 ] ; tmp_p [ 98 ] = localB ->
chdmmuvupy [ 2 ] ; tmp_p [ 99 ] = localB -> chdmmuvupy [ 3 ] ; tmp_e [ 25 ] =
100 ; tmp_p [ 100 ] = localB -> if4fdhdm21 [ 0 ] ; tmp_p [ 101 ] = localB ->
if4fdhdm21 [ 1 ] ; tmp_p [ 102 ] = localB -> if4fdhdm21 [ 2 ] ; tmp_p [ 103 ]
= localB -> if4fdhdm21 [ 3 ] ; tmp_e [ 26 ] = 104 ; tmp_p [ 104 ] = localB ->
g3exmselxb [ 0 ] ; tmp_p [ 105 ] = localB -> g3exmselxb [ 1 ] ; tmp_p [ 106 ]
= localB -> g3exmselxb [ 2 ] ; tmp_p [ 107 ] = localB -> g3exmselxb [ 3 ] ;
tmp_e [ 27 ] = 108 ; tmp_p [ 108 ] = localB -> lhltvb5x0u [ 0 ] ; tmp_p [ 109
] = localB -> lhltvb5x0u [ 1 ] ; tmp_p [ 110 ] = localB -> lhltvb5x0u [ 2 ] ;
tmp_p [ 111 ] = localB -> lhltvb5x0u [ 3 ] ; tmp_e [ 28 ] = 112 ; tmp_p [ 112
] = localB -> fvvjmasvex [ 0 ] ; tmp_p [ 113 ] = localB -> fvvjmasvex [ 1 ] ;
tmp_p [ 114 ] = localB -> fvvjmasvex [ 2 ] ; tmp_p [ 115 ] = localB ->
fvvjmasvex [ 3 ] ; tmp_e [ 29 ] = 116 ; tmp_p [ 116 ] = localB -> b0o3ycinko
[ 0 ] ; tmp_p [ 117 ] = localB -> b0o3ycinko [ 1 ] ; tmp_p [ 118 ] = localB
-> b0o3ycinko [ 2 ] ; tmp_p [ 119 ] = localB -> b0o3ycinko [ 3 ] ; tmp_e [ 30
] = 120 ; tmp_p [ 120 ] = localB -> kimp5cuqck [ 0 ] ; tmp_p [ 121 ] = localB
-> kimp5cuqck [ 1 ] ; tmp_p [ 122 ] = localB -> kimp5cuqck [ 2 ] ; tmp_p [
123 ] = localB -> kimp5cuqck [ 3 ] ; tmp_e [ 31 ] = 124 ; tmp_p [ 124 ] =
localB -> moqx30egka [ 0 ] ; tmp_p [ 125 ] = localB -> moqx30egka [ 1 ] ;
tmp_p [ 126 ] = localB -> moqx30egka [ 2 ] ; tmp_p [ 127 ] = localB ->
moqx30egka [ 3 ] ; tmp_e [ 32 ] = 128 ; simulationData -> mData ->
mInputValues . mN = 128 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 33 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) localDW -> epe2vsgg3i ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) localDW -> pak131zhvo ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( dow0ryovld -> _mdlRefSfcnS )
) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( dow0ryovld -> _mdlRefSfcnS , msg ) ; } } } void
jrblk3hducTID3 ( void ) { } void glqprwxucg ( a0hhroei4y * const dow0ryovld ,
const real_T kinegxqpfo [ 6 ] , const real_T cwz0ue1s4z [ 2 ] , fiyuauag0n *
localB , cysfao30we * localDW , obzgstfl0b * localX , mnmdmnlsde * localXdot
) { NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 128 ] ; real_T time ; int_T tmp_e [ 33 ] ; int_T is ; boolean_T tmp ;
localXdot -> p1v0h4exsb = localB -> dfeop2ipba ; localXdot -> dxhpmwzy2b =
localB -> jff4a1tvq2 ; localXdot -> nv0jw30s25 = localB -> ezgwilii4z ;
localXdot -> losfm0ag3e = localB -> fscn2aw4fg ; localXdot -> fhi4ekx3s4 =
localB -> cwi4n21kaf ; localXdot -> a4wdpuewmu = localB -> g5z2zydp3y ;
localXdot -> knn0fgcr4b = localB -> mi41qgkbu0 ; localXdot -> izdmv0eo0b =
localB -> dkpbryd3fi ; localXdot -> aei12ppdcn = localB -> iswndugjl3 ;
localXdot -> gbyi34exyn = localB -> av5xzkqelq ; localXdot -> ghhbezp2mj [ 0
] = 0.0 ; localXdot -> ghhbezp2mj [ 0 ] += p301ouc1q1 . P_12 [ 0 ] * localX
-> ghhbezp2mj [ 0 ] ; localXdot -> ghhbezp2mj [ 1 ] = 0.0 ; localXdot ->
ghhbezp2mj [ 0 ] += p301ouc1q1 . P_12 [ 1 ] * localX -> ghhbezp2mj [ 1 ] ;
localXdot -> ghhbezp2mj [ 1 ] += localX -> ghhbezp2mj [ 0 ] ; localXdot ->
ghhbezp2mj [ 0 ] += cwz0ue1s4z [ 1 ] ; localXdot -> j3kusqpu1x = localB ->
f23xm2xajr ; localXdot -> czbclz1zip = localB -> gpzwxdvjt0 ; localXdot ->
oyihqzforx [ 0 ] = 0.0 ; localXdot -> oyihqzforx [ 0 ] += p301ouc1q1 . P_17 [
0 ] * localX -> oyihqzforx [ 0 ] ; localXdot -> oyihqzforx [ 1 ] = 0.0 ;
localXdot -> oyihqzforx [ 0 ] += p301ouc1q1 . P_17 [ 1 ] * localX ->
oyihqzforx [ 1 ] ; localXdot -> oyihqzforx [ 1 ] += localX -> oyihqzforx [ 0
] ; localXdot -> oyihqzforx [ 0 ] += cwz0ue1s4z [ 0 ] ; localXdot ->
kfizngqa5k = localB -> j2hk55tkjw ; localXdot -> drlfddh2uj = localB ->
mswlix3eoq ; localXdot -> oofjhbkw2h [ 0 ] = 0.0 ; localXdot -> oofjhbkw2h [
0 ] += p301ouc1q1 . P_22 [ 0 ] * localX -> oofjhbkw2h [ 0 ] ; localXdot ->
oofjhbkw2h [ 1 ] = 0.0 ; localXdot -> oofjhbkw2h [ 0 ] += p301ouc1q1 . P_22 [
1 ] * localX -> oofjhbkw2h [ 1 ] ; localXdot -> oofjhbkw2h [ 1 ] += localX ->
oofjhbkw2h [ 0 ] ; localXdot -> oofjhbkw2h [ 0 ] += kinegxqpfo [ 0 ] ;
localXdot -> jfgyjkjhcr = localB -> dfdj0albpo ; localXdot -> lhrpvc5j0p =
localB -> ojd4vjol3c ; localXdot -> imazphqvq3 [ 0 ] = 0.0 ; localXdot ->
imazphqvq3 [ 0 ] += p301ouc1q1 . P_27 [ 0 ] * localX -> imazphqvq3 [ 0 ] ;
localXdot -> imazphqvq3 [ 1 ] = 0.0 ; localXdot -> imazphqvq3 [ 0 ] +=
p301ouc1q1 . P_27 [ 1 ] * localX -> imazphqvq3 [ 1 ] ; localXdot ->
imazphqvq3 [ 1 ] += localX -> imazphqvq3 [ 0 ] ; localXdot -> imazphqvq3 [ 0
] += kinegxqpfo [ 1 ] ; localXdot -> ebj5mdxeis = localB -> bktriqmwde ;
localXdot -> npzgeukbuo = localB -> brcauwamwe ; localXdot -> ha5wa0eu12 [ 0
] = 0.0 ; localXdot -> ha5wa0eu12 [ 0 ] += p301ouc1q1 . P_32 [ 0 ] * localX
-> ha5wa0eu12 [ 0 ] ; localXdot -> ha5wa0eu12 [ 1 ] = 0.0 ; localXdot ->
ha5wa0eu12 [ 0 ] += p301ouc1q1 . P_32 [ 1 ] * localX -> ha5wa0eu12 [ 1 ] ;
localXdot -> ha5wa0eu12 [ 1 ] += localX -> ha5wa0eu12 [ 0 ] ; localXdot ->
ha5wa0eu12 [ 0 ] += kinegxqpfo [ 2 ] ; localXdot -> ilor50wsw1 = localB ->
grf0b2xpyc ; localXdot -> kawda2xgxq = localB -> eez4t55rmd ; localXdot ->
h0tephdmgw [ 0 ] = 0.0 ; localXdot -> h0tephdmgw [ 0 ] += p301ouc1q1 . P_37 [
0 ] * localX -> h0tephdmgw [ 0 ] ; localXdot -> h0tephdmgw [ 1 ] = 0.0 ;
localXdot -> h0tephdmgw [ 0 ] += p301ouc1q1 . P_37 [ 1 ] * localX ->
h0tephdmgw [ 1 ] ; localXdot -> h0tephdmgw [ 1 ] += localX -> h0tephdmgw [ 0
] ; localXdot -> h0tephdmgw [ 0 ] += kinegxqpfo [ 5 ] ; localXdot ->
pahj1trcml = localB -> glwluawtyp ; localXdot -> pi4unvpwxt = localB ->
kftr21z525 ; localXdot -> cw0wpxwlqz [ 0 ] = 0.0 ; localXdot -> cw0wpxwlqz [
0 ] += p301ouc1q1 . P_42 [ 0 ] * localX -> cw0wpxwlqz [ 0 ] ; localXdot ->
cw0wpxwlqz [ 1 ] = 0.0 ; localXdot -> cw0wpxwlqz [ 0 ] += p301ouc1q1 . P_42 [
1 ] * localX -> cw0wpxwlqz [ 1 ] ; localXdot -> cw0wpxwlqz [ 1 ] += localX ->
cw0wpxwlqz [ 0 ] ; localXdot -> cw0wpxwlqz [ 0 ] += kinegxqpfo [ 4 ] ;
localXdot -> fbn0sbu0o0 = localB -> idoqx1nxf2 ; localXdot -> mqbxf1omqg =
localB -> lczqcapei4 ; localXdot -> mjuwnhdkfa [ 0 ] = 0.0 ; localXdot ->
mjuwnhdkfa [ 0 ] += p301ouc1q1 . P_47 [ 0 ] * localX -> mjuwnhdkfa [ 0 ] ;
localXdot -> mjuwnhdkfa [ 1 ] = 0.0 ; localXdot -> mjuwnhdkfa [ 0 ] +=
p301ouc1q1 . P_47 [ 1 ] * localX -> mjuwnhdkfa [ 1 ] ; localXdot ->
mjuwnhdkfa [ 1 ] += localX -> mjuwnhdkfa [ 0 ] ; localXdot -> mjuwnhdkfa [ 0
] += kinegxqpfo [ 3 ] ; localXdot -> jhsh4lfjex = localB -> of4kngakq4 ;
localXdot -> njt3hse4a3 = 0.0 ; localXdot -> njt3hse4a3 += p301ouc1q1 . P_69
* localX -> njt3hse4a3 ; localXdot -> njt3hse4a3 += localB -> ng4yajypde ;
localXdot -> kl5p04vpi5 = localB -> obxf23ymvb ; localXdot -> kn3ylsggay =
0.0 ; localXdot -> kn3ylsggay += p301ouc1q1 . P_74 * localX -> kn3ylsggay ;
localXdot -> kn3ylsggay += localB -> o02swqx0th ; localXdot -> a3pwm4zjas =
localB -> nankzjs21u ; localXdot -> krv1vdajfr = 0.0 ; localXdot ->
krv1vdajfr += p301ouc1q1 . P_80 * localX -> krv1vdajfr ; localXdot ->
krv1vdajfr += localB -> ajzjd1xedp ; localXdot -> o3nqw2wnxl = localB ->
khkk4tmnkb ; localXdot -> bn00q3futv = 0.0 ; localXdot -> bn00q3futv +=
p301ouc1q1 . P_86 * localX -> bn00q3futv ; localXdot -> bn00q3futv += localB
-> iogl13ovh1 ; localXdot -> ievagdlgod = localB -> j4t5zorru2 ; localXdot ->
ldh2nq2aww = 0.0 ; localXdot -> ldh2nq2aww += p301ouc1q1 . P_92 * localX ->
ldh2nq2aww ; localXdot -> ldh2nq2aww += localB -> nsw25g00j0 ; localXdot ->
lyvz3kakue = localB -> aubfmyym2m ; localXdot -> h5f3s5wdap = 0.0 ; localXdot
-> h5f3s5wdap += p301ouc1q1 . P_97 * localX -> h5f3s5wdap ; localXdot ->
h5f3s5wdap += localB -> ma33ikna4q ; localXdot -> hkg4jofz4c = localB ->
pyzm1400py ; localXdot -> enzktrcwpo = 0.0 ; localXdot -> enzktrcwpo +=
p301ouc1q1 . P_102 * localX -> enzktrcwpo ; localXdot -> enzktrcwpo += localB
-> kiqk2sgpre ; localXdot -> aenbz1vnok = localB -> k2fagdii4h ; localXdot ->
j1ypm44kqt = 0.0 ; localXdot -> j1ypm44kqt += p301ouc1q1 . P_108 * localX ->
j1ypm44kqt ; localXdot -> j1ypm44kqt += localB -> kq20gpz3sx ; simulationData
= ( NeslSimulationData * ) localDW -> bhq0wza4qw ; time = rtmGetTaskTime (
dow0ryovld , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 337 ; simulationData -> mData -> mContStates . mX = & localX -> f4cwt4gmec
[ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData ->
mData -> mDiscStates . mX = & localDW -> i5wehflxkv ; simulationData -> mData
-> mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = &
localDW -> opoqs3zl5e ; tmp = ( rtmIsMajorTimeStep ( dow0ryovld ) &&
ssGetSolverFoundContZcEvents ( dow0ryovld -> _mdlRefSfcnS ) ) ;
simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = rtmIsMajorTimeStep ( dow0ryovld ) ; tmp =
_ssGetSolverAssertCheck ( dow0ryovld -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC (
dow0ryovld -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( dow0ryovld
-> _mdlRefSfcnS ) ; simulationData -> mData -> mIsComputingJacobian = tmp ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
dow0ryovld -> _mdlRefSfcnS ) != 0 ) ; tmp = ssIsSolverRequestingReset (
dow0ryovld -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp = ssGetIsOkayToUpdateMode ( dow0ryovld
-> _mdlRefSfcnS ) ; simulationData -> mData -> mIsOkayToUpdateMode = tmp ;
tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = localB -> evgjlxf1ht [ 0 ] ; tmp_p [ 1 ] =
localB -> evgjlxf1ht [ 1 ] ; tmp_p [ 2 ] = localB -> evgjlxf1ht [ 2 ] ; tmp_p
[ 3 ] = localB -> evgjlxf1ht [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB
-> i5l4at4n2i [ 0 ] ; tmp_p [ 5 ] = localB -> i5l4at4n2i [ 1 ] ; tmp_p [ 6 ]
= localB -> i5l4at4n2i [ 2 ] ; tmp_p [ 7 ] = localB -> i5l4at4n2i [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = localB -> eqi5ccufrp [ 0 ] ; tmp_p [ 9 ] =
localB -> eqi5ccufrp [ 1 ] ; tmp_p [ 10 ] = localB -> eqi5ccufrp [ 2 ] ;
tmp_p [ 11 ] = localB -> eqi5ccufrp [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
localB -> i1k4tod4de [ 0 ] ; tmp_p [ 13 ] = localB -> i1k4tod4de [ 1 ] ;
tmp_p [ 14 ] = localB -> i1k4tod4de [ 2 ] ; tmp_p [ 15 ] = localB ->
i1k4tod4de [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = localB -> mr3naztf0y [ 0
] ; tmp_p [ 17 ] = localB -> mr3naztf0y [ 1 ] ; tmp_p [ 18 ] = localB ->
mr3naztf0y [ 2 ] ; tmp_p [ 19 ] = localB -> mr3naztf0y [ 3 ] ; tmp_e [ 5 ] =
20 ; tmp_p [ 20 ] = localB -> karsi5ef1u [ 0 ] ; tmp_p [ 21 ] = localB ->
karsi5ef1u [ 1 ] ; tmp_p [ 22 ] = localB -> karsi5ef1u [ 2 ] ; tmp_p [ 23 ] =
localB -> karsi5ef1u [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = localB ->
bavqzbkzht [ 0 ] ; tmp_p [ 25 ] = localB -> bavqzbkzht [ 1 ] ; tmp_p [ 26 ] =
localB -> bavqzbkzht [ 2 ] ; tmp_p [ 27 ] = localB -> bavqzbkzht [ 3 ] ;
tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = localB -> nzss3y2ceo [ 0 ] ; tmp_p [ 29 ] =
localB -> nzss3y2ceo [ 1 ] ; tmp_p [ 30 ] = localB -> nzss3y2ceo [ 2 ] ;
tmp_p [ 31 ] = localB -> nzss3y2ceo [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
localB -> liu5zcrfj4 [ 0 ] ; tmp_p [ 33 ] = localB -> liu5zcrfj4 [ 1 ] ;
tmp_p [ 34 ] = localB -> liu5zcrfj4 [ 2 ] ; tmp_p [ 35 ] = localB ->
liu5zcrfj4 [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = localB -> aouy4fq24a [ 0
] ; tmp_p [ 37 ] = localB -> aouy4fq24a [ 1 ] ; tmp_p [ 38 ] = localB ->
aouy4fq24a [ 2 ] ; tmp_p [ 39 ] = localB -> aouy4fq24a [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = localB -> p2s2cafweo [ 0 ] ; tmp_p [ 41 ] = localB ->
p2s2cafweo [ 1 ] ; tmp_p [ 42 ] = localB -> p2s2cafweo [ 2 ] ; tmp_p [ 43 ] =
localB -> p2s2cafweo [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = localB ->
nye3tmgwgy [ 0 ] ; tmp_p [ 45 ] = localB -> nye3tmgwgy [ 1 ] ; tmp_p [ 46 ] =
localB -> nye3tmgwgy [ 2 ] ; tmp_p [ 47 ] = localB -> nye3tmgwgy [ 3 ] ;
tmp_e [ 12 ] = 48 ; tmp_p [ 48 ] = localB -> bi0hotz3gn [ 0 ] ; tmp_p [ 49 ]
= localB -> bi0hotz3gn [ 1 ] ; tmp_p [ 50 ] = localB -> bi0hotz3gn [ 2 ] ;
tmp_p [ 51 ] = localB -> bi0hotz3gn [ 3 ] ; tmp_e [ 13 ] = 52 ; tmp_p [ 52 ]
= localB -> g51ukhglo4 [ 0 ] ; tmp_p [ 53 ] = localB -> g51ukhglo4 [ 1 ] ;
tmp_p [ 54 ] = localB -> g51ukhglo4 [ 2 ] ; tmp_p [ 55 ] = localB ->
g51ukhglo4 [ 3 ] ; tmp_e [ 14 ] = 56 ; tmp_p [ 56 ] = localB -> pvdrbthk0m [
0 ] ; tmp_p [ 57 ] = localB -> pvdrbthk0m [ 1 ] ; tmp_p [ 58 ] = localB ->
pvdrbthk0m [ 2 ] ; tmp_p [ 59 ] = localB -> pvdrbthk0m [ 3 ] ; tmp_e [ 15 ] =
60 ; tmp_p [ 60 ] = localB -> mvrr1vhnj4 [ 0 ] ; tmp_p [ 61 ] = localB ->
mvrr1vhnj4 [ 1 ] ; tmp_p [ 62 ] = localB -> mvrr1vhnj4 [ 2 ] ; tmp_p [ 63 ] =
localB -> mvrr1vhnj4 [ 3 ] ; tmp_e [ 16 ] = 64 ; tmp_p [ 64 ] = localB ->
bshxu2dzdn [ 0 ] ; tmp_p [ 65 ] = localB -> bshxu2dzdn [ 1 ] ; tmp_p [ 66 ] =
localB -> bshxu2dzdn [ 2 ] ; tmp_p [ 67 ] = localB -> bshxu2dzdn [ 3 ] ;
tmp_e [ 17 ] = 68 ; tmp_p [ 68 ] = localB -> dcxpo3gwp5 [ 0 ] ; tmp_p [ 69 ]
= localB -> dcxpo3gwp5 [ 1 ] ; tmp_p [ 70 ] = localB -> dcxpo3gwp5 [ 2 ] ;
tmp_p [ 71 ] = localB -> dcxpo3gwp5 [ 3 ] ; tmp_e [ 18 ] = 72 ; tmp_p [ 72 ]
= localB -> pyvnbbh4e0 [ 0 ] ; tmp_p [ 73 ] = localB -> pyvnbbh4e0 [ 1 ] ;
tmp_p [ 74 ] = localB -> pyvnbbh4e0 [ 2 ] ; tmp_p [ 75 ] = localB ->
pyvnbbh4e0 [ 3 ] ; tmp_e [ 19 ] = 76 ; tmp_p [ 76 ] = localB -> kal5vypdsn [
0 ] ; tmp_p [ 77 ] = localB -> kal5vypdsn [ 1 ] ; tmp_p [ 78 ] = localB ->
kal5vypdsn [ 2 ] ; tmp_p [ 79 ] = localB -> kal5vypdsn [ 3 ] ; tmp_e [ 20 ] =
80 ; tmp_p [ 80 ] = localB -> d1gahwve5x [ 0 ] ; tmp_p [ 81 ] = localB ->
d1gahwve5x [ 1 ] ; tmp_p [ 82 ] = localB -> d1gahwve5x [ 2 ] ; tmp_p [ 83 ] =
localB -> d1gahwve5x [ 3 ] ; tmp_e [ 21 ] = 84 ; tmp_p [ 84 ] = localB ->
em0vsjuvjn [ 0 ] ; tmp_p [ 85 ] = localB -> em0vsjuvjn [ 1 ] ; tmp_p [ 86 ] =
localB -> em0vsjuvjn [ 2 ] ; tmp_p [ 87 ] = localB -> em0vsjuvjn [ 3 ] ;
tmp_e [ 22 ] = 88 ; tmp_p [ 88 ] = localB -> dlgwn2r2ef [ 0 ] ; tmp_p [ 89 ]
= localB -> dlgwn2r2ef [ 1 ] ; tmp_p [ 90 ] = localB -> dlgwn2r2ef [ 2 ] ;
tmp_p [ 91 ] = localB -> dlgwn2r2ef [ 3 ] ; tmp_e [ 23 ] = 92 ; tmp_p [ 92 ]
= localB -> j3jb4ek1c4 [ 0 ] ; tmp_p [ 93 ] = localB -> j3jb4ek1c4 [ 1 ] ;
tmp_p [ 94 ] = localB -> j3jb4ek1c4 [ 2 ] ; tmp_p [ 95 ] = localB ->
j3jb4ek1c4 [ 3 ] ; tmp_e [ 24 ] = 96 ; tmp_p [ 96 ] = localB -> chdmmuvupy [
0 ] ; tmp_p [ 97 ] = localB -> chdmmuvupy [ 1 ] ; tmp_p [ 98 ] = localB ->
chdmmuvupy [ 2 ] ; tmp_p [ 99 ] = localB -> chdmmuvupy [ 3 ] ; tmp_e [ 25 ] =
100 ; tmp_p [ 100 ] = localB -> if4fdhdm21 [ 0 ] ; tmp_p [ 101 ] = localB ->
if4fdhdm21 [ 1 ] ; tmp_p [ 102 ] = localB -> if4fdhdm21 [ 2 ] ; tmp_p [ 103 ]
= localB -> if4fdhdm21 [ 3 ] ; tmp_e [ 26 ] = 104 ; tmp_p [ 104 ] = localB ->
g3exmselxb [ 0 ] ; tmp_p [ 105 ] = localB -> g3exmselxb [ 1 ] ; tmp_p [ 106 ]
= localB -> g3exmselxb [ 2 ] ; tmp_p [ 107 ] = localB -> g3exmselxb [ 3 ] ;
tmp_e [ 27 ] = 108 ; tmp_p [ 108 ] = localB -> lhltvb5x0u [ 0 ] ; tmp_p [ 109
] = localB -> lhltvb5x0u [ 1 ] ; tmp_p [ 110 ] = localB -> lhltvb5x0u [ 2 ] ;
tmp_p [ 111 ] = localB -> lhltvb5x0u [ 3 ] ; tmp_e [ 28 ] = 112 ; tmp_p [ 112
] = localB -> fvvjmasvex [ 0 ] ; tmp_p [ 113 ] = localB -> fvvjmasvex [ 1 ] ;
tmp_p [ 114 ] = localB -> fvvjmasvex [ 2 ] ; tmp_p [ 115 ] = localB ->
fvvjmasvex [ 3 ] ; tmp_e [ 29 ] = 116 ; tmp_p [ 116 ] = localB -> b0o3ycinko
[ 0 ] ; tmp_p [ 117 ] = localB -> b0o3ycinko [ 1 ] ; tmp_p [ 118 ] = localB
-> b0o3ycinko [ 2 ] ; tmp_p [ 119 ] = localB -> b0o3ycinko [ 3 ] ; tmp_e [ 30
] = 120 ; tmp_p [ 120 ] = localB -> kimp5cuqck [ 0 ] ; tmp_p [ 121 ] = localB
-> kimp5cuqck [ 1 ] ; tmp_p [ 122 ] = localB -> kimp5cuqck [ 2 ] ; tmp_p [
123 ] = localB -> kimp5cuqck [ 3 ] ; tmp_e [ 31 ] = 124 ; tmp_p [ 124 ] =
localB -> moqx30egka [ 0 ] ; tmp_p [ 125 ] = localB -> moqx30egka [ 1 ] ;
tmp_p [ 126 ] = localB -> moqx30egka [ 2 ] ; tmp_p [ 127 ] = localB ->
moqx30egka [ 3 ] ; tmp_e [ 32 ] = 128 ; simulationData -> mData ->
mInputValues . mN = 128 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 33 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 337 ; simulationData -> mData -> mDx .
mX = & localXdot -> f4cwt4gmec [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) localDW -> epe2vsgg3i ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; is =
ne_simulator_method ( ( NeslSimulator * ) localDW -> pak131zhvo ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( is != 0 )
{ tmp = error_buffer_is_empty ( ssGetErrorStatus ( dow0ryovld -> _mdlRefSfcnS
) ) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( dow0ryovld -> _mdlRefSfcnS , msg ) ; } } } void aihrslg3td
( a0hhroei4y * const dow0ryovld , fiyuauag0n * localB , cysfao30we * localDW
, obzgstfl0b * localX ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T tmp_p [ 128 ] ; real_T time ; int32_T tmp_i ; int_T
tmp_e [ 33 ] ; boolean_T tmp ; simulationData = ( NeslSimulationData * )
localDW -> bhq0wza4qw ; time = rtmGetTaskTime ( dow0ryovld , 0 ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 337 ;
simulationData -> mData -> mContStates . mX = & localX -> f4cwt4gmec [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & localDW -> i5wehflxkv ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = &
localDW -> opoqs3zl5e ; tmp = ( rtmIsMajorTimeStep ( dow0ryovld ) &&
ssGetSolverFoundContZcEvents ( dow0ryovld -> _mdlRefSfcnS ) ) ;
simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = rtmIsMajorTimeStep ( dow0ryovld ) ; tmp =
_ssGetSolverAssertCheck ( dow0ryovld -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC (
dow0ryovld -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( dow0ryovld
-> _mdlRefSfcnS ) ; simulationData -> mData -> mIsComputingJacobian = tmp ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
dow0ryovld -> _mdlRefSfcnS ) != 0 ) ; tmp = ssIsSolverRequestingReset (
dow0ryovld -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp = ssGetIsOkayToUpdateMode ( dow0ryovld
-> _mdlRefSfcnS ) ; simulationData -> mData -> mIsOkayToUpdateMode = tmp ;
tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = localB -> evgjlxf1ht [ 0 ] ; tmp_p [ 1 ] =
localB -> evgjlxf1ht [ 1 ] ; tmp_p [ 2 ] = localB -> evgjlxf1ht [ 2 ] ; tmp_p
[ 3 ] = localB -> evgjlxf1ht [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB
-> i5l4at4n2i [ 0 ] ; tmp_p [ 5 ] = localB -> i5l4at4n2i [ 1 ] ; tmp_p [ 6 ]
= localB -> i5l4at4n2i [ 2 ] ; tmp_p [ 7 ] = localB -> i5l4at4n2i [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = localB -> eqi5ccufrp [ 0 ] ; tmp_p [ 9 ] =
localB -> eqi5ccufrp [ 1 ] ; tmp_p [ 10 ] = localB -> eqi5ccufrp [ 2 ] ;
tmp_p [ 11 ] = localB -> eqi5ccufrp [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
localB -> i1k4tod4de [ 0 ] ; tmp_p [ 13 ] = localB -> i1k4tod4de [ 1 ] ;
tmp_p [ 14 ] = localB -> i1k4tod4de [ 2 ] ; tmp_p [ 15 ] = localB ->
i1k4tod4de [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = localB -> mr3naztf0y [ 0
] ; tmp_p [ 17 ] = localB -> mr3naztf0y [ 1 ] ; tmp_p [ 18 ] = localB ->
mr3naztf0y [ 2 ] ; tmp_p [ 19 ] = localB -> mr3naztf0y [ 3 ] ; tmp_e [ 5 ] =
20 ; tmp_p [ 20 ] = localB -> karsi5ef1u [ 0 ] ; tmp_p [ 21 ] = localB ->
karsi5ef1u [ 1 ] ; tmp_p [ 22 ] = localB -> karsi5ef1u [ 2 ] ; tmp_p [ 23 ] =
localB -> karsi5ef1u [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = localB ->
bavqzbkzht [ 0 ] ; tmp_p [ 25 ] = localB -> bavqzbkzht [ 1 ] ; tmp_p [ 26 ] =
localB -> bavqzbkzht [ 2 ] ; tmp_p [ 27 ] = localB -> bavqzbkzht [ 3 ] ;
tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = localB -> nzss3y2ceo [ 0 ] ; tmp_p [ 29 ] =
localB -> nzss3y2ceo [ 1 ] ; tmp_p [ 30 ] = localB -> nzss3y2ceo [ 2 ] ;
tmp_p [ 31 ] = localB -> nzss3y2ceo [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
localB -> liu5zcrfj4 [ 0 ] ; tmp_p [ 33 ] = localB -> liu5zcrfj4 [ 1 ] ;
tmp_p [ 34 ] = localB -> liu5zcrfj4 [ 2 ] ; tmp_p [ 35 ] = localB ->
liu5zcrfj4 [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = localB -> aouy4fq24a [ 0
] ; tmp_p [ 37 ] = localB -> aouy4fq24a [ 1 ] ; tmp_p [ 38 ] = localB ->
aouy4fq24a [ 2 ] ; tmp_p [ 39 ] = localB -> aouy4fq24a [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = localB -> p2s2cafweo [ 0 ] ; tmp_p [ 41 ] = localB ->
p2s2cafweo [ 1 ] ; tmp_p [ 42 ] = localB -> p2s2cafweo [ 2 ] ; tmp_p [ 43 ] =
localB -> p2s2cafweo [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = localB ->
nye3tmgwgy [ 0 ] ; tmp_p [ 45 ] = localB -> nye3tmgwgy [ 1 ] ; tmp_p [ 46 ] =
localB -> nye3tmgwgy [ 2 ] ; tmp_p [ 47 ] = localB -> nye3tmgwgy [ 3 ] ;
tmp_e [ 12 ] = 48 ; tmp_p [ 48 ] = localB -> bi0hotz3gn [ 0 ] ; tmp_p [ 49 ]
= localB -> bi0hotz3gn [ 1 ] ; tmp_p [ 50 ] = localB -> bi0hotz3gn [ 2 ] ;
tmp_p [ 51 ] = localB -> bi0hotz3gn [ 3 ] ; tmp_e [ 13 ] = 52 ; tmp_p [ 52 ]
= localB -> g51ukhglo4 [ 0 ] ; tmp_p [ 53 ] = localB -> g51ukhglo4 [ 1 ] ;
tmp_p [ 54 ] = localB -> g51ukhglo4 [ 2 ] ; tmp_p [ 55 ] = localB ->
g51ukhglo4 [ 3 ] ; tmp_e [ 14 ] = 56 ; tmp_p [ 56 ] = localB -> pvdrbthk0m [
0 ] ; tmp_p [ 57 ] = localB -> pvdrbthk0m [ 1 ] ; tmp_p [ 58 ] = localB ->
pvdrbthk0m [ 2 ] ; tmp_p [ 59 ] = localB -> pvdrbthk0m [ 3 ] ; tmp_e [ 15 ] =
60 ; tmp_p [ 60 ] = localB -> mvrr1vhnj4 [ 0 ] ; tmp_p [ 61 ] = localB ->
mvrr1vhnj4 [ 1 ] ; tmp_p [ 62 ] = localB -> mvrr1vhnj4 [ 2 ] ; tmp_p [ 63 ] =
localB -> mvrr1vhnj4 [ 3 ] ; tmp_e [ 16 ] = 64 ; tmp_p [ 64 ] = localB ->
bshxu2dzdn [ 0 ] ; tmp_p [ 65 ] = localB -> bshxu2dzdn [ 1 ] ; tmp_p [ 66 ] =
localB -> bshxu2dzdn [ 2 ] ; tmp_p [ 67 ] = localB -> bshxu2dzdn [ 3 ] ;
tmp_e [ 17 ] = 68 ; tmp_p [ 68 ] = localB -> dcxpo3gwp5 [ 0 ] ; tmp_p [ 69 ]
= localB -> dcxpo3gwp5 [ 1 ] ; tmp_p [ 70 ] = localB -> dcxpo3gwp5 [ 2 ] ;
tmp_p [ 71 ] = localB -> dcxpo3gwp5 [ 3 ] ; tmp_e [ 18 ] = 72 ; tmp_p [ 72 ]
= localB -> pyvnbbh4e0 [ 0 ] ; tmp_p [ 73 ] = localB -> pyvnbbh4e0 [ 1 ] ;
tmp_p [ 74 ] = localB -> pyvnbbh4e0 [ 2 ] ; tmp_p [ 75 ] = localB ->
pyvnbbh4e0 [ 3 ] ; tmp_e [ 19 ] = 76 ; tmp_p [ 76 ] = localB -> kal5vypdsn [
0 ] ; tmp_p [ 77 ] = localB -> kal5vypdsn [ 1 ] ; tmp_p [ 78 ] = localB ->
kal5vypdsn [ 2 ] ; tmp_p [ 79 ] = localB -> kal5vypdsn [ 3 ] ; tmp_e [ 20 ] =
80 ; tmp_p [ 80 ] = localB -> d1gahwve5x [ 0 ] ; tmp_p [ 81 ] = localB ->
d1gahwve5x [ 1 ] ; tmp_p [ 82 ] = localB -> d1gahwve5x [ 2 ] ; tmp_p [ 83 ] =
localB -> d1gahwve5x [ 3 ] ; tmp_e [ 21 ] = 84 ; tmp_p [ 84 ] = localB ->
em0vsjuvjn [ 0 ] ; tmp_p [ 85 ] = localB -> em0vsjuvjn [ 1 ] ; tmp_p [ 86 ] =
localB -> em0vsjuvjn [ 2 ] ; tmp_p [ 87 ] = localB -> em0vsjuvjn [ 3 ] ;
tmp_e [ 22 ] = 88 ; tmp_p [ 88 ] = localB -> dlgwn2r2ef [ 0 ] ; tmp_p [ 89 ]
= localB -> dlgwn2r2ef [ 1 ] ; tmp_p [ 90 ] = localB -> dlgwn2r2ef [ 2 ] ;
tmp_p [ 91 ] = localB -> dlgwn2r2ef [ 3 ] ; tmp_e [ 23 ] = 92 ; tmp_p [ 92 ]
= localB -> j3jb4ek1c4 [ 0 ] ; tmp_p [ 93 ] = localB -> j3jb4ek1c4 [ 1 ] ;
tmp_p [ 94 ] = localB -> j3jb4ek1c4 [ 2 ] ; tmp_p [ 95 ] = localB ->
j3jb4ek1c4 [ 3 ] ; tmp_e [ 24 ] = 96 ; tmp_p [ 96 ] = localB -> chdmmuvupy [
0 ] ; tmp_p [ 97 ] = localB -> chdmmuvupy [ 1 ] ; tmp_p [ 98 ] = localB ->
chdmmuvupy [ 2 ] ; tmp_p [ 99 ] = localB -> chdmmuvupy [ 3 ] ; tmp_e [ 25 ] =
100 ; tmp_p [ 100 ] = localB -> if4fdhdm21 [ 0 ] ; tmp_p [ 101 ] = localB ->
if4fdhdm21 [ 1 ] ; tmp_p [ 102 ] = localB -> if4fdhdm21 [ 2 ] ; tmp_p [ 103 ]
= localB -> if4fdhdm21 [ 3 ] ; tmp_e [ 26 ] = 104 ; tmp_p [ 104 ] = localB ->
g3exmselxb [ 0 ] ; tmp_p [ 105 ] = localB -> g3exmselxb [ 1 ] ; tmp_p [ 106 ]
= localB -> g3exmselxb [ 2 ] ; tmp_p [ 107 ] = localB -> g3exmselxb [ 3 ] ;
tmp_e [ 27 ] = 108 ; tmp_p [ 108 ] = localB -> lhltvb5x0u [ 0 ] ; tmp_p [ 109
] = localB -> lhltvb5x0u [ 1 ] ; tmp_p [ 110 ] = localB -> lhltvb5x0u [ 2 ] ;
tmp_p [ 111 ] = localB -> lhltvb5x0u [ 3 ] ; tmp_e [ 28 ] = 112 ; tmp_p [ 112
] = localB -> fvvjmasvex [ 0 ] ; tmp_p [ 113 ] = localB -> fvvjmasvex [ 1 ] ;
tmp_p [ 114 ] = localB -> fvvjmasvex [ 2 ] ; tmp_p [ 115 ] = localB ->
fvvjmasvex [ 3 ] ; tmp_e [ 29 ] = 116 ; tmp_p [ 116 ] = localB -> b0o3ycinko
[ 0 ] ; tmp_p [ 117 ] = localB -> b0o3ycinko [ 1 ] ; tmp_p [ 118 ] = localB
-> b0o3ycinko [ 2 ] ; tmp_p [ 119 ] = localB -> b0o3ycinko [ 3 ] ; tmp_e [ 30
] = 120 ; tmp_p [ 120 ] = localB -> kimp5cuqck [ 0 ] ; tmp_p [ 121 ] = localB
-> kimp5cuqck [ 1 ] ; tmp_p [ 122 ] = localB -> kimp5cuqck [ 2 ] ; tmp_p [
123 ] = localB -> kimp5cuqck [ 3 ] ; tmp_e [ 31 ] = 124 ; tmp_p [ 124 ] =
localB -> moqx30egka [ 0 ] ; tmp_p [ 125 ] = localB -> moqx30egka [ 1 ] ;
tmp_p [ 126 ] = localB -> moqx30egka [ 2 ] ; tmp_p [ 127 ] = localB ->
moqx30egka [ 3 ] ; tmp_e [ 32 ] = 128 ; simulationData -> mData ->
mInputValues . mN = 128 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 33 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) localDW -> epe2vsgg3i ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) localDW -> pak131zhvo ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( dow0ryovld ->
_mdlRefSfcnS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree )
; ssSetErrorStatus ( dow0ryovld -> _mdlRefSfcnS , msg ) ; } } } void
jigavv4zqy ( fiyuauag0n * localB , bgcwnpu3li * localZCSV ) { localZCSV ->
e53t2zys5r [ 0 ] = 0.0 ; localZCSV -> e53t2zys5r [ 1 ] = 0.0 ; if ( localB ->
dtqgh3atwp > 1.0 ) { localZCSV -> e53t2zys5r [ 0 ] = 1.0 ; } else if ( localB
-> dtqgh3atwp < - 1.0 ) { localZCSV -> e53t2zys5r [ 1 ] = 1.0 ; } } void
h5eucepwjv ( cysfao30we * localDW , a0hhroei4y * const dow0ryovld ) {
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) localDW ->
epe2vsgg3i ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * )
localDW -> bhq0wza4qw ) ; nesl_erase_simulator (
"Aerial_Inspection_Octa_Rotor/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) localDW -> k0b5odwie3 ) ;
nesl_destroy_simulation_data ( ( NeslSimulationData * ) localDW -> hfpiwl51gz
) ; nesl_erase_simulator (
"Aerial_Inspection_Octa_Rotor/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) localDW -> icwkl4z4im ) ;
nesl_destroy_simulation_data ( ( NeslSimulationData * ) localDW -> castbtcvps
) ; nesl_erase_simulator (
"Aerial_Inspection_Octa_Rotor/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( dow0ryovld -> _mdlRefSfcnS ,
"Aerial_Inspection_Octa_Rotor" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT"
) ; } } void ggvdx2b0lr ( SimStruct * _mdlRefSfcnS ,
ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , int_T mdlref_TID3 ,
a0hhroei4y * const dow0ryovld , fiyuauag0n * localB , cysfao30we * localDW ,
obzgstfl0b * localX , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; ( void ) memset ( ( void * ) dow0ryovld , 0 , sizeof ( a0hhroei4y ) ) ;
dow0ryovld -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; dow0ryovld ->
Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; dow0ryovld -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; dow0ryovld -> Timing .
mdlref_GlobalTID [ 3 ] = mdlref_TID3 ; dow0ryovld -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( dow0ryovld -> _mdlRefSfcnS ,
"Aerial_Inspection_Octa_Rotor" , "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" )
; } { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localB -> bhqis4sxt5 [ i ] =
0.0 ; } for ( i = 0 ; i < 337 ; i ++ ) { localB -> oqxwd0wuz4 [ i ] = 0.0 ; }
for ( i = 0 ; i < 18 ; i ++ ) { localB -> fgwsff3ksj [ i ] = 0.0 ; } for ( i
= 0 ; i < 6 ; i ++ ) { localB -> i30ign0fy1 [ i ] = 0.0 ; } localB ->
iswndugjl3 = 0.0 ; localB -> av5xzkqelq = 0.0 ; localB -> evgjlxf1ht [ 0 ] =
0.0 ; localB -> evgjlxf1ht [ 1 ] = 0.0 ; localB -> evgjlxf1ht [ 2 ] = 0.0 ;
localB -> evgjlxf1ht [ 3 ] = 0.0 ; localB -> f23xm2xajr = 0.0 ; localB ->
gpzwxdvjt0 = 0.0 ; localB -> i5l4at4n2i [ 0 ] = 0.0 ; localB -> i5l4at4n2i [
1 ] = 0.0 ; localB -> i5l4at4n2i [ 2 ] = 0.0 ; localB -> i5l4at4n2i [ 3 ] =
0.0 ; localB -> j2hk55tkjw = 0.0 ; localB -> mswlix3eoq = 0.0 ; localB ->
eqi5ccufrp [ 0 ] = 0.0 ; localB -> eqi5ccufrp [ 1 ] = 0.0 ; localB ->
eqi5ccufrp [ 2 ] = 0.0 ; localB -> eqi5ccufrp [ 3 ] = 0.0 ; localB ->
dfdj0albpo = 0.0 ; localB -> ojd4vjol3c = 0.0 ; localB -> i1k4tod4de [ 0 ] =
0.0 ; localB -> i1k4tod4de [ 1 ] = 0.0 ; localB -> i1k4tod4de [ 2 ] = 0.0 ;
localB -> i1k4tod4de [ 3 ] = 0.0 ; localB -> bktriqmwde = 0.0 ; localB ->
brcauwamwe = 0.0 ; localB -> mr3naztf0y [ 0 ] = 0.0 ; localB -> mr3naztf0y [
1 ] = 0.0 ; localB -> mr3naztf0y [ 2 ] = 0.0 ; localB -> mr3naztf0y [ 3 ] =
0.0 ; localB -> grf0b2xpyc = 0.0 ; localB -> eez4t55rmd = 0.0 ; localB ->
karsi5ef1u [ 0 ] = 0.0 ; localB -> karsi5ef1u [ 1 ] = 0.0 ; localB ->
karsi5ef1u [ 2 ] = 0.0 ; localB -> karsi5ef1u [ 3 ] = 0.0 ; localB ->
glwluawtyp = 0.0 ; localB -> kftr21z525 = 0.0 ; localB -> bavqzbkzht [ 0 ] =
0.0 ; localB -> bavqzbkzht [ 1 ] = 0.0 ; localB -> bavqzbkzht [ 2 ] = 0.0 ;
localB -> bavqzbkzht [ 3 ] = 0.0 ; localB -> idoqx1nxf2 = 0.0 ; localB ->
lczqcapei4 = 0.0 ; localB -> nzss3y2ceo [ 0 ] = 0.0 ; localB -> nzss3y2ceo [
1 ] = 0.0 ; localB -> nzss3y2ceo [ 2 ] = 0.0 ; localB -> nzss3y2ceo [ 3 ] =
0.0 ; localB -> dkpbryd3fi = 0.0 ; localB -> opyct5vfe0 = 0.0 ; localB ->
ng4yajypde = 0.0 ; localB -> of4kngakq4 = 0.0 ; localB -> liu5zcrfj4 [ 0 ] =
0.0 ; localB -> liu5zcrfj4 [ 1 ] = 0.0 ; localB -> liu5zcrfj4 [ 2 ] = 0.0 ;
localB -> liu5zcrfj4 [ 3 ] = 0.0 ; localB -> fscn2aw4fg = 0.0 ; localB ->
o02swqx0th = 0.0 ; localB -> obxf23ymvb = 0.0 ; localB -> aouy4fq24a [ 0 ] =
0.0 ; localB -> aouy4fq24a [ 1 ] = 0.0 ; localB -> aouy4fq24a [ 2 ] = 0.0 ;
localB -> aouy4fq24a [ 3 ] = 0.0 ; localB -> cwi4n21kaf = 0.0 ; localB ->
ajzjd1xedp = 0.0 ; localB -> nankzjs21u = 0.0 ; localB -> p2s2cafweo [ 0 ] =
0.0 ; localB -> p2s2cafweo [ 1 ] = 0.0 ; localB -> p2s2cafweo [ 2 ] = 0.0 ;
localB -> p2s2cafweo [ 3 ] = 0.0 ; localB -> ezgwilii4z = 0.0 ; localB ->
iogl13ovh1 = 0.0 ; localB -> khkk4tmnkb = 0.0 ; localB -> nye3tmgwgy [ 0 ] =
0.0 ; localB -> nye3tmgwgy [ 1 ] = 0.0 ; localB -> nye3tmgwgy [ 2 ] = 0.0 ;
localB -> nye3tmgwgy [ 3 ] = 0.0 ; localB -> dfeop2ipba = 0.0 ; localB ->
nsw25g00j0 = 0.0 ; localB -> j4t5zorru2 = 0.0 ; localB -> bi0hotz3gn [ 0 ] =
0.0 ; localB -> bi0hotz3gn [ 1 ] = 0.0 ; localB -> bi0hotz3gn [ 2 ] = 0.0 ;
localB -> bi0hotz3gn [ 3 ] = 0.0 ; localB -> g5z2zydp3y = 0.0 ; localB ->
ma33ikna4q = 0.0 ; localB -> aubfmyym2m = 0.0 ; localB -> g51ukhglo4 [ 0 ] =
0.0 ; localB -> g51ukhglo4 [ 1 ] = 0.0 ; localB -> g51ukhglo4 [ 2 ] = 0.0 ;
localB -> g51ukhglo4 [ 3 ] = 0.0 ; localB -> jff4a1tvq2 = 0.0 ; localB ->
kiqk2sgpre = 0.0 ; localB -> pyzm1400py = 0.0 ; localB -> pvdrbthk0m [ 0 ] =
0.0 ; localB -> pvdrbthk0m [ 1 ] = 0.0 ; localB -> pvdrbthk0m [ 2 ] = 0.0 ;
localB -> pvdrbthk0m [ 3 ] = 0.0 ; localB -> mi41qgkbu0 = 0.0 ; localB ->
kq20gpz3sx = 0.0 ; localB -> k2fagdii4h = 0.0 ; localB -> mvrr1vhnj4 [ 0 ] =
0.0 ; localB -> mvrr1vhnj4 [ 1 ] = 0.0 ; localB -> mvrr1vhnj4 [ 2 ] = 0.0 ;
localB -> mvrr1vhnj4 [ 3 ] = 0.0 ; localB -> gslo1fw4wd = 0.0 ; localB ->
bshxu2dzdn [ 0 ] = 0.0 ; localB -> bshxu2dzdn [ 1 ] = 0.0 ; localB ->
bshxu2dzdn [ 2 ] = 0.0 ; localB -> bshxu2dzdn [ 3 ] = 0.0 ; localB ->
dcxpo3gwp5 [ 0 ] = 0.0 ; localB -> dcxpo3gwp5 [ 1 ] = 0.0 ; localB ->
dcxpo3gwp5 [ 2 ] = 0.0 ; localB -> dcxpo3gwp5 [ 3 ] = 0.0 ; localB ->
if3wrp44ig = 0.0 ; localB -> pyvnbbh4e0 [ 0 ] = 0.0 ; localB -> pyvnbbh4e0 [
1 ] = 0.0 ; localB -> pyvnbbh4e0 [ 2 ] = 0.0 ; localB -> pyvnbbh4e0 [ 3 ] =
0.0 ; localB -> kal5vypdsn [ 0 ] = 0.0 ; localB -> kal5vypdsn [ 1 ] = 0.0 ;
localB -> kal5vypdsn [ 2 ] = 0.0 ; localB -> kal5vypdsn [ 3 ] = 0.0 ; localB
-> ofkj1y051u = 0.0 ; localB -> d1gahwve5x [ 0 ] = 0.0 ; localB -> d1gahwve5x
[ 1 ] = 0.0 ; localB -> d1gahwve5x [ 2 ] = 0.0 ; localB -> d1gahwve5x [ 3 ] =
0.0 ; localB -> em0vsjuvjn [ 0 ] = 0.0 ; localB -> em0vsjuvjn [ 1 ] = 0.0 ;
localB -> em0vsjuvjn [ 2 ] = 0.0 ; localB -> em0vsjuvjn [ 3 ] = 0.0 ; localB
-> pnqsmo1s42 = 0.0 ; localB -> dlgwn2r2ef [ 0 ] = 0.0 ; localB -> dlgwn2r2ef
[ 1 ] = 0.0 ; localB -> dlgwn2r2ef [ 2 ] = 0.0 ; localB -> dlgwn2r2ef [ 3 ] =
0.0 ; localB -> j3jb4ek1c4 [ 0 ] = 0.0 ; localB -> j3jb4ek1c4 [ 1 ] = 0.0 ;
localB -> j3jb4ek1c4 [ 2 ] = 0.0 ; localB -> j3jb4ek1c4 [ 3 ] = 0.0 ; localB
-> mwydcaaqdi = 0.0 ; localB -> chdmmuvupy [ 0 ] = 0.0 ; localB -> chdmmuvupy
[ 1 ] = 0.0 ; localB -> chdmmuvupy [ 2 ] = 0.0 ; localB -> chdmmuvupy [ 3 ] =
0.0 ; localB -> if4fdhdm21 [ 0 ] = 0.0 ; localB -> if4fdhdm21 [ 1 ] = 0.0 ;
localB -> if4fdhdm21 [ 2 ] = 0.0 ; localB -> if4fdhdm21 [ 3 ] = 0.0 ; localB
-> mpa2fder4v = 0.0 ; localB -> g3exmselxb [ 0 ] = 0.0 ; localB -> g3exmselxb
[ 1 ] = 0.0 ; localB -> g3exmselxb [ 2 ] = 0.0 ; localB -> g3exmselxb [ 3 ] =
0.0 ; localB -> lhltvb5x0u [ 0 ] = 0.0 ; localB -> lhltvb5x0u [ 1 ] = 0.0 ;
localB -> lhltvb5x0u [ 2 ] = 0.0 ; localB -> lhltvb5x0u [ 3 ] = 0.0 ; localB
-> bibwf5b5cm = 0.0 ; localB -> fvvjmasvex [ 0 ] = 0.0 ; localB -> fvvjmasvex
[ 1 ] = 0.0 ; localB -> fvvjmasvex [ 2 ] = 0.0 ; localB -> fvvjmasvex [ 3 ] =
0.0 ; localB -> b0o3ycinko [ 0 ] = 0.0 ; localB -> b0o3ycinko [ 1 ] = 0.0 ;
localB -> b0o3ycinko [ 2 ] = 0.0 ; localB -> b0o3ycinko [ 3 ] = 0.0 ; localB
-> cgpua1kcf5 = 0.0 ; localB -> kimp5cuqck [ 0 ] = 0.0 ; localB -> kimp5cuqck
[ 1 ] = 0.0 ; localB -> kimp5cuqck [ 2 ] = 0.0 ; localB -> kimp5cuqck [ 3 ] =
0.0 ; localB -> moqx30egka [ 0 ] = 0.0 ; localB -> moqx30egka [ 1 ] = 0.0 ;
localB -> moqx30egka [ 2 ] = 0.0 ; localB -> moqx30egka [ 3 ] = 0.0 ; localB
-> dtqgh3atwp = 0.0 ; localB -> havnmixejb = 0.0 ; localB -> mpfdfeery1 = 0.0
; } ( void ) memset ( ( void * ) localDW , 0 , sizeof ( cysfao30we ) ) ;
localDW -> mv5ilts3z3 [ 0 ] = 0.0 ; localDW -> mv5ilts3z3 [ 1 ] = 0.0 ;
localDW -> kbatitusoq [ 0 ] = 0.0 ; localDW -> kbatitusoq [ 1 ] = 0.0 ;
localDW -> ocaux5stdw [ 0 ] = 0.0 ; localDW -> ocaux5stdw [ 1 ] = 0.0 ;
localDW -> mxfuc2ujfx [ 0 ] = 0.0 ; localDW -> mxfuc2ujfx [ 1 ] = 0.0 ;
localDW -> l5f2zyzhp3 [ 0 ] = 0.0 ; localDW -> l5f2zyzhp3 [ 1 ] = 0.0 ;
localDW -> h25umkjgx0 [ 0 ] = 0.0 ; localDW -> h25umkjgx0 [ 1 ] = 0.0 ;
localDW -> dl3cy2fonw [ 0 ] = 0.0 ; localDW -> dl3cy2fonw [ 1 ] = 0.0 ;
localDW -> ku5cmy1g4t [ 0 ] = 0.0 ; localDW -> ku5cmy1g4t [ 1 ] = 0.0 ;
localDW -> onn5vmv02x = 0.0 ; localDW -> hcrdf3amwt [ 0 ] = 0.0 ; localDW ->
hcrdf3amwt [ 1 ] = 0.0 ; localDW -> krgwq12he2 [ 0 ] = 0.0 ; localDW ->
krgwq12he2 [ 1 ] = 0.0 ; localDW -> ft3sgupo14 [ 0 ] = 0.0 ; localDW ->
ft3sgupo14 [ 1 ] = 0.0 ; localDW -> ow5eyqfeqk [ 0 ] = 0.0 ; localDW ->
ow5eyqfeqk [ 1 ] = 0.0 ; localDW -> nii10oukaf [ 0 ] = 0.0 ; localDW ->
nii10oukaf [ 1 ] = 0.0 ; localDW -> p3islbftxv [ 0 ] = 0.0 ; localDW ->
p3islbftxv [ 1 ] = 0.0 ; localDW -> cgwhosvdcl [ 0 ] = 0.0 ; localDW ->
cgwhosvdcl [ 1 ] = 0.0 ; localDW -> n3p2b4331e [ 0 ] = 0.0 ; localDW ->
n3p2b4331e [ 1 ] = 0.0 ; localDW -> lbhxewsesw [ 0 ] = 0.0 ; localDW ->
lbhxewsesw [ 1 ] = 0.0 ; localDW -> f3u1feui3n [ 0 ] = 0.0 ; localDW ->
f3u1feui3n [ 1 ] = 0.0 ; localDW -> gpnyrijw4m [ 0 ] = 0.0 ; localDW ->
gpnyrijw4m [ 1 ] = 0.0 ; localDW -> dd5g3kw502 [ 0 ] = 0.0 ; localDW ->
dd5g3kw502 [ 1 ] = 0.0 ; localDW -> hnaznqa2p4 [ 0 ] = 0.0 ; localDW ->
hnaznqa2p4 [ 1 ] = 0.0 ; localDW -> kqeyhwy0iy [ 0 ] = 0.0 ; localDW ->
kqeyhwy0iy [ 1 ] = 0.0 ; localDW -> mhv1bghawx [ 0 ] = 0.0 ; localDW ->
mhv1bghawx [ 1 ] = 0.0 ; localDW -> nf1542nijs [ 0 ] = 0.0 ; localDW ->
nf1542nijs [ 1 ] = 0.0 ; localDW -> obvpxaht0r [ 0 ] = 0.0 ; localDW ->
obvpxaht0r [ 1 ] = 0.0 ; localDW -> g0o2nw0vo5 [ 0 ] = 0.0 ; localDW ->
g0o2nw0vo5 [ 1 ] = 0.0 ; localDW -> lp52ktildu [ 0 ] = 0.0 ; localDW ->
lp52ktildu [ 1 ] = 0.0 ; localDW -> aufjeltg54 [ 0 ] = 0.0 ; localDW ->
aufjeltg54 [ 1 ] = 0.0 ; localDW -> g0cifnynep [ 0 ] = 0.0 ; localDW ->
g0cifnynep [ 1 ] = 0.0 ; localDW -> mk50vkpww5 [ 0 ] = 0.0 ; localDW ->
mk50vkpww5 [ 1 ] = 0.0 ; localDW -> czqtaqmrox [ 0 ] = 0.0 ; localDW ->
czqtaqmrox [ 1 ] = 0.0 ; localDW -> onrgnw1hrk [ 0 ] = 0.0 ; localDW ->
onrgnw1hrk [ 1 ] = 0.0 ; localDW -> i5wehflxkv = 0.0 ; localDW -> la3n4fkj1w
= 0.0 ; localDW -> pcnwcb0ubp = 0.0 ; localDW -> ow5vllohzr = 0.0 ; localDW
-> emnm2ffsad = 0.0 ; localDW -> c5yf2rpogw = 0.0 ; { int32_T i ; for ( i = 0
; i < 8 ; i ++ ) { localDW -> obejuicafg [ i ] = 0.0 ; } } { int32_T i ; for
( i = 0 ; i < 8 ; i ++ ) { localDW -> k45ghuvsky [ i ] = 0.0 ; } } localDW ->
edg55qeb4d = 0.0 ; localDW -> mj0xbsq2w3 = 0.0 ; localDW -> bmql4chnpq = 0.0
; localDW -> op2dymxuq1 = 0.0 ; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) {
localDW -> orjk2gfqrn [ i ] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 8 ; i
++ ) { localDW -> nrlfz5eaxk [ i ] = 0.0 ; } } localDW -> kh2adsnm1q = 0.0 ;
localDW -> mblmikbf0f = 0.0 ; localDW -> m3jcpbafqz = 0.0 ; localDW ->
e5ryjhnqnq = 0.0 ; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW ->
ib0hpc5hea [ i ] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) {
localDW -> eed3c4tzny [ i ] = 0.0 ; } } localDW -> go3k25h13t = 0.0 ; localDW
-> ntzo30npzj = 0.0 ; localDW -> ecoelytsio = 0.0 ; localDW -> bsmesx5als =
0.0 ; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW -> j0xzihzavo [ i
] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW ->
m5jeoymdtx [ i ] = 0.0 ; } } localDW -> gm2kmanbfl = 0.0 ; localDW ->
igxfyznirl = 0.0 ; localDW -> lwcqf3ezzk = 0.0 ; localDW -> l4rgwczqhc = 0.0
; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW -> eytyslgh2k [ i ] =
0.0 ; } } { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW -> povjdgfhin
[ i ] = 0.0 ; } } localDW -> g5qmb3qhc4 = 0.0 ; localDW -> fx12dxjgoz = 0.0 ;
localDW -> ihq0d41a2e = 0.0 ; localDW -> mqkvegdktp = 0.0 ; { int32_T i ; for
( i = 0 ; i < 8 ; i ++ ) { localDW -> hx5girvbxs [ i ] = 0.0 ; } } { int32_T
i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW -> hru1uiypuh [ i ] = 0.0 ; } }
localDW -> og2wfdujcm = 0.0 ; localDW -> ctj2bho0yp = 0.0 ; localDW ->
ishlrl4nwz = 0.0 ; localDW -> m0ldh3g2jq = 0.0 ; { int32_T i ; for ( i = 0 ;
i < 8 ; i ++ ) { localDW -> heividnr1k [ i ] = 0.0 ; } } { int32_T i ; for (
i = 0 ; i < 8 ; i ++ ) { localDW -> ko5bk1dgvg [ i ] = 0.0 ; } } localDW ->
jp5mc5vhca = 0.0 ; localDW -> keklbuafg3 = 0.0 ; localDW -> pxu0fofv1e = 0.0
; localDW -> n452s4e4iw = 0.0 ; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) {
localDW -> btp0wsoaw3 [ i ] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 8 ; i
++ ) { localDW -> etlbfvymuh [ i ] = 0.0 ; } } localDW -> i1u244qywa = 0.0 ;
localDW -> on2jorwm5c = 0.0 ; localDW -> hyj1pbc41o = 0.0 ; localDW ->
fshqpe3da4 = 0.0 ; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW ->
blbvdczw00 [ i ] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) {
localDW -> om4r50j0ua [ i ] = 0.0 ; } } localDW -> cwx5fu4ktk = 0.0 ; localDW
-> lmez50dezv = 0.0 ; localDW -> ptccs2iwze = 0.0 ; localDW -> pkxq5fago0 =
0.0 ; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW -> hqms323kfd [ i
] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW ->
knfybvfydq [ i ] = 0.0 ; } } localDW -> pnyrvw5ztj = 0.0 ; localDW ->
f2rr4ira1h = 0.0 ; localDW -> pcu35m2eta = 0.0 ; localDW -> nj5pmpqqf3 = 0.0
; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW -> byscbandzd [ i ] =
0.0 ; } } { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW -> lbmjvdypjj
[ i ] = 0.0 ; } } localDW -> clgj4oa4pn = 0.0 ; localDW -> pe4abat22x = 0.0 ;
localDW -> laux3z5rot = 0.0 ; localDW -> lfncl4pmix = 0.0 ; { int32_T i ; for
( i = 0 ; i < 8 ; i ++ ) { localDW -> kbkknb0gcp [ i ] = 0.0 ; } } { int32_T
i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW -> mt12tk1q4n [ i ] = 0.0 ; } }
localDW -> jdmzk0jkqo = 0.0 ; localDW -> fcdlsz1jpj = 0.0 ; localDW ->
mzgko5hhco = 0.0 ; localDW -> czv5olhqpd = 0.0 ; { int32_T i ; for ( i = 0 ;
i < 8 ; i ++ ) { localDW -> j3wxtue1rg [ i ] = 0.0 ; } } { int32_T i ; for (
i = 0 ; i < 8 ; i ++ ) { localDW -> acts2xblll [ i ] = 0.0 ; } } localDW ->
fvutboy5xz = 0.0 ; localDW -> my0zgfdskq = 0.0 ; localDW -> c5wuvc2xhv = 0.0
; localDW -> fxraqrvxyw = 0.0 ; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) {
localDW -> d2srxt2k4v [ i ] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 8 ; i
++ ) { localDW -> ezxuclwxue [ i ] = 0.0 ; } } localDW -> ikssb4qksk = 0.0 ;
localDW -> hkju4dig11 = 0.0 ; localDW -> fglgh3yqit = 0.0 ; localDW ->
dnoxil325k = 0.0 ; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW ->
lerxprnzhx [ i ] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) {
localDW -> og31bt2h3i [ i ] = 0.0 ; } } localDW -> pdunoq3brb = 0.0 ; localDW
-> gj2ggwn2l0 = 0.0 ; localDW -> iz24wb4wj4 = 0.0 ; localDW -> iblwevhc5b =
0.0 ; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW -> n2nc4r3ybm [ i
] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW ->
caswz5hz11 [ i ] = 0.0 ; } } localDW -> ls4avg3ooq = 0.0 ; localDW ->
cy4vzqay5m = 0.0 ; localDW -> fdt32qa3g5 = 0.0 ; localDW -> a3klqroluh = 0.0
; localDW -> hum1u2staw = 0.0 ; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) {
localDW -> k0sp40t1m3 [ i ] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 8 ; i
++ ) { localDW -> oyuxpxl2fv [ i ] = 0.0 ; } } localDW -> jx1n4fwcas = 0.0 ;
localDW -> az4m05iaqy = 0.0 ; localDW -> ogwkkwd2gc = 0.0 ; localDW ->
f23eeiqpvw = 0.0 ; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW ->
eju0fgfags [ i ] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) {
localDW -> d3hjjaohgw [ i ] = 0.0 ; } } localDW -> a5xy0pxcav = 0.0 ; localDW
-> br31aegqel = 0.0 ; localDW -> fcxv2bpb2l = 0.0 ; localDW -> maqcb0qcls =
0.0 ; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW -> mwtdofttkk [ i
] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW ->
ndtrhsjunc [ i ] = 0.0 ; } } localDW -> d4oa3ao0lk = 0.0 ; localDW ->
npog30pazp = 0.0 ; localDW -> b3hzwhbapy = 0.0 ; localDW -> lsie2mcdul = 0.0
; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW -> axiohyxxrb [ i ] =
0.0 ; } } { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW -> a5xg42ugty
[ i ] = 0.0 ; } } localDW -> oyis1n0vff = 0.0 ; localDW -> cytlgpiage = 0.0 ;
localDW -> gs5ogevjja = 0.0 ; localDW -> dyz5254gvz = 0.0 ; { int32_T i ; for
( i = 0 ; i < 8 ; i ++ ) { localDW -> g3qa1vsrqy [ i ] = 0.0 ; } } { int32_T
i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW -> ifvb53yn5o [ i ] = 0.0 ; } }
localDW -> ac3hq5dukp = 0.0 ; localDW -> iaag2vb5di = 0.0 ; localDW ->
nsdk2u5ox5 = 0.0 ; localDW -> dlzfaqntdm = 0.0 ; { int32_T i ; for ( i = 0 ;
i < 8 ; i ++ ) { localDW -> deumqpbfp3 [ i ] = 0.0 ; } } { int32_T i ; for (
i = 0 ; i < 8 ; i ++ ) { localDW -> g2kpxz2mtc [ i ] = 0.0 ; } } localDW ->
os44nl1epf = 0.0 ; localDW -> kwmr4nlaqp = 0.0 ; localDW -> eshf41aqvv = 0.0
; localDW -> joxr3b1sfc = 0.0 ; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) {
localDW -> kpswqnxvqy [ i ] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 8 ; i
++ ) { localDW -> kftmvz4vis [ i ] = 0.0 ; } } localDW -> oyl4sco5g1 = 0.0 ;
localDW -> jxa4k1azlz = 0.0 ; localDW -> jb4geb1nti = 0.0 ; localDW ->
gn52a5ccfk = 0.0 ; { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { localDW ->
glmtffe1yp [ i ] = 0.0 ; } } { int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) {
localDW -> hbyhlaq5mn [ i ] = 0.0 ; } }
Aerial_Inspection_Octa_Rotor_InitializeDataMapInfo ( dow0ryovld , localDW ,
localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( dow0ryovld -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
dow0ryovld -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( dow0ryovld -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } dow0ryovld -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) dow0ryovld -> NonContDerivMemory . mr_nonContSig0 ; dow0ryovld ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
dow0ryovld -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB
-> opyct5vfe0 ) ; ; if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes = 1 * sizeof ( real_T ) ;
mr_nonContOutputArray [ 0 ] [ 0 ] . currVal = ( char_T * ) & localB ->
opyct5vfe0 ; mr_nonContOutputArray [ 0 ] [ 0 ] . next = ( NULL ) ; } } void
mr_Aerial_Inspection_Octa_Rotor_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T
regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , &
regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_Aerial_Inspection_Octa_Rotor , 53 ) ; * retVal = 1 ; } static void
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy (
( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_Aerial_Inspection_Octa_Rotor_cacheBitFieldToMxArray ( mxArray * destArray
, mwIndex i , int j , uint_T bitVal ) ; static void
mr_Aerial_Inspection_Octa_Rotor_cacheBitFieldToMxArray ( mxArray * destArray
, mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i ,
j , mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Aerial_Inspection_Octa_Rotor_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Aerial_Inspection_Octa_Rotor_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_Aerial_Inspection_Octa_Rotor_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_Aerial_Inspection_Octa_Rotor_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArrayWithOffset ( void
* destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Aerial_Inspection_Octa_Rotor_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void
mr_Aerial_Inspection_Octa_Rotor_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_Aerial_Inspection_Octa_Rotor_extractBitFieldFromCellArrayWithOffset (
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) ; static uint_T
mr_Aerial_Inspection_Octa_Rotor_extractBitFieldFromCellArrayWithOffset (
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Aerial_Inspection_Octa_Rotor_GetDWork
( const ee0qxomeisn * mdlrefDW ) { static const char * ssDWFieldNames [ 3 ] =
{ "rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix
( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const
void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static
const char * rtdwDataFieldNames [ 239 ] = { "mdlrefDW->rtdw.mv5ilts3z3" ,
"mdlrefDW->rtdw.kbatitusoq" , "mdlrefDW->rtdw.ocaux5stdw" ,
"mdlrefDW->rtdw.mxfuc2ujfx" , "mdlrefDW->rtdw.l5f2zyzhp3" ,
"mdlrefDW->rtdw.h25umkjgx0" , "mdlrefDW->rtdw.dl3cy2fonw" ,
"mdlrefDW->rtdw.ku5cmy1g4t" , "mdlrefDW->rtdw.onn5vmv02x" ,
"mdlrefDW->rtdw.hcrdf3amwt" , "mdlrefDW->rtdw.krgwq12he2" ,
"mdlrefDW->rtdw.ft3sgupo14" , "mdlrefDW->rtdw.ow5eyqfeqk" ,
"mdlrefDW->rtdw.nii10oukaf" , "mdlrefDW->rtdw.p3islbftxv" ,
"mdlrefDW->rtdw.cgwhosvdcl" , "mdlrefDW->rtdw.n3p2b4331e" ,
"mdlrefDW->rtdw.lbhxewsesw" , "mdlrefDW->rtdw.f3u1feui3n" ,
"mdlrefDW->rtdw.gpnyrijw4m" , "mdlrefDW->rtdw.dd5g3kw502" ,
"mdlrefDW->rtdw.hnaznqa2p4" , "mdlrefDW->rtdw.kqeyhwy0iy" ,
"mdlrefDW->rtdw.mhv1bghawx" , "mdlrefDW->rtdw.nf1542nijs" ,
"mdlrefDW->rtdw.obvpxaht0r" , "mdlrefDW->rtdw.g0o2nw0vo5" ,
"mdlrefDW->rtdw.lp52ktildu" , "mdlrefDW->rtdw.aufjeltg54" ,
"mdlrefDW->rtdw.g0cifnynep" , "mdlrefDW->rtdw.mk50vkpww5" ,
"mdlrefDW->rtdw.czqtaqmrox" , "mdlrefDW->rtdw.onrgnw1hrk" ,
"mdlrefDW->rtdw.i5wehflxkv" , "mdlrefDW->rtdw.la3n4fkj1w" ,
"mdlrefDW->rtdw.pcnwcb0ubp" , "mdlrefDW->rtdw.ow5vllohzr" ,
"mdlrefDW->rtdw.emnm2ffsad" , "mdlrefDW->rtdw.c5yf2rpogw" ,
"mdlrefDW->rtdw.obejuicafg" , "mdlrefDW->rtdw.k45ghuvsky" ,
"mdlrefDW->rtdw.edg55qeb4d" , "mdlrefDW->rtdw.mj0xbsq2w3" ,
"mdlrefDW->rtdw.bmql4chnpq" , "mdlrefDW->rtdw.op2dymxuq1" ,
"mdlrefDW->rtdw.orjk2gfqrn" , "mdlrefDW->rtdw.nrlfz5eaxk" ,
"mdlrefDW->rtdw.kh2adsnm1q" , "mdlrefDW->rtdw.mblmikbf0f" ,
"mdlrefDW->rtdw.m3jcpbafqz" , "mdlrefDW->rtdw.e5ryjhnqnq" ,
"mdlrefDW->rtdw.ib0hpc5hea" , "mdlrefDW->rtdw.eed3c4tzny" ,
"mdlrefDW->rtdw.go3k25h13t" , "mdlrefDW->rtdw.ntzo30npzj" ,
"mdlrefDW->rtdw.ecoelytsio" , "mdlrefDW->rtdw.bsmesx5als" ,
"mdlrefDW->rtdw.j0xzihzavo" , "mdlrefDW->rtdw.m5jeoymdtx" ,
"mdlrefDW->rtdw.gm2kmanbfl" , "mdlrefDW->rtdw.igxfyznirl" ,
"mdlrefDW->rtdw.lwcqf3ezzk" , "mdlrefDW->rtdw.l4rgwczqhc" ,
"mdlrefDW->rtdw.eytyslgh2k" , "mdlrefDW->rtdw.povjdgfhin" ,
"mdlrefDW->rtdw.g5qmb3qhc4" , "mdlrefDW->rtdw.fx12dxjgoz" ,
"mdlrefDW->rtdw.ihq0d41a2e" , "mdlrefDW->rtdw.mqkvegdktp" ,
"mdlrefDW->rtdw.hx5girvbxs" , "mdlrefDW->rtdw.hru1uiypuh" ,
"mdlrefDW->rtdw.og2wfdujcm" , "mdlrefDW->rtdw.ctj2bho0yp" ,
"mdlrefDW->rtdw.ishlrl4nwz" , "mdlrefDW->rtdw.m0ldh3g2jq" ,
"mdlrefDW->rtdw.heividnr1k" , "mdlrefDW->rtdw.ko5bk1dgvg" ,
"mdlrefDW->rtdw.jp5mc5vhca" , "mdlrefDW->rtdw.keklbuafg3" ,
"mdlrefDW->rtdw.pxu0fofv1e" , "mdlrefDW->rtdw.n452s4e4iw" ,
"mdlrefDW->rtdw.btp0wsoaw3" , "mdlrefDW->rtdw.etlbfvymuh" ,
"mdlrefDW->rtdw.i1u244qywa" , "mdlrefDW->rtdw.on2jorwm5c" ,
"mdlrefDW->rtdw.hyj1pbc41o" , "mdlrefDW->rtdw.fshqpe3da4" ,
"mdlrefDW->rtdw.blbvdczw00" , "mdlrefDW->rtdw.om4r50j0ua" ,
"mdlrefDW->rtdw.cwx5fu4ktk" , "mdlrefDW->rtdw.lmez50dezv" ,
"mdlrefDW->rtdw.ptccs2iwze" , "mdlrefDW->rtdw.pkxq5fago0" ,
"mdlrefDW->rtdw.hqms323kfd" , "mdlrefDW->rtdw.knfybvfydq" ,
"mdlrefDW->rtdw.pnyrvw5ztj" , "mdlrefDW->rtdw.f2rr4ira1h" ,
"mdlrefDW->rtdw.pcu35m2eta" , "mdlrefDW->rtdw.nj5pmpqqf3" ,
"mdlrefDW->rtdw.byscbandzd" , "mdlrefDW->rtdw.lbmjvdypjj" ,
"mdlrefDW->rtdw.clgj4oa4pn" , "mdlrefDW->rtdw.pe4abat22x" ,
"mdlrefDW->rtdw.laux3z5rot" , "mdlrefDW->rtdw.lfncl4pmix" ,
"mdlrefDW->rtdw.kbkknb0gcp" , "mdlrefDW->rtdw.mt12tk1q4n" ,
"mdlrefDW->rtdw.jdmzk0jkqo" , "mdlrefDW->rtdw.fcdlsz1jpj" ,
"mdlrefDW->rtdw.mzgko5hhco" , "mdlrefDW->rtdw.czv5olhqpd" ,
"mdlrefDW->rtdw.j3wxtue1rg" , "mdlrefDW->rtdw.acts2xblll" ,
"mdlrefDW->rtdw.fvutboy5xz" , "mdlrefDW->rtdw.my0zgfdskq" ,
"mdlrefDW->rtdw.c5wuvc2xhv" , "mdlrefDW->rtdw.fxraqrvxyw" ,
"mdlrefDW->rtdw.d2srxt2k4v" , "mdlrefDW->rtdw.ezxuclwxue" ,
"mdlrefDW->rtdw.ikssb4qksk" , "mdlrefDW->rtdw.hkju4dig11" ,
"mdlrefDW->rtdw.fglgh3yqit" , "mdlrefDW->rtdw.dnoxil325k" ,
"mdlrefDW->rtdw.lerxprnzhx" , "mdlrefDW->rtdw.og31bt2h3i" ,
"mdlrefDW->rtdw.pdunoq3brb" , "mdlrefDW->rtdw.gj2ggwn2l0" ,
"mdlrefDW->rtdw.iz24wb4wj4" , "mdlrefDW->rtdw.iblwevhc5b" ,
"mdlrefDW->rtdw.n2nc4r3ybm" , "mdlrefDW->rtdw.caswz5hz11" ,
"mdlrefDW->rtdw.ls4avg3ooq" , "mdlrefDW->rtdw.cy4vzqay5m" ,
"mdlrefDW->rtdw.fdt32qa3g5" , "mdlrefDW->rtdw.a3klqroluh" ,
"mdlrefDW->rtdw.hum1u2staw" , "mdlrefDW->rtdw.k0sp40t1m3" ,
"mdlrefDW->rtdw.oyuxpxl2fv" , "mdlrefDW->rtdw.jx1n4fwcas" ,
"mdlrefDW->rtdw.az4m05iaqy" , "mdlrefDW->rtdw.ogwkkwd2gc" ,
"mdlrefDW->rtdw.f23eeiqpvw" , "mdlrefDW->rtdw.eju0fgfags" ,
"mdlrefDW->rtdw.d3hjjaohgw" , "mdlrefDW->rtdw.a5xy0pxcav" ,
"mdlrefDW->rtdw.br31aegqel" , "mdlrefDW->rtdw.fcxv2bpb2l" ,
"mdlrefDW->rtdw.maqcb0qcls" , "mdlrefDW->rtdw.mwtdofttkk" ,
"mdlrefDW->rtdw.ndtrhsjunc" , "mdlrefDW->rtdw.d4oa3ao0lk" ,
"mdlrefDW->rtdw.npog30pazp" , "mdlrefDW->rtdw.b3hzwhbapy" ,
"mdlrefDW->rtdw.lsie2mcdul" , "mdlrefDW->rtdw.axiohyxxrb" ,
"mdlrefDW->rtdw.a5xg42ugty" , "mdlrefDW->rtdw.oyis1n0vff" ,
"mdlrefDW->rtdw.cytlgpiage" , "mdlrefDW->rtdw.gs5ogevjja" ,
"mdlrefDW->rtdw.dyz5254gvz" , "mdlrefDW->rtdw.g3qa1vsrqy" ,
"mdlrefDW->rtdw.ifvb53yn5o" , "mdlrefDW->rtdw.ac3hq5dukp" ,
"mdlrefDW->rtdw.iaag2vb5di" , "mdlrefDW->rtdw.nsdk2u5ox5" ,
"mdlrefDW->rtdw.dlzfaqntdm" , "mdlrefDW->rtdw.deumqpbfp3" ,
"mdlrefDW->rtdw.g2kpxz2mtc" , "mdlrefDW->rtdw.os44nl1epf" ,
"mdlrefDW->rtdw.kwmr4nlaqp" , "mdlrefDW->rtdw.eshf41aqvv" ,
"mdlrefDW->rtdw.joxr3b1sfc" , "mdlrefDW->rtdw.kpswqnxvqy" ,
"mdlrefDW->rtdw.kftmvz4vis" , "mdlrefDW->rtdw.oyl4sco5g1" ,
"mdlrefDW->rtdw.jxa4k1azlz" , "mdlrefDW->rtdw.jb4geb1nti" ,
"mdlrefDW->rtdw.gn52a5ccfk" , "mdlrefDW->rtdw.glmtffe1yp" ,
"mdlrefDW->rtdw.hbyhlaq5mn" , "mdlrefDW->rtdw.j0jukssvs4" ,
"mdlrefDW->rtdw.awl0r0xq4b" , "mdlrefDW->rtdw.kjksxbfd0l" ,
"mdlrefDW->rtdw.bk4ihbivnk" , "mdlrefDW->rtdw.bgw5ytfnw1" ,
"mdlrefDW->rtdw.boo4xfpus1" , "mdlrefDW->rtdw.mlxyhs3cpz" ,
"mdlrefDW->rtdw.iualn21z42" , "mdlrefDW->rtdw.hviz4etddq" ,
"mdlrefDW->rtdw.d5djwo2yyn" , "mdlrefDW->rtdw.mylnfcphte" ,
"mdlrefDW->rtdw.d0b0rzrkp4" , "mdlrefDW->rtdw.djcqsk0pjv" ,
"mdlrefDW->rtdw.o33zcmmyog" , "mdlrefDW->rtdw.lrmgx0sfud" ,
"mdlrefDW->rtdw.p3kgj2bbob" , "mdlrefDW->rtdw.k4fmvxudnp" ,
"mdlrefDW->rtdw.eo0qqmj5ab" , "mdlrefDW->rtdw.go0slkjltn" ,
"mdlrefDW->rtdw.fmnremskar" , "mdlrefDW->rtdw.joqyb452tl" ,
"mdlrefDW->rtdw.pztnkomlmy" , "mdlrefDW->rtdw.ohjdevi5e1" ,
"mdlrefDW->rtdw.p50oq1qzq5" , "mdlrefDW->rtdw.opoqs3zl5e" ,
"mdlrefDW->rtdw.fxjgijpbdk" , "mdlrefDW->rtdw.fftwuvrgms" ,
"mdlrefDW->rtdw.m204rvu0ko" , "mdlrefDW->rtdw.e5xpj42ysr" ,
"mdlrefDW->rtdw.mpbcjlf4vh" , "mdlrefDW->rtdw.jpbdwgjnfq" ,
"mdlrefDW->rtdw.imoucwn4pi" , "mdlrefDW->rtdw.kunjroudei" ,
"mdlrefDW->rtdw.eafmghgkg2" , "mdlrefDW->rtdw.gg2ctyfptk" ,
"mdlrefDW->rtdw.kgmrq35r1d" , "mdlrefDW->rtdw.pfeghevp3b" ,
"mdlrefDW->rtdw.fxfjh3uza5" , "mdlrefDW->rtdw.cqdisjrtu0" ,
"mdlrefDW->rtdw.hrfi0yiu4u" , "mdlrefDW->rtdw.eghpxvkniz" ,
"mdlrefDW->rtdw.dj4vnxq0rt" , "mdlrefDW->rtdw.cstvtpbqtb" ,
"mdlrefDW->rtdw.bslmwz5chr" , "mdlrefDW->rtdw.p1syfnw3hu" ,
"mdlrefDW->rtdw.g2lis3sfb3" , "mdlrefDW->rtdw.aniuqzhx2h" ,
"mdlrefDW->rtdw.gdj3xqj1np" , "mdlrefDW->rtdw.m3p0qccui3" ,
"mdlrefDW->rtdw.n2xswyacim" , "mdlrefDW->rtdw.mzb2q4hcny" ,
"mdlrefDW->rtdw.efywbwsjif" , "mdlrefDW->rtdw.bn3qvuzmed" ,
"mdlrefDW->rtdw.pgzsern3x0" , "mdlrefDW->rtdw.kt4acua1kk" ,
"mdlrefDW->rtdw.pu1g0m4jmc" , "mdlrefDW->rtdw.njc3rznzi0" ,
"mdlrefDW->rtdw.kiem0xzrc5" , "mdlrefDW->rtdw.nvwwpbgr5o" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 239 , rtdwDataFieldNames ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 0 , (
const void * ) & ( mdlrefDW -> rtdw . mv5ilts3z3 ) , sizeof ( mdlrefDW ->
rtdw . mv5ilts3z3 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 1 , ( const void * ) & ( mdlrefDW -> rtdw . kbatitusoq ) ,
sizeof ( mdlrefDW -> rtdw . kbatitusoq ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 2 , (
const void * ) & ( mdlrefDW -> rtdw . ocaux5stdw ) , sizeof ( mdlrefDW ->
rtdw . ocaux5stdw ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 3 , ( const void * ) & ( mdlrefDW -> rtdw . mxfuc2ujfx ) ,
sizeof ( mdlrefDW -> rtdw . mxfuc2ujfx ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 4 , (
const void * ) & ( mdlrefDW -> rtdw . l5f2zyzhp3 ) , sizeof ( mdlrefDW ->
rtdw . l5f2zyzhp3 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 5 , ( const void * ) & ( mdlrefDW -> rtdw . h25umkjgx0 ) ,
sizeof ( mdlrefDW -> rtdw . h25umkjgx0 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 6 , (
const void * ) & ( mdlrefDW -> rtdw . dl3cy2fonw ) , sizeof ( mdlrefDW ->
rtdw . dl3cy2fonw ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 7 , ( const void * ) & ( mdlrefDW -> rtdw . ku5cmy1g4t ) ,
sizeof ( mdlrefDW -> rtdw . ku5cmy1g4t ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 8 , (
const void * ) & ( mdlrefDW -> rtdw . onn5vmv02x ) , sizeof ( mdlrefDW ->
rtdw . onn5vmv02x ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 9 , ( const void * ) & ( mdlrefDW -> rtdw . hcrdf3amwt ) ,
sizeof ( mdlrefDW -> rtdw . hcrdf3amwt ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 10 , (
const void * ) & ( mdlrefDW -> rtdw . krgwq12he2 ) , sizeof ( mdlrefDW ->
rtdw . krgwq12he2 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 11 , ( const void * ) & ( mdlrefDW -> rtdw . ft3sgupo14 ) ,
sizeof ( mdlrefDW -> rtdw . ft3sgupo14 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 12 , (
const void * ) & ( mdlrefDW -> rtdw . ow5eyqfeqk ) , sizeof ( mdlrefDW ->
rtdw . ow5eyqfeqk ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 13 , ( const void * ) & ( mdlrefDW -> rtdw . nii10oukaf ) ,
sizeof ( mdlrefDW -> rtdw . nii10oukaf ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 14 , (
const void * ) & ( mdlrefDW -> rtdw . p3islbftxv ) , sizeof ( mdlrefDW ->
rtdw . p3islbftxv ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 15 , ( const void * ) & ( mdlrefDW -> rtdw . cgwhosvdcl ) ,
sizeof ( mdlrefDW -> rtdw . cgwhosvdcl ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 16 , (
const void * ) & ( mdlrefDW -> rtdw . n3p2b4331e ) , sizeof ( mdlrefDW ->
rtdw . n3p2b4331e ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 17 , ( const void * ) & ( mdlrefDW -> rtdw . lbhxewsesw ) ,
sizeof ( mdlrefDW -> rtdw . lbhxewsesw ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 18 , (
const void * ) & ( mdlrefDW -> rtdw . f3u1feui3n ) , sizeof ( mdlrefDW ->
rtdw . f3u1feui3n ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 19 , ( const void * ) & ( mdlrefDW -> rtdw . gpnyrijw4m ) ,
sizeof ( mdlrefDW -> rtdw . gpnyrijw4m ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 20 , (
const void * ) & ( mdlrefDW -> rtdw . dd5g3kw502 ) , sizeof ( mdlrefDW ->
rtdw . dd5g3kw502 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 21 , ( const void * ) & ( mdlrefDW -> rtdw . hnaznqa2p4 ) ,
sizeof ( mdlrefDW -> rtdw . hnaznqa2p4 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 22 , (
const void * ) & ( mdlrefDW -> rtdw . kqeyhwy0iy ) , sizeof ( mdlrefDW ->
rtdw . kqeyhwy0iy ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 23 , ( const void * ) & ( mdlrefDW -> rtdw . mhv1bghawx ) ,
sizeof ( mdlrefDW -> rtdw . mhv1bghawx ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 24 , (
const void * ) & ( mdlrefDW -> rtdw . nf1542nijs ) , sizeof ( mdlrefDW ->
rtdw . nf1542nijs ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 25 , ( const void * ) & ( mdlrefDW -> rtdw . obvpxaht0r ) ,
sizeof ( mdlrefDW -> rtdw . obvpxaht0r ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 26 , (
const void * ) & ( mdlrefDW -> rtdw . g0o2nw0vo5 ) , sizeof ( mdlrefDW ->
rtdw . g0o2nw0vo5 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 27 , ( const void * ) & ( mdlrefDW -> rtdw . lp52ktildu ) ,
sizeof ( mdlrefDW -> rtdw . lp52ktildu ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 28 , (
const void * ) & ( mdlrefDW -> rtdw . aufjeltg54 ) , sizeof ( mdlrefDW ->
rtdw . aufjeltg54 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 29 , ( const void * ) & ( mdlrefDW -> rtdw . g0cifnynep ) ,
sizeof ( mdlrefDW -> rtdw . g0cifnynep ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 30 , (
const void * ) & ( mdlrefDW -> rtdw . mk50vkpww5 ) , sizeof ( mdlrefDW ->
rtdw . mk50vkpww5 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 31 , ( const void * ) & ( mdlrefDW -> rtdw . czqtaqmrox ) ,
sizeof ( mdlrefDW -> rtdw . czqtaqmrox ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 32 , (
const void * ) & ( mdlrefDW -> rtdw . onrgnw1hrk ) , sizeof ( mdlrefDW ->
rtdw . onrgnw1hrk ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 33 , ( const void * ) & ( mdlrefDW -> rtdw . i5wehflxkv ) ,
sizeof ( mdlrefDW -> rtdw . i5wehflxkv ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 34 , (
const void * ) & ( mdlrefDW -> rtdw . la3n4fkj1w ) , sizeof ( mdlrefDW ->
rtdw . la3n4fkj1w ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 35 , ( const void * ) & ( mdlrefDW -> rtdw . pcnwcb0ubp ) ,
sizeof ( mdlrefDW -> rtdw . pcnwcb0ubp ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 36 , (
const void * ) & ( mdlrefDW -> rtdw . ow5vllohzr ) , sizeof ( mdlrefDW ->
rtdw . ow5vllohzr ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 37 , ( const void * ) & ( mdlrefDW -> rtdw . emnm2ffsad ) ,
sizeof ( mdlrefDW -> rtdw . emnm2ffsad ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 38 , (
const void * ) & ( mdlrefDW -> rtdw . c5yf2rpogw ) , sizeof ( mdlrefDW ->
rtdw . c5yf2rpogw ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 39 , ( const void * ) & ( mdlrefDW -> rtdw . obejuicafg ) ,
sizeof ( mdlrefDW -> rtdw . obejuicafg ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 40 , (
const void * ) & ( mdlrefDW -> rtdw . k45ghuvsky ) , sizeof ( mdlrefDW ->
rtdw . k45ghuvsky ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 41 , ( const void * ) & ( mdlrefDW -> rtdw . edg55qeb4d ) ,
sizeof ( mdlrefDW -> rtdw . edg55qeb4d ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 42 , (
const void * ) & ( mdlrefDW -> rtdw . mj0xbsq2w3 ) , sizeof ( mdlrefDW ->
rtdw . mj0xbsq2w3 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 43 , ( const void * ) & ( mdlrefDW -> rtdw . bmql4chnpq ) ,
sizeof ( mdlrefDW -> rtdw . bmql4chnpq ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 44 , (
const void * ) & ( mdlrefDW -> rtdw . op2dymxuq1 ) , sizeof ( mdlrefDW ->
rtdw . op2dymxuq1 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 45 , ( const void * ) & ( mdlrefDW -> rtdw . orjk2gfqrn ) ,
sizeof ( mdlrefDW -> rtdw . orjk2gfqrn ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 46 , (
const void * ) & ( mdlrefDW -> rtdw . nrlfz5eaxk ) , sizeof ( mdlrefDW ->
rtdw . nrlfz5eaxk ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 47 , ( const void * ) & ( mdlrefDW -> rtdw . kh2adsnm1q ) ,
sizeof ( mdlrefDW -> rtdw . kh2adsnm1q ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 48 , (
const void * ) & ( mdlrefDW -> rtdw . mblmikbf0f ) , sizeof ( mdlrefDW ->
rtdw . mblmikbf0f ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 49 , ( const void * ) & ( mdlrefDW -> rtdw . m3jcpbafqz ) ,
sizeof ( mdlrefDW -> rtdw . m3jcpbafqz ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 50 , (
const void * ) & ( mdlrefDW -> rtdw . e5ryjhnqnq ) , sizeof ( mdlrefDW ->
rtdw . e5ryjhnqnq ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 51 , ( const void * ) & ( mdlrefDW -> rtdw . ib0hpc5hea ) ,
sizeof ( mdlrefDW -> rtdw . ib0hpc5hea ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 52 , (
const void * ) & ( mdlrefDW -> rtdw . eed3c4tzny ) , sizeof ( mdlrefDW ->
rtdw . eed3c4tzny ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 53 , ( const void * ) & ( mdlrefDW -> rtdw . go3k25h13t ) ,
sizeof ( mdlrefDW -> rtdw . go3k25h13t ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 54 , (
const void * ) & ( mdlrefDW -> rtdw . ntzo30npzj ) , sizeof ( mdlrefDW ->
rtdw . ntzo30npzj ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 55 , ( const void * ) & ( mdlrefDW -> rtdw . ecoelytsio ) ,
sizeof ( mdlrefDW -> rtdw . ecoelytsio ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 56 , (
const void * ) & ( mdlrefDW -> rtdw . bsmesx5als ) , sizeof ( mdlrefDW ->
rtdw . bsmesx5als ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 57 , ( const void * ) & ( mdlrefDW -> rtdw . j0xzihzavo ) ,
sizeof ( mdlrefDW -> rtdw . j0xzihzavo ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 58 , (
const void * ) & ( mdlrefDW -> rtdw . m5jeoymdtx ) , sizeof ( mdlrefDW ->
rtdw . m5jeoymdtx ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 59 , ( const void * ) & ( mdlrefDW -> rtdw . gm2kmanbfl ) ,
sizeof ( mdlrefDW -> rtdw . gm2kmanbfl ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 60 , (
const void * ) & ( mdlrefDW -> rtdw . igxfyznirl ) , sizeof ( mdlrefDW ->
rtdw . igxfyznirl ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 61 , ( const void * ) & ( mdlrefDW -> rtdw . lwcqf3ezzk ) ,
sizeof ( mdlrefDW -> rtdw . lwcqf3ezzk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 62 , (
const void * ) & ( mdlrefDW -> rtdw . l4rgwczqhc ) , sizeof ( mdlrefDW ->
rtdw . l4rgwczqhc ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 63 , ( const void * ) & ( mdlrefDW -> rtdw . eytyslgh2k ) ,
sizeof ( mdlrefDW -> rtdw . eytyslgh2k ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 64 , (
const void * ) & ( mdlrefDW -> rtdw . povjdgfhin ) , sizeof ( mdlrefDW ->
rtdw . povjdgfhin ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 65 , ( const void * ) & ( mdlrefDW -> rtdw . g5qmb3qhc4 ) ,
sizeof ( mdlrefDW -> rtdw . g5qmb3qhc4 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 66 , (
const void * ) & ( mdlrefDW -> rtdw . fx12dxjgoz ) , sizeof ( mdlrefDW ->
rtdw . fx12dxjgoz ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 67 , ( const void * ) & ( mdlrefDW -> rtdw . ihq0d41a2e ) ,
sizeof ( mdlrefDW -> rtdw . ihq0d41a2e ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 68 , (
const void * ) & ( mdlrefDW -> rtdw . mqkvegdktp ) , sizeof ( mdlrefDW ->
rtdw . mqkvegdktp ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 69 , ( const void * ) & ( mdlrefDW -> rtdw . hx5girvbxs ) ,
sizeof ( mdlrefDW -> rtdw . hx5girvbxs ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 70 , (
const void * ) & ( mdlrefDW -> rtdw . hru1uiypuh ) , sizeof ( mdlrefDW ->
rtdw . hru1uiypuh ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 71 , ( const void * ) & ( mdlrefDW -> rtdw . og2wfdujcm ) ,
sizeof ( mdlrefDW -> rtdw . og2wfdujcm ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 72 , (
const void * ) & ( mdlrefDW -> rtdw . ctj2bho0yp ) , sizeof ( mdlrefDW ->
rtdw . ctj2bho0yp ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 73 , ( const void * ) & ( mdlrefDW -> rtdw . ishlrl4nwz ) ,
sizeof ( mdlrefDW -> rtdw . ishlrl4nwz ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 74 , (
const void * ) & ( mdlrefDW -> rtdw . m0ldh3g2jq ) , sizeof ( mdlrefDW ->
rtdw . m0ldh3g2jq ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 75 , ( const void * ) & ( mdlrefDW -> rtdw . heividnr1k ) ,
sizeof ( mdlrefDW -> rtdw . heividnr1k ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 76 , (
const void * ) & ( mdlrefDW -> rtdw . ko5bk1dgvg ) , sizeof ( mdlrefDW ->
rtdw . ko5bk1dgvg ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 77 , ( const void * ) & ( mdlrefDW -> rtdw . jp5mc5vhca ) ,
sizeof ( mdlrefDW -> rtdw . jp5mc5vhca ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 78 , (
const void * ) & ( mdlrefDW -> rtdw . keklbuafg3 ) , sizeof ( mdlrefDW ->
rtdw . keklbuafg3 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 79 , ( const void * ) & ( mdlrefDW -> rtdw . pxu0fofv1e ) ,
sizeof ( mdlrefDW -> rtdw . pxu0fofv1e ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 80 , (
const void * ) & ( mdlrefDW -> rtdw . n452s4e4iw ) , sizeof ( mdlrefDW ->
rtdw . n452s4e4iw ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 81 , ( const void * ) & ( mdlrefDW -> rtdw . btp0wsoaw3 ) ,
sizeof ( mdlrefDW -> rtdw . btp0wsoaw3 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 82 , (
const void * ) & ( mdlrefDW -> rtdw . etlbfvymuh ) , sizeof ( mdlrefDW ->
rtdw . etlbfvymuh ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 83 , ( const void * ) & ( mdlrefDW -> rtdw . i1u244qywa ) ,
sizeof ( mdlrefDW -> rtdw . i1u244qywa ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 84 , (
const void * ) & ( mdlrefDW -> rtdw . on2jorwm5c ) , sizeof ( mdlrefDW ->
rtdw . on2jorwm5c ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 85 , ( const void * ) & ( mdlrefDW -> rtdw . hyj1pbc41o ) ,
sizeof ( mdlrefDW -> rtdw . hyj1pbc41o ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 86 , (
const void * ) & ( mdlrefDW -> rtdw . fshqpe3da4 ) , sizeof ( mdlrefDW ->
rtdw . fshqpe3da4 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 87 , ( const void * ) & ( mdlrefDW -> rtdw . blbvdczw00 ) ,
sizeof ( mdlrefDW -> rtdw . blbvdczw00 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 88 , (
const void * ) & ( mdlrefDW -> rtdw . om4r50j0ua ) , sizeof ( mdlrefDW ->
rtdw . om4r50j0ua ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 89 , ( const void * ) & ( mdlrefDW -> rtdw . cwx5fu4ktk ) ,
sizeof ( mdlrefDW -> rtdw . cwx5fu4ktk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 90 , (
const void * ) & ( mdlrefDW -> rtdw . lmez50dezv ) , sizeof ( mdlrefDW ->
rtdw . lmez50dezv ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 91 , ( const void * ) & ( mdlrefDW -> rtdw . ptccs2iwze ) ,
sizeof ( mdlrefDW -> rtdw . ptccs2iwze ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 92 , (
const void * ) & ( mdlrefDW -> rtdw . pkxq5fago0 ) , sizeof ( mdlrefDW ->
rtdw . pkxq5fago0 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 93 , ( const void * ) & ( mdlrefDW -> rtdw . hqms323kfd ) ,
sizeof ( mdlrefDW -> rtdw . hqms323kfd ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 94 , (
const void * ) & ( mdlrefDW -> rtdw . knfybvfydq ) , sizeof ( mdlrefDW ->
rtdw . knfybvfydq ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 95 , ( const void * ) & ( mdlrefDW -> rtdw . pnyrvw5ztj ) ,
sizeof ( mdlrefDW -> rtdw . pnyrvw5ztj ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 96 , (
const void * ) & ( mdlrefDW -> rtdw . f2rr4ira1h ) , sizeof ( mdlrefDW ->
rtdw . f2rr4ira1h ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 97 , ( const void * ) & ( mdlrefDW -> rtdw . pcu35m2eta ) ,
sizeof ( mdlrefDW -> rtdw . pcu35m2eta ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 98 , (
const void * ) & ( mdlrefDW -> rtdw . nj5pmpqqf3 ) , sizeof ( mdlrefDW ->
rtdw . nj5pmpqqf3 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 99 , ( const void * ) & ( mdlrefDW -> rtdw . byscbandzd ) ,
sizeof ( mdlrefDW -> rtdw . byscbandzd ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 100 , (
const void * ) & ( mdlrefDW -> rtdw . lbmjvdypjj ) , sizeof ( mdlrefDW ->
rtdw . lbmjvdypjj ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 101 , ( const void * ) & ( mdlrefDW -> rtdw . clgj4oa4pn ) ,
sizeof ( mdlrefDW -> rtdw . clgj4oa4pn ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 102 , (
const void * ) & ( mdlrefDW -> rtdw . pe4abat22x ) , sizeof ( mdlrefDW ->
rtdw . pe4abat22x ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 103 , ( const void * ) & ( mdlrefDW -> rtdw . laux3z5rot ) ,
sizeof ( mdlrefDW -> rtdw . laux3z5rot ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 104 , (
const void * ) & ( mdlrefDW -> rtdw . lfncl4pmix ) , sizeof ( mdlrefDW ->
rtdw . lfncl4pmix ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 105 , ( const void * ) & ( mdlrefDW -> rtdw . kbkknb0gcp ) ,
sizeof ( mdlrefDW -> rtdw . kbkknb0gcp ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 106 , (
const void * ) & ( mdlrefDW -> rtdw . mt12tk1q4n ) , sizeof ( mdlrefDW ->
rtdw . mt12tk1q4n ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 107 , ( const void * ) & ( mdlrefDW -> rtdw . jdmzk0jkqo ) ,
sizeof ( mdlrefDW -> rtdw . jdmzk0jkqo ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 108 , (
const void * ) & ( mdlrefDW -> rtdw . fcdlsz1jpj ) , sizeof ( mdlrefDW ->
rtdw . fcdlsz1jpj ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 109 , ( const void * ) & ( mdlrefDW -> rtdw . mzgko5hhco ) ,
sizeof ( mdlrefDW -> rtdw . mzgko5hhco ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 110 , (
const void * ) & ( mdlrefDW -> rtdw . czv5olhqpd ) , sizeof ( mdlrefDW ->
rtdw . czv5olhqpd ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 111 , ( const void * ) & ( mdlrefDW -> rtdw . j3wxtue1rg ) ,
sizeof ( mdlrefDW -> rtdw . j3wxtue1rg ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 112 , (
const void * ) & ( mdlrefDW -> rtdw . acts2xblll ) , sizeof ( mdlrefDW ->
rtdw . acts2xblll ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 113 , ( const void * ) & ( mdlrefDW -> rtdw . fvutboy5xz ) ,
sizeof ( mdlrefDW -> rtdw . fvutboy5xz ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 114 , (
const void * ) & ( mdlrefDW -> rtdw . my0zgfdskq ) , sizeof ( mdlrefDW ->
rtdw . my0zgfdskq ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 115 , ( const void * ) & ( mdlrefDW -> rtdw . c5wuvc2xhv ) ,
sizeof ( mdlrefDW -> rtdw . c5wuvc2xhv ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 116 , (
const void * ) & ( mdlrefDW -> rtdw . fxraqrvxyw ) , sizeof ( mdlrefDW ->
rtdw . fxraqrvxyw ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 117 , ( const void * ) & ( mdlrefDW -> rtdw . d2srxt2k4v ) ,
sizeof ( mdlrefDW -> rtdw . d2srxt2k4v ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 118 , (
const void * ) & ( mdlrefDW -> rtdw . ezxuclwxue ) , sizeof ( mdlrefDW ->
rtdw . ezxuclwxue ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 119 , ( const void * ) & ( mdlrefDW -> rtdw . ikssb4qksk ) ,
sizeof ( mdlrefDW -> rtdw . ikssb4qksk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 120 , (
const void * ) & ( mdlrefDW -> rtdw . hkju4dig11 ) , sizeof ( mdlrefDW ->
rtdw . hkju4dig11 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 121 , ( const void * ) & ( mdlrefDW -> rtdw . fglgh3yqit ) ,
sizeof ( mdlrefDW -> rtdw . fglgh3yqit ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 122 , (
const void * ) & ( mdlrefDW -> rtdw . dnoxil325k ) , sizeof ( mdlrefDW ->
rtdw . dnoxil325k ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 123 , ( const void * ) & ( mdlrefDW -> rtdw . lerxprnzhx ) ,
sizeof ( mdlrefDW -> rtdw . lerxprnzhx ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 124 , (
const void * ) & ( mdlrefDW -> rtdw . og31bt2h3i ) , sizeof ( mdlrefDW ->
rtdw . og31bt2h3i ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 125 , ( const void * ) & ( mdlrefDW -> rtdw . pdunoq3brb ) ,
sizeof ( mdlrefDW -> rtdw . pdunoq3brb ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 126 , (
const void * ) & ( mdlrefDW -> rtdw . gj2ggwn2l0 ) , sizeof ( mdlrefDW ->
rtdw . gj2ggwn2l0 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 127 , ( const void * ) & ( mdlrefDW -> rtdw . iz24wb4wj4 ) ,
sizeof ( mdlrefDW -> rtdw . iz24wb4wj4 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 128 , (
const void * ) & ( mdlrefDW -> rtdw . iblwevhc5b ) , sizeof ( mdlrefDW ->
rtdw . iblwevhc5b ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 129 , ( const void * ) & ( mdlrefDW -> rtdw . n2nc4r3ybm ) ,
sizeof ( mdlrefDW -> rtdw . n2nc4r3ybm ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 130 , (
const void * ) & ( mdlrefDW -> rtdw . caswz5hz11 ) , sizeof ( mdlrefDW ->
rtdw . caswz5hz11 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 131 , ( const void * ) & ( mdlrefDW -> rtdw . ls4avg3ooq ) ,
sizeof ( mdlrefDW -> rtdw . ls4avg3ooq ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 132 , (
const void * ) & ( mdlrefDW -> rtdw . cy4vzqay5m ) , sizeof ( mdlrefDW ->
rtdw . cy4vzqay5m ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 133 , ( const void * ) & ( mdlrefDW -> rtdw . fdt32qa3g5 ) ,
sizeof ( mdlrefDW -> rtdw . fdt32qa3g5 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 134 , (
const void * ) & ( mdlrefDW -> rtdw . a3klqroluh ) , sizeof ( mdlrefDW ->
rtdw . a3klqroluh ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 135 , ( const void * ) & ( mdlrefDW -> rtdw . hum1u2staw ) ,
sizeof ( mdlrefDW -> rtdw . hum1u2staw ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 136 , (
const void * ) & ( mdlrefDW -> rtdw . k0sp40t1m3 ) , sizeof ( mdlrefDW ->
rtdw . k0sp40t1m3 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 137 , ( const void * ) & ( mdlrefDW -> rtdw . oyuxpxl2fv ) ,
sizeof ( mdlrefDW -> rtdw . oyuxpxl2fv ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 138 , (
const void * ) & ( mdlrefDW -> rtdw . jx1n4fwcas ) , sizeof ( mdlrefDW ->
rtdw . jx1n4fwcas ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 139 , ( const void * ) & ( mdlrefDW -> rtdw . az4m05iaqy ) ,
sizeof ( mdlrefDW -> rtdw . az4m05iaqy ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 140 , (
const void * ) & ( mdlrefDW -> rtdw . ogwkkwd2gc ) , sizeof ( mdlrefDW ->
rtdw . ogwkkwd2gc ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 141 , ( const void * ) & ( mdlrefDW -> rtdw . f23eeiqpvw ) ,
sizeof ( mdlrefDW -> rtdw . f23eeiqpvw ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 142 , (
const void * ) & ( mdlrefDW -> rtdw . eju0fgfags ) , sizeof ( mdlrefDW ->
rtdw . eju0fgfags ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 143 , ( const void * ) & ( mdlrefDW -> rtdw . d3hjjaohgw ) ,
sizeof ( mdlrefDW -> rtdw . d3hjjaohgw ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 144 , (
const void * ) & ( mdlrefDW -> rtdw . a5xy0pxcav ) , sizeof ( mdlrefDW ->
rtdw . a5xy0pxcav ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 145 , ( const void * ) & ( mdlrefDW -> rtdw . br31aegqel ) ,
sizeof ( mdlrefDW -> rtdw . br31aegqel ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 146 , (
const void * ) & ( mdlrefDW -> rtdw . fcxv2bpb2l ) , sizeof ( mdlrefDW ->
rtdw . fcxv2bpb2l ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 147 , ( const void * ) & ( mdlrefDW -> rtdw . maqcb0qcls ) ,
sizeof ( mdlrefDW -> rtdw . maqcb0qcls ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 148 , (
const void * ) & ( mdlrefDW -> rtdw . mwtdofttkk ) , sizeof ( mdlrefDW ->
rtdw . mwtdofttkk ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 149 , ( const void * ) & ( mdlrefDW -> rtdw . ndtrhsjunc ) ,
sizeof ( mdlrefDW -> rtdw . ndtrhsjunc ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 150 , (
const void * ) & ( mdlrefDW -> rtdw . d4oa3ao0lk ) , sizeof ( mdlrefDW ->
rtdw . d4oa3ao0lk ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 151 , ( const void * ) & ( mdlrefDW -> rtdw . npog30pazp ) ,
sizeof ( mdlrefDW -> rtdw . npog30pazp ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 152 , (
const void * ) & ( mdlrefDW -> rtdw . b3hzwhbapy ) , sizeof ( mdlrefDW ->
rtdw . b3hzwhbapy ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 153 , ( const void * ) & ( mdlrefDW -> rtdw . lsie2mcdul ) ,
sizeof ( mdlrefDW -> rtdw . lsie2mcdul ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 154 , (
const void * ) & ( mdlrefDW -> rtdw . axiohyxxrb ) , sizeof ( mdlrefDW ->
rtdw . axiohyxxrb ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 155 , ( const void * ) & ( mdlrefDW -> rtdw . a5xg42ugty ) ,
sizeof ( mdlrefDW -> rtdw . a5xg42ugty ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 156 , (
const void * ) & ( mdlrefDW -> rtdw . oyis1n0vff ) , sizeof ( mdlrefDW ->
rtdw . oyis1n0vff ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 157 , ( const void * ) & ( mdlrefDW -> rtdw . cytlgpiage ) ,
sizeof ( mdlrefDW -> rtdw . cytlgpiage ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 158 , (
const void * ) & ( mdlrefDW -> rtdw . gs5ogevjja ) , sizeof ( mdlrefDW ->
rtdw . gs5ogevjja ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 159 , ( const void * ) & ( mdlrefDW -> rtdw . dyz5254gvz ) ,
sizeof ( mdlrefDW -> rtdw . dyz5254gvz ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 160 , (
const void * ) & ( mdlrefDW -> rtdw . g3qa1vsrqy ) , sizeof ( mdlrefDW ->
rtdw . g3qa1vsrqy ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 161 , ( const void * ) & ( mdlrefDW -> rtdw . ifvb53yn5o ) ,
sizeof ( mdlrefDW -> rtdw . ifvb53yn5o ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 162 , (
const void * ) & ( mdlrefDW -> rtdw . ac3hq5dukp ) , sizeof ( mdlrefDW ->
rtdw . ac3hq5dukp ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 163 , ( const void * ) & ( mdlrefDW -> rtdw . iaag2vb5di ) ,
sizeof ( mdlrefDW -> rtdw . iaag2vb5di ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 164 , (
const void * ) & ( mdlrefDW -> rtdw . nsdk2u5ox5 ) , sizeof ( mdlrefDW ->
rtdw . nsdk2u5ox5 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 165 , ( const void * ) & ( mdlrefDW -> rtdw . dlzfaqntdm ) ,
sizeof ( mdlrefDW -> rtdw . dlzfaqntdm ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 166 , (
const void * ) & ( mdlrefDW -> rtdw . deumqpbfp3 ) , sizeof ( mdlrefDW ->
rtdw . deumqpbfp3 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 167 , ( const void * ) & ( mdlrefDW -> rtdw . g2kpxz2mtc ) ,
sizeof ( mdlrefDW -> rtdw . g2kpxz2mtc ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 168 , (
const void * ) & ( mdlrefDW -> rtdw . os44nl1epf ) , sizeof ( mdlrefDW ->
rtdw . os44nl1epf ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 169 , ( const void * ) & ( mdlrefDW -> rtdw . kwmr4nlaqp ) ,
sizeof ( mdlrefDW -> rtdw . kwmr4nlaqp ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 170 , (
const void * ) & ( mdlrefDW -> rtdw . eshf41aqvv ) , sizeof ( mdlrefDW ->
rtdw . eshf41aqvv ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 171 , ( const void * ) & ( mdlrefDW -> rtdw . joxr3b1sfc ) ,
sizeof ( mdlrefDW -> rtdw . joxr3b1sfc ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 172 , (
const void * ) & ( mdlrefDW -> rtdw . kpswqnxvqy ) , sizeof ( mdlrefDW ->
rtdw . kpswqnxvqy ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 173 , ( const void * ) & ( mdlrefDW -> rtdw . kftmvz4vis ) ,
sizeof ( mdlrefDW -> rtdw . kftmvz4vis ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 174 , (
const void * ) & ( mdlrefDW -> rtdw . oyl4sco5g1 ) , sizeof ( mdlrefDW ->
rtdw . oyl4sco5g1 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 175 , ( const void * ) & ( mdlrefDW -> rtdw . jxa4k1azlz ) ,
sizeof ( mdlrefDW -> rtdw . jxa4k1azlz ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 176 , (
const void * ) & ( mdlrefDW -> rtdw . jb4geb1nti ) , sizeof ( mdlrefDW ->
rtdw . jb4geb1nti ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 177 , ( const void * ) & ( mdlrefDW -> rtdw . gn52a5ccfk ) ,
sizeof ( mdlrefDW -> rtdw . gn52a5ccfk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 178 , (
const void * ) & ( mdlrefDW -> rtdw . glmtffe1yp ) , sizeof ( mdlrefDW ->
rtdw . glmtffe1yp ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 179 , ( const void * ) & ( mdlrefDW -> rtdw . hbyhlaq5mn ) ,
sizeof ( mdlrefDW -> rtdw . hbyhlaq5mn ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 180 , (
const void * ) & ( mdlrefDW -> rtdw . j0jukssvs4 ) , sizeof ( mdlrefDW ->
rtdw . j0jukssvs4 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 181 , ( const void * ) & ( mdlrefDW -> rtdw . awl0r0xq4b ) ,
sizeof ( mdlrefDW -> rtdw . awl0r0xq4b ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 182 , (
const void * ) & ( mdlrefDW -> rtdw . kjksxbfd0l ) , sizeof ( mdlrefDW ->
rtdw . kjksxbfd0l ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 183 , ( const void * ) & ( mdlrefDW -> rtdw . bk4ihbivnk ) ,
sizeof ( mdlrefDW -> rtdw . bk4ihbivnk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 184 , (
const void * ) & ( mdlrefDW -> rtdw . bgw5ytfnw1 ) , sizeof ( mdlrefDW ->
rtdw . bgw5ytfnw1 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 185 , ( const void * ) & ( mdlrefDW -> rtdw . boo4xfpus1 ) ,
sizeof ( mdlrefDW -> rtdw . boo4xfpus1 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 186 , (
const void * ) & ( mdlrefDW -> rtdw . mlxyhs3cpz ) , sizeof ( mdlrefDW ->
rtdw . mlxyhs3cpz ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 187 , ( const void * ) & ( mdlrefDW -> rtdw . iualn21z42 ) ,
sizeof ( mdlrefDW -> rtdw . iualn21z42 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 188 , (
const void * ) & ( mdlrefDW -> rtdw . hviz4etddq ) , sizeof ( mdlrefDW ->
rtdw . hviz4etddq ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 189 , ( const void * ) & ( mdlrefDW -> rtdw . d5djwo2yyn ) ,
sizeof ( mdlrefDW -> rtdw . d5djwo2yyn ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 190 , (
const void * ) & ( mdlrefDW -> rtdw . mylnfcphte ) , sizeof ( mdlrefDW ->
rtdw . mylnfcphte ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 191 , ( const void * ) & ( mdlrefDW -> rtdw . d0b0rzrkp4 ) ,
sizeof ( mdlrefDW -> rtdw . d0b0rzrkp4 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 192 , (
const void * ) & ( mdlrefDW -> rtdw . djcqsk0pjv ) , sizeof ( mdlrefDW ->
rtdw . djcqsk0pjv ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 193 , ( const void * ) & ( mdlrefDW -> rtdw . o33zcmmyog ) ,
sizeof ( mdlrefDW -> rtdw . o33zcmmyog ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 194 , (
const void * ) & ( mdlrefDW -> rtdw . lrmgx0sfud ) , sizeof ( mdlrefDW ->
rtdw . lrmgx0sfud ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 195 , ( const void * ) & ( mdlrefDW -> rtdw . p3kgj2bbob ) ,
sizeof ( mdlrefDW -> rtdw . p3kgj2bbob ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 196 , (
const void * ) & ( mdlrefDW -> rtdw . k4fmvxudnp ) , sizeof ( mdlrefDW ->
rtdw . k4fmvxudnp ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 197 , ( const void * ) & ( mdlrefDW -> rtdw . eo0qqmj5ab ) ,
sizeof ( mdlrefDW -> rtdw . eo0qqmj5ab ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 198 , (
const void * ) & ( mdlrefDW -> rtdw . go0slkjltn ) , sizeof ( mdlrefDW ->
rtdw . go0slkjltn ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 199 , ( const void * ) & ( mdlrefDW -> rtdw . fmnremskar ) ,
sizeof ( mdlrefDW -> rtdw . fmnremskar ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 200 , (
const void * ) & ( mdlrefDW -> rtdw . joqyb452tl ) , sizeof ( mdlrefDW ->
rtdw . joqyb452tl ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 201 , ( const void * ) & ( mdlrefDW -> rtdw . pztnkomlmy ) ,
sizeof ( mdlrefDW -> rtdw . pztnkomlmy ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 202 , (
const void * ) & ( mdlrefDW -> rtdw . ohjdevi5e1 ) , sizeof ( mdlrefDW ->
rtdw . ohjdevi5e1 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 203 , ( const void * ) & ( mdlrefDW -> rtdw . p50oq1qzq5 ) ,
sizeof ( mdlrefDW -> rtdw . p50oq1qzq5 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 204 , (
const void * ) & ( mdlrefDW -> rtdw . opoqs3zl5e ) , sizeof ( mdlrefDW ->
rtdw . opoqs3zl5e ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 205 , ( const void * ) & ( mdlrefDW -> rtdw . fxjgijpbdk ) ,
sizeof ( mdlrefDW -> rtdw . fxjgijpbdk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 206 , (
const void * ) & ( mdlrefDW -> rtdw . fftwuvrgms ) , sizeof ( mdlrefDW ->
rtdw . fftwuvrgms ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 207 , ( const void * ) & ( mdlrefDW -> rtdw . m204rvu0ko ) ,
sizeof ( mdlrefDW -> rtdw . m204rvu0ko ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 208 , (
const void * ) & ( mdlrefDW -> rtdw . e5xpj42ysr ) , sizeof ( mdlrefDW ->
rtdw . e5xpj42ysr ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 209 , ( const void * ) & ( mdlrefDW -> rtdw . mpbcjlf4vh ) ,
sizeof ( mdlrefDW -> rtdw . mpbcjlf4vh ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 210 , (
const void * ) & ( mdlrefDW -> rtdw . jpbdwgjnfq ) , sizeof ( mdlrefDW ->
rtdw . jpbdwgjnfq ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 211 , ( const void * ) & ( mdlrefDW -> rtdw . imoucwn4pi ) ,
sizeof ( mdlrefDW -> rtdw . imoucwn4pi ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 212 , (
const void * ) & ( mdlrefDW -> rtdw . kunjroudei ) , sizeof ( mdlrefDW ->
rtdw . kunjroudei ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 213 , ( const void * ) & ( mdlrefDW -> rtdw . eafmghgkg2 ) ,
sizeof ( mdlrefDW -> rtdw . eafmghgkg2 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 214 , (
const void * ) & ( mdlrefDW -> rtdw . gg2ctyfptk ) , sizeof ( mdlrefDW ->
rtdw . gg2ctyfptk ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 215 , ( const void * ) & ( mdlrefDW -> rtdw . kgmrq35r1d ) ,
sizeof ( mdlrefDW -> rtdw . kgmrq35r1d ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 216 , (
const void * ) & ( mdlrefDW -> rtdw . pfeghevp3b ) , sizeof ( mdlrefDW ->
rtdw . pfeghevp3b ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 217 , ( const void * ) & ( mdlrefDW -> rtdw . fxfjh3uza5 ) ,
sizeof ( mdlrefDW -> rtdw . fxfjh3uza5 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 218 , (
const void * ) & ( mdlrefDW -> rtdw . cqdisjrtu0 ) , sizeof ( mdlrefDW ->
rtdw . cqdisjrtu0 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 219 , ( const void * ) & ( mdlrefDW -> rtdw . hrfi0yiu4u ) ,
sizeof ( mdlrefDW -> rtdw . hrfi0yiu4u ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 220 , (
const void * ) & ( mdlrefDW -> rtdw . eghpxvkniz ) , sizeof ( mdlrefDW ->
rtdw . eghpxvkniz ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 221 , ( const void * ) & ( mdlrefDW -> rtdw . dj4vnxq0rt ) ,
sizeof ( mdlrefDW -> rtdw . dj4vnxq0rt ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 222 , (
const void * ) & ( mdlrefDW -> rtdw . cstvtpbqtb ) , sizeof ( mdlrefDW ->
rtdw . cstvtpbqtb ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 223 , ( const void * ) & ( mdlrefDW -> rtdw . bslmwz5chr ) ,
sizeof ( mdlrefDW -> rtdw . bslmwz5chr ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 224 , (
const void * ) & ( mdlrefDW -> rtdw . p1syfnw3hu ) , sizeof ( mdlrefDW ->
rtdw . p1syfnw3hu ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 225 , ( const void * ) & ( mdlrefDW -> rtdw . g2lis3sfb3 ) ,
sizeof ( mdlrefDW -> rtdw . g2lis3sfb3 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 226 , (
const void * ) & ( mdlrefDW -> rtdw . aniuqzhx2h ) , sizeof ( mdlrefDW ->
rtdw . aniuqzhx2h ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 227 , ( const void * ) & ( mdlrefDW -> rtdw . gdj3xqj1np ) ,
sizeof ( mdlrefDW -> rtdw . gdj3xqj1np ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 228 , (
const void * ) & ( mdlrefDW -> rtdw . m3p0qccui3 ) , sizeof ( mdlrefDW ->
rtdw . m3p0qccui3 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 229 , ( const void * ) & ( mdlrefDW -> rtdw . n2xswyacim ) ,
sizeof ( mdlrefDW -> rtdw . n2xswyacim ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 230 , (
const void * ) & ( mdlrefDW -> rtdw . mzb2q4hcny ) , sizeof ( mdlrefDW ->
rtdw . mzb2q4hcny ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 231 , ( const void * ) & ( mdlrefDW -> rtdw . efywbwsjif ) ,
sizeof ( mdlrefDW -> rtdw . efywbwsjif ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 232 , (
const void * ) & ( mdlrefDW -> rtdw . bn3qvuzmed ) , sizeof ( mdlrefDW ->
rtdw . bn3qvuzmed ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 233 , ( const void * ) & ( mdlrefDW -> rtdw . pgzsern3x0 ) ,
sizeof ( mdlrefDW -> rtdw . pgzsern3x0 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 234 , (
const void * ) & ( mdlrefDW -> rtdw . kt4acua1kk ) , sizeof ( mdlrefDW ->
rtdw . kt4acua1kk ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 235 , ( const void * ) & ( mdlrefDW -> rtdw . pu1g0m4jmc ) ,
sizeof ( mdlrefDW -> rtdw . pu1g0m4jmc ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 236 , (
const void * ) & ( mdlrefDW -> rtdw . njc3rznzi0 ) , sizeof ( mdlrefDW ->
rtdw . njc3rznzi0 ) ) ; mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray (
rtdwData , 0 , 237 , ( const void * ) & ( mdlrefDW -> rtdw . kiem0xzrc5 ) ,
sizeof ( mdlrefDW -> rtdw . kiem0xzrc5 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_cacheDataAsMxArray ( rtdwData , 0 , 238 , (
const void * ) & ( mdlrefDW -> rtdw . nvwwpbgr5o ) , sizeof ( mdlrefDW ->
rtdw . nvwwpbgr5o ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } (
void ) mdlrefDW ; return ssDW ; } void
mr_Aerial_Inspection_Octa_Rotor_SetDWork ( ee0qxomeisn * mdlrefDW , const
mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mv5ilts3z3 ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW ->
rtdw . mv5ilts3z3 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . kbatitusoq ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW ->
rtdw . kbatitusoq ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ocaux5stdw ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW ->
rtdw . ocaux5stdw ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mxfuc2ujfx ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW ->
rtdw . mxfuc2ujfx ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . l5f2zyzhp3 ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW ->
rtdw . l5f2zyzhp3 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . h25umkjgx0 ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW ->
rtdw . h25umkjgx0 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . dl3cy2fonw ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW ->
rtdw . dl3cy2fonw ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ku5cmy1g4t ) , rtdwData , 0 , 7 , sizeof ( mdlrefDW ->
rtdw . ku5cmy1g4t ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . onn5vmv02x ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW ->
rtdw . onn5vmv02x ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . hcrdf3amwt ) , rtdwData , 0 , 9 , sizeof ( mdlrefDW ->
rtdw . hcrdf3amwt ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . krgwq12he2 ) , rtdwData , 0 , 10 , sizeof ( mdlrefDW ->
rtdw . krgwq12he2 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ft3sgupo14 ) , rtdwData , 0 , 11 , sizeof ( mdlrefDW ->
rtdw . ft3sgupo14 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ow5eyqfeqk ) , rtdwData , 0 , 12 , sizeof ( mdlrefDW ->
rtdw . ow5eyqfeqk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . nii10oukaf ) , rtdwData , 0 , 13 , sizeof ( mdlrefDW ->
rtdw . nii10oukaf ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . p3islbftxv ) , rtdwData , 0 , 14 , sizeof ( mdlrefDW ->
rtdw . p3islbftxv ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . cgwhosvdcl ) , rtdwData , 0 , 15 , sizeof ( mdlrefDW ->
rtdw . cgwhosvdcl ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . n3p2b4331e ) , rtdwData , 0 , 16 , sizeof ( mdlrefDW ->
rtdw . n3p2b4331e ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . lbhxewsesw ) , rtdwData , 0 , 17 , sizeof ( mdlrefDW ->
rtdw . lbhxewsesw ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . f3u1feui3n ) , rtdwData , 0 , 18 , sizeof ( mdlrefDW ->
rtdw . f3u1feui3n ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . gpnyrijw4m ) , rtdwData , 0 , 19 , sizeof ( mdlrefDW ->
rtdw . gpnyrijw4m ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . dd5g3kw502 ) , rtdwData , 0 , 20 , sizeof ( mdlrefDW ->
rtdw . dd5g3kw502 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . hnaznqa2p4 ) , rtdwData , 0 , 21 , sizeof ( mdlrefDW ->
rtdw . hnaznqa2p4 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . kqeyhwy0iy ) , rtdwData , 0 , 22 , sizeof ( mdlrefDW ->
rtdw . kqeyhwy0iy ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mhv1bghawx ) , rtdwData , 0 , 23 , sizeof ( mdlrefDW ->
rtdw . mhv1bghawx ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . nf1542nijs ) , rtdwData , 0 , 24 , sizeof ( mdlrefDW ->
rtdw . nf1542nijs ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . obvpxaht0r ) , rtdwData , 0 , 25 , sizeof ( mdlrefDW ->
rtdw . obvpxaht0r ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . g0o2nw0vo5 ) , rtdwData , 0 , 26 , sizeof ( mdlrefDW ->
rtdw . g0o2nw0vo5 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . lp52ktildu ) , rtdwData , 0 , 27 , sizeof ( mdlrefDW ->
rtdw . lp52ktildu ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . aufjeltg54 ) , rtdwData , 0 , 28 , sizeof ( mdlrefDW ->
rtdw . aufjeltg54 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . g0cifnynep ) , rtdwData , 0 , 29 , sizeof ( mdlrefDW ->
rtdw . g0cifnynep ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mk50vkpww5 ) , rtdwData , 0 , 30 , sizeof ( mdlrefDW ->
rtdw . mk50vkpww5 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . czqtaqmrox ) , rtdwData , 0 , 31 , sizeof ( mdlrefDW ->
rtdw . czqtaqmrox ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . onrgnw1hrk ) , rtdwData , 0 , 32 , sizeof ( mdlrefDW ->
rtdw . onrgnw1hrk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . i5wehflxkv ) , rtdwData , 0 , 33 , sizeof ( mdlrefDW ->
rtdw . i5wehflxkv ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . la3n4fkj1w ) , rtdwData , 0 , 34 , sizeof ( mdlrefDW ->
rtdw . la3n4fkj1w ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . pcnwcb0ubp ) , rtdwData , 0 , 35 , sizeof ( mdlrefDW ->
rtdw . pcnwcb0ubp ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ow5vllohzr ) , rtdwData , 0 , 36 , sizeof ( mdlrefDW ->
rtdw . ow5vllohzr ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . emnm2ffsad ) , rtdwData , 0 , 37 , sizeof ( mdlrefDW ->
rtdw . emnm2ffsad ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . c5yf2rpogw ) , rtdwData , 0 , 38 , sizeof ( mdlrefDW ->
rtdw . c5yf2rpogw ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . obejuicafg ) , rtdwData , 0 , 39 , sizeof ( mdlrefDW ->
rtdw . obejuicafg ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . k45ghuvsky ) , rtdwData , 0 , 40 , sizeof ( mdlrefDW ->
rtdw . k45ghuvsky ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . edg55qeb4d ) , rtdwData , 0 , 41 , sizeof ( mdlrefDW ->
rtdw . edg55qeb4d ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mj0xbsq2w3 ) , rtdwData , 0 , 42 , sizeof ( mdlrefDW ->
rtdw . mj0xbsq2w3 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . bmql4chnpq ) , rtdwData , 0 , 43 , sizeof ( mdlrefDW ->
rtdw . bmql4chnpq ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . op2dymxuq1 ) , rtdwData , 0 , 44 , sizeof ( mdlrefDW ->
rtdw . op2dymxuq1 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . orjk2gfqrn ) , rtdwData , 0 , 45 , sizeof ( mdlrefDW ->
rtdw . orjk2gfqrn ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . nrlfz5eaxk ) , rtdwData , 0 , 46 , sizeof ( mdlrefDW ->
rtdw . nrlfz5eaxk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . kh2adsnm1q ) , rtdwData , 0 , 47 , sizeof ( mdlrefDW ->
rtdw . kh2adsnm1q ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mblmikbf0f ) , rtdwData , 0 , 48 , sizeof ( mdlrefDW ->
rtdw . mblmikbf0f ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . m3jcpbafqz ) , rtdwData , 0 , 49 , sizeof ( mdlrefDW ->
rtdw . m3jcpbafqz ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . e5ryjhnqnq ) , rtdwData , 0 , 50 , sizeof ( mdlrefDW ->
rtdw . e5ryjhnqnq ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ib0hpc5hea ) , rtdwData , 0 , 51 , sizeof ( mdlrefDW ->
rtdw . ib0hpc5hea ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . eed3c4tzny ) , rtdwData , 0 , 52 , sizeof ( mdlrefDW ->
rtdw . eed3c4tzny ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . go3k25h13t ) , rtdwData , 0 , 53 , sizeof ( mdlrefDW ->
rtdw . go3k25h13t ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ntzo30npzj ) , rtdwData , 0 , 54 , sizeof ( mdlrefDW ->
rtdw . ntzo30npzj ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ecoelytsio ) , rtdwData , 0 , 55 , sizeof ( mdlrefDW ->
rtdw . ecoelytsio ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . bsmesx5als ) , rtdwData , 0 , 56 , sizeof ( mdlrefDW ->
rtdw . bsmesx5als ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . j0xzihzavo ) , rtdwData , 0 , 57 , sizeof ( mdlrefDW ->
rtdw . j0xzihzavo ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . m5jeoymdtx ) , rtdwData , 0 , 58 , sizeof ( mdlrefDW ->
rtdw . m5jeoymdtx ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . gm2kmanbfl ) , rtdwData , 0 , 59 , sizeof ( mdlrefDW ->
rtdw . gm2kmanbfl ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . igxfyznirl ) , rtdwData , 0 , 60 , sizeof ( mdlrefDW ->
rtdw . igxfyznirl ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . lwcqf3ezzk ) , rtdwData , 0 , 61 , sizeof ( mdlrefDW ->
rtdw . lwcqf3ezzk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . l4rgwczqhc ) , rtdwData , 0 , 62 , sizeof ( mdlrefDW ->
rtdw . l4rgwczqhc ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . eytyslgh2k ) , rtdwData , 0 , 63 , sizeof ( mdlrefDW ->
rtdw . eytyslgh2k ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . povjdgfhin ) , rtdwData , 0 , 64 , sizeof ( mdlrefDW ->
rtdw . povjdgfhin ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . g5qmb3qhc4 ) , rtdwData , 0 , 65 , sizeof ( mdlrefDW ->
rtdw . g5qmb3qhc4 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . fx12dxjgoz ) , rtdwData , 0 , 66 , sizeof ( mdlrefDW ->
rtdw . fx12dxjgoz ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ihq0d41a2e ) , rtdwData , 0 , 67 , sizeof ( mdlrefDW ->
rtdw . ihq0d41a2e ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mqkvegdktp ) , rtdwData , 0 , 68 , sizeof ( mdlrefDW ->
rtdw . mqkvegdktp ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . hx5girvbxs ) , rtdwData , 0 , 69 , sizeof ( mdlrefDW ->
rtdw . hx5girvbxs ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . hru1uiypuh ) , rtdwData , 0 , 70 , sizeof ( mdlrefDW ->
rtdw . hru1uiypuh ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . og2wfdujcm ) , rtdwData , 0 , 71 , sizeof ( mdlrefDW ->
rtdw . og2wfdujcm ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ctj2bho0yp ) , rtdwData , 0 , 72 , sizeof ( mdlrefDW ->
rtdw . ctj2bho0yp ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ishlrl4nwz ) , rtdwData , 0 , 73 , sizeof ( mdlrefDW ->
rtdw . ishlrl4nwz ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . m0ldh3g2jq ) , rtdwData , 0 , 74 , sizeof ( mdlrefDW ->
rtdw . m0ldh3g2jq ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . heividnr1k ) , rtdwData , 0 , 75 , sizeof ( mdlrefDW ->
rtdw . heividnr1k ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ko5bk1dgvg ) , rtdwData , 0 , 76 , sizeof ( mdlrefDW ->
rtdw . ko5bk1dgvg ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . jp5mc5vhca ) , rtdwData , 0 , 77 , sizeof ( mdlrefDW ->
rtdw . jp5mc5vhca ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . keklbuafg3 ) , rtdwData , 0 , 78 , sizeof ( mdlrefDW ->
rtdw . keklbuafg3 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . pxu0fofv1e ) , rtdwData , 0 , 79 , sizeof ( mdlrefDW ->
rtdw . pxu0fofv1e ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . n452s4e4iw ) , rtdwData , 0 , 80 , sizeof ( mdlrefDW ->
rtdw . n452s4e4iw ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . btp0wsoaw3 ) , rtdwData , 0 , 81 , sizeof ( mdlrefDW ->
rtdw . btp0wsoaw3 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . etlbfvymuh ) , rtdwData , 0 , 82 , sizeof ( mdlrefDW ->
rtdw . etlbfvymuh ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . i1u244qywa ) , rtdwData , 0 , 83 , sizeof ( mdlrefDW ->
rtdw . i1u244qywa ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . on2jorwm5c ) , rtdwData , 0 , 84 , sizeof ( mdlrefDW ->
rtdw . on2jorwm5c ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . hyj1pbc41o ) , rtdwData , 0 , 85 , sizeof ( mdlrefDW ->
rtdw . hyj1pbc41o ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . fshqpe3da4 ) , rtdwData , 0 , 86 , sizeof ( mdlrefDW ->
rtdw . fshqpe3da4 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . blbvdczw00 ) , rtdwData , 0 , 87 , sizeof ( mdlrefDW ->
rtdw . blbvdczw00 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . om4r50j0ua ) , rtdwData , 0 , 88 , sizeof ( mdlrefDW ->
rtdw . om4r50j0ua ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . cwx5fu4ktk ) , rtdwData , 0 , 89 , sizeof ( mdlrefDW ->
rtdw . cwx5fu4ktk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . lmez50dezv ) , rtdwData , 0 , 90 , sizeof ( mdlrefDW ->
rtdw . lmez50dezv ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ptccs2iwze ) , rtdwData , 0 , 91 , sizeof ( mdlrefDW ->
rtdw . ptccs2iwze ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . pkxq5fago0 ) , rtdwData , 0 , 92 , sizeof ( mdlrefDW ->
rtdw . pkxq5fago0 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . hqms323kfd ) , rtdwData , 0 , 93 , sizeof ( mdlrefDW ->
rtdw . hqms323kfd ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . knfybvfydq ) , rtdwData , 0 , 94 , sizeof ( mdlrefDW ->
rtdw . knfybvfydq ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . pnyrvw5ztj ) , rtdwData , 0 , 95 , sizeof ( mdlrefDW ->
rtdw . pnyrvw5ztj ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . f2rr4ira1h ) , rtdwData , 0 , 96 , sizeof ( mdlrefDW ->
rtdw . f2rr4ira1h ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . pcu35m2eta ) , rtdwData , 0 , 97 , sizeof ( mdlrefDW ->
rtdw . pcu35m2eta ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . nj5pmpqqf3 ) , rtdwData , 0 , 98 , sizeof ( mdlrefDW ->
rtdw . nj5pmpqqf3 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . byscbandzd ) , rtdwData , 0 , 99 , sizeof ( mdlrefDW ->
rtdw . byscbandzd ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . lbmjvdypjj ) , rtdwData , 0 , 100 , sizeof ( mdlrefDW ->
rtdw . lbmjvdypjj ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . clgj4oa4pn ) , rtdwData , 0 , 101 , sizeof ( mdlrefDW ->
rtdw . clgj4oa4pn ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . pe4abat22x ) , rtdwData , 0 , 102 , sizeof ( mdlrefDW ->
rtdw . pe4abat22x ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . laux3z5rot ) , rtdwData , 0 , 103 , sizeof ( mdlrefDW ->
rtdw . laux3z5rot ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . lfncl4pmix ) , rtdwData , 0 , 104 , sizeof ( mdlrefDW ->
rtdw . lfncl4pmix ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . kbkknb0gcp ) , rtdwData , 0 , 105 , sizeof ( mdlrefDW ->
rtdw . kbkknb0gcp ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mt12tk1q4n ) , rtdwData , 0 , 106 , sizeof ( mdlrefDW ->
rtdw . mt12tk1q4n ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . jdmzk0jkqo ) , rtdwData , 0 , 107 , sizeof ( mdlrefDW ->
rtdw . jdmzk0jkqo ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . fcdlsz1jpj ) , rtdwData , 0 , 108 , sizeof ( mdlrefDW ->
rtdw . fcdlsz1jpj ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mzgko5hhco ) , rtdwData , 0 , 109 , sizeof ( mdlrefDW ->
rtdw . mzgko5hhco ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . czv5olhqpd ) , rtdwData , 0 , 110 , sizeof ( mdlrefDW ->
rtdw . czv5olhqpd ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . j3wxtue1rg ) , rtdwData , 0 , 111 , sizeof ( mdlrefDW ->
rtdw . j3wxtue1rg ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . acts2xblll ) , rtdwData , 0 , 112 , sizeof ( mdlrefDW ->
rtdw . acts2xblll ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . fvutboy5xz ) , rtdwData , 0 , 113 , sizeof ( mdlrefDW ->
rtdw . fvutboy5xz ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . my0zgfdskq ) , rtdwData , 0 , 114 , sizeof ( mdlrefDW ->
rtdw . my0zgfdskq ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . c5wuvc2xhv ) , rtdwData , 0 , 115 , sizeof ( mdlrefDW ->
rtdw . c5wuvc2xhv ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . fxraqrvxyw ) , rtdwData , 0 , 116 , sizeof ( mdlrefDW ->
rtdw . fxraqrvxyw ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . d2srxt2k4v ) , rtdwData , 0 , 117 , sizeof ( mdlrefDW ->
rtdw . d2srxt2k4v ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ezxuclwxue ) , rtdwData , 0 , 118 , sizeof ( mdlrefDW ->
rtdw . ezxuclwxue ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ikssb4qksk ) , rtdwData , 0 , 119 , sizeof ( mdlrefDW ->
rtdw . ikssb4qksk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . hkju4dig11 ) , rtdwData , 0 , 120 , sizeof ( mdlrefDW ->
rtdw . hkju4dig11 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . fglgh3yqit ) , rtdwData , 0 , 121 , sizeof ( mdlrefDW ->
rtdw . fglgh3yqit ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . dnoxil325k ) , rtdwData , 0 , 122 , sizeof ( mdlrefDW ->
rtdw . dnoxil325k ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . lerxprnzhx ) , rtdwData , 0 , 123 , sizeof ( mdlrefDW ->
rtdw . lerxprnzhx ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . og31bt2h3i ) , rtdwData , 0 , 124 , sizeof ( mdlrefDW ->
rtdw . og31bt2h3i ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . pdunoq3brb ) , rtdwData , 0 , 125 , sizeof ( mdlrefDW ->
rtdw . pdunoq3brb ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . gj2ggwn2l0 ) , rtdwData , 0 , 126 , sizeof ( mdlrefDW ->
rtdw . gj2ggwn2l0 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . iz24wb4wj4 ) , rtdwData , 0 , 127 , sizeof ( mdlrefDW ->
rtdw . iz24wb4wj4 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . iblwevhc5b ) , rtdwData , 0 , 128 , sizeof ( mdlrefDW ->
rtdw . iblwevhc5b ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . n2nc4r3ybm ) , rtdwData , 0 , 129 , sizeof ( mdlrefDW ->
rtdw . n2nc4r3ybm ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . caswz5hz11 ) , rtdwData , 0 , 130 , sizeof ( mdlrefDW ->
rtdw . caswz5hz11 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ls4avg3ooq ) , rtdwData , 0 , 131 , sizeof ( mdlrefDW ->
rtdw . ls4avg3ooq ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . cy4vzqay5m ) , rtdwData , 0 , 132 , sizeof ( mdlrefDW ->
rtdw . cy4vzqay5m ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . fdt32qa3g5 ) , rtdwData , 0 , 133 , sizeof ( mdlrefDW ->
rtdw . fdt32qa3g5 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . a3klqroluh ) , rtdwData , 0 , 134 , sizeof ( mdlrefDW ->
rtdw . a3klqroluh ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . hum1u2staw ) , rtdwData , 0 , 135 , sizeof ( mdlrefDW ->
rtdw . hum1u2staw ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . k0sp40t1m3 ) , rtdwData , 0 , 136 , sizeof ( mdlrefDW ->
rtdw . k0sp40t1m3 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . oyuxpxl2fv ) , rtdwData , 0 , 137 , sizeof ( mdlrefDW ->
rtdw . oyuxpxl2fv ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . jx1n4fwcas ) , rtdwData , 0 , 138 , sizeof ( mdlrefDW ->
rtdw . jx1n4fwcas ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . az4m05iaqy ) , rtdwData , 0 , 139 , sizeof ( mdlrefDW ->
rtdw . az4m05iaqy ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ogwkkwd2gc ) , rtdwData , 0 , 140 , sizeof ( mdlrefDW ->
rtdw . ogwkkwd2gc ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . f23eeiqpvw ) , rtdwData , 0 , 141 , sizeof ( mdlrefDW ->
rtdw . f23eeiqpvw ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . eju0fgfags ) , rtdwData , 0 , 142 , sizeof ( mdlrefDW ->
rtdw . eju0fgfags ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . d3hjjaohgw ) , rtdwData , 0 , 143 , sizeof ( mdlrefDW ->
rtdw . d3hjjaohgw ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . a5xy0pxcav ) , rtdwData , 0 , 144 , sizeof ( mdlrefDW ->
rtdw . a5xy0pxcav ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . br31aegqel ) , rtdwData , 0 , 145 , sizeof ( mdlrefDW ->
rtdw . br31aegqel ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . fcxv2bpb2l ) , rtdwData , 0 , 146 , sizeof ( mdlrefDW ->
rtdw . fcxv2bpb2l ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . maqcb0qcls ) , rtdwData , 0 , 147 , sizeof ( mdlrefDW ->
rtdw . maqcb0qcls ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mwtdofttkk ) , rtdwData , 0 , 148 , sizeof ( mdlrefDW ->
rtdw . mwtdofttkk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ndtrhsjunc ) , rtdwData , 0 , 149 , sizeof ( mdlrefDW ->
rtdw . ndtrhsjunc ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . d4oa3ao0lk ) , rtdwData , 0 , 150 , sizeof ( mdlrefDW ->
rtdw . d4oa3ao0lk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . npog30pazp ) , rtdwData , 0 , 151 , sizeof ( mdlrefDW ->
rtdw . npog30pazp ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . b3hzwhbapy ) , rtdwData , 0 , 152 , sizeof ( mdlrefDW ->
rtdw . b3hzwhbapy ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . lsie2mcdul ) , rtdwData , 0 , 153 , sizeof ( mdlrefDW ->
rtdw . lsie2mcdul ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . axiohyxxrb ) , rtdwData , 0 , 154 , sizeof ( mdlrefDW ->
rtdw . axiohyxxrb ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . a5xg42ugty ) , rtdwData , 0 , 155 , sizeof ( mdlrefDW ->
rtdw . a5xg42ugty ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . oyis1n0vff ) , rtdwData , 0 , 156 , sizeof ( mdlrefDW ->
rtdw . oyis1n0vff ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . cytlgpiage ) , rtdwData , 0 , 157 , sizeof ( mdlrefDW ->
rtdw . cytlgpiage ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . gs5ogevjja ) , rtdwData , 0 , 158 , sizeof ( mdlrefDW ->
rtdw . gs5ogevjja ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . dyz5254gvz ) , rtdwData , 0 , 159 , sizeof ( mdlrefDW ->
rtdw . dyz5254gvz ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . g3qa1vsrqy ) , rtdwData , 0 , 160 , sizeof ( mdlrefDW ->
rtdw . g3qa1vsrqy ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ifvb53yn5o ) , rtdwData , 0 , 161 , sizeof ( mdlrefDW ->
rtdw . ifvb53yn5o ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ac3hq5dukp ) , rtdwData , 0 , 162 , sizeof ( mdlrefDW ->
rtdw . ac3hq5dukp ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . iaag2vb5di ) , rtdwData , 0 , 163 , sizeof ( mdlrefDW ->
rtdw . iaag2vb5di ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . nsdk2u5ox5 ) , rtdwData , 0 , 164 , sizeof ( mdlrefDW ->
rtdw . nsdk2u5ox5 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . dlzfaqntdm ) , rtdwData , 0 , 165 , sizeof ( mdlrefDW ->
rtdw . dlzfaqntdm ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . deumqpbfp3 ) , rtdwData , 0 , 166 , sizeof ( mdlrefDW ->
rtdw . deumqpbfp3 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . g2kpxz2mtc ) , rtdwData , 0 , 167 , sizeof ( mdlrefDW ->
rtdw . g2kpxz2mtc ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . os44nl1epf ) , rtdwData , 0 , 168 , sizeof ( mdlrefDW ->
rtdw . os44nl1epf ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . kwmr4nlaqp ) , rtdwData , 0 , 169 , sizeof ( mdlrefDW ->
rtdw . kwmr4nlaqp ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . eshf41aqvv ) , rtdwData , 0 , 170 , sizeof ( mdlrefDW ->
rtdw . eshf41aqvv ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . joxr3b1sfc ) , rtdwData , 0 , 171 , sizeof ( mdlrefDW ->
rtdw . joxr3b1sfc ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . kpswqnxvqy ) , rtdwData , 0 , 172 , sizeof ( mdlrefDW ->
rtdw . kpswqnxvqy ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . kftmvz4vis ) , rtdwData , 0 , 173 , sizeof ( mdlrefDW ->
rtdw . kftmvz4vis ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . oyl4sco5g1 ) , rtdwData , 0 , 174 , sizeof ( mdlrefDW ->
rtdw . oyl4sco5g1 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . jxa4k1azlz ) , rtdwData , 0 , 175 , sizeof ( mdlrefDW ->
rtdw . jxa4k1azlz ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . jb4geb1nti ) , rtdwData , 0 , 176 , sizeof ( mdlrefDW ->
rtdw . jb4geb1nti ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . gn52a5ccfk ) , rtdwData , 0 , 177 , sizeof ( mdlrefDW ->
rtdw . gn52a5ccfk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . glmtffe1yp ) , rtdwData , 0 , 178 , sizeof ( mdlrefDW ->
rtdw . glmtffe1yp ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . hbyhlaq5mn ) , rtdwData , 0 , 179 , sizeof ( mdlrefDW ->
rtdw . hbyhlaq5mn ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . j0jukssvs4 ) , rtdwData , 0 , 180 , sizeof ( mdlrefDW ->
rtdw . j0jukssvs4 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . awl0r0xq4b ) , rtdwData , 0 , 181 , sizeof ( mdlrefDW ->
rtdw . awl0r0xq4b ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . kjksxbfd0l ) , rtdwData , 0 , 182 , sizeof ( mdlrefDW ->
rtdw . kjksxbfd0l ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . bk4ihbivnk ) , rtdwData , 0 , 183 , sizeof ( mdlrefDW ->
rtdw . bk4ihbivnk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . bgw5ytfnw1 ) , rtdwData , 0 , 184 , sizeof ( mdlrefDW ->
rtdw . bgw5ytfnw1 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . boo4xfpus1 ) , rtdwData , 0 , 185 , sizeof ( mdlrefDW ->
rtdw . boo4xfpus1 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mlxyhs3cpz ) , rtdwData , 0 , 186 , sizeof ( mdlrefDW ->
rtdw . mlxyhs3cpz ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . iualn21z42 ) , rtdwData , 0 , 187 , sizeof ( mdlrefDW ->
rtdw . iualn21z42 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . hviz4etddq ) , rtdwData , 0 , 188 , sizeof ( mdlrefDW ->
rtdw . hviz4etddq ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . d5djwo2yyn ) , rtdwData , 0 , 189 , sizeof ( mdlrefDW ->
rtdw . d5djwo2yyn ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mylnfcphte ) , rtdwData , 0 , 190 , sizeof ( mdlrefDW ->
rtdw . mylnfcphte ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . d0b0rzrkp4 ) , rtdwData , 0 , 191 , sizeof ( mdlrefDW ->
rtdw . d0b0rzrkp4 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . djcqsk0pjv ) , rtdwData , 0 , 192 , sizeof ( mdlrefDW ->
rtdw . djcqsk0pjv ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . o33zcmmyog ) , rtdwData , 0 , 193 , sizeof ( mdlrefDW ->
rtdw . o33zcmmyog ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . lrmgx0sfud ) , rtdwData , 0 , 194 , sizeof ( mdlrefDW ->
rtdw . lrmgx0sfud ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . p3kgj2bbob ) , rtdwData , 0 , 195 , sizeof ( mdlrefDW ->
rtdw . p3kgj2bbob ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . k4fmvxudnp ) , rtdwData , 0 , 196 , sizeof ( mdlrefDW ->
rtdw . k4fmvxudnp ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . eo0qqmj5ab ) , rtdwData , 0 , 197 , sizeof ( mdlrefDW ->
rtdw . eo0qqmj5ab ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . go0slkjltn ) , rtdwData , 0 , 198 , sizeof ( mdlrefDW ->
rtdw . go0slkjltn ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . fmnremskar ) , rtdwData , 0 , 199 , sizeof ( mdlrefDW ->
rtdw . fmnremskar ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . joqyb452tl ) , rtdwData , 0 , 200 , sizeof ( mdlrefDW ->
rtdw . joqyb452tl ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . pztnkomlmy ) , rtdwData , 0 , 201 , sizeof ( mdlrefDW ->
rtdw . pztnkomlmy ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ohjdevi5e1 ) , rtdwData , 0 , 202 , sizeof ( mdlrefDW ->
rtdw . ohjdevi5e1 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . p50oq1qzq5 ) , rtdwData , 0 , 203 , sizeof ( mdlrefDW ->
rtdw . p50oq1qzq5 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . opoqs3zl5e ) , rtdwData , 0 , 204 , sizeof ( mdlrefDW ->
rtdw . opoqs3zl5e ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . fxjgijpbdk ) , rtdwData , 0 , 205 , sizeof ( mdlrefDW ->
rtdw . fxjgijpbdk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . fftwuvrgms ) , rtdwData , 0 , 206 , sizeof ( mdlrefDW ->
rtdw . fftwuvrgms ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . m204rvu0ko ) , rtdwData , 0 , 207 , sizeof ( mdlrefDW ->
rtdw . m204rvu0ko ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . e5xpj42ysr ) , rtdwData , 0 , 208 , sizeof ( mdlrefDW ->
rtdw . e5xpj42ysr ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mpbcjlf4vh ) , rtdwData , 0 , 209 , sizeof ( mdlrefDW ->
rtdw . mpbcjlf4vh ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . jpbdwgjnfq ) , rtdwData , 0 , 210 , sizeof ( mdlrefDW ->
rtdw . jpbdwgjnfq ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . imoucwn4pi ) , rtdwData , 0 , 211 , sizeof ( mdlrefDW ->
rtdw . imoucwn4pi ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . kunjroudei ) , rtdwData , 0 , 212 , sizeof ( mdlrefDW ->
rtdw . kunjroudei ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . eafmghgkg2 ) , rtdwData , 0 , 213 , sizeof ( mdlrefDW ->
rtdw . eafmghgkg2 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . gg2ctyfptk ) , rtdwData , 0 , 214 , sizeof ( mdlrefDW ->
rtdw . gg2ctyfptk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . kgmrq35r1d ) , rtdwData , 0 , 215 , sizeof ( mdlrefDW ->
rtdw . kgmrq35r1d ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . pfeghevp3b ) , rtdwData , 0 , 216 , sizeof ( mdlrefDW ->
rtdw . pfeghevp3b ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . fxfjh3uza5 ) , rtdwData , 0 , 217 , sizeof ( mdlrefDW ->
rtdw . fxfjh3uza5 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . cqdisjrtu0 ) , rtdwData , 0 , 218 , sizeof ( mdlrefDW ->
rtdw . cqdisjrtu0 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . hrfi0yiu4u ) , rtdwData , 0 , 219 , sizeof ( mdlrefDW ->
rtdw . hrfi0yiu4u ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . eghpxvkniz ) , rtdwData , 0 , 220 , sizeof ( mdlrefDW ->
rtdw . eghpxvkniz ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . dj4vnxq0rt ) , rtdwData , 0 , 221 , sizeof ( mdlrefDW ->
rtdw . dj4vnxq0rt ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . cstvtpbqtb ) , rtdwData , 0 , 222 , sizeof ( mdlrefDW ->
rtdw . cstvtpbqtb ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . bslmwz5chr ) , rtdwData , 0 , 223 , sizeof ( mdlrefDW ->
rtdw . bslmwz5chr ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . p1syfnw3hu ) , rtdwData , 0 , 224 , sizeof ( mdlrefDW ->
rtdw . p1syfnw3hu ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . g2lis3sfb3 ) , rtdwData , 0 , 225 , sizeof ( mdlrefDW ->
rtdw . g2lis3sfb3 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . aniuqzhx2h ) , rtdwData , 0 , 226 , sizeof ( mdlrefDW ->
rtdw . aniuqzhx2h ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . gdj3xqj1np ) , rtdwData , 0 , 227 , sizeof ( mdlrefDW ->
rtdw . gdj3xqj1np ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . m3p0qccui3 ) , rtdwData , 0 , 228 , sizeof ( mdlrefDW ->
rtdw . m3p0qccui3 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . n2xswyacim ) , rtdwData , 0 , 229 , sizeof ( mdlrefDW ->
rtdw . n2xswyacim ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mzb2q4hcny ) , rtdwData , 0 , 230 , sizeof ( mdlrefDW ->
rtdw . mzb2q4hcny ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . efywbwsjif ) , rtdwData , 0 , 231 , sizeof ( mdlrefDW ->
rtdw . efywbwsjif ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . bn3qvuzmed ) , rtdwData , 0 , 232 , sizeof ( mdlrefDW ->
rtdw . bn3qvuzmed ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . pgzsern3x0 ) , rtdwData , 0 , 233 , sizeof ( mdlrefDW ->
rtdw . pgzsern3x0 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . kt4acua1kk ) , rtdwData , 0 , 234 , sizeof ( mdlrefDW ->
rtdw . kt4acua1kk ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . pu1g0m4jmc ) , rtdwData , 0 , 235 , sizeof ( mdlrefDW ->
rtdw . pu1g0m4jmc ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . njc3rznzi0 ) , rtdwData , 0 , 236 , sizeof ( mdlrefDW ->
rtdw . njc3rznzi0 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . kiem0xzrc5 ) , rtdwData , 0 , 237 , sizeof ( mdlrefDW ->
rtdw . kiem0xzrc5 ) ) ;
mr_Aerial_Inspection_Octa_Rotor_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . nvwwpbgr5o ) , rtdwData , 0 , 238 , sizeof ( mdlrefDW ->
rtdw . nvwwpbgr5o ) ) ; } } void
mr_Aerial_Inspection_Octa_Rotor_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 1919010804U , 3247596980U , 912663113U ,
310601163U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"Aerial_Inspection_Octa_Rotor" , & chksum [ 0 ] ) ; } mxArray *
mr_Aerial_Inspection_Octa_Rotor_GetSimStateDisallowedBlocks ( ) { mxArray *
data = mxCreateCellMatrix ( 6 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static
const char * blockType [ 6 ] = { "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , } ; static const char * blockPath [ 6 ] = {
"Aerial_Inspection_Octa_Rotor/Solver Configuration/EVAL_KEY/STATE_1" ,
"Aerial_Inspection_Octa_Rotor/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"Aerial_Inspection_Octa_Rotor/Solver Configuration/EVAL_KEY/OUTPUT_1_1" ,
"Aerial_Inspection_Octa_Rotor/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"Aerial_Inspection_Octa_Rotor/Solver Configuration/EVAL_KEY/OUTPUT_1_1" ,
"Aerial_Inspection_Octa_Rotor/Solver Configuration/EVAL_KEY/STATE_1" , } ;
static const int reason [ 6 ] = { 0 , 0 , 0 , 5 , 5 , 5 , } ; for ( subs [ 0
] = 0 ; subs [ 0 ] < 6 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } return data
; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
