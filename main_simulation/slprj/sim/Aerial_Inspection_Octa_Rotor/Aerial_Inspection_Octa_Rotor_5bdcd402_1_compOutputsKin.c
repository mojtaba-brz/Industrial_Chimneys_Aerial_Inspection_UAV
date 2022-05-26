#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "Aerial_Inspection_Octa_Rotor_5bdcd402_1_geometries.h"
PmfMessageId Aerial_Inspection_Octa_Rotor_5bdcd402_1_compOutputsKin ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * output ,
NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 11 ] ;
( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 0.0 ; xx [ 1 ] = state [ 3 ] ; xx [ 2 ] = state [ 4 ]
; xx [ 3 ] = state [ 5 ] ; xx [ 4 ] = state [ 6 ] ; xx [ 5 ] = state [ 10 ] ;
xx [ 6 ] = state [ 11 ] ; xx [ 7 ] = state [ 12 ] ;
pm_math_Quaternion_xform_ra ( xx + 1 , xx + 5 , xx + 8 ) ; output [ 0 ] =
state [ 253 ] ; output [ 1 ] = state [ 255 ] ; output [ 2 ] = state [ 257 ] ;
output [ 3 ] = state [ 259 ] ; output [ 4 ] = state [ 261 ] ; output [ 5 ] =
state [ 0 ] ; output [ 6 ] = state [ 7 ] ; output [ 8 ] = state [ 1 ] ;
output [ 9 ] = state [ 8 ] ; output [ 11 ] = state [ 2 ] ; output [ 12 ] =
state [ 9 ] ; output [ 14 ] = state [ 3 ] ; output [ 15 ] = state [ 4 ] ;
output [ 16 ] = state [ 5 ] ; output [ 17 ] = state [ 6 ] ; output [ 18 ] =
xx [ 8 ] ; output [ 19 ] = xx [ 9 ] ; output [ 20 ] = xx [ 10 ] ; return NULL
; }
