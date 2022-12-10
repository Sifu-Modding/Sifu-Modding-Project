#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplayTimelineTimeDilationData.generated.h"

USTRUCT(BlueprintType)
struct FReplayTimelineTimeDilationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector2D m_vStartPosition;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D m_vEndPosition;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bTransitionVisible;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<float> m_IndicatorDilatedTimes;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fTimeDilation;
    
    SIFU_API FReplayTimelineTimeDilationData();
};

