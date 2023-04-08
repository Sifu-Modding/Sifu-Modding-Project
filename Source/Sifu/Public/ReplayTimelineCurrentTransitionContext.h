#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplayTimelineCurrentTransitionContext.generated.h"

USTRUCT(BlueprintType)
struct FReplayTimelineCurrentTransitionContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_vStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_vEndPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHighlighted;
    
    SIFU_API FReplayTimelineCurrentTransitionContext();
};

