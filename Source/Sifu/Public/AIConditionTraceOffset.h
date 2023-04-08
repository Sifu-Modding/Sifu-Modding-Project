#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAIConditionTraceOffsetContext.h"
#include "AIConditionTraceOffset.generated.h"

USTRUCT(BlueprintType)
struct FAIConditionTraceOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIConditionTraceOffsetContext m_eRelativeTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vOffset;
    
    SIFU_API FAIConditionTraceOffset();
};

