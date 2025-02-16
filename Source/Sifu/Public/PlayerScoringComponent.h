#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "SCUserDefinedEnumHandler.h"
#include "DamageInfos.h"
#include "EAlertLevel.h"
#include "EScoringActionType.h"
#include "EScoringKillType.h"
#include "InputAction.h"
#include "VitalPointDataDefinition.h"
#include "PlayerScoringComponent.generated.h"

class AActor;
class ABaseWeapon;
class AFightingCharacter;
class AVitalPointActor;
class UArchetypeAsset;
class UAttackDB;
class UCurveFloat;
class UOrderComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UPlayerScoringComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerScoringComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnOwnerTakedownStarted(uint8 _iOrderID, UOrderComponent* _OrderComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerKilledSomething(AActor* _victim, bool _bIsOnlyAssist, bool _bKillingBlow, AActor* _Instigator, const FDamageInfos& _damage);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerAttackTaunt();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerAttackFocus(AVitalPointActor* _vitalPointSelected);
    
    UFUNCTION(BlueprintCallable)
    void OnAvoidedAttackEnds(uint8 _iOrderID, UOrderComponent* _OrderComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnAlertLevelChanged(EAlertLevel _eNewLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetScoringActive(bool _bActivate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGlobalMultiplier(float _GlobalMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetFloorScore(float _newFloorScore);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetScoringValues();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetDiminishingQueue();
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnKnockdownAttackStarted(uint8 _orderID, UOrderComponent* _OrderComponent);
    
    UFUNCTION(BlueprintCallable)
    void BPF_InitializeFromDB();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFloorScoreToReachMaxMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float BPF_GetCurrentScore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCurrentEfficiency() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ComputeHighScore(bool _bUpdateSave, float& _fCurrentSavedHighScore, float& _fCurrentLevelScore, bool& _bHighscoreIsNew);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ToggleFloorScore(bool _Freeze);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_ShouldDecrementFloorWhenFloorScoreIsZero();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUpdateFloorScore(float _FloorScore, float _MaxFloorScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUnbindCallbacks(AFightingCharacter* _owner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnNewFloorReached(int32 _NewFloor, int32 _OldFloor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnNewEfficiency(float _fOld, float _fNew);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnInitializeScoring();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnFinalFloorReached();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnBindCallbacks(AFightingCharacter* _owner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_IsSyncAttackKnockdown(const FSCUserDefinedEnumHandler& _BlueprintID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_GetScoreOnAIFriendlyHit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_GetScoreFromKill(EScoringKillType _KillType, float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_GetScoreFromHitboxRowHandle(const FDataTableRowHandle& _hitboxRawHanlde, bool& _ActionFound, float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat, bool& _ApplyMultiplierBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_GetScoreFromAttackDB(const UAttackDB* _AttackDB, bool& _ActionFound, float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat, bool& _ApplyMultiplierBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_GetScoreFromAction(InputAction _action, bool& _ActionFound, float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat, bool& _ApplyMultiplierBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_GetScoreFocus(const FVitalPointDataDefinition& _VitalPointDef, AFightingCharacter* _character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_GetScoreDefense(float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 BPE_GetScoreArchetype(UArchetypeAsset* _archetype);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_GetMultiplierFloorValue(float _Floor, float& _FloorScoreForNextFloor, float& _FloorScoreRatioWhenEnteringFromLower, float& _FloorScoreRatioWhenEnteringFromUpper, FFloatRange& _BaseDecrementRateRange, FFloatRange& _CooldownBeforeDecrementRange);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 BPE_GetMaxMultiplierFloor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_GetMalusOnHitStructureBrokenAI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_GetInactionTimeDuringInactivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_GetInactionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 BPE_GetGlobalQueueSize();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float BPE_GetFloorScoreToReachMaxMultiplier() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_GetFloorScoreGlobalMalusRatioOnMCHit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 BPE_GetEfficiencyQueueSize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_GetEfficiencyMalusOnMCHit(float& _EfficiencyValue, int32& _NbOfOccurences);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_GetEfficiencyCoeffInactiveAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_GetEfficiencyBoundsFromActionType(EScoringActionType _ScoringActionType, bool& _ActionTypeFound, float& _MinEfficiency, float& _MaxEfficiency);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UCurveFloat* BPE_GetCurveForEfficiencyWeightByPlaceInQueue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_GetBonusOnWeaponHit(const ABaseWeapon* _weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_GetBonusOnPunish();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_GetBonusOnEnvironmentalKill(EScoringKillType _eScoringKillType, float _fTargetHealthBeforeKill);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_GetBonusMCLifeMultiplier(AFightingCharacter* _MCCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_GetBonusKillStreak(int32 _KillCount, float& _BonusValue, float& _DurationBetweenKills);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_GetAILifeBonus(AFightingCharacter* _AICharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_CanTargetGenerateScoring(AFightingCharacter* _OpponentCharacter);
    
};

