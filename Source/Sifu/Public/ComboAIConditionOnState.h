#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "UObject/NoExportTypes.h"
#include "ComboAIConditionOnState.generated.h"

UCLASS(Abstract, EditInlineNew)
class SIFU_API UComboAIConditionOnState : public UAIComboCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FFloatRange m_RandomDelay;
    
public:
    UComboAIConditionOnState();
};

