#pragma once
#include "CoreMinimal.h"
#include "EReplayStopRecordingReason.generated.h"

UENUM()
enum class EReplayStopRecordingReason : uint8 {
    None,
    Manual,
    SizeLimit,
    TimeLimit,
    SequenceStarted,
    PlayerTeleported,
    Count,
    Invalid,
};

