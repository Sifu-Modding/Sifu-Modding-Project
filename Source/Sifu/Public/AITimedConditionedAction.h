#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIConditionedAction.h"
#include "AITimedConditionedAction.generated.h"

USTRUCT(BlueprintType)
struct FAITimedConditionedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_TimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIConditionedAction m_Action;
    
    SIFU_API FAITimedConditionedAction();
};

