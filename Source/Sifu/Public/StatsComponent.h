#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterProgressionReward.h"
#include "ECharacterProgressionRewardTypes.h"
#include "EPendantUpdate.h"
#include "AttackDataRow.h"
#include "EPendingttackXPType.h"
#include "CharacterStatChangedDelegateDelegate.h"
#include "FocusPointsGainStruct.h"
#include "EWeightCategory.h"
#include "ECharacterStat.h"
#include "Engine/EngineTypes.h"
#include "DamageInfos.h"
#include "ECharacterProgressionRewardConditions.h"
#include "EEarnXPInstigator.h"
#include "EStatsWeaponComputingMethod.h"
#include "SCUserDefinedEnumHandler.h"
#include "AttributeSet.h"
#include "EAttackLearningState.h"
#include "CombatDeckDetails.h"
#include "StatsComponent.generated.h"

class UCharacterProgressionDB;
class UCharacterProgressionUnlockDB;
class UEffectData;
class AFightingCharacter;
class AActor;
class UStatsDB;
class UBaseWeaponData;
class UAbilitySystemComponent;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FXPGain, float, _fXP);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStatsChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FProgressionUpdated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FProgressionRewardUnlocked, ECharacterProgressionRewardTypes, _eRewardType, const FCharacterProgressionReward&, _reward, UCharacterProgressionUnlockDB*, _unlock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPendantIncrement, EPendantUpdate, _ePendantUpdate, AActor*, _actorGivingCharge);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResourceAmountChanged, int32, _iNewAmount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLevelUp);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FFightingStyleUnlockProgress, int32, _iSpecialAbility, float, _fPrevProgress, float, _fIncrement, bool, _bValidated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDeathCounterDecrement, int32, _iCount, AActor*, _actor, bool, _bAllowDecrement);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackUnlocked, const FAttackDataRow&, _attack);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttackProgressionUpdated, const FAttackDataRow&, _attack, int32, _iAmount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackProgressionLost, AFightingCharacter*, _opponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackPendingProgressionValidated, AFightingCharacter*, _opponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FAttackPendingProgressionUpdated, AFightingCharacter*, _opponent, FName, _attack, int32, _XP, EPendingttackXPType, _eXPType, bool, _bDiscovered);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttackDiscovered, const FAttackDataRow&, _attack, AFightingCharacter*, _opponent);
    
    UPROPERTY(BlueprintAssignable)
    FXPGain OnGlobalXPGain;
    
    UPROPERTY(BlueprintAssignable)
    FStatsChanged OnStatsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterStatChangedDelegate OnStatChanged;
    
    UPROPERTY(BlueprintAssignable)
    FLevelUp OnNotifyLevelUp;
    
    UPROPERTY(BlueprintAssignable)
    FProgressionRewardUnlocked OnNotifyProgressionRewardUnlocked;
    
    UPROPERTY(BlueprintAssignable)
    FProgressionUpdated OnProgressionUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FAttackDiscovered OnAttackDiscovered;
    
    UPROPERTY(BlueprintAssignable)
    FAttackProgressionUpdated OnAttackUnlockProgress;
    
    UPROPERTY(BlueprintAssignable)
    FAttackProgressionLost OnAttackProgressionLost;
    
    UPROPERTY(BlueprintAssignable)
    FAttackPendingProgressionUpdated OnAttackPendingProgressionUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FAttackPendingProgressionValidated OnAttackPendingProgressionValidated;
    
    UPROPERTY(BlueprintAssignable)
    FAttackUnlocked OnAttackUnlocked;
    
    UPROPERTY(BlueprintAssignable)
    FFightingStyleUnlockProgress OnSpecialAbilityUnlockProgress;
    
    UPROPERTY(BlueprintAssignable)
    FOnResourceAmountChanged OnResourceAmountChanged;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FPendantIncrement m_OnPendantIncremented;
    
    UPROPERTY(BlueprintAssignable)
    FDeathCounterDecrement m_OnDeathCounterDecrement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStatsDB* m_StatsDB;
    
    UPROPERTY(BlueprintReadOnly)
    EWeightCategory m_eWeightCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_iMaxAge;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bUsePendant;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bAllowDeathCounterDecrement;
    
private:
    UPROPERTY(EditAnywhere)
    float m_fAIPendingAttackXCancelDelay;
    
    UPROPERTY(EditAnywhere)
    UCharacterProgressionDB* m_CharacterProgressionDB;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> m_agingPerPendantCharge;
    
    UPROPERTY(Transient)
    UBaseWeaponData* m_weaponData;
    
    UPROPERTY(EditAnywhere)
    TArray<FFocusPointsGainStruct> m_FocusPointsGainDefinition;
    
    UPROPERTY(Instanced)
    UAbilitySystemComponent* m_AbilitySystem;
    
public:
    UStatsComponent();
private:
    UFUNCTION()
    void OnStatsChangedCallback();
    
    UFUNCTION()
    void OnPendingAttackXPOpponentEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
    UFUNCTION()
    void OnPendingAttackXPOpponentAITimeOut(AFightingCharacter* _ai);
    
public:
    UFUNCTION()
    void OnOwnerKilledSomething(AActor* _victim, bool _bIsOnlyAssist, bool _bKillingBlow, AActor* _Instigator, const FDamageInfos& _damage);
    
private:
    UFUNCTION()
    void OnMatchStarted();
    
public:
    UFUNCTION()
    void OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData);
    
    UFUNCTION(BlueprintNativeEvent)
    int32 GetXPBonusOnKill(const AActor* _victim) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateChargeLimit();
    
private:
    UFUNCTION(BlueprintCallable)
    void BPF_UnlockReward(ECharacterProgressionRewardTypes _eReward, bool _bNotify);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_UnlockProgressionRewards(int32 _iPrevLevel, int32 _iNewLevel, TArray<ECharacterProgressionRewardTypes>& _rewards, bool _bNotify, ECharacterProgressionRewardConditions _eLevelType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetStat_Float(ECharacterStat _eStat, float _fValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetStat(ECharacterStat _eStat, int32 _iValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCharacterAge(int32 _iAge);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetStat(ECharacterStat _eStat);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetDeathCounter(AActor* _actorGivingCharge);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetCharacterStats();
    
private:
    UFUNCTION(BlueprintCallable)
    void BPF_LockReward(ECharacterProgressionRewardTypes _eReward);
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_IsProgressionRewardUnlocked(const ECharacterProgressionRewardTypes _eReward) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_IncrementPendantCharge(int32 _iChargesToAdd, AActor* _actorGivingCharge);
    
    UFUNCTION(BlueprintPure)
    float BPF_GetWeightRatio(EStatsWeaponComputingMethod _eStatsComputingMethod, bool _bWithItemEffects) const;
    
    UFUNCTION(BlueprintPure)
    EWeightCategory BPF_GetWeightCategory() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetTotalPendingAttackXP(AFightingCharacter* _attacker);
    
    UFUNCTION(BlueprintPure)
    float BPF_GetStat_Float(ECharacterStat _eStat) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetStat(ECharacterStat _eStat) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetSparePoints() const;
    
    UFUNCTION(BlueprintPure)
    FText BPF_GetRewardNotificationText(ECharacterProgressionRewardTypes _eReward, UCharacterProgressionUnlockDB* _unlock);
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> BPF_GetRewardNotificationIcon(ECharacterProgressionRewardTypes _eReward, UCharacterProgressionUnlockDB* _unlock);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 BPF_GetRequiredXPForLevel(const int32 _iNewWantedLevel) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetPendingAttackXP(AFightingCharacter* _attacker, const FName& _attackName, EPendingttackXPType _eXPType) const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetPendingAttacks(AFightingCharacter* _attacker, TArray<FName>& _outAttacks);
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetGlobalXP() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetGlobalLevel() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetFocusPointsRefillBonus(FSCUserDefinedEnumHandler _focusGainEnum) const;
    
    UFUNCTION(BlueprintPure)
    ECharacterStat BPF_GetCharacterStatFromAttribute(const FGameplayAttribute& _attribute) const;
    
    UFUNCTION(BlueprintPure)
    UCharacterProgressionDB* BPF_GetCharacterProgressionDB();
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetCharacterAge() const;
    
    UFUNCTION(BlueprintPure)
    EAttackLearningState BPF_GetAttackLearningState(const FName& _attackName);
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetAgeIncrement(int32 _iPendantChargeIdx);
    
    UFUNCTION(BlueprintPure)
    void BPF_GenerateDeckDetailsForAttack(FCombatDeckDetails& _deckDetails, FName _attack, bool _bIsMirror, EStatsWeaponComputingMethod _eComputingMethod);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DecrementDeathCounter(int32 _iCount, AActor* _actor);
    
    UFUNCTION(BlueprintPure)
    EWeightCategory BPF_ComputeWeightCategory(EStatsWeaponComputingMethod _eStatsComputingMethod, bool _bWithItemEffects) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float BPF_ComputeDamageOnBlockingSword(float _fAttackDamage, float _fAttackingWeaponWeight, float _fBlockingWeaponWeight, bool _bGuardBroken) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float BPF_ComputeDamageOnAttackingSword(float _fAttackDamage, float _fAttackingWeaponWeight, float _fBlockingWeaponWeight, bool _bGuardBroken, bool _bGuarding, float _fHittedCharNormalDefense, float _fHittedCharSpecialDefense) const;
    
    UFUNCTION(BlueprintNativeEvent)
    float BPF_ComputeDamage(float _fAttackDamage, float _fEquipmentDefense, bool _bSpecialDamage) const;
    
    UFUNCTION(BlueprintCallable)
    bool BPF_CanResetStatPoints();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddStat_Float(ECharacterStat _eStat, float _fAddedValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddStat(ECharacterStat _eStat, int32 _iAddedValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddPendingAttackXP(AFightingCharacter* _attacker, const FName& _attackName, int32 _iXP, EPendingttackXPType _eXPType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddGlobalXP(EEarnXPInstigator _eXPInstigator, int32 _iXP, bool _bNotify);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddAttackXP(const FName& _attackName, int32 _iXP, bool& _bLearnt);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_WeightCategoryChanged(EWeightCategory _eWeightCategory);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_StatChanged(ECharacterStat _eStat, int32 _previousValue, int32 _currentValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_SparePointsWin(int32 _iNbSparePointsWin);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetXPGain(AActor* _victim, int32 VictimLevel, int32& XPLevel);
    
};

