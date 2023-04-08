#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "SCUserDefinedEnumHandler.h"
#include "AttackDataRow.h"
#include "CharacterProgressionReward.h"
#include "CharacterStatChangedDelegateDelegate.h"
#include "CombatDeckDetails.h"
#include "DamageInfos.h"
#include "EAttackLearningState.h"
#include "ECharacterProgressionRewardConditions.h"
#include "ECharacterProgressionRewardTypes.h"
#include "ECharacterStat.h"
#include "EEarnXPInstigator.h"
#include "EPendantUpdate.h"
#include "EPendingttackXPType.h"
#include "EStatsWeaponComputingMethod.h"
#include "EWeightCategory.h"
#include "FocusPointsGainStruct.h"
#include "StatsComponent.generated.h"

class AActor;
class AFightingCharacter;
class UAbilitySystemComponent;
class UBaseWeaponData;
class UCharacterProgressionDB;
class UCharacterProgressionUnlockDB;
class UEffectData;
class UStatsDB;
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
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FXPGain OnGlobalXPGain;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatsChanged OnStatsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterStatChangedDelegate OnStatChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelUp OnNotifyLevelUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressionRewardUnlocked OnNotifyProgressionRewardUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressionUpdated OnProgressionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackDiscovered OnAttackDiscovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackProgressionUpdated OnAttackUnlockProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackProgressionLost OnAttackProgressionLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackPendingProgressionUpdated OnAttackPendingProgressionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackPendingProgressionValidated OnAttackPendingProgressionValidated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackUnlocked OnAttackUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFightingStyleUnlockProgress OnSpecialAbilityUnlockProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResourceAmountChanged OnResourceAmountChanged;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPendantIncrement m_OnPendantIncremented;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathCounterDecrement m_OnDeathCounterDecrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStatsDB* m_StatsDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeightCategory m_eWeightCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAgeReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUsePendant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowDeathCounterDecrement;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAIPendingAttackXCancelDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterProgressionDB* m_CharacterProgressionDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_agingPerPendantCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBaseWeaponData* m_weaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFocusPointsGainStruct> m_FocusPointsGainDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* m_AbilitySystem;
    
public:
    UStatsComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnStatsChangedCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnPendingAttackXPOpponentEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnPendingAttackXPOpponentAITimeOut(AFightingCharacter* _ai);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnOwnerKilledSomething(AActor* _victim, bool _bIsOnlyAssist, bool _bKillingBlow, AActor* _Instigator, const FDamageInfos& _damage);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMatchStarted();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsProgressionRewardUnlocked(const ECharacterProgressionRewardTypes _eReward) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_IncrementPendantCharge(int32 _iChargesToAdd, AActor* _actorGivingCharge);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetWeightRatio(EStatsWeaponComputingMethod _eStatsComputingMethod, bool _bWithItemEffects) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeightCategory BPF_GetWeightCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetTotalPendingAttackXP(AFightingCharacter* _attacker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetStat_Float(ECharacterStat _eStat) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetStat(ECharacterStat _eStat) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetSparePoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText BPF_GetRewardNotificationText(ECharacterProgressionRewardTypes _eReward, UCharacterProgressionUnlockDB* _unlock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> BPF_GetRewardNotificationIcon(ECharacterProgressionRewardTypes _eReward, UCharacterProgressionUnlockDB* _unlock);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 BPF_GetRequiredXPForLevel(const int32 _iNewWantedLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetPendingAttackXP(AFightingCharacter* _attacker, const FName& _attackName, EPendingttackXPType _eXPType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetPendingAttacks(AFightingCharacter* _attacker, TArray<FName>& _outAttacks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetGlobalXP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetGlobalLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFocusPointsRefillBonus(FSCUserDefinedEnumHandler _focusGainEnum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterStat BPF_GetCharacterStatFromAttribute(const FGameplayAttribute& _attribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterProgressionDB* BPF_GetCharacterProgressionDB();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCharacterAge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAttackLearningState BPF_GetAttackLearningState(const FName& _attackName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetAgeIncrement(int32 _iPendantChargeIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GenerateDeckDetailsForAttack(FCombatDeckDetails& _deckDetails, FName _attack, bool _bIsMirror, EStatsWeaponComputingMethod _eComputingMethod);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DecrementDeathCounter(int32 _iCount, AActor* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeightCategory BPF_ComputeWeightCategory(EStatsWeaponComputingMethod _eStatsComputingMethod, bool _bWithItemEffects) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float BPF_ComputeDamageOnBlockingSword(float _fAttackDamage, float _fAttackingWeaponWeight, float _fBlockingWeaponWeight, bool _bGuardBroken) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float BPF_ComputeDamageOnAttackingSword(float _fAttackDamage, float _fAttackingWeaponWeight, float _fBlockingWeaponWeight, bool _bGuardBroken, bool _bGuarding, float _fHittedCharNormalDefense, float _fHittedCharSpecialDefense) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_WeightCategoryChanged(EWeightCategory _eWeightCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_StatChanged(ECharacterStat _eStat, int32 _previousValue, int32 _currentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SparePointsWin(int32 _iNbSparePointsWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetXPGain(AActor* _victim, int32 VictimLevel, int32& XPLevel);
    
};

