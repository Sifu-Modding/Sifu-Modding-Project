#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionNoAttackPosition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionNoAttackPosition : public UAIComboCondition {
    GENERATED_BODY()
public:
    UComboAIConditionNoAttackPosition();
};

