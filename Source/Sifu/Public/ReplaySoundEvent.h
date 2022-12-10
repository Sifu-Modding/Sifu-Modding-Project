#pragma once
#include "CoreMinimal.h"
#include "ReplaySerializedEvent.h"
#include "ReplaySoundEvent.generated.h"

USTRUCT()
struct FReplaySoundEvent : public FReplaySerializedEvent {
    GENERATED_BODY()
public:
    SIFU_API FReplaySoundEvent();
};

