#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionGameDifficulty.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionGameDifficulty : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 m_uiGameDifficultyFlags;
    
    UComboAIConditionGameDifficulty();
};

