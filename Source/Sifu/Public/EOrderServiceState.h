#pragma once
#include "CoreMinimal.h"
#include "EOrderServiceState.generated.h"

UENUM(BlueprintType)
enum class EOrderServiceState : uint8 {
    None,
    Running,
    Pending,
    Finished = 4,
    All = 7,
};

