#pragma once
#include "CoreMinimal.h"
#include "ESCLevelStreamingState.generated.h"

UENUM(BlueprintType)
enum class ESCLevelStreamingState : uint8 {
    Loaded,
    Visible,
    Unloaded,
    Count,
    None,
};

