#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIComponent.h"
#include "EOrderType.h"
#include "EMcDominationGaugeSteps.h"
#include "EOrderState.h"
#include "EAvoidType.h"
#include "HitRequest.h"
#include "SCDelegate.h"
#include "OnCombatRoleChangedDynamicDelegate.h"
#include "EGlobalBehaviors.h"
#include "SCDelegate.h"
#include "VariableWeightEnumHandler.h"
#include "AnimContainer.h"
#include "TurnAnimationArray.h"
#include "ESCAICombatRoles.h"
#include "UObject/NoExportTypes.h"
#include "PhasesTransitionObjectCache.h"
#include "HitDescription.h"
#include "EDefenseTactics.h"
#include "AIPhaseNodeSoftLink.h"
#include "AIPhaseNodeHardLink.h"
#include "EAIContextualDefenseType.h"
#include "EAlertedReason.h"
#include "AIDefenseTargetAttackInfos.h"
#include "AIFightingComponent.generated.h"

class AActor;
class APathPatrol;
class UFightingMovementComponent;
class UAIFightingComponent;
class UOrderComponent;
class UAttackDB;
class UAIContextualDefense;
class UBlendSpace1D;
class UAIPhaseScenario;
class UAIPhaseTransition;
class UObject;
class UAvoidAbility;
class UCombo;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAIFightingComponent : public UAIComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FThrowObjectDelegate, AActor*, _objectThrown, AActor*, _targetActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPrefightLowStructureChanged, bool, _bForcedLowStructure);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPendantCharge, int32, _iNumOfCharges);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOpponentAvoidedAttack, EAvoidType, _eAvoidType, const FHitRequest&, _hitRequest);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAIPhaseChangedDynamic, int32, _iPreviousPhase, int32, _iCurrentPhase, FName, _PhaseName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFetchObjectDelegate, AActor*, _actor, float, _fetchDistance);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDeathCounter, int32, _iCounterDecrease, bool, _bReset);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAINotify, UAIFightingComponent*, Who);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIGlobalBehaviorChangedDynamic, EGlobalBehaviors, NewBehavior, const bool, FromDialog);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIEnemyOrderStateChanged, EOrderState, _eOrderState, EOrderType, _eOrderType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIDominationStepChanged, EMcDominationGaugeSteps, _eNewStep);
    
    UPROPERTY(BlueprintAssignable)
    FOnOpponentAvoidedAttack OnOpponentAvoidedAttack;
    
    /*UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnComboFinished;
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnComboStarted;
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnAICalledForHelp;*/
    
    UPROPERTY(BlueprintAssignable)
    FOnAIPhaseChangedDynamic OnAIPhaseChangedDynamic;
    
    UPROPERTY(BlueprintAssignable)
    FFetchObjectDelegate OnStartFetchingObject;
    
    UPROPERTY(BlueprintAssignable)
    FThrowObjectDelegate OnStartThrowingObject;
    
    UPROPERTY(BlueprintAssignable)
    FOnCombatRoleChangedDynamic OnCombatRoleChangedDynamic;
    
    UPROPERTY(BlueprintAssignable)
    FAIGlobalBehaviorChangedDynamic OnGlobalBehaviorChangedDelegate;
    
   /* UPROPERTY(BlueprintAssignable)
    USCDelegate::FMulticastDelegateActorDyn OnAbandonning;*/
    
    UPROPERTY(BlueprintAssignable)
    FAIGlobalBehaviorChangedDynamic OnPostGlobalBehaviorChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FAINotify OnSeenEnemyDeath;
    
    UPROPERTY(BlueprintAssignable)
    FAINotify OnEnemyRevivalDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FAINotify OnKillSpare;
    
    /*UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnDefensePreparedDelegate;*/
    
   /* UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnDefenseStarted;
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnDefenseCancelled;
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnDefenseFinished;*/
    
    UPROPERTY(BlueprintAssignable)
    FPendantCharge OnPendantChargesAdded;
    
    UPROPERTY(BlueprintAssignable)
    FAIEnemyOrderStateChanged m_OnEnemyOrderStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FDeathCounter OnDeathCounterOnKilledChanged;
    
    UPROPERTY(BlueprintAssignable)
    FPrefightLowStructureChanged OnPrefightLowStructureStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAIDominationStepChanged OnMCDominationStepChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    int32 m_iDeathCounterDecreaseWhenKilled;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bDeathCounterResetWhenKilled;
    
private:
    UPROPERTY(EditAnywhere)
    float m_fChainedDodgeDelay;
    
    UPROPERTY(EditAnywhere)
    float m_fLateralDodgeAngle;
    
    UPROPERTY(EditAnywhere)
    float m_fMemoryValidity;
    
    UPROPERTY(EditAnywhere)
    float m_fPickupMaxDist;
    
    UPROPERTY(EditAnywhere)
    float m_fThreatMinDistForPickup;
    
    UPROPERTY(EditAnywhere)
    float m_fAlertPropagationDistance;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanBeAlerted;
    
    UPROPERTY(EditAnywhere)
    TArray<FVariableWeightEnumHandler> m_DisabledVariableWeightsOnSpawnerIdle;
    
    UPROPERTY(Replicated, Transient)
    uint8 m_uiIdleIndex;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_SurprisedAnimation[4];
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_HeavySurprisedAnimation[4];
    
    UPROPERTY(EditAnywhere)
    FTurnAnimationArray m_TurnAnimations[4];
    
    UPROPERTY(EditAnywhere)
    TArray<UBlendSpace1D*> m_AbandoningBlendSpaces;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_fAbandoningPlayRateRange;
    
    UPROPERTY(Replicated)
    TWeakObjectPtr<UAIPhaseScenario> m_PhaseScenario;
    
    UPROPERTY(Replicated)
    int32 m_iCurrentPhaseNodeIndex;
    
    UPROPERTY(Transient)
    FPhasesTransitionObjectCache m_PhaseTransitionObjects;
    
    UPROPERTY(Transient)
    TArray<UAIPhaseTransition*> m_CurrentPhaseTransitions;
    
public:
    UAIFightingComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnTargetHitDuringAttack(const FHitDescription& _hitDescription);
    
public:
    UFUNCTION()
    void OnOrderTraversalEnded(uint8 _iOrderID, UOrderComponent* _OrderComponent);
    
    UFUNCTION()
    void OnOrderGrabbedStarted(uint8 _iOrderID, UOrderComponent* _OrderComponent);
    
    UFUNCTION()
    void OnOrderGrabbedEnded(uint8 _iOrderID, UOrderComponent* _OrderComponent);
    
private:
    UFUNCTION()
    void OnOrderAvoidedStarted(uint8 _uiOrderId, UOrderComponent* _OrderComponent);
    
    UFUNCTION()
    void OnOrderAttackStarted(uint8 _uiOrderId, UOrderComponent* _OrderComponent);
    
    UFUNCTION()
    void OnMoveStatusChanged(UFightingMovementComponent* _movementComponent);
    
public:
    UFUNCTION()
    void OnAIPhaseChangeSequenceFinished();
    
    UFUNCTION()
    void HittedDetection(const FHitDescription& _hitDescription);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnspawnCarriedProps();
    
    UFUNCTION(BlueprintCallable)
    EDefenseTactics BPF_TestContextualDefense(UAttackDB* _attackToTest);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_SwitchToPhaseBySoftLink(const FAIPhaseNodeSoftLink& _phaseLink);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToPhaseByName(FName _name);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_SwitchToPhaseByHardLink(const FAIPhaseNodeHardLink& _phaseLink);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToPhase(int32 _iPhase);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToIdle(bool _bEnabledPerception);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToFriendly(const bool _bFromDialog);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToCombatRole(ESCAICombatRoles _eNewRole);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToAbandoning(const bool _bFromDialog);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnCarriedProps();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetStructureGaugeVisible(bool _bVisible);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetPhaseMesh(int32 _iPhaseNodeIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetPerceptionEnabled(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetPathPatrol(APathPatrol* _newpathPatrol);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetHealthGaugeVisible(bool _bVisible);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDeathCounterResetWhenKilled(bool _bReset);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDeathCounterDecreaseWhenKilled(int32 _iCount);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCarriedPendantCharges(int32 _iCharges);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCanUseReactionAction(bool _bValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCanTakeAttackTicket(bool _bValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCanDefend(bool _bValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RespawnStartupWeapon();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_ResetComboToDefault(FName _nameOfDifficultyLevel);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetAvoidAbilityToDefault();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveCarriedProps(int32 _iIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_PushContextualDefenseOverride(FName _overrideName, UAIContextualDefense* _contextualDefenseOverride, EAIContextualDefenseType _eType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopContextualDefenseOverride(FName _overrideName, EAIContextualDefenseType _eType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideCombo(FName _nameOfDifficultyLevel, UCombo* _combo);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideAvoidAbility(const TSubclassOf<UAvoidAbility>& _avoidAbility);
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_IsStructureGaugeVisible() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsInPrefightLowStructure() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsInLastManPhase() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsHealthGaugeVisible() const;
    
    UFUNCTION(BlueprintCallable)
    bool BPF_HasSpawnerGroupConfrontationDialog();
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasPathPatrol() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasAttackTicket() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetXPBonus();
    
    UFUNCTION(BlueprintPure)
    EDefenseTactics BPF_GetPreparedDefenseTactic() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetNbOccurencesInStructureBroken() const;
    
    UFUNCTION(BlueprintPure)
    EAlertedReason BPF_GetLastAlertedReason() const;
    
    UFUNCTION(BlueprintPure)
    EGlobalBehaviors BPF_GetGlobalBehavior(bool _bWithTimer) const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetEnemy() const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetDefenseTargetAttackInfos(FAIDefenseTargetAttackInfos& _outTargetAttackInfos) const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetDefenseLastDefendedTargetAttackInfos(FAIDefenseTargetAttackInfos& _outTargetAttackInfos) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetCurrentPhaseNodeIndex() const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetCurrentPhase(FName& _outName, UAIPhaseScenario*& _outScenario) const;
    
    UFUNCTION(BlueprintPure)
    EDefenseTactics BPF_GetCurrentDefenseTactic() const;
    
    UFUNCTION(BlueprintPure)
    ESCAICombatRoles BPF_GetCurrentCombatRole() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> BPF_GetCarriedProps() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetCarriedPendantCharges() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_GetCanUseReactionAction() const;
    
    UFUNCTION(BlueprintPure)
    UObject* BPF_GetBlackBoardValueAsObject(FName _key) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForgetEnemy();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForceEnemyReactionBehavior(EGlobalBehaviors _eGlobalBehavior);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForceEnemy(AActor* _Enemy, EGlobalBehaviors _eForcedDetectionReaction);
    
    UFUNCTION(BlueprintPure)
    bool BPF_CanTriggerSpare() const;
    
    UFUNCTION()
    void BeforeGhostDamagesReset();
    
};

