#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AchievementUnlockConditionSet.h"
#include "AchievementUnlockConditionStruct.h"
#include "AchievementUnlockObjectSet.h"
#include "SCDelegate.h"
#include "SCInGameAchievementsManagerSettings.generated.h"

class UAchievementUnlockCondition;

UCLASS(Blueprintable)
class SCCORE_API USCInGameAchievementsManagerSettings : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSaveCheckFinished);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjectUnlockedDynamic, FGameplayTag, _objectUnlockedTag);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAchievementsInit);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAchievementUnlockConditionSet> m_InGameAchievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAchievementUnlockConditionSet> m_OnInitAchievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAchievementUnlockConditionSet> m_OnEntitlementQueryCompletedAchievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAchievementUnlockConditionSet> m_OnSaveLoadedAchievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAchievementUnlockConditionSet> m_OnSaveLoadedRetroCompatibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_NewlyUnlockedCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAchievementUnlockObjectSet> m_ObjectUnlocks;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectUnlockedDynamic m_OnObjectUnlocked;
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // USCDelegate::FDynamicMulticast m_OnObjectsUnlockedFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaveCheckFinished m_OnSaveCheckFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAchievementsInit m_OnAchievementsInit;
    
    USCInGameAchievementsManagerSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAchievementUnlockConditionStruct BPF_GetUnlockConditionStructFromTag(const FGameplayTag& _ObjectTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAchievementUnlockCondition* BPF_GetUnlockConditionInstanceFromTag(FGameplayTag _wantedUnlockCondition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAchievementUnlockCondition*> BPF_GetAllUnlockConditionInstances() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAchievementUnlockConditionStruct> BPF_GetAllObjectUnlock() const;
    
};

