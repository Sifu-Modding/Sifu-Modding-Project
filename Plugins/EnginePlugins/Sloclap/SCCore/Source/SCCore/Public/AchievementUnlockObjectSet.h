#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AchievementUnlockConditionStruct.h"
#include "AchievementUnlockObjectSet.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FAchievementUnlockObjectSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_EditorTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FAchievementUnlockConditionStruct> m_Unlocks;
    
    FAchievementUnlockObjectSet();
};

