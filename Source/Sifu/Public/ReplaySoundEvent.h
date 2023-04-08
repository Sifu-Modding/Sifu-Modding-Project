#pragma once
#include "CoreMinimal.h"
#include "ReplaySerializedEvent.h"
#include "ReplaySoundEvent.generated.h"

USTRUCT(BlueprintType)
struct FReplaySoundEvent : public FReplaySerializedEvent {
    GENERATED_BODY()
public:
    SIFU_API FReplaySoundEvent();
};

