#pragma once
#include "CoreMinimal.h"
#include "TrackingPayloadActivateTimedMetric.generated.h"

USTRUCT()
struct FTrackingPayloadActivateTimedMetric {
    GENERATED_BODY()
public:
    UPROPERTY()
    int64 offsetPlaytime;
    
    SIFU_API FTrackingPayloadActivateTimedMetric();
};

