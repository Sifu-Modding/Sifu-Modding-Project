#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCPoolableActorComponent.h"
#include "ActionConditions.h"
#include "DefenseGauge.h"
#include "EFightingState.h"
#include "EGuardType.h"
#include "EOrderType.h"
#include "FightingStateElement.h"
#include "GuardUpdateStruct.h"
#include "HitDescription.h"
#include "DefenseComponent.generated.h"

class AFightingCharacter;
class UAbsorbDB;
class UAttackPropertiesResistanceDB;
class UAvoidDB;
class UAvoidPropertyDB;
class UCurveFloat;
class UEffectData;
class UFightingMovementComponent;
class UGuardDB;
class UHealthComponent;
class UParryDB;
class UVitalPointDB;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UDefenseComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGuardGaugeChangedDelegate, float, NewValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGuardChanged, EGuardType, _eGuardType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGuardBrokenDynamicDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFightingStateChanged, EFightingState, _eFightingState, bool, _bPush);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAvoidWindowOpened);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuardChanged BPE_GuardChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EOrderType> m_UninterruptibleOrderByGuard;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFightingStateChanged BPE_FightingStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvoidWindowOpened BPE_AvoidWindowOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParryDB* m_ParryDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvoidDB* m_AvoidDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float m_fCurrentGuard;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuardBrokenDynamicDelegate BPE_GuardBroken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuardGaugeChangedDelegate OnGuardGaugeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvoidPropertyDB* m_AvoidPropertyDB;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionConditions m_CancelConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionConditions m_AttackConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionConditions m_DodgeConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionConditions m_RushConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGuardDB* m_DefaultGuardDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GuardTargettedStruct, meta=(AllowPrivateAccess=true))
    FGuardUpdateStruct m_GuardTargettedStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxGuard;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxGuardMultiplier[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGrabbableGuardRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardBrokenGaugeCoolDownBeforeRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardRecoveryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_GuardRecoveryRateByLife;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_GuardRecoveryRateByLifePerDifficulty[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardBrokenRecoveryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_GuardGaugeRecoveryRateOverWeightRatioCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardRecoveryRateCoeffWhenGuarding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardBreakDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanDoActionIfGuardGaugeEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGuardBlocksImpactsFromBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreRecoveryBlockInGuardBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EGuardType m_eGuardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRangeOfDodgeForRefill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDodgeRefillValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDodgeGuardGaugeRefillValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBareHandsGuardCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBareHandsGuardSpecialCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbsorbDB* m_AbsorbDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanBeSuperDizzy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefenseGauge m_SuperDizzyGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuperDizzyGaugeRatioAfterSuperDizzy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardGaugeRecoveryCooldown;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GuardGaugeRecoveryCooldownPerDifficulty[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 m_iResilience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iResilienceAttackBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttackPropertiesResistanceDB* m_AttackPropertyResistanceDB;
    
public:
    UDefenseComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetGuardValue(float _fGuard);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRepSetGuardGaugeTarget(float _fPercentageTarget, int64 _iTimeToTarget);
    
    UFUNCTION(BlueprintCallable)
    void PopFightingStates();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_GuardTargettedStruct();
    
    UFUNCTION(BlueprintCallable)
    void OnMoveStatusChanged(UFightingMovementComponent* _movementComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnHit(const FHitDescription& _hitDescription);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDeath();
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(float _fAmount, UHealthComponent* _healthComponent, bool _bApplied);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastSetGuardGaugeTarget(float _fPercentageTarget, int64 _iTimeToTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParryWindowOpen(bool _bPrediction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParryActive(bool _bPrediction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuarding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbsorbWindowOpened(bool _bInPrediction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGuardType GetGuardType() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientNotifyIsTargettedByAttack(AFightingCharacter* _attackInstigator, FName _attack);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetPermanentFightingState(EFightingState _ePermanentFightingState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsSlapstickFight(const bool _bIsSlapstickFight);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsOnePunchBreaker(const bool _bIsOnePunchBreaker);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsForceStructureDamage(bool _bIsForceStructureDamage);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsForceHealthDamage(bool _bIsForceHealthDamage);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsAutoDeflect(bool _bIsAutoDeflect);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGuardType(EGuardType _eGuardType, bool _bInPrediction);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDisableGuard(bool _bValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetBuildUpFramesMultiplicator(float _fMult);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetAutoAvoid(bool _bAutoAvoid);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RestoreIncreaseGuardGauge();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetGuardDBToDefault();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PushVitalPointsDbOverride(FName _overrideName, UVitalPointDB* _db);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PushAttackPropertiesResistanceDBOverride(FName _name, UAttackPropertiesResistanceDB* _resistanceDB);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopVitalPointsDbOverride(FName _overrideName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopAttackPropertiesResistanceDBOverride(FName _name);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideGuardDB(UGuardDB* _guardDB);
    
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyVitalPointsChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsSlapstickFight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsGuardBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsForceStructureDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsForceHealthDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsFightingStateActive(EFightingState _eFightingState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAutoAvoid() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_IncreaseGuardGauge(float _fAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVitalPointDB* BPF_GetVitalPointsDb() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetResilienceBonusFromAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetResilience();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetMaxGuardGauge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetGuardRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGuardDB* BPF_GetGuardDB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetGrabbableGuardRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFightingStateTimeLeft(EFightingState _eFightingState, bool& _bOutActive, bool& _bOutInfinite) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetFightingStateInfos(EFightingState _eFightingState, FFightingStateElement& _outInfos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetBaseMaxGuard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttackPropertiesResistanceDB* BPF_GetAttackPropertiesResistanceDB() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_DecreaseGuardGaugeOverTime(float _fAmount, float _fDelay);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DecreaseGuardGauge(float _fAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 AbsorbStacksLeft(bool _bInPrediction) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

