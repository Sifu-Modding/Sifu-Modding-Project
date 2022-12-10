#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputAction.h"
#include "Components/ActorComponent.h"
#include "DamageInfos.h"
#include "EAlertLevel.h"
#include "SCUserDefinedEnumHandler.h"
#include "EScoringKillType.h"
#include "Engine/DataTable.h"
#include "VitalPointDataDefinition.h"
#include "EScoringActionType.h"
#include "PlayerScoringComponent.generated.h"

class UOrderComponent;
class AActor;
class AVitalPointActor;
class AFightingCharacter;
class UArchetypeAsset;
class UCurveFloat;
class UAttackDB;
class ABaseWeapon;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UPlayerScoringComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerScoringComponent();
private:
    UFUNCTION()
    void OnOwnerTakedownStarted(uint8 _iOrderID, UOrderComponent* _OrderComponent);
    
    UFUNCTION()
    void OnOwnerKilledSomething(AActor* _victim, bool _bIsOnlyAssist, bool _bKillingBlow, AActor* _Instigator, const FDamageInfos& _damage);
    
    UFUNCTION()
    void OnOwnerAttackTaunt();
    
    UFUNCTION()
    void OnOwnerAttackFocus(AVitalPointActor* _vitalPointSelected);
    
    UFUNCTION()
    void OnAvoidedAttackEnds(uint8 _iOrderID, UOrderComponent* _OrderComponent);
    
    UFUNCTION()
    void OnAlertLevelChanged(EAlertLevel _eNewLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetScoringActive(bool _bActivate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGlobalMultiplier(float _GlobalMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetScoringValues();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetDiminishingQueue();
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnKnockdownAttackStarted(uint8 _orderID, UOrderComponent* _OrderComponent);
    
    UFUNCTION(BlueprintCallable)
    float BPF_GetCurrentScore();
    
    UFUNCTION(BlueprintPure)
    float BPF_GetCurrentEfficiency() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ComputeHighScore(bool _bUpdateSave, float& _fCurrentSavedHighScore, float& _fCurrentLevelScore, bool& _bHighscoreIsNew);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ToggleFloorScore(bool _Freeze);
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_ShouldDecrementFloorWhenFloorScoreIsZero();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnUpdateFloorScore(float _FloorScore, float _MaxFloorScore);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnUnbindCallbacks(AFightingCharacter* _owner);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnNewFloorReached(int32 _NewFloor, int32 _OldFloor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnNewEfficiency(float _fOld, float _fNew);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnInitializeScoring();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnFinalFloorReached();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnBindCallbacks(AFightingCharacter* _owner);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_IsSyncAttackKnockdown(const FSCUserDefinedEnumHandler& _BlueprintID);
    
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetScoreOnAIFriendlyHit();
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_GetScoreFromKill(EScoringKillType _KillType, float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_GetScoreFromHitboxRowHandle(const FDataTableRowHandle& _hitboxRawHanlde, bool& _ActionFound, float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat, bool& _ApplyMultiplierBonus);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_GetScoreFromAttackDB(const UAttackDB* _AttackDB, bool& _ActionFound, float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat, bool& _ApplyMultiplierBonus);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_GetScoreFromAction(InputAction _action, bool& _ActionFound, float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat, bool& _ApplyMultiplierBonus);
    
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetScoreFocus(const FVitalPointDataDefinition& _VitalPointDef, AFightingCharacter* _character);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_GetScoreDefense(float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat);
    
    UFUNCTION(BlueprintNativeEvent)
    int32 BPE_GetScoreArchetype(UArchetypeAsset* _archetype);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_GetMultiplierFloorValue(float _Floor, float& _FloorScoreForNextFloor, float& _FloorScoreRatioWhenEnteringFromLower, float& _FloorScoreRatioWhenEnteringFromUpper, FFloatRange& _BaseDecrementRateRange, FFloatRange& _CooldownBeforeDecrementRange);
    
    UFUNCTION(BlueprintNativeEvent)
    int32 BPE_GetMaxMultiplierFloor();
    
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetMalusOnHitStructureBrokenAI();
    
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetInactionTimeDuringInactivity() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetInactionTime() const;
    
    UFUNCTION(BlueprintNativeEvent)
    int32 BPE_GetGlobalQueueSize();
    
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetFloorScoreGlobalMalusRatioOnMCHit();
    
    UFUNCTION(BlueprintNativeEvent)
    int32 BPE_GetEfficiencyQueueSize();
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_GetEfficiencyMalusOnMCHit(float& _EfficiencyValue, int32& _NbOfOccurences);
    
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetEfficiencyCoeffInactiveAction() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_GetEfficiencyBoundsFromActionType(EScoringActionType _ScoringActionType, float& _MinEfficiency, float& _MaxEfficiency);
    
    UFUNCTION(BlueprintNativeEvent)
    UCurveFloat* BPE_GetCurveForEfficiencyWeightByPlaceInQueue() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetBonusOnWeaponHit(const ABaseWeapon* _weapon);
    
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetBonusOnPunish();
    
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetBonusOnEnvironmentalKill();
    
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetBonusMCLifeMultiplier(AFightingCharacter* _MCCharacter);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_GetBonusKillStreak(int32 _KillCount, float& _BonusValue, float& _DurationBetweenKills);
    
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetAILifeBonus(AFightingCharacter* _AICharacter);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_CanTargetGenerateScoring(AFightingCharacter* _OpponentCharacter);
    
};

