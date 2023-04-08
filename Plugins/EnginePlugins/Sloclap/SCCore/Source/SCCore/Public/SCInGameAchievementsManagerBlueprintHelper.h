#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AchievementUnlockConditionStruct.h"
#include "SCInGameAchievementsManagerBlueprintHelper.generated.h"

class UAchievementUnlockCondition;
class USCInGameAchievementsManagerSettings;

UCLASS(Blueprintable)
class SCCORE_API USCInGameAchievementsManagerBlueprintHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCInGameAchievementsManagerBlueprintHelper();
    UFUNCTION(BlueprintCallable)
    static void BPF_TriggerSaveAchievements();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_RemoveObjectFromNewlyUnlocked(FGameplayTag _newlyUnlockedCategory, FGameplayTag _objectToRemove);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_OnMatchEnded(bool _bHasWon);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsUnlockConditionCurrentlyActive(UAchievementUnlockCondition* _unlockCondition);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsObjectUnlocked(FGameplayTag _ObjectTag);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsObjectNewlyUnlocked(FGameplayTag _newlyUnlockedCategory, FGameplayTag _ObjectTag);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsAchievementUnlocked(FGameplayTag _achievementTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_GetObjectUnlockInfo(FGameplayTag _ObjectTag, FAchievementUnlockConditionStruct& _outObjectUnlockCondition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer BPF_GetObjectsNewlyUnlocked(FGameplayTag _newlyUnlockCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UAchievementUnlockCondition*> BPF_GetCurrentAchievementsToUnlock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UAchievementUnlockCondition*> BPF_GetAllAchievementsToUnlock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USCInGameAchievementsManagerSettings* BPF_GetAchievementManagerSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAchievementUnlockCondition* BPF_GetAchievementConditionFromTag(FGameplayTag _achievementTag);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_AllowOnObjectUnlockedBroadcast(bool _bAllowBroadcast);
    
};

