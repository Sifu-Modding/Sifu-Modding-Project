#pragma once
#include "CoreMinimal.h"
#include "EOrderServiceState.generated.h"

UENUM(BlueprintType)
enum class EOrderServiceState : uint8 {
    None,
    Running,
    Pending,
    Finished = 0x4,
    All = 0x7,
};

