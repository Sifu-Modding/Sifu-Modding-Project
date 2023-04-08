#pragma once
#include "CoreMinimal.h"
#include "EActivityWantedState.generated.h"

UENUM(BlueprintType)
enum class EActivityWantedState : uint8 {
    Started,
    StartedThenEnded,
    Ended,
    None,
};

