#pragma once
#include "CoreMinimal.h"
#include "EAIConditionTraceOffsetContext.h"
#include "UObject/NoExportTypes.h"
#include "AIConditionTraceOffset.generated.h"

USTRUCT(BlueprintType)
struct FAIConditionTraceOffset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAIConditionTraceOffsetContext m_eRelativeTo;
    
    UPROPERTY(EditAnywhere)
    FVector m_vOffset;
    
    SIFU_API FAIConditionTraceOffset();
};

