#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionGameDifficulty.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionGameDifficulty : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiGameDifficultyFlags;
    
    UComboAIConditionGameDifficulty();

};

