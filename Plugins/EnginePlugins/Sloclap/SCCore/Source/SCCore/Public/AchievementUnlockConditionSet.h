#pragma once
#include "CoreMinimal.h"
#include "AchievementUnlockConditionClassInstance.h"
#include "AchievementUnlockConditionSet.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FAchievementUnlockConditionSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_EditorTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAchievementUnlockConditionClassInstance> m_AchievementSet;
    
    FAchievementUnlockConditionSet();
};

