#pragma once
#include "CoreMinimal.h"
#include "AchievementUnlockConditionClassInstance.h"
#include "AchievementUnlockConditionSet.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FAchievementUnlockConditionSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString m_EditorTitle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAchievementUnlockConditionClassInstance> m_AchievementSet;
    
    FAchievementUnlockConditionSet();
};

