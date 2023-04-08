#pragma once
#include "CoreMinimal.h"
#include "EStartWaveType.generated.h"

UENUM(BlueprintType)
enum class EStartWaveType : uint8 {
    Automatic,
    OnAnEvent,
};

