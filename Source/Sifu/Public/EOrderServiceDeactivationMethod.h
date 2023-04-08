#pragma once
#include "CoreMinimal.h"
#include "EOrderServiceDeactivationMethod.generated.h"

UENUM(BlueprintType)
enum class EOrderServiceDeactivationMethod : uint8 {
    None,
    CleanStop,
    Interruption,
};

