#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AbilityDelegateHandler.h"
#include "AbilityDynamicDelegateDelegate.h"
#include "OnSkillConsolidatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "SCAbilitySystemComponent.generated.h"

class UGameplayAbility;
class UGameplayEffect;
class USkillGameplayEffect;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API USCAbilitySystemComponent : public UAbilitySystemComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> m_StartEffects;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkillConsolidated m_OnSkillConsolidated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UGameplayAbility>, FAbilityDelegateHandler> m_OrderDelegateHandler;
    
public:
    USCAbilitySystemComponent();
    UFUNCTION(BlueprintCallable)
    void BPF_UnlockSkill(TSubclassOf<USkillGameplayEffect> _effect, bool _bForce);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnlockPermanentSkills(const TMap<TSubclassOf<USkillGameplayEffect>, int32>& _unlockedSkillOccurences);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnlockAllSkills(const FString& _path);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetShrineEffects();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveLooseGameplayTag(FGameplayTag _tag);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveAndSaveGameplayTag(const FGameplayTagContainer& _tag);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnAbilityDeactived_Unbind(TSubclassOf<UGameplayAbility> _abilityClass, FAbilityDynamicDelegate _delegate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnAbilityDeactived_Bind(TSubclassOf<UGameplayAbility> _abilityClass, FAbilityDynamicDelegate _delegate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnAbilityActived_Unbind(TSubclassOf<UGameplayAbility> _abilityClass, FAbilityDynamicDelegate _delegate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnAbilityActived_Bind(TSubclassOf<UGameplayAbility> _abilityClass, FAbilityDynamicDelegate _delegate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LockAllSkills(bool _bResetSave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsSkillUnlocked(TSubclassOf<USkillGameplayEffect> _effect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInStartEffects(TSubclassOf<USkillGameplayEffect> _effect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAbilityActive(TSubclassOf<UGameplayAbility> _abilityClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<USkillGameplayEffect>> BPF_GetUnlockedSkills() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetNotificationsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetCooldownRemainingForTag(FGameplayTagContainer _inCooldownTags, float& _fTimeRemaining, float& _fCooldownDuration);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ConsolidateSkill(TSubclassOf<USkillGameplayEffect> _effect);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearAndSaveGameplayTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanUnlockSkill(TSubclassOf<USkillGameplayEffect> _effect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanConsolidatekSkill(TSubclassOf<USkillGameplayEffect> _effect);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddShrineEffect(TSubclassOf<UGameplayEffect> _effect);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddLooseGameplayTag(FGameplayTag _tag);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddAndSaveGameplayTag(const FGameplayTagContainer& _tag, bool _bNeedSaveGame);
    
};

