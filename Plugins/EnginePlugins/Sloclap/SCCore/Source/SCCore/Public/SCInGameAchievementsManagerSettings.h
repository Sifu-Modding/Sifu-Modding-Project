#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "AchievementUnlockConditionStruct.h"
#include "AchievementUnlockConditionSet.h"
#include "GameplayTagContainer.h"
#include "AchievementUnlockObjectSet.h"
#include "SCInGameAchievementsManagerSettings.generated.h"

class UAchievementUnlockCondition;

UCLASS(BlueprintType)
class SCCORE_API USCInGameAchievementsManagerSettings : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSaveCheckFinished);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjectUnlockedDynamic, FGameplayTag, _objectUnlockedTag);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAchievementUnlockConditionSet> m_InGameAchievements;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAchievementUnlockConditionSet> m_OnInitAchievements;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAchievementUnlockConditionSet> m_OnEntitlementQueryCompletedAchievements;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAchievementUnlockConditionSet> m_OnSaveLoadedAchievements;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAchievementUnlockConditionSet> m_OnSaveLoadedRetroCompatibility;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_NewlyUnlockedCategories;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAchievementUnlockObjectSet> m_ObjectUnlocks;
    
    UPROPERTY(BlueprintAssignable)
    FOnObjectUnlockedDynamic m_OnObjectUnlocked;
    
    UPROPERTY(BlueprintAssignable)
    FOnSaveCheckFinished m_OnSaveCheckFinished;
    
    USCInGameAchievementsManagerSettings();
    UFUNCTION(BlueprintPure)
    FAchievementUnlockConditionStruct BPF_GetUnlockConditionStructFromTag(const FGameplayTag& _ObjectTag) const;
    
    UFUNCTION(BlueprintPure)
    UAchievementUnlockCondition* BPF_GetUnlockConditionInstanceFromTag(FGameplayTag _wantedUnlockCondition) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UAchievementUnlockCondition*> BPF_GetAllUnlockConditionInstances() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FAchievementUnlockConditionStruct> BPF_GetAllObjectUnlock() const;
    
};

