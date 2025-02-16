#include "DefenseComponent.h"
#include "Net/UnrealNetwork.h"

UDefenseComponent::UDefenseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_UninterruptibleOrderByGuard.AddDefaulted(5);
    this->m_ParryDB = NULL;
    this->m_AvoidDB = NULL;
    this->m_fCurrentGuard = 0.00f;
    this->m_AvoidPropertyDB = NULL;
    this->m_DefaultGuardDB = NULL;
    this->m_fMaxGuard = 100.00f;
    this->m_MaxGuardMultiplier[0] = 1.00f;
    this->m_MaxGuardMultiplier[1] = 1.00f;
    this->m_MaxGuardMultiplier[2] = 1.00f;
    this->m_fGrabbableGuardRatio = 0.50f;
    this->m_fGuardBrokenGaugeCoolDownBeforeRecovery = 0.50f;
    this->m_fGuardRecoveryRate = 24.00f;
    this->m_GuardRecoveryRateByLife = NULL;
    this->m_GuardRecoveryRateByLifePerDifficulty[0] = NULL;
    this->m_GuardRecoveryRateByLifePerDifficulty[1] = NULL;
    this->m_GuardRecoveryRateByLifePerDifficulty[2] = NULL;
    this->m_fGuardBrokenRecoveryRate = 48.00f;
    this->m_GuardGaugeRecoveryRateOverWeightRatioCurve = NULL;
    this->m_fGuardRecoveryRateCoeffWhenGuarding = 0.50f;
    this->m_fGuardBreakDuration = 2.00f;
    this->m_bCanDoActionIfGuardGaugeEmpty = true;
    this->m_bGuardBlocksImpactsFromBack = false;
    this->m_bIgnoreRecoveryBlockInGuardBroken = false;
    this->m_eGuardType = EGuardType::None;
    this->m_fRangeOfDodgeForRefill = 0.00f;
    this->m_fDodgeRefillValue = 1.00f;
    this->m_fDodgeGuardGaugeRefillValue = 0.00f;
    this->m_fBareHandsGuardCoeff = 1.00f;
    this->m_fBareHandsGuardSpecialCoeff = 0.00f;
    this->m_AbsorbDB = NULL;
    this->m_bCanBeSuperDizzy = true;
    this->m_fSuperDizzyGaugeRatioAfterSuperDizzy = 0.00f;
    this->m_fGuardGaugeRecoveryCooldown = -1.00f;
    this->m_GuardGaugeRecoveryCooldownPerDifficulty[0] = 1.00f;
    this->m_GuardGaugeRecoveryCooldownPerDifficulty[1] = 1.00f;
    this->m_GuardGaugeRecoveryCooldownPerDifficulty[2] = 1.00f;
    this->m_iResilience = 0;
    this->m_iResilienceAttackBonus = 0;
    this->m_AttackPropertyResistanceDB = NULL;
}

void UDefenseComponent::ServerSetGuardValue_Implementation(float _fGuard) {
}
bool UDefenseComponent::ServerSetGuardValue_Validate(float _fGuard) {
    return true;
}

void UDefenseComponent::ServerRepSetGuardGaugeTarget_Implementation(float _fPercentageTarget, int64 _iTimeToTarget) {
}
bool UDefenseComponent::ServerRepSetGuardGaugeTarget_Validate(float _fPercentageTarget, int64 _iTimeToTarget) {
    return true;
}

void UDefenseComponent::PopFightingStates() {
}

void UDefenseComponent::OnRep_GuardTargettedStruct() {
}

void UDefenseComponent::OnMoveStatusChanged(UFightingMovementComponent* _movementComponent) {
}

void UDefenseComponent::OnHit(const FHitDescription& _hitDescription) {
}

void UDefenseComponent::OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData) {
}

void UDefenseComponent::OnDeath() {
}

void UDefenseComponent::OnDamage(float _fAmount, UHealthComponent* _healthComponent, bool _bApplied) {
}

void UDefenseComponent::MultiCastSetGuardGaugeTarget_Implementation(float _fPercentageTarget, int64 _iTimeToTarget) {
}

bool UDefenseComponent::IsParryWindowOpen(bool _bPrediction) const {
    return false;
}

bool UDefenseComponent::IsParryActive(bool _bPrediction) const {
    return false;
}

bool UDefenseComponent::IsGuarding() const {
    return false;
}

bool UDefenseComponent::IsAbsorbWindowOpened(bool _bInPrediction) const {
    return false;
}

EGuardType UDefenseComponent::GetGuardType() const {
    return EGuardType::None;
}

void UDefenseComponent::ClientNotifyIsTargettedByAttack_Implementation(AFightingCharacter* _attackInstigator, FName _attack) {
}
bool UDefenseComponent::ClientNotifyIsTargettedByAttack_Validate(AFightingCharacter* _attackInstigator, FName _attack) {
    return true;
}

void UDefenseComponent::BPF_SetPermanentFightingState(EFightingState _ePermanentFightingState) {
}

void UDefenseComponent::BPF_SetIsSlapstickFight(const bool _bIsSlapstickFight) {
}

void UDefenseComponent::BPF_SetIsOnePunchBreaker(const bool _bIsOnePunchBreaker) {
}

void UDefenseComponent::BPF_SetIsForceStructureDamage(bool _bIsForceStructureDamage) {
}

void UDefenseComponent::BPF_SetIsForceHealthDamage(bool _bIsForceHealthDamage) {
}

void UDefenseComponent::BPF_SetIsAutoDeflect(bool _bIsAutoDeflect) {
}

void UDefenseComponent::BPF_SetGuardType(EGuardType _eGuardType, bool _bInPrediction) {
}

void UDefenseComponent::BPF_SetDisableGuard(bool _bValue) {
}

void UDefenseComponent::BPF_SetBuildUpFramesMultiplicator(float _fMult) {
}

void UDefenseComponent::BPF_SetAutoAvoid(bool _bAutoAvoid) {
}

void UDefenseComponent::BPF_RestoreIncreaseGuardGauge() {
}

void UDefenseComponent::BPF_ResetGuardDBToDefault() {
}

void UDefenseComponent::BPF_PushVitalPointsDbOverride(FName _overrideName, UVitalPointDB* _db) {
}

void UDefenseComponent::BPF_PushAttackPropertiesResistanceDBOverride(FName _name, UAttackPropertiesResistanceDB* _resistanceDB) {
}

void UDefenseComponent::BPF_PopVitalPointsDbOverride(FName _overrideName) {
}

void UDefenseComponent::BPF_PopAttackPropertiesResistanceDBOverride(FName _name) {
}

void UDefenseComponent::BPF_OverrideGuardDB(UGuardDB* _guardDB) {
}

void UDefenseComponent::BPF_NotifyVitalPointsChanged() {
}

bool UDefenseComponent::BPF_IsSlapstickFight() const {
    return false;
}

bool UDefenseComponent::BPF_IsGuardBroken() const {
    return false;
}

bool UDefenseComponent::BPF_IsForceStructureDamage() const {
    return false;
}

bool UDefenseComponent::BPF_IsForceHealthDamage() const {
    return false;
}

bool UDefenseComponent::BPF_IsFightingStateActive(EFightingState _eFightingState) const {
    return false;
}

bool UDefenseComponent::BPF_IsAutoAvoid() const {
    return false;
}

void UDefenseComponent::BPF_IncreaseGuardGauge(float _fAmount) {
}

UVitalPointDB* UDefenseComponent::BPF_GetVitalPointsDb() const {
    return NULL;
}

int32 UDefenseComponent::BPF_GetResilienceBonusFromAttack() {
    return 0;
}

int32 UDefenseComponent::BPF_GetResilience() {
    return 0;
}

float UDefenseComponent::BPF_GetMaxGuardGauge() const {
    return 0.0f;
}

float UDefenseComponent::BPF_GetGuardRatio() const {
    return 0.0f;
}

UGuardDB* UDefenseComponent::BPF_GetGuardDB() const {
    return NULL;
}

float UDefenseComponent::BPF_GetGrabbableGuardRatio() const {
    return 0.0f;
}

float UDefenseComponent::BPF_GetFightingStateTimeLeft(EFightingState _eFightingState, bool& _bOutActive, bool& _bOutInfinite) const {
    return 0.0f;
}

bool UDefenseComponent::BPF_GetFightingStateInfos(EFightingState _eFightingState, FFightingStateElement& _outInfos) const {
    return false;
}

float UDefenseComponent::BPF_GetBaseMaxGuard() const {
    return 0.0f;
}

UAttackPropertiesResistanceDB* UDefenseComponent::BPF_GetAttackPropertiesResistanceDB() const {
    return NULL;
}

void UDefenseComponent::BPF_DecreaseGuardGaugeOverTime(float _fAmount, float _fDelay) {
}

void UDefenseComponent::BPF_DecreaseGuardGauge(float _fAmount) {
}

uint8 UDefenseComponent::AbsorbStacksLeft(bool _bInPrediction) const {
    return 0;
}

void UDefenseComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDefenseComponent, m_fCurrentGuard);
    DOREPLIFETIME(UDefenseComponent, m_GuardTargettedStruct);
    DOREPLIFETIME(UDefenseComponent, m_eGuardType);
    DOREPLIFETIME(UDefenseComponent, m_iResilience);
}


