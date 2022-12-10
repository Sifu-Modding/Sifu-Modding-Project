#pragma once
#include "CoreMinimal.h"
#include "ReplayTimelineTimeDilationData.h"
#include "ReplayTimelineTimeDilationContext.generated.h"

USTRUCT(BlueprintType)
struct FReplayTimelineTimeDilationContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FReplayTimelineTimeDilationData> m_Transitions;
    
    SIFU_API FReplayTimelineTimeDilationContext();
};

