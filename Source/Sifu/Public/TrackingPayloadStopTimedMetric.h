#pragma once
#include "CoreMinimal.h"
#include "TrackingPayloadStopTimedMetric.generated.h"

USTRUCT()
struct FTrackingPayloadStopTimedMetric {
    GENERATED_BODY()
public:
    UPROPERTY()
    int64 offsetPlaytime;
    
    UPROPERTY()
    FString Type;
    
    SIFU_API FTrackingPayloadStopTimedMetric();
};

