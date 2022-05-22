#include "ne_std.h"
#include "pm_default_allocator.h"
#include "ne_dae.h"
#include "ne_solverparameters.h"
#include "sm_ssci_NeDaePrivateData.h"
NeDae * sm_ssci_constructDae ( NeDaePrivateData * smData ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_NeDaePrivateData_create (
NeDaePrivateData * smData ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_dae ( NeDae * * dae , const
NeModelParameters * modelParams , const NeSolverParameters * solverParams ) {
PmAllocator * alloc = pm_default_allocator ( ) ; NeDaePrivateData * smData =
( NeDaePrivateData * ) alloc -> mCallocFcn ( alloc , sizeof (
NeDaePrivateData ) , 1 ) ; ( void ) modelParams ; ( void ) solverParams ;
Aerial_Inspection_Octa_Rotor_5bdcd402_1_NeDaePrivateData_create ( smData ) ;
* dae = sm_ssci_constructDae ( smData ) ; }
