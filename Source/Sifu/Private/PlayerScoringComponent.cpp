#include "PlayerScoringComponent.h"

UPlayerScoringComponent::UPlayerScoringComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPlayerScoringComponent::OnOwnerTakedownStarted(uint8 _iOrderID, UOrderComponent* _OrderComponent) {
}

void UPlayerScoringComponent::OnOwnerKilledSomething(AActor* _victim, bool _bIsOnlyAssist, bool _bKillingBlow, AActor* _Instigator, const FDamageInfos& _damage) {
}

void UPlayerScoringComponent::OnOwnerAttackTaunt() {
}

void UPlayerScoringComponent::OnOwnerAttackFocus(AVitalPointActor* _vitalPointSelected) {
}

void UPlayerScoringComponent::OnAvoidedAttackEnds(uint8 _iOrderID, UOrderComponent* _OrderComponent) {
}

void UPlayerScoringComponent::OnAlertLevelChanged(EAlertLevel _eNewLevel) {
}

void UPlayerScoringComponent::BPF_SetScoringActive(bool _bActivate) {
}

void UPlayerScoringComponent::BPF_SetGlobalMultiplier(float _GlobalMultiplier) {
}

void UPlayerScoringComponent::BPF_SetFloorScore(float _newFloorScore) {
}

void UPlayerScoringComponent::BPF_ResetScoringValues() {
}

void UPlayerScoringComponent::BPF_ResetDiminishingQueue() {
}

void UPlayerScoringComponent::BPF_OnKnockdownAttackStarted(uint8 _orderID, UOrderComponent* _OrderComponent) {
}

void UPlayerScoringComponent::BPF_InitializeFromDB() {
}

float UPlayerScoringComponent::BPF_GetFloorScoreToReachMaxMultiplier() const {
    return 0.0f;
}

float UPlayerScoringComponent::BPF_GetCurrentScore() {
    return 0.0f;
}

float UPlayerScoringComponent::BPF_GetCurrentEfficiency() const {
    return 0.0f;
}

void UPlayerScoringComponent::BPF_ComputeHighScore(bool _bUpdateSave, float& _fCurrentSavedHighScore, float& _fCurrentLevelScore, bool& _bHighscoreIsNew) {
}


bool UPlayerScoringComponent::BPE_ShouldDecrementFloorWhenFloorScoreIsZero_Implementation() {
    return false;
}









float UPlayerScoringComponent::BPE_GetScoreOnAIFriendlyHit_Implementation() {
    return 0.0f;
}

void UPlayerScoringComponent::BPE_GetScoreFromKill_Implementation(EScoringKillType _KillType, float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat) {
}

void UPlayerScoringComponent::BPE_GetScoreFromHitboxRowHandle_Implementation(const FDataTableRowHandle& _hitboxRawHanlde, bool& _ActionFound, float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat, bool& _ApplyMultiplierBonus) {
}

void UPlayerScoringComponent::BPE_GetScoreFromAttackDB_Implementation(const UAttackDB* _AttackDB, bool& _ActionFound, float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat, bool& _ApplyMultiplierBonus) {
}

void UPlayerScoringComponent::BPE_GetScoreFromAction_Implementation(InputAction _action, bool& _ActionFound, float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat, bool& _ApplyMultiplierBonus) {
}

float UPlayerScoringComponent::BPE_GetScoreFocus_Implementation(const FVitalPointDataDefinition& _VitalPointDef, AFightingCharacter* _character) {
    return 0.0f;
}

void UPlayerScoringComponent::BPE_GetScoreDefense_Implementation(float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat) {
}

int32 UPlayerScoringComponent::BPE_GetScoreArchetype_Implementation(UArchetypeAsset* _archetype) {
    return 0;
}

void UPlayerScoringComponent::BPE_GetMultiplierFloorValue_Implementation(float _Floor, float& _FloorScoreForNextFloor, float& _FloorScoreRatioWhenEnteringFromLower, float& _FloorScoreRatioWhenEnteringFromUpper, FFloatRange& _BaseDecrementRateRange, FFloatRange& _CooldownBeforeDecrementRange) {
}

int32 UPlayerScoringComponent::BPE_GetMaxMultiplierFloor_Implementation() {
    return 0;
}

float UPlayerScoringComponent::BPE_GetMalusOnHitStructureBrokenAI_Implementation() {
    return 0.0f;
}

float UPlayerScoringComponent::BPE_GetInactionTimeDuringInactivity_Implementation() const {
    return 0.0f;
}

float UPlayerScoringComponent::BPE_GetInactionTime_Implementation() const {
    return 0.0f;
}

int32 UPlayerScoringComponent::BPE_GetGlobalQueueSize_Implementation() {
    return 0;
}


float UPlayerScoringComponent::BPE_GetFloorScoreGlobalMalusRatioOnMCHit_Implementation() {
    return 0.0f;
}

int32 UPlayerScoringComponent::BPE_GetEfficiencyQueueSize_Implementation() {
    return 0;
}

void UPlayerScoringComponent::BPE_GetEfficiencyMalusOnMCHit_Implementation(float& _EfficiencyValue, int32& _NbOfOccurences) {
}

float UPlayerScoringComponent::BPE_GetEfficiencyCoeffInactiveAction_Implementation() const {
    return 0.0f;
}

void UPlayerScoringComponent::BPE_GetEfficiencyBoundsFromActionType_Implementation(EScoringActionType _ScoringActionType, bool& _ActionTypeFound, float& _MinEfficiency, float& _MaxEfficiency) {
}

UCurveFloat* UPlayerScoringComponent::BPE_GetCurveForEfficiencyWeightByPlaceInQueue_Implementation() const {
    return NULL;
}

float UPlayerScoringComponent::BPE_GetBonusOnWeaponHit_Implementation(const ABaseWeapon* _weapon) {
    return 0.0f;
}

float UPlayerScoringComponent::BPE_GetBonusOnPunish_Implementation() {
    return 0.0f;
}

float UPlayerScoringComponent::BPE_GetBonusOnEnvironmentalKill_Implementation(EScoringKillType _eScoringKillType, float _fTargetHealthBeforeKill) {
    return 0.0f;
}

float UPlayerScoringComponent::BPE_GetBonusMCLifeMultiplier_Implementation(AFightingCharacter* _MCCharacter) {
    return 0.0f;
}

void UPlayerScoringComponent::BPE_GetBonusKillStreak_Implementation(int32 _KillCount, float& _BonusValue, float& _DurationBetweenKills) {
}

float UPlayerScoringComponent::BPE_GetAILifeBonus_Implementation(AFightingCharacter* _AICharacter) {
    return 0.0f;
}



