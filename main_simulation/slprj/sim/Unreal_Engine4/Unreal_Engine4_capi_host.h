#ifndef RTW_HEADER_Unreal_Engine4_cap_host_h_
#define RTW_HEADER_Unreal_Engine4_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
Unreal_Engine4_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void Unreal_Engine4_host_InitializeDataMapInfo (
Unreal_Engine4_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
