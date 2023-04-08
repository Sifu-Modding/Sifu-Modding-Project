#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimContainer.h"
#include "SCDelegate.h"
#include "SCDelegate.h"
#include "AIComponent.h"
#include "AIDefenseTargetAttackInfos.h"
#include "AIPhaseNodeHardLink.h"
#include "AIPhaseNodeSoftLink.h"
#include "CarriedPropDataRow.h"
#include "EAIContextualDefenseType.h"
#include "EAlertedReason.h"
#include "EAvoidType.h"
#include "EDefenseTactics.h"
#include "EGlobalBehaviors.h"
#include "EMcDominationGaugeSteps.h"
#include "EOrderState.h"
#include "EOrderType.h"
#include "ESCAICombatRoles.h"
#include "HitDescription.h"
#include "HitRequest.h"
#include "OnCombatRoleChangedDynamicDelegate.h"
#include "PhasesTransitionObjectCache.h"
#include "Templates/SubclassOf.h"
#include "TurnAnimationArray.h"
#include "VariableWeightEnumHandler.h"
#include "AIFightingComponent.generated.h"

class AActor;
class APathPatrol;
class UAIContextualDefense;
class UAIFightingComponent;
class UAIPhaseScenario;
class UAIPhaseTransition;
class UAttackDB;
class UAvoidAbility;
class UBlendSpace1D;
class UCombo;
class UFightingMovementComponent;
class UObject;
class UOrderComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
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
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpponentAvoidedAttack OnOpponentAvoidedAttack;
    
    /*UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnComboFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnComboStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnAICalledForHelp;*/
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIPhaseChangedDynamic OnAIPhaseChangedDynamic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFetchObjectDelegate OnStartFetchingObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThrowObjectDelegate OnStartThrowingObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCombatRoleChangedDynamic OnCombatRoleChangedDynamic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIGlobalBehaviorChangedDynamic OnGlobalBehaviorChangedDelegate;
    
  /*  UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FMulticastDelegateActorDyn* OnAbandonning;*/
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIGlobalBehaviorChangedDynamic OnPostGlobalBehaviorChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAINotify OnSeenEnemyDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAINotify OnEnemyRevivalDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAINotify OnKillSpare;
    
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnDefensePreparedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnDefenseStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnDefenseCancelled;*/
  /*  
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnDefenseFinished;*/
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPendantCharge OnPendantChargesAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIEnemyOrderStateChanged m_OnEnemyOrderStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathCounter OnDeathCounterOnKilledChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrefightLowStructureChanged OnPrefightLowStructureStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDominationStepChanged OnMCDominationStepChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iDeathCounterDecreaseWhenKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDeathCounterResetWhenKilled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fChainedDodgeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLateralDodgeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMemoryValidity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPickupMaxDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fThreatMinDistForPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlertPropagationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanBeAlerted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVariableWeightEnumHandler> m_DisabledVariableWeightsOnSpawnerIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_uiIdleIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_SurprisedAnimation[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_HeavySurprisedAnimation[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTurnAnimationArray m_TurnAnimations[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBlendSpace1D*> m_AbandoningBlendSpaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_fAbandoningPlayRateRange;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAIPhaseScenario> m_PhaseScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 m_iCurrentPhaseNodeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPhasesTransitionObjectCache m_PhaseTransitionObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIPhaseTransition*> m_CurrentPhaseTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CarriedProps, meta=(AllowPrivateAccess=true))
    TArray<FCarriedPropDataRow> m_carriedPropsInfoRep;
    
public:
    UAIFightingComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTargetHitDuringAttack(const FHitDescription& _hitDescription);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CarriedProps();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnOrderTraversalEnded(uint8 _iOrderID, UOrderComponent* _OrderComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnOrderGrabbedStarted(uint8 _iOrderID, UOrderComponent* _OrderComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnOrderGrabbedEnded(uint8 _iOrderID, UOrderComponent* _OrderComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOrderAvoidedStarted(uint8 _uiOrderId, UOrderComponent* _OrderComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnOrderAttackStarted(uint8 _uiOrderId, UOrderComponent* _OrderComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnMoveStatusChanged(UFightingMovementComponent* _movementComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyFalling();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAIPhaseChangeSequenceFinished();
    
    UFUNCTION(BlueprintCallable)
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
    void BPF_SwitchToAbandoning(const bool _bFromDialog, const bool _bShouldStayInAbandonStateForever);
    
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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsStructureGaugeVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInPrefightLowStructure() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInLastManPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsHealthGaugeVisible() const;
    
    UFUNCTION(BlueprintCallable)
    bool BPF_HasSpawnerGroupConfrontationDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasPathPatrol() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasAttackTicket() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetXPBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDefenseTactics BPF_GetPreparedDefenseTactic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetNbOccurencesInStructureBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAlertedReason BPF_GetLastAlertedReason() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGlobalBehaviors BPF_GetGlobalBehavior(bool _bWithTimer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetDefenseTargetAttackInfos(FAIDefenseTargetAttackInfos& _outTargetAttackInfos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetDefenseLastDefendedTargetAttackInfos(FAIDefenseTargetAttackInfos& _outTargetAttackInfos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCurrentPhaseNodeIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetCurrentPhase(FName& _outName, UAIPhaseScenario*& _outScenario) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDefenseTactics BPF_GetCurrentDefenseTactic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESCAICombatRoles BPF_GetCurrentCombatRole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> BPF_GetCarriedProps() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCarriedPendantCharges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetCanUseReactionAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* BPF_GetBlackBoardValueAsObject(FName _key) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForgetEnemy();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForceEnemyReactionBehavior(EGlobalBehaviors _eGlobalBehavior);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForceEnemy(AActor* _Enemy, EGlobalBehaviors _eForcedDetectionReaction);
    
    UFUNCTION(BlueprintCallable)
    void BPF_EndPendingPhaseTransition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanTriggerSpare() const;
    
    UFUNCTION(BlueprintCallable)
    void BeforeGhostDamagesReset();
    
};

