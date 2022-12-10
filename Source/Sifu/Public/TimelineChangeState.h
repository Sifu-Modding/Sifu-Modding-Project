#pragma once
#include "CoreMinimal.h"
#include "TimelineChangeState.generated.h"

USTRUCT(BlueprintType)
struct FTimelineChangeState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 m_iKeyCountChange;
    
    SIFU_API FTimelineChangeState();
};

