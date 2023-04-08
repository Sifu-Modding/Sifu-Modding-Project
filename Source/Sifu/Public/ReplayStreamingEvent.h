#pragma once
#include "CoreMinimal.h"
#include "ReplaySerializedEvent.h"
#include "ReplayStreamingEvent.generated.h"

USTRUCT(BlueprintType)
struct FReplayStreamingEvent : public FReplaySerializedEvent {
    GENERATED_BODY()
public:
    SIFU_API FReplayStreamingEvent();
};

