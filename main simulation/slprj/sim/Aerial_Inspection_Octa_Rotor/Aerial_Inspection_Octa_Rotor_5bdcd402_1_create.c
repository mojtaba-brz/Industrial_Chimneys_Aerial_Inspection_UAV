#include "pm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "pm_default_allocator.h"
#include "sm_ssci_NeDaePrivateData.h"
#include "sm_CTarget.h"
PmfMessageId sm_ssci_recordRunTimeError ( const char * errorId , const char *
errorMsg , NeuDiagnosticManager * mgr ) ;
#define pm_allocator_alloc(_allocator, _m, _n) ((_allocator)->mCallocFcn((_allocator), (_m), (_n)))
#define PM_ALLOCATE_ARRAY(_name, _type, _size, _allocator)\
 _name = (_type *) pm_allocator_alloc(_allocator, sizeof(_type), _size)
#define pm_size_to_int(_size)          ((int32_T) (_size))
PmIntVector * pm_create_int_vector ( size_t , PmAllocator * ) ; int_T
pm_create_int_vector_fields ( PmIntVector * , size_t , PmAllocator * ) ;
int_T pm_create_real_vector_fields ( PmRealVector * , size_t , PmAllocator *
) ; int_T pm_create_char_vector_fields ( PmCharVector * , size_t ,
PmAllocator * ) ; int_T pm_create_bool_vector_fields ( PmBoolVector * ,
size_t , PmAllocator * ) ; void pm_rv_equals_rv ( const PmRealVector * ,
const PmRealVector * ) ; void sm_ssci_setupLoggerFcn_codeGen ( const NeDae *
dae , NeLoggerBuilder * neLoggerBuilder ) ; int32_T sm_ssci_logFcn_codeGen (
const NeDae * dae , const NeSystemInput * systemInput , PmRealVector * output
) ; extern const NeAssertData
Aerial_Inspection_Octa_Rotor_5bdcd402_1_assertData [ ] ; extern const
NeZCData Aerial_Inspection_Octa_Rotor_5bdcd402_1_ZCData [ ] ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeRuntimeParameters ( const
double * runtimeRootVariables , double * runtimeParameters ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_validateRuntimeParameters ( const
double * runtimeParameters , int32_T * assertSatisfactionFlags ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeAsmRuntimeDerivedValues (
const double * runtimeParameters , RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeSimRuntimeDerivedValues (
const double * runtimeParameters , RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle ) ; PmfMessageId
Aerial_Inspection_Octa_Rotor_5bdcd402_1_compDerivs ( const
RuntimeDerivedValuesBundle * , const int * , const double * , const int * ,
const double * , const double * , const double * , const double * , double *
, double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Aerial_Inspection_Octa_Rotor_5bdcd402_1_numJacPerturbLoBounds ( const
RuntimeDerivedValuesBundle * , const int * , const double * , const int * ,
const double * , const double * , const double * , const double * , double *
, double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Aerial_Inspection_Octa_Rotor_5bdcd402_1_numJacPerturbHiBounds ( const
RuntimeDerivedValuesBundle * , const int * , const double * , const int * ,
const double * , const double * , const double * , const double * , double *
, double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Aerial_Inspection_Octa_Rotor_5bdcd402_1_checkDynamics ( const
RuntimeDerivedValuesBundle * , const double * , const double * , const double
* , const double * , const double * , const int * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Aerial_Inspection_Octa_Rotor_5bdcd402_1_compOutputsDyn ( const
RuntimeDerivedValuesBundle * , const int * , const double * , const int * ,
const double * , const double * , const double * , const double * , double *
, double * , int * , double * , NeuDiagnosticManager * neDiagMgr ) ;
PmfMessageId Aerial_Inspection_Octa_Rotor_5bdcd402_1_compOutputsKin ( const
RuntimeDerivedValuesBundle * , const double * , const int * , const double *
, const double * , const double * , const double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Aerial_Inspection_Octa_Rotor_5bdcd402_1_compOutputs ( const
RuntimeDerivedValuesBundle * , const int * , const double * , const int * ,
const double * , const double * , const double * , const double * , double *
, double * , int * , double * , NeuDiagnosticManager * neDiagMgr ) ;
PmfMessageId Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeAsmModeVector (
const double * , const double * , const double * , int * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeSimModeVector ( const double *
, const double * , const double * , int * , double * , NeuDiagnosticManager *
neDiagMgr ) ; PmfMessageId
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeZeroCrossings ( const
RuntimeDerivedValuesBundle * , const double * , const double * , const double
* , const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_setTargets ( const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , CTarget * targets )
; void Aerial_Inspection_Octa_Rotor_5bdcd402_1_resetAsmStateVector ( const
void * mech , double * stateVector ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_resetSimStateVector ( const void *
mech , double * stateVector ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_initializeTrackedAngleState ( const
void * mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ,
const int * modeVector , const double * motionData , double * stateVector ) ;
void Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeDiscreteState ( const
void * mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ,
double * stateVector ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_adjustPosition ( const void * mech ,
const double * dofDeltas , double * stateVector ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_perturbAsmJointPrimitiveState ( const
void * mech , size_t stageIdx , size_t primitiveIdx , double magnitude ,
boolean_T doPerturbVelocity , double * stateVector ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_perturbSimJointPrimitiveState ( const
void * mech , size_t stageIdx , size_t primitiveIdx , double magnitude ,
boolean_T doPerturbVelocity , double * stateVector ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_perturbFlexibleBodyState ( const void
* mech , size_t stageIdx , double magnitude , boolean_T doPerturbVelocity ,
double * stateVector ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computePosDofBlendMatrix ( const void
* mech , size_t stageIdx , size_t primitiveIdx , const double * stateVector ,
int partialType , double * matrix ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeVelDofBlendMatrix ( const void
* mech , size_t stageIdx , size_t primitiveIdx , const double * stateVector ,
int partialType , double * matrix ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_projectPartiallyTargetedPos ( const
void * mech , size_t stageIdx , size_t primitiveIdx , const double *
origStateVector , int partialType , double * stateVector ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_propagateMotion ( const void * mech ,
const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double
* stateVector , double * motionData ) ; size_t
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeAssemblyError ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , const int * modeVector , const double * motionData , double *
error ) ; size_t
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeAssemblyJacobian ( const void
* mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ,
size_t constraintIdx , boolean_T forVelocitySatisfaction , const double *
stateVector , const int * modeVector , const double * motionData , double * J
) ; size_t
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeFullAssemblyJacobian ( const
void * mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ,
const double * stateVector , const int * modeVector , const double *
motionData , double * J ) ; boolean_T
Aerial_Inspection_Octa_Rotor_5bdcd402_1_isInKinematicSingularity ( const void
* mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ,
size_t constraintIdx , const int * modeVector , const double * motionData ) ;
void Aerial_Inspection_Octa_Rotor_5bdcd402_1_convertStateVector ( const void
* asmMech , const RuntimeDerivedValuesBundle * asmRuntimeDerivedValuesBundle
, const void * simMech , const double * asmStateVector , const int *
asmModeVector , const int * simModeVector , double * simStateVector ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_constructStateVector ( const void *
mech , const double * solverStateVector , const double * u , const double *
uDot , const double * discreteStateVector , double * fullStateVector ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_extractSolverStateVector ( const void
* mech , const double * fullStateVector , double * solverStateVector ) ;
boolean_T Aerial_Inspection_Octa_Rotor_5bdcd402_1_isPositionViolation ( const
void * mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ,
const int * constraintEqnEnableFlags , const double * stateVector , const int
* modeVector ) ; boolean_T
Aerial_Inspection_Octa_Rotor_5bdcd402_1_isVelocityViolation ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
int * constraintEqnEnableFlags , const double * stateVector , const int *
modeVector ) ; PmfMessageId
Aerial_Inspection_Octa_Rotor_5bdcd402_1_projectStateSim ( const void * mech ,
const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const int * modeVector , double * stateVector ,
void * neDiagMgr ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeConstraintError ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
double * stateVector , const int * modeVector , double * error ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_resetModeVector ( const void * mech ,
int * modeVector ) ; boolean_T
Aerial_Inspection_Octa_Rotor_5bdcd402_1_hasJointDisToNormModeChange ( const
void * mech , const int * prevModeVector , const int * modeVector ) ;
PmfMessageId
Aerial_Inspection_Octa_Rotor_5bdcd402_1_performJointDisToNormModeChange (
const void * mech , const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle , const int * constraintEqnEnableFlags , const int
* prevModeVector , const int * modeVector , const double * inputVector ,
double * stateVector , void * neDiagMgr ) ; void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_onModeChangedCutJoints ( const void *
mech , const int * prevModeVector , const int * modeVector , double *
stateVector ) ; PmfMessageId Aerial_Inspection_Octa_Rotor_5bdcd402_1_assemble
( const double * u , double * udot , double * x , NeuDiagnosticManager *
neDiagMgr ) { ( void ) x ; ( void ) u ; ( void ) udot ; ( void ) neDiagMgr ;
return NULL ; } static void dae_cg_setParameters_function ( const NeDae * dae
, const NeParameterBundle * paramBundle ) { const NeDaePrivateData * smData =
dae -> mPrivateData ; const double * runtimeRootVariables = paramBundle ->
mRealParameters . mX ; if ( smData -> mRuntimeParameterScalars . mN == 0 )
return ; Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeRuntimeParameters (
runtimeRootVariables , smData -> mRuntimeParameterScalars . mX ) ;
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeAsmRuntimeDerivedValues (
smData -> mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mAsmRuntimeDerivedValuesBundle ) ;
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeSimRuntimeDerivedValues (
smData -> mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mSimRuntimeDerivedValuesBundle ) ;
sm_core_computeRedundantConstraintEquations ( & dae -> mPrivateData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ) ;
#if 0
{ size_t i ; const size_t n = smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mSize ; pmf_printf (
"\nRuntime Enabled Equations (%lu)\n" , n ) ; for ( i = 0 ; i < n ; ++ i )
pmf_printf ( "  %2lu:  %d\n" , i , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues [ i ] ) ; }
#endif
} static PmfMessageId dae_cg_pAssert_method ( const NeDae * dae , const
NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput ,
NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; const double * runtimeParams = smData ->
mRuntimeParameterScalars . mX ; int32_T * assertSatisfactionFlags =
daeMethodOutput -> mPASSERT . mX ; ( void ) systemInput ; ( void ) neDiagMgr
; Aerial_Inspection_Octa_Rotor_5bdcd402_1_validateRuntimeParameters (
runtimeParams , assertSatisfactionFlags ) ; return NULL ; } static
PmfMessageId dae_cg_deriv_method ( const NeDae * dae , const NeSystemInput *
systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; if ( smData ->
mCachedDerivativesAvailable ) memcpy ( daeMethodOutput -> mXP0 . mX , smData
-> mCachedDerivatives . mX , 337 * sizeof ( real_T ) ) ; else errorId =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_compDerivs ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 32 , systemInput
-> mV . mX + 32 , systemInput -> mD . mX , daeMethodOutput -> mXP0 . mX , &
errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_numJacPerturbLoBounds_method ( const NeDae * dae , const NeSystemInput
* systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; errorId =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_numJacPerturbLoBounds ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 32 , systemInput
-> mV . mX + 32 , systemInput -> mD . mX , daeMethodOutput -> mNUMJAC_DX_LO .
mX , & errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_numJacPerturbHiBounds_method ( const NeDae * dae , const NeSystemInput
* systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; errorId =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_numJacPerturbHiBounds ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 32 , systemInput
-> mV . mX + 32 , systemInput -> mD . mX , daeMethodOutput -> mNUMJAC_DX_HI .
mX , & errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_compOutputs_method ( const NeDae * dae , const NeSystemInput *
systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { PmfMessageId errorId = NULL ; NeDaePrivateData * smData = dae
-> mPrivateData ; if ( smData -> mDoComputeDynamicOutputs ) { int derivErr =
0 ; double errorResult = 0.0 ; errorId =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_compOutputsDyn ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 32 , systemInput
-> mV . mX + 32 , systemInput -> mD . mX , smData -> mCachedDerivatives . mX
, daeMethodOutput -> mY . mX , & derivErr , & errorResult , neDiagMgr ) ;
smData -> mCachedDerivativesAvailable = ( derivErr == 0 ) ; } else errorId =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_compOutputsKin ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mM .
mX , systemInput -> mU . mX , systemInput -> mU . mX + 32 , systemInput -> mV
. mX + 32 , systemInput -> mD . mX , daeMethodOutput -> mY . mX , neDiagMgr )
; return errorId ; } static PmfMessageId dae_cg_mode_method ( const NeDae *
dae , const NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput
, NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData * smData = dae
-> mPrivateData ; PmfMessageId errorId = NULL ; double errorResult = 0.0 ;
errorId = Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeSimModeVector (
systemInput -> mU . mX , systemInput -> mU . mX + 32 , systemInput -> mV . mX
+ 32 , daeMethodOutput -> mMODE . mX , & errorResult , neDiagMgr ) ; memcpy (
smData -> mCachedModeVector . mX , daeMethodOutput -> mMODE . mX , 0 * sizeof
( int32_T ) ) ; return errorId ; } static PmfMessageId
dae_cg_zeroCrossing_method ( const NeDae * dae , const NeSystemInput *
systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ; double
errorResult = 0.0 ; return
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeZeroCrossings ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 32 , systemInput -> mV . mX + 32 , systemInput
-> mD . mX , daeMethodOutput -> mZC . mX , & errorResult , neDiagMgr ) ; }
static PmfMessageId dae_cg_project_solve ( const NeDae * dae , const
NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; return sm_core_projectState
( false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 32 , systemInput -> mD . mX , systemInput -> mX
. mX , neDiagMgr ) ; } static PmfMessageId dae_cg_check_solve ( const NeDae *
dae , const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr )
{ NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId =
NULL ; if ( smData -> mNumConstraintEqns > 0 ) errorId = sm_core_projectState
( false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 32 , systemInput -> mD . mX , systemInput -> mX
. mX , neDiagMgr ) ; if ( errorId == NULL ) { double result = 0.0 ; errorId =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_checkDynamics ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 32 , systemInput -> mV . mX + 32 , systemInput
-> mD . mX , systemInput -> mM . mX , & result , neDiagMgr ) ; } return
errorId ; } static PmfMessageId dae_cg_CIC_MODE_solve ( const NeDae * dae ,
const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId = NULL
; double errorResult = 0.0 ; const size_t mvSize = smData -> mModeVectorSize
; boolean_T modeChanged = false ; if ( mvSize > 0 ) { errorId =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeSimModeVector ( systemInput ->
mU . mX , systemInput -> mU . mX + 32 , systemInput -> mV . mX + 32 ,
systemInput -> mM . mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL )
return errorId ; { size_t i ; for ( i = 0 ; i < mvSize ; ++ i ) if (
systemInput -> mM . mX [ i ] != smData -> mCachedModeVector . mX [ i ] ) {
modeChanged = true ; break ; } } } if ( modeChanged ) { errorId =
sm_core_onModeChanged ( & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mU . mX , systemInput -> mU .
mX + 32 , systemInput -> mD . mX , smData -> mCachedModeVector . mX ,
systemInput -> mM . mX , systemInput -> mX . mX , neDiagMgr ) ; if ( errorId
!= NULL ) return errorId ; memcpy ( smData -> mCachedModeVector . mX ,
systemInput -> mM . mX , 0 * sizeof ( int32_T ) ) ; } errorId =
sm_core_projectState ( true , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 32 , systemInput -> mD . mX , systemInput -> mX
. mX , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_assemble_solve ( const NeDae * dae , const NeSystemInput * systemInput
, NeuDiagnosticManager * neDiagMgr ) { NeDaePrivateData * smData = dae ->
mPrivateData ; const SmMechanismDelegate * delegate = & smData ->
mAssemblyDelegate ; const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle = & smData -> mAsmRuntimeDerivedValuesBundle ;
PmfMessageId errorId = NULL ; size_t i ; double errorResult = 0.0 ; const
size_t numTargets = 546 ; unsigned int asmStatus = 0 ; double *
assemblyFullStateVector = smData -> mAssemblyFullStateVector . mX ; double *
simulationFullStateVector = smData -> mSimulationFullStateVector . mX ; ( *
delegate -> mSetTargets ) ( runtimeDerivedValuesBundle , smData -> mTargets )
; { const double * u = systemInput -> mU . mX ; const double * uDot = u +
smData -> mInputVectorSize ; CTarget * target = smData -> mTargets + smData
-> mNumInternalTargets ; for ( i = 0 ; i < smData ->
mNumInputMotionPrimitives ; ++ i ) { const size_t inputOffset = smData ->
mMotionInputOffsets . mX [ i ] ; ( target ++ ) -> mValue [ 0 ] = u [
inputOffset ] ; ( target ++ ) -> mValue [ 0 ] = uDot [ inputOffset ] ; } } if
( smData -> mAssemblyModeVector . mN > 0 ) { errorId =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeAsmModeVector ( systemInput ->
mU . mX , systemInput -> mU . mX + 32 , systemInput -> mV . mX + 32 , smData
-> mAssemblyModeVector . mX , & errorResult , neDiagMgr ) ; if ( errorId !=
NULL ) return errorId ; } sm_core_computeStateVector ( delegate ,
runtimeDerivedValuesBundle , smData -> mAssemblyModeVector . mX , numTargets
, smData -> mTargets , assemblyFullStateVector ) ; asmStatus =
sm_core_checkAssembly ( delegate , runtimeDerivedValuesBundle ,
assemblyFullStateVector , smData -> mAssemblyModeVector . mX , NULL , NULL ,
NULL ) ; if ( asmStatus != 1 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:AssemblyFailure" , asmStatus == 2 ?
 "Model not assembled due to a position violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
: ( asmStatus == 3 ?
 "Model not assembled due to a velocity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
:
 "Model not assembled due to a singularity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
) , neDiagMgr ) ; }
#if 0
Aerial_Inspection_Octa_Rotor_5bdcd402_1_checkTargets ( & smData ->
mSimRuntimeDerivedValuesBundle , assemblyFullStateVector ) ;
#endif
if ( smData -> mModeVectorSize > 0 ) { errorId =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeSimModeVector ( systemInput ->
mU . mX , systemInput -> mU . mX + 32 , systemInput -> mV . mX + 32 ,
systemInput -> mM . mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL )
return errorId ; memcpy ( smData -> mCachedModeVector . mX , systemInput ->
mM . mX , 0 * sizeof ( int32_T ) ) ; } ( * delegate -> mConvertStateVector )
( NULL , runtimeDerivedValuesBundle , NULL , assemblyFullStateVector , smData
-> mAssemblyModeVector . mX , systemInput -> mM . mX ,
simulationFullStateVector ) ; for ( i = 0 ; i < smData -> mStateVectorSize ;
++ i ) systemInput -> mX . mX [ i ] = simulationFullStateVector [ smData ->
mStateVectorMap . mX [ i ] ] ; memcpy ( systemInput -> mD . mX ,
simulationFullStateVector + smData -> mFullStateVectorSize - smData ->
mDiscreteStateSize , smData -> mDiscreteStateSize * sizeof ( double ) ) ;
return errorId ; } typedef struct { size_t first ; size_t second ; } SizePair
; static void checkMemAllocStatus ( int_T status ) { ( void ) status ; }
static PmCharVector cStringToCharVector ( const char * src ) { const size_t n
= strlen ( src ) ; PmCharVector charVect ; const int_T status =
pm_create_char_vector_fields ( & charVect , n + 1 , pm_default_allocator ( )
) ; checkMemAllocStatus ( status ) ; strcpy ( charVect . mX , src ) ; return
charVect ; } static void initBasicAttributes ( NeDaePrivateData * smData ) {
size_t i ; smData -> mStateVectorSize = 337 ; smData -> mFullStateVectorSize
= 369 ; smData -> mDiscreteStateSize = 0 ; smData -> mModeVectorSize = 0 ;
smData -> mNumZeroCrossings = 0 ; smData -> mInputVectorSize = 32 ; smData ->
mOutputVectorSize = 24 ; smData -> mNumConstraintEqns = 50 ; for ( i = 0 ; i
< 4 ; ++ i ) smData -> mChecksum [ i ] = 0 ; } static void initStateVector (
NeDaePrivateData * smData ) { PmAllocator * alloc = pm_default_allocator ( )
; const int32_T stateVectorMap [ 337 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8
, 9 , 10 , 11 , 12 , 13 , 14 , 19 , 20 , 21 , 22 , 31 , 32 , 33 , 34 , 35 ,
36 , 37 , 38 , 39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51
, 52 , 53 , 54 , 55 , 56 , 57 , 58 , 59 , 60 , 61 , 62 , 63 , 64 , 65 , 66 ,
67 , 68 , 69 , 70 , 71 , 72 , 73 , 74 , 75 , 76 , 77 , 78 , 79 , 80 , 81 , 82
, 83 , 84 , 85 , 86 , 87 , 88 , 89 , 90 , 91 , 92 , 93 , 94 , 95 , 96 , 97 ,
98 , 99 , 100 , 101 , 102 , 103 , 104 , 105 , 106 , 107 , 108 , 109 , 110 ,
111 , 112 , 113 , 114 , 115 , 116 , 117 , 118 , 119 , 120 , 121 , 122 , 123 ,
124 , 125 , 126 , 127 , 128 , 129 , 130 , 131 , 132 , 133 , 134 , 135 , 136 ,
137 , 138 , 139 , 140 , 141 , 142 , 143 , 144 , 145 , 146 , 147 , 148 , 149 ,
150 , 151 , 152 , 153 , 154 , 155 , 156 , 157 , 158 , 159 , 160 , 161 , 162 ,
165 , 166 , 167 , 168 , 169 , 170 , 171 , 172 , 173 , 174 , 175 , 176 , 177 ,
178 , 179 , 180 , 181 , 182 , 183 , 184 , 185 , 186 , 187 , 188 , 191 , 192 ,
193 , 194 , 195 , 196 , 199 , 200 , 201 , 202 , 203 , 204 , 207 , 208 , 209 ,
210 , 211 , 212 , 213 , 214 , 215 , 216 , 219 , 220 , 221 , 222 , 223 , 224 ,
227 , 228 , 229 , 230 , 231 , 232 , 233 , 234 , 235 , 236 , 239 , 240 , 241 ,
242 , 243 , 244 , 247 , 248 , 249 , 250 , 251 , 252 , 253 , 254 , 255 , 256 ,
257 , 258 , 261 , 262 , 263 , 264 , 265 , 266 , 269 , 270 , 271 , 272 , 273 ,
274 , 275 , 276 , 277 , 278 , 279 , 280 , 281 , 282 , 283 , 284 , 285 , 286 ,
287 , 288 , 289 , 290 , 291 , 292 , 293 , 294 , 295 , 296 , 297 , 298 , 299 ,
300 , 301 , 302 , 303 , 304 , 305 , 306 , 307 , 308 , 309 , 310 , 311 , 312 ,
313 , 314 , 315 , 316 , 317 , 318 , 319 , 320 , 321 , 322 , 323 , 324 , 325 ,
326 , 327 , 328 , 329 , 330 , 331 , 332 , 333 , 334 , 335 , 336 , 337 , 338 ,
339 , 340 , 341 , 342 , 343 , 344 , 345 , 346 , 347 , 348 , 349 , 350 , 351 ,
352 , 353 , 354 , 355 , 356 , 357 , 358 , 359 , 360 , 361 , 362 , 363 , 364 ,
365 , 366 , 367 , 368 } ; const CTarget targets [ 546 ] = { { 0 , 33 , 0 ,
false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 2.954804086395314222e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 33 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 34 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 1.323752864218732256e-02 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 34 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 43 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 43 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 70 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 70 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 97 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 97 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 124 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 124 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 151 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 151 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 365 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 365 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 365 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 365 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 444 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 2.711570988614002697e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 444 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 444 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 444 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 445 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 3.070778288403918754e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 445 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 445 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 445 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 446 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 2.535247605401943716e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 446 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 446 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 446 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 447 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 2.795231534868450662e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 447 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 447 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 447 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 448 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 448 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 448 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 448 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 448 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 448 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 449 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 449 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 449 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 449 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 449 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 449 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 450 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 450 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 450 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 450 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 450 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 450 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 451 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 451 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 451 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 451 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 451 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 451 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 452 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 5.701103299858124168e-02 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 452 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 453 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 9.165448368788751965e-02 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 453 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 454 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 6.182821276611901729e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 454 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 455 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 5.887728571253452586e-02 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 455 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 456 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 1.753150299423341940e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 456 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 577 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 1.651999452173095184e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 577 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 577 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 577 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 578 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 1.651999452173089189e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 578 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 578 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 578 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 579 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 1.651999452173091631e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 579 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 579 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 579 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 580 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 1.489593201416700818e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 580 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 580 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 580 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 661 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 661 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 661 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 661 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 661 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 661 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 662 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 662 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 662 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 662 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 662 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 662 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 663 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 663 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 663 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 663 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 663 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 663 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 664 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 664 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 664 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 664 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 664 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 664 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 665 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 1.215846053437962926e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 665 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 666 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 1.215846053437960927e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 666 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 667 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 1.215846053437962038e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 667 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 668 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 1.925746600151829968e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 668 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 708 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 2.504895371161750983e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 708 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 708 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 708 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 709 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 2.504895371161744322e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 709 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 709 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 709 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 710 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 2.504895371161763418e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 710 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 710 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 710 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 711 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 1.797926047958554374e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 711 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 711 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 711 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 712 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 5.181710551131999409e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 712 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 712 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 712 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 713 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 5.181710551131902820e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 713 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 713 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 713 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 714 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 714 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 714 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 714 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 714 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 714 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 715 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 715 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 715 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 715 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 715 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 715 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 716 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 716 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 716 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 716 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 716 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 716 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 717 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 717 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 717 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 717 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 717 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 717 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 718 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 718 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 718 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 718 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 718 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 718 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 719 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 719 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 719 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 719 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 719 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 719 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 720 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 5.181710551132995279e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 720 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 721 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 5.181710551133059672e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 721 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 851 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 1.207141444321730983e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 851 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 851 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 851 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 852 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 2.791280045927380993e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 852 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 852 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 852 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 853 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 2.901279780043032552e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 853 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 853 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 853 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 854 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 2.901279780043028111e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 854 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 854 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 854 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 855 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 1.712741652773033030e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 855 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 855 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 855 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 856 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 1.845834462398726394e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 856 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 856 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 856 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 857 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 1.860331705173367753e-02 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 857 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 857 , 1
, false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 857 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 858 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 858 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 858 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 858 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 858 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 858 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 859 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 859 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 859 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 859 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 859 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 859 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 860 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 860 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 860 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 860 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 860 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 860 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 861 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 861 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 861 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 861 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 861 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 861 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 862 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 862 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 862 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 862 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 862 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 862 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 863 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 863 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 863 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 863 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 863 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 863 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 864 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 864 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 864 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 864 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 864 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 864 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 865 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false ,
1 , { - 2.867567445458486741e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 865 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1012 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 1.065944851499045054e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1012 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1012 ,
1 , false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1012 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1013 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 7.198044451212913808e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1013 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1013 ,
1 , false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1013 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1014 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 1.635488593698869231e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1014 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1014 ,
1 , false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1014 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1015 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 3.122989336538078309e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1015 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1015 ,
1 , false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1015 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1016 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 3.122989336535744176e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1016 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1016 ,
1 , false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1016 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1017 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 3.122989336535744176e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1017 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1017 ,
1 , false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1017 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1018 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 3.122989336536130089e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1018 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1018 ,
1 , false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1018 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1019 ,
0 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1019 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1019 ,
1 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1019 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1019 ,
2 , false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1019 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1020 ,
0 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1020 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1020 ,
1 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1020 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1020 ,
2 , false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1020 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1021 ,
0 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1021 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1021 ,
1 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1021 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1021 ,
2 , false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1021 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1022 ,
0 , false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1022 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1022 ,
1 , false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1022 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1022 ,
2 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 2.748727701681319413e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1022 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1023 ,
0 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1023 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1023 ,
1 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1023 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1023 ,
2 , false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1023 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1024 ,
0 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1024 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1024 ,
1 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1024 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1024 ,
2 , false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1024 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1025 ,
0 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1025 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1025 ,
1 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1025 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1025 ,
2 , false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1025 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1026 ,
0 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1026 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1026 ,
1 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1026 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1026 ,
2 , false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1026 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1027 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 2.728182559606995294e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1027 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1028 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 1.007386778283943185e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1028 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1029 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 1.005609674359864369e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1029 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1030 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 1.005609674357540673e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1030 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1031 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 1.005609674360019357e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1031 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1032 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 2.716345396478045959e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1032 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1033 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 1.005609674359864369e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1033 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1192 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1192 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1193 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 2.601410555096759225e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1193 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1194 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 7.853981633974482790e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1194 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1195 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 9.883223237735901945e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1195 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1196 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 7.853981633974482790e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1196 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1197 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 1.188184290326794512e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1197 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1198 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 3.014190178958449096e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1198 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1199 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 2.990862185482541680e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1199 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1200 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 6.810162373829962978e-02 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1200 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1781 ,
0 , false , 0 , 1 , "m" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1781 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1782 ,
0 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1782 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1782 ,
1 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1782 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1783 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 2.006833098931001924e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1783 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1784 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 1.570796326794896558e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1784 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1785 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1785 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1786 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 3.134272396738907673e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1786 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1787 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 2.132485737916429258e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1787 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1788 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 1.972222054753578924e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1788 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1789 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 1.570796326794896558e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1789 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1790 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 1.570796326794896336e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1790 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1791 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 1.570796326794897002e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1791 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1792 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 1.570796326794896780e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1792 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1793 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 8.346363047119623735e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1793 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1794 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 8.346363047119634837e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1794 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1795 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 4.698335637175970469e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1795 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1796 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 4.698335637175970469e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1796 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1797 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 1.914946930194629138e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1797 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1798 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 6.197770023104495068e-02 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1798 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1799 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 3.079614953358748686e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1799 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1800 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 1.226645723395164422e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1800 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1829 ,
0 , false , 0 , 2 , "m" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1829 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1829 ,
1 , false , 0 , 2 , "m" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1829 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1829 ,
2 , false , 0 , 2 , "m" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1829 , 2 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 1 , 1829 ,
3 , false , 0 , 2 , "deg" , false , false , + 1.000000000000000000e+00 ,
false , 4 , { + 1.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 2 , 1829 , 3 , false , 0 , 2 , "deg/s" ,
true , false , + 1.000000000000000000e+00 , false , 3 , { +
0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1909 , 0 , false , 0 , 1 , "deg" , false
, true , + 1.000000000000000000e+00 , false , 1 , { -
1.570796326794896336e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1909 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1910 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 1.855933871359430887e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1910 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1911 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 1.196483328356647835e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1911 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1912 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 1.570796326794896336e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1912 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1991 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 3.924596685940205942e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1991 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1991 ,
1 , false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1991 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1992 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 2.803845620011708117e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1992 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1992 ,
1 , false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1992 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1993 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 2.213036223991447837e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1993 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1993 ,
1 , false , 0 , 1 , "mm" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1993 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1994 ,
0 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1994 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1994 ,
1 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1994 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1994 ,
2 , false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1994 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1995 ,
0 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1995 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1995 ,
1 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1995 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1995 ,
2 , false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1995 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1996 ,
0 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1996 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1996 ,
1 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1996 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1996 ,
2 , false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1996 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1997 ,
0 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1997 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1997 ,
1 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1997 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1997 ,
2 , false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1997 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1998 ,
0 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1998 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1998 ,
1 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1998 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1998 ,
2 , false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1998 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1999 ,
0 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1999 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1999 ,
1 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1999 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1999 ,
2 , false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1999 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2000 ,
0 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2000 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2000 ,
1 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2000 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2000 ,
2 , false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2000 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2001 ,
0 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2001 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2001 ,
1 , false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2001 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2001 ,
2 , false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2001 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2002 ,
0 , false , 0 , 1 , "m" , false , false , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2002 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2163 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 2.443999176715568655e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2163 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2164 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 2.819474431439895401e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2164 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2165 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 1.400434679709325891e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2165 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2166 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 6.765069738989641923e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2166 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2167 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 2.810160240129974341e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2167 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2168 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 5.946720898779762621e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2168 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2169 ,
0 , false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2169 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2170 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 1.413516981388739380e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2170 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2171 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 8.154709680436971198e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2171 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2172 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 2.326121685546096884e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2172 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2173 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 2.243130119967881697e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2173 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2174 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 8.984625336219119740e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2174 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2175 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 2.867966238116399058e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2175 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2176 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { + 2.736264154733945575e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2176 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2177 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 2.736264154733940579e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2177 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2178 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 2.867966238116398614e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2178 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2179 ,
0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , false
, 1 , { - 2.201651972226460696e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2179 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 33 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 33 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 34 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 34 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1196 ,
0 , false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1196 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1199 ,
0 , false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1199 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1198 ,
0 , false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1198 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1197 ,
0 , false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1197 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1194 ,
0 , false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1194 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 1192 ,
0 , false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 1192 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2164 ,
0 , false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2164 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2163 ,
0 , false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2163 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2169 ,
0 , false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2169 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2168 ,
0 , false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2168 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2170 ,
0 , false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2170 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2166 ,
0 , false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2166 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2165 ,
0 , false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2165 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 2167 ,
0 , false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 2167 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } } ; const
size_t numTargets = 546 ; int_T status ; size_t i ; status =
pm_create_real_vector_fields ( & smData -> mAssemblyFullStateVector , 369 ,
alloc ) ; checkMemAllocStatus ( status ) ; status =
pm_create_real_vector_fields ( & smData -> mSimulationFullStateVector , 369 ,
alloc ) ; checkMemAllocStatus ( status ) ; status =
pm_create_int_vector_fields ( & smData -> mStateVectorMap , smData ->
mStateVectorSize , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData
-> mStateVectorMap . mX , stateVectorMap , smData -> mStateVectorSize *
sizeof ( int32_T ) ) ; smData -> mNumInternalTargets = 514 ; smData ->
mNumInputMotionPrimitives = 16 ; PM_ALLOCATE_ARRAY ( smData -> mTargets ,
CTarget , numTargets , alloc ) ; for ( i = 0 ; i < numTargets ; ++ i )
sm_compiler_CTarget_copy ( targets + i , smData -> mTargets + i ) ; } static
void initAsserts ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; int_T status = 0 ; smData -> mNumParamAsserts = 0
; smData -> mParamAssertObjects = NULL ; smData -> mParamAssertPaths = NULL ;
smData -> mParamAssertDescriptors = NULL ; smData -> mParamAssertMessages =
NULL ; smData -> mParamAssertMessageIds = NULL ; status =
pm_create_bool_vector_fields ( & smData -> mParamAssertIsWarnings , smData ->
mNumParamAsserts , alloc ) ; checkMemAllocStatus ( status ) ; if ( smData ->
mNumParamAsserts > 0 ) { const NeAssertData * ad =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_assertData ; size_t i ;
PM_ALLOCATE_ARRAY ( smData -> mParamAssertObjects , PmCharVector , 0 , alloc
) ; PM_ALLOCATE_ARRAY ( smData -> mParamAssertPaths , PmCharVector , 0 ,
alloc ) ; PM_ALLOCATE_ARRAY ( smData -> mParamAssertDescriptors ,
PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY ( smData ->
mParamAssertMessages , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY (
smData -> mParamAssertMessageIds , PmCharVector , 0 , alloc ) ; for ( i = 0 ;
i < smData -> mNumParamAsserts ; ++ i , ++ ad ) { smData ->
mParamAssertObjects [ i ] = cStringToCharVector ( ad -> mObject ) ; smData ->
mParamAssertPaths [ i ] = cStringToCharVector ( ad -> mPath ) ; smData ->
mParamAssertDescriptors [ i ] = cStringToCharVector ( ad -> mDescriptor ) ;
smData -> mParamAssertMessages [ i ] = cStringToCharVector ( ad -> mMessage )
; smData -> mParamAssertMessageIds [ i ] = cStringToCharVector ( ad ->
mMessageID ) ; smData -> mParamAssertIsWarnings . mX [ i ] = ad -> mIsWarn ;
} } } static void initModeVector ( NeDaePrivateData * smData ) { { size_t i ;
const int_T status = pm_create_int_vector_fields ( & smData ->
mAssemblyModeVector , 0 , pm_default_allocator ( ) ) ; checkMemAllocStatus (
status ) ; for ( i = 0 ; i < smData -> mAssemblyModeVector . mN ; ++ i )
smData -> mAssemblyModeVector . mX [ i ] = 0 ; } { size_t i ; const int_T
status = pm_create_int_vector_fields ( & smData -> mCachedModeVector , 0 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mModeVectorSize ; ++ i ) smData -> mCachedModeVector . mX [ i ] =
0 ; } } static void initZeroCrossings ( NeDaePrivateData * smData ) {
PmAllocator * alloc = pm_default_allocator ( ) ; int_T status = 0 ; smData ->
mZeroCrossingObjects = NULL ; smData -> mZeroCrossingPaths = NULL ; smData ->
mZeroCrossingDescriptors = NULL ; status = pm_create_int_vector_fields ( &
smData -> mZeroCrossingTypes , 0 , alloc ) ; checkMemAllocStatus ( status ) ;
if ( smData -> mNumZeroCrossings > 0 ) { const NeZCData * zcd =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_ZCData ; size_t i ; PM_ALLOCATE_ARRAY
( smData -> mZeroCrossingObjects , PmCharVector , 0 , alloc ) ;
PM_ALLOCATE_ARRAY ( smData -> mZeroCrossingPaths , PmCharVector , 0 , alloc )
; PM_ALLOCATE_ARRAY ( smData -> mZeroCrossingDescriptors , PmCharVector , 0 ,
alloc ) ; for ( i = 0 ; i < smData -> mNumZeroCrossings ; ++ i , ++ zcd ) {
smData -> mZeroCrossingObjects [ i ] = cStringToCharVector ( zcd -> mObject )
; smData -> mZeroCrossingPaths [ i ] = cStringToCharVector ( zcd -> mPath ) ;
smData -> mZeroCrossingDescriptors [ i ] = cStringToCharVector ( zcd ->
mDescriptor ) ; smData -> mZeroCrossingTypes . mX [ i ] = zcd -> mType ; } }
} static void initVariables ( NeDaePrivateData * smData ) { const char *
varFullPaths [ 337 ] = { "UAV.Body.x6_DOF_Joint.Px.p" ,
"UAV.Body.x6_DOF_Joint.Py.p" , "UAV.Body.x6_DOF_Joint.Pz.p" ,
"UAV.Body.x6_DOF_Joint.S.Q" , "UAV.Body.x6_DOF_Joint.S.Q" ,
"UAV.Body.x6_DOF_Joint.S.Q" , "UAV.Body.x6_DOF_Joint.S.Q" ,
"UAV.Body.x6_DOF_Joint.Px.v" , "UAV.Body.x6_DOF_Joint.Py.v" ,
"UAV.Body.x6_DOF_Joint.Pz.v" , "UAV.Body.x6_DOF_Joint.S.w" ,
"UAV.Body.x6_DOF_Joint.S.w" , "UAV.Body.x6_DOF_Joint.S.w" ,
"Subsystem.Subsystem.Revolute63.Rz.q" , "Subsystem.Subsystem.Revolute63.Rz.w"
, "Subsystem.Subsystem.Revolute19.Rz.q" ,
"Subsystem.Subsystem.Revolute19.Rz.w" , "Subsystem.Subsystem.Revolute21.Rz.q"
, "Subsystem.Subsystem.Revolute21.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Cylindrical1.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Cylindrical1.Pz.p" ,
"Subsystem.Subsystem.Nuts5.Cylindrical1.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Cylindrical1.Pz.v" ,
"Subsystem.Subsystem.Nuts5.Revolute11.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Revolute11.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Cylindrical21.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Cylindrical21.Pz.p" ,
"Subsystem.Subsystem.Nuts5.Cylindrical21.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Cylindrical21.Pz.v" ,
"Subsystem.Subsystem.Nuts5.Revolute9.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Revolute9.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Cylindrical22.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Cylindrical22.Pz.p" ,
"Subsystem.Subsystem.Nuts5.Cylindrical22.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Cylindrical22.Pz.v" ,
"Subsystem.Subsystem.Nuts5.Revolute10.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Revolute10.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Cylindrical23.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Cylindrical23.Pz.p" ,
"Subsystem.Subsystem.Nuts5.Cylindrical23.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Cylindrical23.Pz.v" ,
"Subsystem.Subsystem.Nuts5.Revolute12.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Revolute12.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Cylindrical24.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Cylindrical24.Pz.p" ,
"Subsystem.Subsystem.Nuts5.Cylindrical24.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Cylindrical24.Pz.v" ,
"Subsystem.Subsystem.Nuts5.Cylindrical2.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Cylindrical2.Pz.p" ,
"Subsystem.Subsystem.Nuts5.Cylindrical2.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Cylindrical2.Pz.v" ,
"Subsystem.Subsystem.Nuts5.Revolute.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Revolute.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Cylindrical.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Cylindrical.Pz.p" ,
"Subsystem.Subsystem.Nuts5.Cylindrical.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Cylindrical.Pz.v" ,
"Subsystem.Subsystem.Nuts5.Planar20.Px.p" ,
"Subsystem.Subsystem.Nuts5.Planar20.Py.p" ,
"Subsystem.Subsystem.Nuts5.Planar20.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Planar20.Px.v" ,
"Subsystem.Subsystem.Nuts5.Planar20.Py.v" ,
"Subsystem.Subsystem.Nuts5.Planar20.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Revolute27.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Revolute27.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Revolute1.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Revolute1.Rz.w" ,
"Subsystem.Subsystem.Nuts4.Cylindrical12.Rz.q" ,
"Subsystem.Subsystem.Nuts4.Cylindrical12.Pz.p" ,
"Subsystem.Subsystem.Nuts4.Cylindrical12.Rz.w" ,
"Subsystem.Subsystem.Nuts4.Cylindrical12.Pz.v" ,
"Subsystem.Subsystem.Nuts4.Cylindrical3.Rz.q" ,
"Subsystem.Subsystem.Nuts4.Cylindrical3.Pz.p" ,
"Subsystem.Subsystem.Nuts4.Cylindrical3.Rz.w" ,
"Subsystem.Subsystem.Nuts4.Cylindrical3.Pz.v" ,
"Subsystem.Subsystem.Nuts4.Cylindrical13.Rz.q" ,
"Subsystem.Subsystem.Nuts4.Cylindrical13.Pz.p" ,
"Subsystem.Subsystem.Nuts4.Cylindrical13.Rz.w" ,
"Subsystem.Subsystem.Nuts4.Cylindrical13.Pz.v" ,
"Subsystem.Subsystem.Nuts4.Cylindrical4.Rz.q" ,
"Subsystem.Subsystem.Nuts4.Cylindrical4.Pz.p" ,
"Subsystem.Subsystem.Nuts4.Cylindrical4.Rz.w" ,
"Subsystem.Subsystem.Nuts4.Cylindrical4.Pz.v" ,
"Subsystem.Subsystem.Nuts4.Cylindrical14.Rz.q" ,
"Subsystem.Subsystem.Nuts4.Cylindrical14.Pz.p" ,
"Subsystem.Subsystem.Nuts4.Cylindrical14.Rz.w" ,
"Subsystem.Subsystem.Nuts4.Cylindrical14.Pz.v" ,
"Subsystem.Subsystem.Nuts4.Cylindrical15.Rz.q" ,
"Subsystem.Subsystem.Nuts4.Cylindrical15.Pz.p" ,
"Subsystem.Subsystem.Nuts4.Cylindrical15.Rz.w" ,
"Subsystem.Subsystem.Nuts4.Cylindrical15.Pz.v" ,
"Subsystem.Subsystem.Nuts4.Cylindrical5.Rz.q" ,
"Subsystem.Subsystem.Nuts4.Cylindrical5.Pz.p" ,
"Subsystem.Subsystem.Nuts4.Cylindrical5.Rz.w" ,
"Subsystem.Subsystem.Nuts4.Cylindrical5.Pz.v" ,
"Subsystem.Subsystem.Nuts4.Revolute6.Rz.q" ,
"Subsystem.Subsystem.Nuts4.Revolute6.Rz.w" ,
"Subsystem.Subsystem.Nut3.Revolute46.Rz.q" ,
"Subsystem.Subsystem.Nut3.Revolute46.Rz.w" ,
"Subsystem.Subsystem.Nut3.Cylindrical6.Rz.q" ,
"Subsystem.Subsystem.Nut3.Cylindrical6.Pz.p" ,
"Subsystem.Subsystem.Nut3.Cylindrical6.Rz.w" ,
"Subsystem.Subsystem.Nut3.Cylindrical6.Pz.v" ,
"Subsystem.Subsystem.Nut3.Revolute47.Rz.q" ,
"Subsystem.Subsystem.Nut3.Revolute47.Rz.w" ,
"Subsystem.Subsystem.Nut3.Cylindrical7.Rz.q" ,
"Subsystem.Subsystem.Nut3.Cylindrical7.Pz.p" ,
"Subsystem.Subsystem.Nut3.Cylindrical7.Rz.w" ,
"Subsystem.Subsystem.Nut3.Cylindrical7.Pz.v" ,
"Subsystem.Subsystem.Nut3.Revolute48.Rz.q" ,
"Subsystem.Subsystem.Nut3.Revolute48.Rz.w" ,
"Subsystem.Subsystem.Nut3.Cylindrical8.Rz.q" ,
"Subsystem.Subsystem.Nut3.Cylindrical8.Pz.p" ,
"Subsystem.Subsystem.Nut3.Cylindrical8.Rz.w" ,
"Subsystem.Subsystem.Nut3.Cylindrical8.Pz.v" ,
"Subsystem.Subsystem.Nut3.Revolute49.Rz.q" ,
"Subsystem.Subsystem.Nut3.Revolute49.Rz.w" ,
"Subsystem.Subsystem.Nut3.Cylindrical9.Rz.q" ,
"Subsystem.Subsystem.Nut3.Cylindrical9.Pz.p" ,
"Subsystem.Subsystem.Nut3.Cylindrical9.Rz.w" ,
"Subsystem.Subsystem.Nut3.Cylindrical9.Pz.v" ,
"Subsystem.Subsystem.Nut3.Revolute18.Rz.q" ,
"Subsystem.Subsystem.Nut3.Revolute18.Rz.w" ,
"Subsystem.Subsystem.Nuts2.Revolute50.Rz.q" ,
"Subsystem.Subsystem.Nuts2.Revolute50.Rz.w" ,
"Subsystem.Subsystem.Nuts2.Cylindrical10.Rz.q" ,
"Subsystem.Subsystem.Nuts2.Cylindrical10.Pz.p" ,
"Subsystem.Subsystem.Nuts2.Cylindrical10.Rz.w" ,
"Subsystem.Subsystem.Nuts2.Cylindrical10.Pz.v" ,
"Subsystem.Subsystem.Nuts2.Cylindrical19.Rz.q" ,
"Subsystem.Subsystem.Nuts2.Cylindrical19.Pz.p" ,
"Subsystem.Subsystem.Nuts2.Cylindrical19.Rz.w" ,
"Subsystem.Subsystem.Nuts2.Cylindrical19.Pz.v" ,
"Subsystem.Subsystem.Nuts2.Cylindrical16.Rz.q" ,
"Subsystem.Subsystem.Nuts2.Cylindrical16.Pz.p" ,
"Subsystem.Subsystem.Nuts2.Cylindrical16.Rz.w" ,
"Subsystem.Subsystem.Nuts2.Cylindrical16.Pz.v" ,
"Subsystem.Subsystem.Nuts2.Cylindrical20.Rz.q" ,
"Subsystem.Subsystem.Nuts2.Cylindrical20.Pz.p" ,
"Subsystem.Subsystem.Nuts2.Cylindrical20.Rz.w" ,
"Subsystem.Subsystem.Nuts2.Cylindrical20.Pz.v" ,
"Subsystem.Subsystem.Nuts2.Cylindrical17.Rz.q" ,
"Subsystem.Subsystem.Nuts2.Cylindrical17.Pz.p" ,
"Subsystem.Subsystem.Nuts2.Cylindrical17.Rz.w" ,
"Subsystem.Subsystem.Nuts2.Cylindrical17.Pz.v" ,
"Subsystem.Subsystem.Nuts2.Revolute51.Rz.q" ,
"Subsystem.Subsystem.Nuts2.Revolute51.Rz.w" ,
"Subsystem.Subsystem.Nuts2.Cylindrical18.Rz.q" ,
"Subsystem.Subsystem.Nuts2.Cylindrical18.Pz.p" ,
"Subsystem.Subsystem.Nuts2.Cylindrical18.Rz.w" ,
"Subsystem.Subsystem.Nuts2.Cylindrical18.Pz.v" ,
"Subsystem.Subsystem.Nuts.Revolute22.Rz.q" ,
"Subsystem.Subsystem.Nuts.Revolute22.Rz.w" ,
"Subsystem.Subsystem.Nuts.Cylindrical26.Rz.q" ,
"Subsystem.Subsystem.Nuts.Cylindrical26.Pz.p" ,
"Subsystem.Subsystem.Nuts.Cylindrical26.Rz.w" ,
"Subsystem.Subsystem.Nuts.Cylindrical26.Pz.v" ,
"Subsystem.Subsystem.Nuts.Revolute23.Rz.q" ,
"Subsystem.Subsystem.Nuts.Revolute23.Rz.w" ,
"Subsystem.Subsystem.Nuts.Cylindrical27.Rz.q" ,
"Subsystem.Subsystem.Nuts.Cylindrical27.Pz.p" ,
"Subsystem.Subsystem.Nuts.Cylindrical27.Rz.w" ,
"Subsystem.Subsystem.Nuts.Cylindrical27.Pz.v" ,
"Subsystem.Subsystem.Nuts.Revolute24.Rz.q" ,
"Subsystem.Subsystem.Nuts.Revolute24.Rz.w" ,
"Subsystem.Subsystem.Nuts.Cylindrical28.Rz.q" ,
"Subsystem.Subsystem.Nuts.Cylindrical28.Pz.p" ,
"Subsystem.Subsystem.Nuts.Cylindrical28.Rz.w" ,
"Subsystem.Subsystem.Nuts.Cylindrical28.Pz.v" ,
"Subsystem.Subsystem.Nuts.Revolute25.Rz.q" ,
"Subsystem.Subsystem.Nuts.Revolute25.Rz.w" ,
"Subsystem.Subsystem.Nuts.Cylindrical29.Rz.q" ,
"Subsystem.Subsystem.Nuts.Cylindrical29.Pz.p" ,
"Subsystem.Subsystem.Nuts.Cylindrical29.Rz.w" ,
"Subsystem.Subsystem.Nuts.Cylindrical29.Pz.v" , "UAV.Body.Revolute55.Rz.q" ,
"UAV.Body.Revolute55.Rz.w" , "UAV.Body.Revolute56.Rz.q" ,
"UAV.Body.Revolute56.Rz.w" , "UAV.Body.Revolute30.Rz.q" ,
"UAV.Body.Revolute30.Rz.w" , "UAV.Motors_and_Props.Revolute61.Rz.q" ,
"UAV.Motors_and_Props.Revolute61.Rz.w" ,
"UAV.Motors_and_Props.Revolute62.Rz.q" ,
"UAV.Motors_and_Props.Revolute62.Rz.w" , "UAV.Body.Revolute28.Rz.q" ,
"UAV.Body.Revolute28.Rz.w" , "UAV.Motors_and_Props.Revolute59.Rz.q" ,
"UAV.Motors_and_Props.Revolute59.Rz.w" ,
"UAV.Motors_and_Props.Revolute60.Rz.q" ,
"UAV.Motors_and_Props.Revolute60.Rz.w" , "UAV.Body.Revolute8.Rz.q" ,
"UAV.Body.Revolute8.Rz.w" , "UAV.Body.Revolute57.Rz.q" ,
"UAV.Body.Revolute57.Rz.w" , "UAV.Body.Revolute40.Rz.q" ,
"UAV.Body.Revolute40.Rz.w" , "UAV.Motors_and_Props.Cylindrical30.Rz.q" ,
"UAV.Motors_and_Props.Cylindrical30.Pz.p" ,
"UAV.Motors_and_Props.Cylindrical30.Rz.w" ,
"UAV.Motors_and_Props.Cylindrical30.Pz.v" , "UAV.Body.Revolute38.Rz.q" ,
"UAV.Body.Revolute38.Rz.w" , "UAV.Motors_and_Props.Cylindrical25.Rz.q" ,
"UAV.Motors_and_Props.Cylindrical25.Pz.p" ,
"UAV.Motors_and_Props.Cylindrical25.Rz.w" ,
"UAV.Motors_and_Props.Cylindrical25.Pz.v" , "UAV.Body.Revolute7.Rz.q" ,
"UAV.Body.Revolute7.Rz.w" , "UAV.Body.Revolute58.Rz.q" ,
"UAV.Body.Revolute58.Rz.w" , "UAV.Body.Revolute42.Rz.q" ,
"UAV.Body.Revolute42.Rz.w" , "UAV.Motors_and_Props.Cylindrical31.Rz.q" ,
"UAV.Motors_and_Props.Cylindrical31.Pz.p" ,
"UAV.Motors_and_Props.Cylindrical31.Rz.w" ,
"UAV.Motors_and_Props.Cylindrical31.Pz.v" , "UAV.Body.Revolute34.Rz.q" ,
"UAV.Body.Revolute34.Rz.w" , "UAV.Motors_and_Props.Revolute66.Rz.q" ,
"UAV.Motors_and_Props.Revolute66.Rz.w" ,
"UAV.Motors_and_Props.Revolute67.Rz.q" ,
"UAV.Motors_and_Props.Revolute67.Rz.w" , "UAV.Body.Revolute3.Rz.q" ,
"UAV.Body.Revolute3.Rz.w" , "UAV.Body.Revolute53.Rz.q" ,
"UAV.Body.Revolute53.Rz.w" , "UAV.Body.Revolute54.Rz.q" ,
"UAV.Body.Revolute54.Rz.w" , "UAV.Body.Revolute32.Rz.q" ,
"UAV.Body.Revolute32.Rz.w" , "UAV.Motors_and_Props.Revolute64.Rz.q" ,
"UAV.Motors_and_Props.Revolute64.Rz.w" ,
"UAV.Motors_and_Props.Revolute65.Rz.q" ,
"UAV.Motors_and_Props.Revolute65.Rz.w" , "UAV.Body.Revolute36.Rz.q" ,
"UAV.Body.Revolute36.Rz.w" , "UAV.Motors_and_Props.Revolute68.Rz.q" ,
"UAV.Motors_and_Props.Revolute68.Rz.w" ,
"UAV.Motors_and_Props.Prismatic1.Pz.p" ,
"UAV.Motors_and_Props.Prismatic1.Pz.v" , "UAV.Body.Prismatic.Pz.p" ,
"UAV.Body.Prismatic.Pz.v" , "UAV.Body.Revolute2.Rz.q" ,
"UAV.Body.Revolute2.Rz.w" , "UAV.Landing_Gear.Revolute16.Rz.q" ,
"UAV.Landing_Gear.Revolute16.Rz.w" , "UAV.Landing_Gear.Revolute17.Rz.q" ,
"UAV.Landing_Gear.Revolute17.Rz.w" , "UAV.Landing_Gear.Revolute4.Rz.q" ,
"UAV.Landing_Gear.Revolute4.Rz.w" , "UAV.Landing_Gear.Revolute5.Rz.q" ,
"UAV.Landing_Gear.Revolute5.Rz.w" , "Flange_1_1.Revolute.Rz.q" ,
"Flange_1_1.Revolute.Rz.w" , "Flange_1_2.Revolute.Rz.q" ,
"Flange_1_2.Revolute.Rz.w" , "Flange_2_1.Revolute.Rz.q" ,
"Flange_2_1.Revolute.Rz.w" , "Flange_2_2.Revolute.Rz.q" ,
"Flange_2_2.Revolute.Rz.w" , "Flange_2_3.Revolute.Rz.q" ,
"Flange_2_3.Revolute.Rz.w" , "Subsystem.Subsystem.Cylindrical11.Rz.q" ,
"Subsystem.Subsystem.Cylindrical11.Rz.w" ,
"Subsystem.Subsystem.Nuts2.Planar15.Rz.q" ,
"Subsystem.Subsystem.Nuts2.Planar15.Rz.w" ,
"Subsystem.Subsystem.Nuts2.Planar29.Rz.q" ,
"Subsystem.Subsystem.Nuts2.Planar29.Rz.w" ,
"Subsystem.Subsystem.Nuts2.Planar18.Rz.q" ,
"Subsystem.Subsystem.Nuts2.Planar18.Rz.w" ,
"Subsystem.Subsystem.Nuts2.Planar30.Rz.q" ,
"Subsystem.Subsystem.Nuts2.Planar30.Rz.w" ,
"Subsystem.Subsystem.Nuts2.Planar16.Rz.q" ,
"Subsystem.Subsystem.Nuts2.Planar16.Rz.w" ,
"Subsystem.Subsystem.Nuts2.Planar17.Rz.q" ,
"Subsystem.Subsystem.Nuts2.Planar17.Rz.w" ,
"Subsystem.Subsystem.Nuts.Planar3.Rz.q" ,
"Subsystem.Subsystem.Nuts.Planar3.Rz.w" ,
"Subsystem.Subsystem.Nuts.Planar2.Rz.q" ,
"Subsystem.Subsystem.Nuts.Planar2.Rz.w" ,
"Subsystem.Subsystem.Nuts.Planar4.Rz.q" ,
"Subsystem.Subsystem.Nuts.Planar4.Rz.w" ,
"Subsystem.Subsystem.Nuts.Planar5.Rz.q" ,
"Subsystem.Subsystem.Nuts.Planar5.Rz.w" ,
"Subsystem.Subsystem.Nut3.Planar9.Rz.q" ,
"Subsystem.Subsystem.Nut3.Planar9.Rz.w" ,
"Subsystem.Subsystem.Nut3.Planar10.Rz.q" ,
"Subsystem.Subsystem.Nut3.Planar10.Rz.w" ,
"Subsystem.Subsystem.Nut3.Planar11.Rz.q" ,
"Subsystem.Subsystem.Nut3.Planar11.Rz.w" ,
"Subsystem.Subsystem.Nut3.Planar12.Rz.q" ,
"Subsystem.Subsystem.Nut3.Planar12.Rz.w" ,
"Subsystem.Subsystem.Nuts4.Planar25.Rz.q" ,
"Subsystem.Subsystem.Nuts4.Planar25.Rz.w" ,
"Subsystem.Subsystem.Nuts4.Planar26.Rz.q" ,
"Subsystem.Subsystem.Nuts4.Planar26.Rz.w" ,
"Subsystem.Subsystem.Nuts4.Planar27.Rz.q" ,
"Subsystem.Subsystem.Nuts4.Planar27.Rz.w" ,
"Subsystem.Subsystem.Nuts4.Planar28.Rz.q" ,
"Subsystem.Subsystem.Nuts4.Planar28.Rz.w" ,
"Subsystem.Subsystem.Nuts4.Planar6.Rz.q" ,
"Subsystem.Subsystem.Nuts4.Planar6.Rz.w" ,
"Subsystem.Subsystem.Nuts4.Planar7.Rz.q" ,
"Subsystem.Subsystem.Nuts4.Planar7.Rz.w" ,
"Subsystem.Subsystem.Nuts4.Planar8.Rz.q" ,
"Subsystem.Subsystem.Nuts4.Planar8.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Planar21.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Planar21.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Planar22.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Planar22.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Planar23.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Planar23.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Planar24.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Planar24.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Planar19.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Planar19.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Planar1.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Planar1.Rz.w" ,
"Subsystem.Subsystem.Nuts5.Planar.Rz.q" ,
"Subsystem.Subsystem.Nuts5.Planar.Rz.w" ,
"UAV.Motors_and_Props.Planar33.Rz.q" , "UAV.Motors_and_Props.Planar33.Rz.w" ,
"UAV.Motors_and_Props.Planar34.Rz.q" , "UAV.Motors_and_Props.Planar34.Rz.w" ,
"UAV.Motors_and_Props.Planar35.Rz.q" , "UAV.Motors_and_Props.Planar35.Rz.w" ,
"UAV.Motors_and_Props.Planar13.Rz.q" , "UAV.Motors_and_Props.Planar13.Rz.w" ,
"UAV.Motors_and_Props.Planar14.Rz.q" , "UAV.Motors_and_Props.Planar14.Rz.w" ,
"UAV.Motors_and_Props.Planar31.Rz.q" , "UAV.Motors_and_Props.Planar31.Rz.w" ,
"UAV.Motors_and_Props.Planar32.Rz.q" , "UAV.Motors_and_Props.Planar32.Rz.w" ,
"UAV.Motors_and_Props.Planar36.Rz.q" , "UAV.Motors_and_Props.Planar36.Rz.w" }
; const char * varObjects [ 337 ] = {
"Aerial_Inspection_Octa_Rotor/UAV/Body/6-DOF Joint" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/6-DOF Joint" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/6-DOF Joint" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/6-DOF Joint" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/6-DOF Joint" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/6-DOF Joint" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/6-DOF Joint" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/6-DOF Joint" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/6-DOF Joint" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/6-DOF Joint" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/6-DOF Joint" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/6-DOF Joint" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/6-DOF Joint" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Revolute63" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Revolute63" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Revolute19" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Revolute19" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Revolute21" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Revolute21" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical1" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical1" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical1" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical1" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Revolute11" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Revolute11" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical21" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical21" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical21" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical21" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Revolute9" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Revolute9" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical22" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical22" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical22" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical22" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Revolute10" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Revolute10" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical23" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical23" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical23" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical23" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Revolute12" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Revolute12" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical24" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical24" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical24" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical24" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical2" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical2" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical2" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical2" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Revolute" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Revolute" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Cylindrical" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar20" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar20" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar20" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar20" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar20" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar20" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Revolute27" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Revolute27" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Revolute1" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Revolute1" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical12" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical12" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical12" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical12" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical3" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical3" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical3" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical3" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical13" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical13" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical13" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical13" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical4" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical4" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical4" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical4" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical14" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical14" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical14" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical14" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical15" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical15" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical15" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical15" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical5" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical5" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical5" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Cylindrical5" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Revolute6" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Revolute6" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Revolute46" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Revolute46" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Cylindrical6" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Cylindrical6" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Cylindrical6" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Cylindrical6" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Revolute47" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Revolute47" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Cylindrical7" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Cylindrical7" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Cylindrical7" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Cylindrical7" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Revolute48" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Revolute48" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Cylindrical8" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Cylindrical8" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Cylindrical8" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Cylindrical8" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Revolute49" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Revolute49" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Cylindrical9" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Cylindrical9" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Cylindrical9" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Cylindrical9" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Revolute18" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Revolute18" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Revolute50" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Revolute50" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical10" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical10" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical10" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical10" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical19" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical19" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical19" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical19" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical16" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical16" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical16" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical16" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical20" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical20" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical20" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical20" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical17" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical17" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical17" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical17" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Revolute51" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Revolute51" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical18" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical18" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical18" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Cylindrical18" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Revolute22" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Revolute22" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Cylindrical26" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Cylindrical26" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Cylindrical26" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Cylindrical26" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Revolute23" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Revolute23" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Cylindrical27" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Cylindrical27" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Cylindrical27" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Cylindrical27" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Revolute24" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Revolute24" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Cylindrical28" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Cylindrical28" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Cylindrical28" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Cylindrical28" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Revolute25" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Revolute25" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Cylindrical29" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Cylindrical29" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Cylindrical29" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Cylindrical29" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute55" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute55" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute56" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute56" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute30" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute30" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute61" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute61" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute62" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute62" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute28" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute28" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute59" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute59" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute60" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute60" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute8" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute8" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute57" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute57" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute40" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute40" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Cylindrical30" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Cylindrical30" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Cylindrical30" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Cylindrical30" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute38" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute38" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Cylindrical25" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Cylindrical25" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Cylindrical25" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Cylindrical25" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute7" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute7" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute58" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute58" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute42" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute42" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Cylindrical31" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Cylindrical31" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Cylindrical31" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Cylindrical31" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute34" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute34" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute66" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute66" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute67" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute67" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute3" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute3" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute53" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute53" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute54" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute54" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute32" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute32" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute64" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute64" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute65" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute65" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute36" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute36" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute68" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Revolute68" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Prismatic1" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Prismatic1" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Prismatic" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Prismatic" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute2" ,
"Aerial_Inspection_Octa_Rotor/UAV/Body/Revolute2" ,
"Aerial_Inspection_Octa_Rotor/UAV/Landing Gear/Revolute16" ,
"Aerial_Inspection_Octa_Rotor/UAV/Landing Gear/Revolute16" ,
"Aerial_Inspection_Octa_Rotor/UAV/Landing Gear/Revolute17" ,
"Aerial_Inspection_Octa_Rotor/UAV/Landing Gear/Revolute17" ,
"Aerial_Inspection_Octa_Rotor/UAV/Landing Gear/Revolute4" ,
"Aerial_Inspection_Octa_Rotor/UAV/Landing Gear/Revolute4" ,
"Aerial_Inspection_Octa_Rotor/UAV/Landing Gear/Revolute5" ,
"Aerial_Inspection_Octa_Rotor/UAV/Landing Gear/Revolute5" ,
"Aerial_Inspection_Octa_Rotor/Flange 1-1/Revolute" ,
"Aerial_Inspection_Octa_Rotor/Flange 1-1/Revolute" ,
"Aerial_Inspection_Octa_Rotor/Flange 1-2/Revolute" ,
"Aerial_Inspection_Octa_Rotor/Flange 1-2/Revolute" ,
"Aerial_Inspection_Octa_Rotor/Flange 2-1/Revolute" ,
"Aerial_Inspection_Octa_Rotor/Flange 2-1/Revolute" ,
"Aerial_Inspection_Octa_Rotor/Flange 2-2/Revolute" ,
"Aerial_Inspection_Octa_Rotor/Flange 2-2/Revolute" ,
"Aerial_Inspection_Octa_Rotor/Flange 2-3/Revolute" ,
"Aerial_Inspection_Octa_Rotor/Flange 2-3/Revolute" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Cylindrical11" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Cylindrical11" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Planar15" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Planar15" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Planar29" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Planar29" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Planar18" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Planar18" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Planar30" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Planar30" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Planar16" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Planar16" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Planar17" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts2/Planar17" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Planar3" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Planar3" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Planar2" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Planar2" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Planar4" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Planar4" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Planar5" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts/Planar5" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Planar9" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Planar9" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Planar10" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Planar10" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Planar11" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Planar11" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Planar12" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nut3/Planar12" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Planar25" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Planar25" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Planar26" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Planar26" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Planar27" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Planar27" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Planar28" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Planar28" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Planar6" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Planar6" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Planar7" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Planar7" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Planar8" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts4/Planar8" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar21" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar21" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar22" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar22" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar23" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar23" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar24" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar24" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar19" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar19" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar1" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar1" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar" ,
"Aerial_Inspection_Octa_Rotor/Subsystem/Subsystem/Nuts5/Planar" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Planar33" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Planar33" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Planar34" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Planar34" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Planar35" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Planar35" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Planar13" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Planar13" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Planar14" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Planar14" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Planar31" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Planar31" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Planar32" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Planar32" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Planar36" ,
"Aerial_Inspection_Octa_Rotor/UAV/Motors and Props/Planar36" } ; smData ->
mNumVarScalars = 337 ; smData -> mVarFullPaths = NULL ; smData -> mVarObjects
= NULL ; if ( smData -> mNumVarScalars > 0 ) { size_t s ; PmAllocator * alloc
= pm_default_allocator ( ) ; PM_ALLOCATE_ARRAY ( smData -> mVarFullPaths ,
PmCharVector , 337 , alloc ) ; PM_ALLOCATE_ARRAY ( smData -> mVarObjects ,
PmCharVector , 337 , alloc ) ; for ( s = 0 ; s < smData -> mNumVarScalars ;
++ s ) { smData -> mVarFullPaths [ s ] = cStringToCharVector ( varFullPaths [
s ] ) ; smData -> mVarObjects [ s ] = cStringToCharVector ( varObjects [ s ]
) ; } } } static void initRuntimeParameters ( NeDaePrivateData * smData ) {
PmAllocator * alloc = pm_default_allocator ( ) ; int_T status = 0 ; size_t i
= 0 ; const int32_T * rtpRootVarRows = NULL ; const int32_T * rtpRootVarCols
= NULL ; const char * * rtpFullPaths = NULL ; smData -> mNumRtpRootVars = 0 ;
status = pm_create_int_vector_fields ( & smData -> mRtpRootVarRows , smData
-> mNumRtpRootVars , alloc ) ; checkMemAllocStatus ( status ) ; memcpy (
smData -> mRtpRootVarRows . mX , rtpRootVarRows , smData -> mNumRtpRootVars *
sizeof ( int32_T ) ) ; status = pm_create_int_vector_fields ( & smData ->
mRtpRootVarCols , smData -> mNumRtpRootVars , alloc ) ; checkMemAllocStatus (
status ) ; memcpy ( smData -> mRtpRootVarCols . mX , rtpRootVarCols , smData
-> mNumRtpRootVars * sizeof ( int32_T ) ) ; smData -> mRtpFullPaths = NULL ;
if ( smData -> mNumRtpRootVars > 0 ) { size_t v ; PM_ALLOCATE_ARRAY ( smData
-> mRtpFullPaths , PmCharVector , 0 , alloc ) ; for ( v = 0 ; v < smData ->
mNumRtpRootVars ; ++ v ) { smData -> mRtpFullPaths [ v ] =
cStringToCharVector ( rtpFullPaths [ v ] ) ; } } smData ->
mNumRuntimeRootVarScalars = 0 ; status = pm_create_real_vector_fields ( &
smData -> mRuntimeParameterScalars , 0 , alloc ) ; checkMemAllocStatus (
status ) ; for ( i = 0 ; i < smData -> mRuntimeParameterScalars . mN ; ++ i )
smData -> mRuntimeParameterScalars . mX [ i ] = 0.0 ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mAsmRuntimeDerivedValuesBundle , 0 , 0 ) ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mSimRuntimeDerivedValuesBundle , 0 , 0 ) ; } static void initIoInfoHelper (
size_t n , const char * portPathsSource [ ] , const char * unitsSource [ ] ,
const SizePair dimensions [ ] , boolean_T doInputs , NeDaePrivateData *
smData ) { PmCharVector * portPaths = NULL ; PmCharVector * units = NULL ;
NeDsIoInfo * infos = NULL ; if ( n > 0 ) { size_t s ; PmAllocator * alloc =
pm_default_allocator ( ) ; PM_ALLOCATE_ARRAY ( portPaths , PmCharVector , n ,
alloc ) ; PM_ALLOCATE_ARRAY ( units , PmCharVector , n , alloc ) ;
PM_ALLOCATE_ARRAY ( infos , NeDsIoInfo , n , alloc ) ; for ( s = 0 ; s < n ;
++ s ) { portPaths [ s ] = cStringToCharVector ( portPathsSource [ s ] ) ;
units [ s ] = cStringToCharVector ( unitsSource [ s ] ) ; { NeDsIoInfo * info
= infos + s ; info -> mName = info -> mIdentifier = portPaths [ s ] . mX ;
info -> mM = dimensions [ s ] . first ; info -> mN = dimensions [ s ] .
second ; info -> mUnit = units [ s ] . mX ; } } } if ( doInputs ) { smData ->
mNumInputs = n ; smData -> mInputPortPaths = portPaths ; smData ->
mInputUnits = units ; smData -> mInputInfos = infos ; } else { smData ->
mNumOutputs = n ; smData -> mOutputPortPaths = portPaths ; smData ->
mOutputUnits = units ; smData -> mOutputInfos = infos ; } } static void
initIoInfo ( NeDaePrivateData * smData ) { const char * inputPortPaths [ 32 ]
= { "Camera.Revolute13.qi" , "Camera.Revolute15.qi" ,
"Subsystem.Subsystem.Revolute14.qi" , "Subsystem.Subsystem.Revolute20.qi" ,
"Subsystem.Subsystem.Revolute26.qi" , "Subsystem.Subsystem.Revolute44.qi" ,
"Subsystem.Subsystem.Revolute45.qi" , "Subsystem.Subsystem.Revolute52.qi" ,
"UAV.Motors_and_Props.Revolute29.qi" , "UAV.Motors_and_Props.Revolute31.qi" ,
"UAV.Motors_and_Props.Revolute33.qi" , "UAV.Motors_and_Props.Revolute35.qi" ,
"UAV.Motors_and_Props.Revolute37.qi" , "UAV.Motors_and_Props.Revolute39.qi" ,
"UAV.Motors_and_Props.Revolute41.qi" , "UAV.Motors_and_Props.Revolute43.qi" ,
"UAV.Motors_and_Props.Tmotor_P60_Base_1_RIGID.External_Force_and_Torque.fz" ,
"UAV.Motors_and_Props.Tmotor_P60_Base_1_RIGID.External_Force_and_Torque.tz" ,
"UAV.Motors_and_Props.Tmotor_P60_Base_2_RIGID.External_Force_and_Torque.fz" ,
"UAV.Motors_and_Props.Tmotor_P60_Base_2_RIGID.External_Force_and_Torque.tz" ,
"UAV.Motors_and_Props.Tmotor_P60_Base_3_RIGID.External_Force_and_Torque.fz" ,
"UAV.Motors_and_Props.Tmotor_P60_Base_3_RIGID.External_Force_and_Torque.tz" ,
"UAV.Motors_and_Props.Tmotor_P60_Base_4_RIGID.External_Force_and_Torque.fz" ,
"UAV.Motors_and_Props.Tmotor_P60_Base_4_RIGID.External_Force_and_Torque.tz" ,
"UAV.Motors_and_Props.Tmotor_P60_Base_5_RIGID.External_Force_and_Torque.fz" ,
"UAV.Motors_and_Props.Tmotor_P60_Base_5_RIGID.External_Force_and_Torque.tz" ,
"UAV.Motors_and_Props.Tmotor_P60_Base_6_RIGID.External_Force_and_Torque.fz" ,
"UAV.Motors_and_Props.Tmotor_P60_Base_6_RIGID.External_Force_and_Torque.tz" ,
"UAV.Motors_and_Props.Tmotor_P60_Base_7_RIGID.External_Force_and_Torque.fz" ,
"UAV.Motors_and_Props.Tmotor_P60_Base_7_RIGID.External_Force_and_Torque.tz" ,
"UAV.Motors_and_Props.Tmotor_P60_Base_8_RIGID.External_Force_and_Torque.fz" ,
"UAV.Motors_and_Props.Tmotor_P60_Base_8_RIGID.External_Force_and_Torque.tz" }
; const char * inputUnits [ 32 ] = { "rad" , "rad" , "rad" , "rad" , "rad" ,
"rad" , "rad" , "rad" , "rad" , "rad" , "rad" , "rad" , "rad" , "rad" , "rad"
, "rad" , "m*kg/s^2" , "m^2*kg/s^2" , "m*kg/s^2" , "m^2*kg/s^2" , "m*kg/s^2"
, "m^2*kg/s^2" , "m*kg/s^2" , "m^2*kg/s^2" , "m*kg/s^2" , "m^2*kg/s^2" ,
"m*kg/s^2" , "m^2*kg/s^2" , "m*kg/s^2" , "m^2*kg/s^2" , "m*kg/s^2" ,
"m^2*kg/s^2" } ; const SizePair inputDimensions [ 32 ] = { { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } } ; const char *
outputPortPaths [ 17 ] = { "Flange_1_1.Revolute.q" , "Flange_1_2.Revolute.q"
, "Flange_2_1.Revolute.q" , "Flange_2_2.Revolute.q" , "Flange_2_3.Revolute.q"
, "UAV.Body.x6_DOF_Joint.px" , "UAV.Body.x6_DOF_Joint.vx" ,
"UAV.Body.x6_DOF_Joint.ax" , "UAV.Body.x6_DOF_Joint.py" ,
"UAV.Body.x6_DOF_Joint.vy" , "UAV.Body.x6_DOF_Joint.ay" ,
"UAV.Body.x6_DOF_Joint.pz" , "UAV.Body.x6_DOF_Joint.vz" ,
"UAV.Body.x6_DOF_Joint.az" , "UAV.Body.x6_DOF_Joint.Q" ,
"UAV.Body.x6_DOF_Joint.w" , "UAV.Body.x6_DOF_Joint.b" } ; const char *
outputUnits [ 17 ] = { "rad" , "rad" , "rad" , "rad" , "rad" , "m" , "m/s" ,
"m/s^2" , "m" , "m/s" , "m/s^2" , "m" , "m/s" , "m/s^2" , "1" , "rad/s" ,
"rad/s^2" } ; const SizePair outputDimensions [ 17 ] = { { 1 , 1 } , { 1 , 1
} , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 4 , 1
} , { 3 , 1 } , { 3 , 1 } } ; initIoInfoHelper ( 32 , inputPortPaths ,
inputUnits , inputDimensions , true , smData ) ; initIoInfoHelper ( 17 ,
outputPortPaths , outputUnits , outputDimensions , false , smData ) ; }
static void initInputDerivs ( NeDaePrivateData * smData ) { const int32_T
numInputDerivs [ 32 ] = { 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 ,
2 , 2 , 2 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
PmAllocator * alloc = pm_default_allocator ( ) ; const int_T status =
pm_create_int_vector_fields ( & smData -> mNumInputDerivs , smData ->
mInputVectorSize , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData
-> mNumInputDerivs . mX , numInputDerivs , 32 * sizeof ( int32_T ) ) ; smData
-> mInputOrder = 2 ; } static void initDirectFeedthrough ( NeDaePrivateData *
smData ) { const boolean_T directFeedthroughVector [ 32 ] = { true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false } ;
const boolean_T directFeedthroughMatrix [ 1536 ] = { true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , false , false , false ,
false , false , false , false , true , false , false , true , false , false ,
true , false , false , false , false , false , false , false , true , true ,
true , false , false , false , false , false , false , false , true , false ,
false , true , false , false , true , false , false , false , false , false ,
false , false , true , true , true , false , false , false , false , false ,
false , false , true , false , false , true , false , false , true , false ,
false , false , false , false , false , false , true , true , true , false ,
false , false , false , false , false , false , true , false , false , true ,
false , false , true , false , false , false , false , false , false , false
, true , true , true , false , false , false , false , false , false , false
, true , false , false , true , false , false , true , false , false , false
, false , false , false , false , true , true , true , false , false , false
, false , false , false , false , true , false , false , true , false , false
, true , false , false , false , false , false , false , false , true , true
, true , false , false , false , false , false , false , false , true , false
, false , true , false , false , true , false , false , false , false , false
, false , false , true , true , true , false , false , false , false , false
, false , false , true , false , false , true , false , false , true , false
, false , false , false , false , false , false , true , true , true , false
, false , false , false , false , false , false , true , false , false , true
, false , false , true , false , false , false , false , false , false ,
false , true , true , true , false , false , false , false , false , false ,
false , true , false , false , true , false , false , true , false , false ,
false , false , false , false , false , true , true , true , false , false ,
false , false , false , false , false , true , false , false , true , false ,
false , true , false , false , false , false , false , false , false , true ,
true , true , false , false , false , false , false , false , false , true ,
false , false , true , false , false , true , false , false , false , false ,
false , false , false , true , true , true , false , false , false , false ,
false , false , false , true , false , false , true , false , false , true ,
false , false , false , false , false , false , false , true , true , true ,
false , false , false , false , false , false , false , true , false , false
, true , false , false , true , false , false , false , false , false , false
, false , true , true , true , false , false , false , false , false , false
, false , true , false , false , true , false , false , true , false , false
, false , false , false , false , false , true , true , true , false , false
, false , false , false , false , false , true , false , false , true , false
, false , true , false , false , false , false , false , false , false , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , true , false
, false , true , false , false , true , false , false , false , false , false
, false , false , true , true , true , false , false , false , false , false
, false , false , true , false , false , true , false , false , true , false
, false , false , false , false , false , false , true , true , true , false
, false , false , false , false , false , false , true , false , false , true
, false , false , true , false , false , false , false , false , false ,
false , true , true , true , false , false , false , false , false , false ,
false , true , false , false , true , false , false , true , false , false ,
false , false , false , false , false , true , true , true , false , false ,
false , false , false , false , false , true , false , false , true , false ,
false , true , false , false , false , false , false , false , false , true ,
true , true , false , false , false , false , false , false , false , true ,
false , false , true , false , false , true , false , false , false , false ,
false , false , false , true , true , true , false , false , false , false ,
false , false , false , true , false , false , true , false , false , true ,
false , false , false , false , false , false , false , true , true , true ,
false , false , false , false , false , false , false , true , false , false
, true , false , false , true , false , false , false , false , false , false
, false , true , true , true , false , false , false , false , false , false
, false , true , false , false , true , false , false , true , false , false
, false , false , false , false , false , true , true , true , false , false
, false , false , false , false , false , true , false , false , true , false
, false , true , false , false , false , false , false , false , false , true
, true , true , false , false , false , false , false , false , false , true
, false , false , true , false , false , true , false , false , false , false
, false , false , false , true , true , true , false , false , false , false
, false , false , false , true , false , false , true , false , false , true
, false , false , false , false , false , false , false , true , true , true
, false , false , false , false , false , false , false , true , false ,
false , true , false , false , true , false , false , false , false , false ,
false , false , true , true , true , false , false , false , false , false ,
false , false , true , false , false , true , false , false , true , false ,
false , false , false , false , false , false , true , true , true , false ,
false , false , false , false , false , false , true , false , false , true ,
false , false , true , false , false , false , false , false , false , false
, true , true , true , false , false , false , false , false , false , false
, true , false , false , true , false , false , true , false , false , false
, false , false , false , false , true , true , true } ; PmAllocator * alloc
= pm_default_allocator ( ) ; { const int_T status =
pm_create_bool_vector_fields ( & smData -> mDirectFeedthroughVector , 32 ,
alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData ->
mDirectFeedthroughVector . mX , directFeedthroughVector , 32 * sizeof (
boolean_T ) ) ; } { const int_T status = pm_create_bool_vector_fields ( &
smData -> mDirectFeedthroughMatrix , 1536 , alloc ) ; checkMemAllocStatus (
status ) ; memcpy ( smData -> mDirectFeedthroughMatrix . mX ,
directFeedthroughMatrix , 1536 * sizeof ( boolean_T ) ) ; } } static void
initOutputDerivProc ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; const int32_T outputFunctionMap [ 24 ] = { 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1
, 1 , 1 } ; smData -> mOutputFunctionMap = pm_create_int_vector ( 24 , alloc
) ; memcpy ( smData -> mOutputFunctionMap -> mX , outputFunctionMap , 24 *
sizeof ( int32_T ) ) ; smData -> mNumOutputClasses = 2 ; smData ->
mHasKinematicOutputs = true ; smData -> mHasDynamicOutputs = true ; smData ->
mIsOutputClass0Dynamic = false ; smData -> mDoComputeDynamicOutputs = false ;
smData -> mCachedDerivativesAvailable = false ; { size_t i = 0 ; const int_T
status = pm_create_real_vector_fields ( & smData -> mCachedDerivatives , 337
, pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ;
i < smData -> mCachedDerivatives . mN ; ++ i ) smData -> mCachedDerivatives .
mX [ i ] = 0.0 ; } }
#if 0
static void initializeSizePairVector ( const SmSizePair * data ,
SmSizePairVector * vector ) { const size_t n = sm_core_SmSizePairVector_size
( vector ) ; size_t i ; for ( i = 0 ; i < n ; ++ i , ++ data )
sm_core_SmSizePairVector_setValue ( vector , i , data ++ ) ; }
#endif
static void initAssemblyDelegate ( SmMechanismDelegate * delegate ) {
SmMechanismDelegateScratchpad * scratchpad = NULL ; const SmSizePair
jointToStageIdx [ 109 ] = { { 33 , 2 } , { 34 , 3 } , { 43 , 104 } , { 70 ,
105 } , { 97 , 106 } , { 124 , 107 } , { 151 , 108 } , { 444 , 34 } , { 445 ,
36 } , { 446 , 38 } , { 447 , 40 } , { 452 , 41 } , { 453 , 33 } , { 454 , 35
} , { 455 , 37 } , { 456 , 39 } , { 577 , 52 } , { 578 , 54 } , { 579 , 56 }
, { 580 , 58 } , { 665 , 51 } , { 666 , 53 } , { 667 , 55 } , { 668 , 57 } ,
{ 708 , 43 } , { 709 , 45 } , { 710 , 47 } , { 711 , 49 } , { 712 , 44 } , {
713 , 46 } , { 720 , 42 } , { 721 , 48 } , { 851 , 25 } , { 852 , 27 } , {
853 , 29 } , { 854 , 30 } , { 855 , 26 } , { 856 , 28 } , { 857 , 31 } , {
865 , 32 } , { 1012 , 21 } , { 1013 , 10 } , { 1014 , 19 } , { 1015 , 12 } ,
{ 1016 , 14 } , { 1017 , 16 } , { 1018 , 18 } , { 1022 , 22 } , { 1027 , 20 }
, { 1028 , 24 } , { 1029 , 15 } , { 1030 , 11 } , { 1031 , 17 } , { 1032 , 23
} , { 1033 , 13 } , { 1192 , 59 } , { 1193 , 4 } , { 1194 , 50 } , { 1195 , 5
} , { 1196 , 6 } , { 1197 , 9 } , { 1198 , 8 } , { 1199 , 7 } , { 1200 , 1 }
, { 1781 , 98 } , { 1783 , 99 } , { 1784 , 66 } , { 1785 , 87 } , { 1786 , 62
} , { 1787 , 90 } , { 1788 , 83 } , { 1789 , 94 } , { 1790 , 75 } , { 1791 ,
72 } , { 1792 , 80 } , { 1793 , 88 } , { 1794 , 89 } , { 1795 , 60 } , { 1796
, 61 } , { 1797 , 71 } , { 1798 , 79 } , { 1799 , 78 } , { 1800 , 70 } , {
1829 , 0 } , { 1909 , 100 } , { 1910 , 101 } , { 1911 , 102 } , { 1912 , 103
} , { 1991 , 77 } , { 1992 , 74 } , { 1993 , 82 } , { 2002 , 97 } , { 2163 ,
67 } , { 2164 , 63 } , { 2165 , 91 } , { 2166 , 84 } , { 2167 , 95 } , { 2168
, 76 } , { 2169 , 73 } , { 2170 , 81 } , { 2171 , 68 } , { 2172 , 69 } , {
2173 , 64 } , { 2174 , 65 } , { 2175 , 92 } , { 2176 , 93 } , { 2177 , 85 } ,
{ 2178 , 86 } , { 2179 , 96 } } ; const size_t primitiveIndices [ 109 + 1 ] =
{ 0 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 15 , 16 , 18 , 19 , 21 , 22
, 24 , 25 , 27 , 29 , 30 , 32 , 35 , 36 , 37 , 39 , 41 , 43 , 45 , 47 , 49 ,
51 , 52 , 53 , 55 , 56 , 58 , 59 , 61 , 62 , 64 , 65 , 66 , 68 , 70 , 72 , 74
, 76 , 77 , 79 , 80 , 81 , 83 , 84 , 86 , 87 , 89 , 90 , 92 , 93 , 94 , 95 ,
96 , 97 , 98 , 99 , 100 , 101 , 102 , 103 , 104 , 105 , 106 , 107 , 109 , 110
, 111 , 113 , 114 , 115 , 116 , 117 , 119 , 120 , 121 , 122 , 123 , 124 , 125
, 126 , 127 , 128 , 129 , 130 , 131 , 132 , 133 , 134 , 135 , 136 , 137 , 138
, 139 , 140 , 141 , 142 , 143 , 144 , 145 } ; const SmSizePair stateOffsets [
145 ] = { { 0 , 7 } , { 1 , 8 } , { 2 , 9 } , { 3 , 10 } , { 13 , 14 } , { 15
, 16 } , { 17 , 18 } , { 19 , 20 } , { 21 , 22 } , { 23 , 24 } , { 25 , 26 }
, { 27 , 28 } , { 29 , 30 } , { 31 , 33 } , { 32 , 34 } , { 35 , 36 } , { 37
, 39 } , { 38 , 40 } , { 41 , 42 } , { 43 , 45 } , { 44 , 46 } , { 47 , 48 }
, { 49 , 51 } , { 50 , 52 } , { 53 , 54 } , { 55 , 57 } , { 56 , 58 } , { 59
, 61 } , { 60 , 62 } , { 63 , 64 } , { 65 , 67 } , { 66 , 68 } , { 69 , 72 }
, { 70 , 73 } , { 71 , 74 } , { 75 , 76 } , { 77 , 78 } , { 79 , 81 } , { 80
, 82 } , { 83 , 85 } , { 84 , 86 } , { 87 , 89 } , { 88 , 90 } , { 91 , 93 }
, { 92 , 94 } , { 95 , 97 } , { 96 , 98 } , { 99 , 101 } , { 100 , 102 } , {
103 , 105 } , { 104 , 106 } , { 107 , 108 } , { 109 , 110 } , { 111 , 113 } ,
{ 112 , 114 } , { 115 , 116 } , { 117 , 119 } , { 118 , 120 } , { 121 , 122 }
, { 123 , 125 } , { 124 , 126 } , { 127 , 128 } , { 129 , 131 } , { 130 , 132
} , { 133 , 134 } , { 135 , 136 } , { 137 , 139 } , { 138 , 140 } , { 141 ,
143 } , { 142 , 144 } , { 145 , 147 } , { 146 , 148 } , { 149 , 151 } , { 150
, 152 } , { 153 , 155 } , { 154 , 156 } , { 157 , 158 } , { 159 , 161 } , {
160 , 162 } , { 163 , 164 } , { 165 , 166 } , { 167 , 169 } , { 168 , 170 } ,
{ 171 , 172 } , { 173 , 175 } , { 174 , 176 } , { 177 , 178 } , { 179 , 181 }
, { 180 , 182 } , { 183 , 184 } , { 185 , 187 } , { 186 , 188 } , { 189 , 190
} , { 191 , 192 } , { 193 , 194 } , { 195 , 196 } , { 197 , 198 } , { 199 ,
200 } , { 201 , 202 } , { 203 , 204 } , { 205 , 206 } , { 207 , 208 } , { 209
, 210 } , { 211 , 212 } , { 213 , 214 } , { 215 , 216 } , { 217 , 218 } , {
219 , 221 } , { 220 , 222 } , { 223 , 224 } , { 225 , 226 } , { 227 , 229 } ,
{ 228 , 230 } , { 231 , 232 } , { 233 , 234 } , { 235 , 236 } , { 237 , 238 }
, { 239 , 241 } , { 240 , 242 } , { 243 , 244 } , { 245 , 246 } , { 247 , 248
} , { 249 , 250 } , { 251 , 252 } , { 253 , 254 } , { 255 , 256 } , { 257 ,
258 } , { 259 , 260 } , { 261 , 262 } , { 263 , 264 } , { 265 , 266 } , { 267
, 268 } , { 269 , 270 } , { 271 , 272 } , { 273 , 274 } , { 275 , 276 } , {
277 , 278 } , { 279 , 280 } , { 281 , 282 } , { 283 , 284 } , { 285 , 286 } ,
{ 287 , 288 } , { 289 , 290 } , { 291 , 292 } , { 293 , 294 } } ; const
SmSizePair dofOffsets [ 145 ] = { { 0 , 1 } , { 1 , 2 } , { 2 , 3 } , { 3 , 6
} , { 6 , 7 } , { 7 , 8 } , { 8 , 9 } , { 9 , 10 } , { 10 , 11 } , { 11 , 12
} , { 12 , 13 } , { 13 , 14 } , { 14 , 15 } , { 15 , 16 } , { 16 , 17 } , {
17 , 18 } , { 18 , 19 } , { 19 , 20 } , { 20 , 21 } , { 21 , 22 } , { 22 , 23
} , { 23 , 24 } , { 24 , 25 } , { 25 , 26 } , { 26 , 27 } , { 27 , 28 } , {
28 , 29 } , { 29 , 30 } , { 30 , 31 } , { 31 , 32 } , { 32 , 33 } , { 33 , 34
} , { 34 , 35 } , { 35 , 36 } , { 36 , 37 } , { 37 , 38 } , { 38 , 39 } , {
39 , 40 } , { 40 , 41 } , { 41 , 42 } , { 42 , 43 } , { 43 , 44 } , { 44 , 45
} , { 45 , 46 } , { 46 , 47 } , { 47 , 48 } , { 48 , 49 } , { 49 , 50 } , {
50 , 51 } , { 51 , 52 } , { 52 , 53 } , { 53 , 54 } , { 54 , 55 } , { 55 , 56
} , { 56 , 57 } , { 57 , 58 } , { 58 , 59 } , { 59 , 60 } , { 60 , 61 } , {
61 , 62 } , { 62 , 63 } , { 63 , 64 } , { 64 , 65 } , { 65 , 66 } , { 66 , 67
} , { 67 , 68 } , { 68 , 69 } , { 69 , 70 } , { 70 , 71 } , { 71 , 72 } , {
72 , 73 } , { 73 , 74 } , { 74 , 75 } , { 75 , 76 } , { 76 , 77 } , { 77 , 78
} , { 78 , 79 } , { 79 , 80 } , { 80 , 81 } , { 81 , 82 } , { 82 , 83 } , {
83 , 84 } , { 84 , 85 } , { 85 , 86 } , { 86 , 87 } , { 87 , 88 } , { 88 , 89
} , { 89 , 90 } , { 90 , 91 } , { 91 , 92 } , { 92 , 93 } , { 93 , 94 } , {
94 , 95 } , { 95 , 96 } , { 96 , 97 } , { 97 , 98 } , { 98 , 99 } , { 99 ,
100 } , { 100 , 101 } , { 101 , 102 } , { 102 , 103 } , { 103 , 104 } , { 104
, 105 } , { 105 , 106 } , { 106 , 107 } , { 107 , 108 } , { 108 , 109 } , {
109 , 110 } , { 110 , 111 } , { 111 , 112 } , { 112 , 113 } , { 113 , 114 } ,
{ 114 , 115 } , { 115 , 116 } , { 116 , 117 } , { 117 , 118 } , { 118 , 119 }
, { 119 , 120 } , { 120 , 121 } , { 121 , 122 } , { 122 , 123 } , { 123 , 124
} , { 124 , 125 } , { 125 , 126 } , { 126 , 127 } , { 127 , 128 } , { 128 ,
129 } , { 129 , 130 } , { 130 , 131 } , { 131 , 132 } , { 132 , 133 } , { 133
, 134 } , { 134 , 135 } , { 135 , 136 } , { 136 , 137 } , { 137 , 138 } , {
138 , 139 } , { 139 , 140 } , { 140 , 141 } , { 141 , 142 } , { 142 , 143 } ,
{ 143 , 144 } , { 144 , 145 } , { 145 , 146 } , { 146 , 147 } } ; const
size_t * flexibleStages = NULL ; const size_t remodIndices [ 106 ] = { 13 ,
15 , 17 , 19 , 21 , 23 , 25 , 27 , 29 , 31 , 35 , 37 , 41 , 43 , 47 , 49 , 53
, 55 , 59 , 63 , 65 , 71 , 75 , 77 , 79 , 83 , 87 , 91 , 95 , 99 , 103 , 107
, 109 , 111 , 115 , 117 , 121 , 123 , 127 , 129 , 133 , 135 , 137 , 141 , 145
, 149 , 153 , 157 , 159 , 163 , 165 , 167 , 171 , 173 , 177 , 179 , 183 , 185
, 189 , 191 , 193 , 195 , 197 , 199 , 201 , 203 , 205 , 207 , 209 , 211 , 213
, 215 , 217 , 219 , 223 , 225 , 227 , 231 , 233 , 235 , 237 , 239 , 243 , 245
, 247 , 249 , 251 , 253 , 255 , 257 , 259 , 261 , 263 , 265 , 267 , 269 , 275
, 277 , 279 , 281 , 283 , 285 , 287 , 289 , 291 , 293 } ; const size_t
equationsPerConstraint [ 44 ] = { 4 , 4 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 ,
3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3
, 3 , 3 , 3 , 3 , 3 , 3 , 3 , 2 , 2 , 2 , 2 , 2 , 2 } ; const size_t
dofToVelSlot [ 147 ] = { 7 , 8 , 9 , 10 , 11 , 12 , 14 , 16 , 18 , 20 , 22 ,
24 , 26 , 28 , 30 , 33 , 34 , 36 , 39 , 40 , 42 , 45 , 46 , 48 , 51 , 52 , 54
, 57 , 58 , 61 , 62 , 64 , 67 , 68 , 72 , 73 , 74 , 76 , 78 , 81 , 82 , 85 ,
86 , 89 , 90 , 93 , 94 , 97 , 98 , 101 , 102 , 105 , 106 , 108 , 110 , 113 ,
114 , 116 , 119 , 120 , 122 , 125 , 126 , 128 , 131 , 132 , 134 , 136 , 139 ,
140 , 143 , 144 , 147 , 148 , 151 , 152 , 155 , 156 , 158 , 161 , 162 , 164 ,
166 , 169 , 170 , 172 , 175 , 176 , 178 , 181 , 182 , 184 , 187 , 188 , 190 ,
192 , 194 , 196 , 198 , 200 , 202 , 204 , 206 , 208 , 210 , 212 , 214 , 216 ,
218 , 221 , 222 , 224 , 226 , 229 , 230 , 232 , 234 , 236 , 238 , 241 , 242 ,
244 , 246 , 248 , 250 , 252 , 254 , 256 , 258 , 260 , 262 , 264 , 266 , 268 ,
270 , 272 , 274 , 276 , 278 , 280 , 282 , 284 , 286 , 288 , 290 , 292 , 294 }
; const size_t constraintDofs [ 125 ] = { 9 , 81 , 136 , 67 , 68 , 69 , 70 ,
71 , 70 , 71 , 72 , 73 , 74 , 75 , 74 , 75 , 76 , 77 , 78 , 79 , 80 , 10 , 11
, 82 , 83 , 84 , 10 , 11 , 85 , 86 , 87 , 10 , 11 , 88 , 89 , 90 , 10 , 11 ,
91 , 92 , 93 , 54 , 55 , 56 , 57 , 58 , 59 , 60 , 61 , 62 , 63 , 64 , 65 , 39
, 40 , 43 , 44 , 47 , 48 , 49 , 50 , 39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 ,
49 , 50 , 51 , 52 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 28
, 29 , 30 , 31 , 15 , 16 , 34 , 35 , 36 , 32 , 33 , 37 , 113 , 114 , 109 ,
110 , 119 , 120 , 130 , 131 , 123 , 124 , 103 , 104 , 99 , 100 , 134 , 135 ,
10 , 11 , 6 , 94 , 125 , 126 , 127 , 95 , 96 , 105 , 106 , 115 , 116 } ;
const size_t constraintDofOffsets [ 44 + 1 ] = { 0 , 2 , 3 , 6 , 8 , 12 , 14
, 18 , 21 , 26 , 31 , 36 , 41 , 44 , 47 , 50 , 53 , 55 , 57 , 59 , 61 , 65 ,
69 , 73 , 76 , 79 , 82 , 85 , 88 , 93 , 96 , 98 , 100 , 102 , 104 , 106 , 108
, 110 , 112 , 114 , 116 , 119 , 121 , 123 , 125 } ; const size_t Jm = 128 ;
const size_t Jn = 147 ; SmSizePair zeroSizePair ; zeroSizePair . mFirst =
zeroSizePair . mSecond = 0 ; sm_core_MechanismDelegate_allocScratchpad (
delegate ) ; scratchpad = delegate -> mScratchpad ; delegate ->
mTargetStrengthFree = 0 ; delegate -> mTargetStrengthSuggested = 1 ; delegate
-> mTargetStrengthDesired = 2 ; delegate -> mTargetStrengthRequired = 3 ;
delegate -> mConsistencyTol = + 1.000000000000000062e-09 ; delegate ->
mTreeJointDof = 147 ; delegate -> mDof = 147 ; delegate -> mStateSize = 369 ;
delegate -> mContinuousStateSize = 369 ; delegate -> mModeVectorSize = 0 ;
delegate -> mNumStages = 109 ; delegate -> mNumConstraints = 44 ; delegate ->
mNumAllConstraintEquations = 128 ; sm_core_SmSizePairVector_create ( &
delegate -> mJointToStageIdx , 109 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mJointToStageIdx ) ,
jointToStageIdx , 109 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mPrimitiveIndices , delegate ->
mNumStages + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( &
delegate -> mPrimitiveIndices ) , primitiveIndices , ( delegate -> mNumStages
+ 1 ) * sizeof ( size_t ) ) ; sm_core_SmSizePairVector_create ( & delegate ->
mStateOffsets , 145 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mStateOffsets ) ,
stateOffsets , 145 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mDofOffsets , 145 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mDofOffsets ) , dofOffsets , 145 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mFlexibleStages , 0 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages
) , flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create (
& delegate -> mRemodIndices , 106 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 106 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mRunTimeEnabledEquations , delegate -> mNumAllConstraintEquations
, 1 ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot , delegate
-> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs , 125 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mConstraintDofs
) , constraintDofs , 125 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create
( & delegate -> mConstraintDofOffsets , delegate -> mNumConstraints + 1 , 0 )
; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofOffsets ) , constraintDofOffsets , ( delegate ->
mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosRequired , 147 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 147 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosSuggested , 147 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosFree , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosNonRequired , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelFree , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelNonRequired , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggAndFree , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mConstraintFilter , 44 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mActiveConstraints , 44 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mActiveDofs , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mActiveDofs0 , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mNewConstraints , 44 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mNewDofs , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mUnsatisfiedConstraints , 44 ) ; sm_core_SmSizeTVector_create ( & scratchpad
-> mActiveConstraintsVect , 44 , 0 ) ; sm_core_SmSizeTVector_create ( &
scratchpad -> mActiveDofsVect , 147 , 0 ) ; sm_core_SmSizeTVector_create ( &
scratchpad -> mFullDofToActiveDof , 147 , 0 ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyPosTargetedPrims
, 145 , & zeroSizePair ) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyVelTargetedPrims , 145 , & zeroSizePair ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mPosPartialTypes , 145 , 0 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mVelPartialTypes , 145 , 0 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mPartiallyActivePrims , 145 ,
0 ) ; sm_core_SmSizePairVector_create ( & scratchpad -> mBaseFrameVelOffsets
, 1 , & zeroSizePair ) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mCvQuaternionVelOffsets , 0 , & zeroSizePair ) ; sm_core_SmRealVector_create
( & scratchpad -> mCvQuaternionAzimuthValues , 0 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mInitialState , 369 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mStartState , 369 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mTestState , 369 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mFullStateVector , 369 , 0.0 )
; sm_core_SmIntVector_create ( & scratchpad -> mModeVector , 0 , 0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mJacobianRowMaj , Jm * Jn , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mJacobian , Jm * Jn , 0.0 )
; sm_core_SmRealVector_create ( & scratchpad -> mJacobianPrimSubmatrix , Jm *
6 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mConstraintNonhomoTerms , Jm , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mConstraintError , Jm , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mBestConstraintError , Jm , 0.0 ) ; sm_core_SmRealVector_create
( & scratchpad -> mDeltas , Jn * ( Jm <= Jn ? Jm : Jn ) , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mSvdWork , 76432 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchScaledDeltaVect ,
147 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchTestStateVect , 369 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchErrorVect , Jm , 0.0 ) ; sm_core_SmRealVector_create
( & scratchpad -> mActiveDofVelsVect , 147 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 1788 , 0.0 ) ;
delegate -> mSetTargets = Aerial_Inspection_Octa_Rotor_5bdcd402_1_setTargets
; delegate -> mResetStateVector =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_resetAsmStateVector ; delegate ->
mInitializeTrackedAngleState =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_initializeTrackedAngleState ;
delegate -> mComputeDiscreteState =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeDiscreteState ; delegate ->
mAdjustPosition = Aerial_Inspection_Octa_Rotor_5bdcd402_1_adjustPosition ;
delegate -> mPerturbJointPrimitiveState =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_perturbAsmJointPrimitiveState ;
delegate -> mPerturbFlexibleBodyState = NULL ; delegate ->
mComputePosDofBlendMatrix =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computePosDofBlendMatrix ; delegate
-> mComputeVelDofBlendMatrix =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeVelDofBlendMatrix ; delegate
-> mProjectPartiallyTargetedPos =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_projectPartiallyTargetedPos ;
delegate -> mPropagateMotion =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_propagateMotion ; delegate ->
mComputeAssemblyError =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeAssemblyError ; delegate ->
mComputeAssemblyJacobian =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeAssemblyJacobian ; delegate ->
mComputeFullAssemblyJacobian =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeFullAssemblyJacobian ;
delegate -> mIsInKinematicSingularity =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_isInKinematicSingularity ; delegate
-> mConvertStateVector =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_convertStateVector ; delegate ->
mConstructStateVector = NULL ; delegate -> mExtractSolverStateVector = NULL ;
delegate -> mIsPositionViolation = NULL ; delegate -> mIsVelocityViolation =
NULL ; delegate -> mProjectStateSim = NULL ; delegate ->
mComputeConstraintError = NULL ; delegate -> mResetModeVector = NULL ;
delegate -> mHasJointDisToNormModeChange = NULL ; delegate ->
mPerformJointDisToNormModeChange = NULL ; delegate -> mOnModeChangedCutJoints
= NULL ; delegate -> mMech = NULL ; } static void initSimulationDelegate (
SmMechanismDelegate * delegate ) { SmMechanismDelegateScratchpad * scratchpad
= NULL ; const SmSizePair jointToStageIdx [ 109 ] = { { 33 , 2 } , { 34 , 3 }
, { 43 , 104 } , { 70 , 105 } , { 97 , 106 } , { 124 , 107 } , { 151 , 108 }
, { 444 , 34 } , { 445 , 36 } , { 446 , 38 } , { 447 , 40 } , { 452 , 41 } ,
{ 453 , 33 } , { 454 , 35 } , { 455 , 37 } , { 456 , 39 } , { 577 , 52 } , {
578 , 54 } , { 579 , 56 } , { 580 , 58 } , { 665 , 51 } , { 666 , 53 } , {
667 , 55 } , { 668 , 57 } , { 708 , 43 } , { 709 , 45 } , { 710 , 47 } , {
711 , 49 } , { 712 , 44 } , { 713 , 46 } , { 720 , 42 } , { 721 , 48 } , {
851 , 25 } , { 852 , 27 } , { 853 , 29 } , { 854 , 30 } , { 855 , 26 } , {
856 , 28 } , { 857 , 31 } , { 865 , 32 } , { 1012 , 21 } , { 1013 , 10 } , {
1014 , 19 } , { 1015 , 12 } , { 1016 , 14 } , { 1017 , 16 } , { 1018 , 18 } ,
{ 1022 , 22 } , { 1027 , 20 } , { 1028 , 24 } , { 1029 , 15 } , { 1030 , 11 }
, { 1031 , 17 } , { 1032 , 23 } , { 1033 , 13 } , { 1192 , 59 } , { 1193 , 4
} , { 1194 , 50 } , { 1195 , 5 } , { 1196 , 6 } , { 1197 , 9 } , { 1198 , 8 }
, { 1199 , 7 } , { 1200 , 1 } , { 1781 , 98 } , { 1783 , 99 } , { 1784 , 66 }
, { 1785 , 87 } , { 1786 , 62 } , { 1787 , 90 } , { 1788 , 83 } , { 1789 , 94
} , { 1790 , 75 } , { 1791 , 72 } , { 1792 , 80 } , { 1793 , 88 } , { 1794 ,
89 } , { 1795 , 60 } , { 1796 , 61 } , { 1797 , 71 } , { 1798 , 79 } , { 1799
, 78 } , { 1800 , 70 } , { 1829 , 0 } , { 1909 , 100 } , { 1910 , 101 } , {
1911 , 102 } , { 1912 , 103 } , { 1991 , 77 } , { 1992 , 74 } , { 1993 , 82 }
, { 2002 , 97 } , { 2163 , 67 } , { 2164 , 63 } , { 2165 , 91 } , { 2166 , 84
} , { 2167 , 95 } , { 2168 , 76 } , { 2169 , 73 } , { 2170 , 81 } , { 2171 ,
68 } , { 2172 , 69 } , { 2173 , 64 } , { 2174 , 65 } , { 2175 , 92 } , { 2176
, 93 } , { 2177 , 85 } , { 2178 , 86 } , { 2179 , 96 } } ; const size_t
primitiveIndices [ 109 + 1 ] = { 0 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 ,
13 , 15 , 16 , 18 , 19 , 21 , 22 , 24 , 25 , 27 , 29 , 30 , 32 , 35 , 36 , 37
, 39 , 41 , 43 , 45 , 47 , 49 , 51 , 52 , 53 , 55 , 56 , 58 , 59 , 61 , 62 ,
64 , 65 , 66 , 68 , 70 , 72 , 74 , 76 , 77 , 79 , 80 , 81 , 83 , 84 , 86 , 87
, 89 , 90 , 92 , 93 , 94 , 95 , 96 , 97 , 98 , 99 , 100 , 101 , 102 , 103 ,
104 , 105 , 106 , 107 , 109 , 110 , 111 , 113 , 114 , 115 , 116 , 117 , 119 ,
120 , 121 , 122 , 123 , 124 , 125 , 126 , 127 , 128 , 129 , 130 , 131 , 132 ,
133 , 134 , 135 , 136 , 137 , 138 , 139 , 140 , 141 , 142 , 143 , 144 , 145 }
; const SmSizePair stateOffsets [ 145 ] = { { 0 , 7 } , { 1 , 8 } , { 2 , 9 }
, { 3 , 10 } , { 13 , 14 } , { 15 , 16 } , { 17 , 18 } , { 19 , 20 } , { 21 ,
22 } , { 23 , 24 } , { 25 , 26 } , { 27 , 28 } , { 29 , 30 } , { 31 , 33 } ,
{ 32 , 34 } , { 35 , 36 } , { 37 , 39 } , { 38 , 40 } , { 41 , 42 } , { 43 ,
45 } , { 44 , 46 } , { 47 , 48 } , { 49 , 51 } , { 50 , 52 } , { 53 , 54 } ,
{ 55 , 57 } , { 56 , 58 } , { 59 , 61 } , { 60 , 62 } , { 63 , 64 } , { 65 ,
67 } , { 66 , 68 } , { 69 , 72 } , { 70 , 73 } , { 71 , 74 } , { 75 , 76 } ,
{ 77 , 78 } , { 79 , 81 } , { 80 , 82 } , { 83 , 85 } , { 84 , 86 } , { 87 ,
89 } , { 88 , 90 } , { 91 , 93 } , { 92 , 94 } , { 95 , 97 } , { 96 , 98 } ,
{ 99 , 101 } , { 100 , 102 } , { 103 , 105 } , { 104 , 106 } , { 107 , 108 }
, { 109 , 110 } , { 111 , 113 } , { 112 , 114 } , { 115 , 116 } , { 117 , 119
} , { 118 , 120 } , { 121 , 122 } , { 123 , 125 } , { 124 , 126 } , { 127 ,
128 } , { 129 , 131 } , { 130 , 132 } , { 133 , 134 } , { 135 , 136 } , { 137
, 139 } , { 138 , 140 } , { 141 , 143 } , { 142 , 144 } , { 145 , 147 } , {
146 , 148 } , { 149 , 151 } , { 150 , 152 } , { 153 , 155 } , { 154 , 156 } ,
{ 157 , 158 } , { 159 , 161 } , { 160 , 162 } , { 163 , 164 } , { 165 , 166 }
, { 167 , 169 } , { 168 , 170 } , { 171 , 172 } , { 173 , 175 } , { 174 , 176
} , { 177 , 178 } , { 179 , 181 } , { 180 , 182 } , { 183 , 184 } , { 185 ,
187 } , { 186 , 188 } , { 189 , 190 } , { 191 , 192 } , { 193 , 194 } , { 195
, 196 } , { 197 , 198 } , { 199 , 200 } , { 201 , 202 } , { 203 , 204 } , {
205 , 206 } , { 207 , 208 } , { 209 , 210 } , { 211 , 212 } , { 213 , 214 } ,
{ 215 , 216 } , { 217 , 218 } , { 219 , 221 } , { 220 , 222 } , { 223 , 224 }
, { 225 , 226 } , { 227 , 229 } , { 228 , 230 } , { 231 , 232 } , { 233 , 234
} , { 235 , 236 } , { 237 , 238 } , { 239 , 241 } , { 240 , 242 } , { 243 ,
244 } , { 245 , 246 } , { 247 , 248 } , { 249 , 250 } , { 251 , 252 } , { 253
, 254 } , { 255 , 256 } , { 257 , 258 } , { 259 , 260 } , { 261 , 262 } , {
263 , 264 } , { 265 , 266 } , { 267 , 268 } , { 269 , 270 } , { 271 , 272 } ,
{ 273 , 274 } , { 275 , 276 } , { 277 , 278 } , { 279 , 280 } , { 281 , 282 }
, { 283 , 284 } , { 285 , 286 } , { 287 , 288 } , { 289 , 290 } , { 291 , 292
} , { 293 , 294 } } ; const SmSizePair dofOffsets [ 145 ] = { { 0 , 1 } , { 1
, 2 } , { 2 , 3 } , { 3 , 6 } , { 6 , 7 } , { 7 , 8 } , { 8 , 9 } , { 9 , 10
} , { 10 , 11 } , { 11 , 12 } , { 12 , 13 } , { 13 , 14 } , { 14 , 15 } , {
15 , 16 } , { 16 , 17 } , { 17 , 18 } , { 18 , 19 } , { 19 , 20 } , { 20 , 21
} , { 21 , 22 } , { 22 , 23 } , { 23 , 24 } , { 24 , 25 } , { 25 , 26 } , {
26 , 27 } , { 27 , 28 } , { 28 , 29 } , { 29 , 30 } , { 30 , 31 } , { 31 , 32
} , { 32 , 33 } , { 33 , 34 } , { 34 , 35 } , { 35 , 36 } , { 36 , 37 } , {
37 , 38 } , { 38 , 39 } , { 39 , 40 } , { 40 , 41 } , { 41 , 42 } , { 42 , 43
} , { 43 , 44 } , { 44 , 45 } , { 45 , 46 } , { 46 , 47 } , { 47 , 48 } , {
48 , 49 } , { 49 , 50 } , { 50 , 51 } , { 51 , 52 } , { 52 , 53 } , { 53 , 54
} , { 54 , 55 } , { 55 , 56 } , { 56 , 57 } , { 57 , 58 } , { 58 , 59 } , {
59 , 60 } , { 60 , 61 } , { 61 , 62 } , { 62 , 63 } , { 63 , 64 } , { 64 , 65
} , { 65 , 66 } , { 66 , 67 } , { 67 , 68 } , { 68 , 69 } , { 69 , 70 } , {
70 , 71 } , { 71 , 72 } , { 72 , 73 } , { 73 , 74 } , { 74 , 75 } , { 75 , 76
} , { 76 , 77 } , { 77 , 78 } , { 78 , 79 } , { 79 , 80 } , { 80 , 81 } , {
81 , 82 } , { 82 , 83 } , { 83 , 84 } , { 84 , 85 } , { 85 , 86 } , { 86 , 87
} , { 87 , 88 } , { 88 , 89 } , { 89 , 90 } , { 90 , 91 } , { 91 , 92 } , {
92 , 93 } , { 93 , 94 } , { 94 , 95 } , { 95 , 96 } , { 96 , 97 } , { 97 , 98
} , { 98 , 99 } , { 99 , 100 } , { 100 , 101 } , { 101 , 102 } , { 102 , 103
} , { 103 , 104 } , { 104 , 105 } , { 105 , 106 } , { 106 , 107 } , { 107 ,
108 } , { 108 , 109 } , { 109 , 110 } , { 110 , 111 } , { 111 , 112 } , { 112
, 113 } , { 113 , 114 } , { 114 , 115 } , { 115 , 116 } , { 116 , 117 } , {
117 , 118 } , { 118 , 119 } , { 119 , 120 } , { 120 , 121 } , { 121 , 122 } ,
{ 122 , 123 } , { 123 , 124 } , { 124 , 125 } , { 125 , 126 } , { 126 , 127 }
, { 127 , 128 } , { 128 , 129 } , { 129 , 130 } , { 130 , 131 } , { 131 , 132
} , { 132 , 133 } , { 133 , 134 } , { 134 , 135 } , { 135 , 136 } , { 136 ,
137 } , { 137 , 138 } , { 138 , 139 } , { 139 , 140 } , { 140 , 141 } , { 141
, 142 } , { 142 , 143 } , { 143 , 144 } , { 144 , 145 } , { 145 , 146 } , {
146 , 147 } } ; const size_t * flexibleStages = NULL ; const size_t
remodIndices [ 106 ] = { 13 , 15 , 17 , 19 , 21 , 23 , 25 , 27 , 29 , 31 , 35
, 37 , 41 , 43 , 47 , 49 , 53 , 55 , 59 , 63 , 65 , 71 , 75 , 77 , 79 , 83 ,
87 , 91 , 95 , 99 , 103 , 107 , 109 , 111 , 115 , 117 , 121 , 123 , 127 , 129
, 133 , 135 , 137 , 141 , 145 , 149 , 153 , 157 , 159 , 163 , 165 , 167 , 171
, 173 , 177 , 179 , 183 , 185 , 189 , 191 , 193 , 195 , 197 , 199 , 201 , 203
, 205 , 207 , 209 , 211 , 213 , 215 , 217 , 219 , 223 , 225 , 227 , 231 , 233
, 235 , 237 , 239 , 243 , 245 , 247 , 249 , 251 , 253 , 255 , 257 , 259 , 261
, 263 , 265 , 267 , 269 , 275 , 277 , 279 , 281 , 283 , 285 , 287 , 289 , 291
, 293 } ; const size_t equationsPerConstraint [ 44 ] = { 2 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 1 , 1 , 1 , 2 , 1 , 1 , 1 }
; const size_t dofToVelSlot [ 147 ] = { 7 , 8 , 9 , 10 , 11 , 12 , 14 , 16 ,
18 , 20 , 22 , 24 , 26 , 28 , 30 , 33 , 34 , 36 , 39 , 40 , 42 , 45 , 46 , 48
, 51 , 52 , 54 , 57 , 58 , 61 , 62 , 64 , 67 , 68 , 72 , 73 , 74 , 76 , 78 ,
81 , 82 , 85 , 86 , 89 , 90 , 93 , 94 , 97 , 98 , 101 , 102 , 105 , 106 , 108
, 110 , 113 , 114 , 116 , 119 , 120 , 122 , 125 , 126 , 128 , 131 , 132 , 134
, 136 , 139 , 140 , 143 , 144 , 147 , 148 , 151 , 152 , 155 , 156 , 158 , 161
, 162 , 164 , 166 , 169 , 170 , 172 , 175 , 176 , 178 , 181 , 182 , 184 , 187
, 188 , 190 , 192 , 194 , 196 , 198 , 200 , 202 , 204 , 206 , 208 , 210 , 212
, 214 , 216 , 218 , 221 , 222 , 224 , 226 , 229 , 230 , 232 , 234 , 236 , 238
, 241 , 242 , 244 , 246 , 248 , 250 , 252 , 254 , 256 , 258 , 260 , 262 , 264
, 266 , 268 , 270 , 272 , 274 , 276 , 278 , 280 , 282 , 284 , 286 , 288 , 290
, 292 , 294 } ; const size_t constraintDofs [ 125 ] = { 9 , 81 , 136 , 67 ,
68 , 69 , 70 , 71 , 70 , 71 , 72 , 73 , 74 , 75 , 74 , 75 , 76 , 77 , 78 , 79
, 80 , 10 , 11 , 82 , 83 , 84 , 10 , 11 , 85 , 86 , 87 , 10 , 11 , 88 , 89 ,
90 , 10 , 11 , 91 , 92 , 93 , 54 , 55 , 56 , 57 , 58 , 59 , 60 , 61 , 62 , 63
, 64 , 65 , 39 , 40 , 43 , 44 , 47 , 48 , 49 , 50 , 39 , 40 , 41 , 42 , 43 ,
44 , 45 , 46 , 49 , 50 , 51 , 52 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25
, 26 , 27 , 28 , 29 , 30 , 31 , 15 , 16 , 34 , 35 , 36 , 32 , 33 , 37 , 113 ,
114 , 109 , 110 , 119 , 120 , 130 , 131 , 123 , 124 , 103 , 104 , 99 , 100 ,
134 , 135 , 10 , 11 , 6 , 94 , 125 , 126 , 127 , 95 , 96 , 105 , 106 , 115 ,
116 } ; const size_t constraintDofOffsets [ 44 + 1 ] = { 0 , 2 , 3 , 6 , 8 ,
12 , 14 , 18 , 21 , 26 , 31 , 36 , 41 , 44 , 47 , 50 , 53 , 55 , 57 , 59 , 61
, 65 , 69 , 73 , 76 , 79 , 82 , 85 , 88 , 93 , 96 , 98 , 100 , 102 , 104 ,
106 , 108 , 110 , 112 , 114 , 116 , 119 , 121 , 123 , 125 } ; const size_t Jm
= 50 ; const size_t Jn = 147 ; SmSizePair zeroSizePair ; zeroSizePair .
mFirst = zeroSizePair . mSecond = 0 ;
sm_core_MechanismDelegate_allocScratchpad ( delegate ) ; scratchpad =
delegate -> mScratchpad ; delegate -> mTargetStrengthFree = 0 ; delegate ->
mTargetStrengthSuggested = 1 ; delegate -> mTargetStrengthDesired = 2 ;
delegate -> mTargetStrengthRequired = 3 ; delegate -> mConsistencyTol = +
1.000000000000000062e-09 ; delegate -> mTreeJointDof = 147 ; delegate -> mDof
= 147 ; delegate -> mStateSize = 369 ; delegate -> mContinuousStateSize = 369
; delegate -> mModeVectorSize = 0 ; delegate -> mNumStages = 109 ; delegate
-> mNumConstraints = 44 ; delegate -> mNumAllConstraintEquations = 50 ;
sm_core_SmSizePairVector_create ( & delegate -> mJointToStageIdx , 109 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mJointToStageIdx ) , jointToStageIdx , 109 * sizeof ( SmSizePair
) ) ; sm_core_SmSizeTVector_create ( & delegate -> mPrimitiveIndices ,
delegate -> mNumStages + 1 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mPrimitiveIndices ) ,
primitiveIndices , ( delegate -> mNumStages + 1 ) * sizeof ( size_t ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mStateOffsets , 145 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mStateOffsets ) , stateOffsets , 145 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mDofOffsets , 145 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mDofOffsets ) , dofOffsets , 145 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mFlexibleStages , 0 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages
) , flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create (
& delegate -> mRemodIndices , 106 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 106 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mRunTimeEnabledEquations , delegate -> mNumAllConstraintEquations
, 1 ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot , delegate
-> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs , 125 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mConstraintDofs
) , constraintDofs , 125 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create
( & delegate -> mConstraintDofOffsets , delegate -> mNumConstraints + 1 , 0 )
; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofOffsets ) , constraintDofOffsets , ( delegate ->
mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosRequired , 147 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 147 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosSuggested , 147 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosFree , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosNonRequired , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelFree , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelNonRequired , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggAndFree , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mConstraintFilter , 44 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mActiveConstraints , 44 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mActiveDofs , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mActiveDofs0 , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mNewConstraints , 44 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mNewDofs , 147 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mUnsatisfiedConstraints , 44 ) ; sm_core_SmSizeTVector_create ( & scratchpad
-> mActiveConstraintsVect , 44 , 0 ) ; sm_core_SmSizeTVector_create ( &
scratchpad -> mActiveDofsVect , 147 , 0 ) ; sm_core_SmSizeTVector_create ( &
scratchpad -> mFullDofToActiveDof , 147 , 0 ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyPosTargetedPrims
, 145 , & zeroSizePair ) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyVelTargetedPrims , 145 , & zeroSizePair ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mPosPartialTypes , 145 , 0 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mVelPartialTypes , 145 , 0 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mPartiallyActivePrims , 145 ,
0 ) ; sm_core_SmSizePairVector_create ( & scratchpad -> mBaseFrameVelOffsets
, 1 , & zeroSizePair ) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mCvQuaternionVelOffsets , 0 , & zeroSizePair ) ; sm_core_SmRealVector_create
( & scratchpad -> mCvQuaternionAzimuthValues , 0 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mInitialState , 369 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mStartState , 369 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mTestState , 369 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mFullStateVector , 369 , 0.0 )
; sm_core_SmIntVector_create ( & scratchpad -> mModeVector , 0 , 0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mJacobianRowMaj , Jm * Jn , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mJacobian , Jm * Jn , 0.0 )
; sm_core_SmRealVector_create ( & scratchpad -> mJacobianPrimSubmatrix , Jm *
6 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mConstraintNonhomoTerms , Jm , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mConstraintError , Jm , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mBestConstraintError , Jm , 0.0 ) ; sm_core_SmRealVector_create
( & scratchpad -> mDeltas , Jn * ( Jm <= Jn ? Jm : Jn ) , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mSvdWork , 39304 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchScaledDeltaVect ,
147 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchTestStateVect , 369 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchErrorVect , Jm , 0.0 ) ; sm_core_SmRealVector_create
( & scratchpad -> mActiveDofVelsVect , 147 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 1788 , 0.0 ) ;
delegate -> mSetTargets = NULL ; delegate -> mResetStateVector =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_resetSimStateVector ; delegate ->
mInitializeTrackedAngleState = NULL ; delegate -> mComputeDiscreteState =
NULL ; delegate -> mAdjustPosition = NULL ; delegate ->
mPerturbJointPrimitiveState =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_perturbSimJointPrimitiveState ;
delegate -> mPerturbFlexibleBodyState =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_perturbFlexibleBodyState ; delegate
-> mComputePosDofBlendMatrix = NULL ; delegate -> mComputeVelDofBlendMatrix =
NULL ; delegate -> mProjectPartiallyTargetedPos = NULL ; delegate ->
mPropagateMotion = NULL ; delegate -> mComputeAssemblyError = NULL ; delegate
-> mComputeAssemblyJacobian = NULL ; delegate -> mComputeFullAssemblyJacobian
= NULL ; delegate -> mIsInKinematicSingularity = NULL ; delegate ->
mConvertStateVector = NULL ; delegate -> mConstructStateVector =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_constructStateVector ; delegate ->
mExtractSolverStateVector =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_extractSolverStateVector ; delegate
-> mIsPositionViolation =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_isPositionViolation ; delegate ->
mIsVelocityViolation =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_isVelocityViolation ; delegate ->
mProjectStateSim = Aerial_Inspection_Octa_Rotor_5bdcd402_1_projectStateSim ;
delegate -> mComputeConstraintError =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_computeConstraintError ; delegate ->
mResetModeVector = Aerial_Inspection_Octa_Rotor_5bdcd402_1_resetModeVector ;
delegate -> mHasJointDisToNormModeChange =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_hasJointDisToNormModeChange ;
delegate -> mPerformJointDisToNormModeChange =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_performJointDisToNormModeChange ;
delegate -> mOnModeChangedCutJoints =
Aerial_Inspection_Octa_Rotor_5bdcd402_1_onModeChangedCutJoints ; delegate ->
mMech = NULL ; } static void initMechanismDelegates ( NeDaePrivateData *
smData ) { PmAllocator * alloc = pm_default_allocator ( ) ; const int32_T
motionInputOffsets [ 16 ] = { 0 , 1 , 4 , 7 , 6 , 5 , 3 , 2 , 9 , 8 , 14 , 13
, 15 , 11 , 10 , 12 } ; int_T status = 0 ; initAssemblyDelegate ( & smData ->
mAssemblyDelegate ) ; initSimulationDelegate ( & smData ->
mSimulationDelegate ) ; status = pm_create_int_vector_fields ( & smData ->
mMotionInputOffsets , smData -> mNumInputMotionPrimitives , alloc ) ;
checkMemAllocStatus ( status ) ; memcpy ( smData -> mMotionInputOffsets . mX
, motionInputOffsets , 16 * sizeof ( int32_T ) ) ; } static void
initComputationFcnPtrs ( NeDaePrivateData * smData ) { smData ->
mSetParametersFcn = dae_cg_setParameters_function ; smData -> mPAssertFcn =
dae_cg_pAssert_method ; smData -> mDerivativeFcn = dae_cg_deriv_method ;
smData -> mNumJacPerturbLoBoundsFcn = dae_cg_numJacPerturbLoBounds_method ;
smData -> mNumJacPerturbHiBoundsFcn = dae_cg_numJacPerturbHiBounds_method ;
smData -> mOutputFcn = dae_cg_compOutputs_method ; smData -> mModeFcn =
dae_cg_mode_method ; smData -> mZeroCrossingFcn = dae_cg_zeroCrossing_method
; smData -> mProjectionFcn = dae_cg_project_solve ; smData -> mCIC_MODE_Fcn =
dae_cg_CIC_MODE_solve ; smData -> mCheckFcn = ( smData -> mStateVectorSize ==
0 ) ? dae_cg_check_solve : NULL ; smData -> mAssemblyFcn =
dae_cg_assemble_solve ; smData -> mSetupLoggerFcn =
sm_ssci_setupLoggerFcn_codeGen ; smData -> mLogFcn = sm_ssci_logFcn_codeGen ;
smData -> mResidualsFcn = NULL ; smData -> mLinearizeFcn = NULL ; smData ->
mGenerateFcn = NULL ; } static void initLiveLinkToSm ( NeDaePrivateData *
smData ) { smData -> mLiveSmLink = NULL ; smData -> mLiveSmLink_destroy =
NULL ; smData -> mLiveSmLink_copy = NULL ; } void
Aerial_Inspection_Octa_Rotor_5bdcd402_1_NeDaePrivateData_create (
NeDaePrivateData * smData ) { initBasicAttributes ( smData ) ;
initStateVector ( smData ) ; initAsserts ( smData ) ; initModeVector ( smData
) ; initZeroCrossings ( smData ) ; initVariables ( smData ) ;
initRuntimeParameters ( smData ) ; initIoInfo ( smData ) ; initInputDerivs (
smData ) ; initDirectFeedthrough ( smData ) ; initOutputDerivProc ( smData )
; initMechanismDelegates ( smData ) ; initComputationFcnPtrs ( smData ) ;
initLiveLinkToSm ( smData ) ; }
