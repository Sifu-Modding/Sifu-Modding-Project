#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplayTimelineCurrentTransitionContext.generated.h"

USTRUCT(BlueprintType)
struct FReplayTimelineCurrentTransitionContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector2D m_vStartPosition;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D m_vEndPosition;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bHighlighted;
    
    SIFU_API FReplayTimelineCurrentTransitionContext();
};

