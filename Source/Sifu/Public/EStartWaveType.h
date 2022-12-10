#pragma once
#include "CoreMinimal.h"
#include "EStartWaveType.generated.h"

UENUM()
enum class EStartWaveType : uint8 {
    Automatic,
    OnAnEvent,
};

