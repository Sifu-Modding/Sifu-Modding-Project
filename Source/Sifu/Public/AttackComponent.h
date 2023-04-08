#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCDelegate.h"
#include "SCPoolableActorComponent.h"
#include "SCUserDefinedEnumHandler.h"
#include "AbsorbWindow.h"
#include "AnimSyncContainer.h"
#include "AttackHitRequest.h"
#include "AttackIKLimbProfiles.h"
#include "AvoidWindow.h"
#include "BaseComponent.h"
#include "ComboAttack.h"
#include "EActionType.h"
#include "EAttackStates.h"
#include "EChargeCapEndReason.h"
#include "EDangerStates.h"
#include "EHitDismissReason.h"
#include "ELimbs.h"
#include "EMovableType.h"
#include "HitBox.h"
#include "ImpactResult.h"
#include "InputAction.h"
#include "Templates/SubclassOf.h"
#include "AttackComponent.generated.h"

class AActor;
class AInteractiveMovable;
class APushableActor;
class AThrowableActor;
class AVitalPointActor;
class UAnimSequence;
class UCombo;
class UComboManager;
class UCurveFloat;
class UEnvironmentalAttackDetectionDB;
class UFocusDB;
class UIdleDB;
class UPushObjectAnimRequest;
class URushAttackDB;
class UTargetDB;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAttackComponent : public UActorComponent, public IBaseComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetChange, EActionType, _eAction);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNewAttacksChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMovableUsabilityChanged, EMovableType, _eMovableType, bool, _bUsable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusMechanicValidated, AVitalPointActor*, _vitalPointSelected);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFocusMechanicUpdate, float, _fDeltaTime, float, _fRealTimeDeltaTime);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusMechanicStop, bool, _bCancel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFocusMechanicStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFocusMechanicNewPointSelected, AVitalPointActor*, _previousVitalPointSelected, AVitalPointActor*, _vitalPointSelected);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDangerStateChanged, EDangerStates, _ePreviousDangerState, EDangerStates, _eNewDangerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnAttackHitFilteredDynamic, const FAttackHitRequest&, _hitRequest, const FImpactResult&, _impactResult, AActor*, _hittedActor, EHitDismissReason, _eDismissReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAttackHitDymanic, const FAttackHitRequest&, _hitRequest, const FImpactResult&, _impactResult, AActor*, _hittedActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttackChargedLaunched, uint8, _attackOrderID, uint8, _uiLevel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnAttackChargedCapUpdate, uint8, _attackOrderID, uint8, _uiLevel, float, _fDt, float, _fCurrentRatioInChargingPhase);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAttackChargedCapStart, uint8, _attackOrderID, uint8, _uiLevel, float, _fDuration);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAttackChargedCapEnd, uint8, _attackOrderID, uint8, _uiLevel, EChargeCapEndReason, _eEndReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttackChangeState, EAttackStates, _eNewState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFocusPointValueChanged, float, _fPrevious, float, _fNew);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackChangeState m_OnAttackChangeState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackHitDymanic m_OnAttackHitDynamic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackHitFilteredDynamic m_OnAttackHitFilteredDynamic;
    
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* m_OnAttackLaunchedDynamic;*/
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewAttacksChanged m_OnNewAttacksChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetChange m_OnTargetChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovableUsabilityChanged OnMovableUsable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDangerStateChanged OnDangerStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimSyncContainer m_TakedownDebugAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimSyncContainer m_EnvTakedownDebugAnim;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackIKLimbProfiles m_AttackIKProfiles[4];
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusMechanicStart m_OnFocusMechanicStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusMechanicValidated m_OnFocusMechanicValidated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusMechanicStop m_OnFocusMechanicStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusMechanicUpdate m_OnFocusMechanicUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusMechanicNewPointSelected m_OnFocusMechanicNewPointSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusPointValueChanged OnFocusPointsValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusPointValueChanged OnFocusBarValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackChargedCapStart OnChargedCapStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackChargedCapEnd OnChargedCapEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackChargedCapUpdate OnChargedCapUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackChargedLaunched OnChargedAttackLaunched;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPushObjectAnimRequest> m_pushAnimRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombo* m_DefaultCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<InputAction> m_AttackActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UComboManager* m_ComboManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAttackReorientationDurationFromIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAttackReorientationDurationFromAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAttackReorientationDurationIfChangedDuringAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIdleDB* m_IdleDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvironmentalAttackDetectionDB* m_TakedownDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnterFightDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fExitFightDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVirtualTargetAntiSpamRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_VirtualTargetRemapCurve;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_HitTargetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ELimbs> m_UpperLimbBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketHighMiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketHighMissSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketMid1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketMidMiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketMidMissSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketMid2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketLowLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketLowMiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketLowMissSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketLowRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AimIKCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_FakeHipsBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTargetDB* m_TargetDB;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StaminaConsumptionValues[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAttackHasImpactOnGuardGauge;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FreezeFrameNb[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ResilientFreezeFrameNb[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GuardFreezeFrameNb[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URushAttackDB* m_RushAttackDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFlatHitBoxesCapsuleHalfHeightFactorThresold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiFlatHitBoxesControllerNatureMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDangerTimeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DangerState, meta=(AllowPrivateAccess=true))
    EDangerStates m_eDangerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_OffensiveAvoidHitBox;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxDistSnap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDisableSnapWhenTargetInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_EnvironementImpactType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> m_TakedownHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanGuardBreakAfterDeflected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFocusDB* m_FocusDB;
    
    UAttackComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetWantsComboRestart(bool _bWantsRestart);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetTarget(AActor* _target);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DangerState(EDangerStates _ePreviousDangerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOrderAttackTrackingOver(uint8 _uiOrderId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetNextAttackTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ValidateFocus(AVitalPointActor* _vitalPoint);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateLockMoveTarget(AActor* _currentAttacked);
    
    UFUNCTION(BlueprintCallable)
    void BPF_StopFocus(bool _bCancel);
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartFocus();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetTargetForSlot(FName _BPTargetSlot, AActor* _target);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetServiceActive(EActionType _eActionType, bool _bActive);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMoveDuringAttacks(bool _bMove);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetFocusPointsInfinite(bool _bInfinite);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetAutoDeflectStructureBroken(bool _bAutoDeflectOn, float _fOverrideStructureDamageDeflect, float _fOverrideStructureDamageParry);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetToDefaultCombo();
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideCombo(UCombo* _combo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsPlayingAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsFocusPointsInfinite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVitalPointActor* BPF_GetVitalPointSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AInteractiveMovable* BPF_GetTempMovable(EActionType _eActionType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetTargetForSlot(FName _BPTargetSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetTargetForInput(InputAction _eInput) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetTargetForAction(EActionType _eActionType, bool _bForceOutOfDate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTargetDB* BPF_GetTargetDB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> BPF_GetPotentialTargetsForAction(EActionType _eActionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHitBox BPF_GetNextActiveHitBox(bool _bIncludeActive, bool& _bSuccess, bool& _bOutMirror, float& _fOutDelay) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELimbs BPF_GetLimbFromBone(FName _boneName, bool _bMirror) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFocusTimeLeftInRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFocusTimeLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFocusDB* BPF_GetFocusDB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDangerStates BPF_GetDangerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AThrowableActor* BPF_GetCurrentThrowable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APushableActor* BPF_GetCurrentPushable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCurrentFocusPointsValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAvoidWindow BPF_GetCurrentAvoidWindow(bool& _bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCurrentAttackTimeLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAttackStates BPF_GetCurrentAttackState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCurrentAttackRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetCurrentAttackName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCurrentAttackDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FComboAttack BPF_GetCurrentAttack(bool& _bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAbsorbWindow BPF_GetCurrentAbsorbWindow(bool& _bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHitBox BPF_GetBestActiveHitBox(bool& _bSuccess, bool& _bOutMirror) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ConsumeFocusPoints(float _fFocusPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanConsumeFocusPoints(float _fFocusPointsNeeded) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddFocusPointRefillValue(float _fFocusPointsToAdd);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddFocusPointRefill(FSCUserDefinedEnumHandler _focusGainEnum);
    
    
    // Fix for true pure virtual functions not being implemented
};

