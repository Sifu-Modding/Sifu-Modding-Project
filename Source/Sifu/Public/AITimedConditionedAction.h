#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIConditionedAction.h"
#include "AITimedConditionedAction.generated.h"

USTRUCT()
struct FAITimedConditionedAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatRange m_TimeRange;
    
    UPROPERTY(EditAnywhere)
    FAIConditionedAction m_Action;
    
    SIFU_API FAITimedConditionedAction();
};

