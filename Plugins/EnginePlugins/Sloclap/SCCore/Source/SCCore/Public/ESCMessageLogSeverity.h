#pragma once
#include "CoreMinimal.h"
#include "ESCMessageLogSeverity.generated.h"

UENUM(BlueprintType)
enum class ESCMessageLogSeverity : uint8 {
    Info,
    Warning,
    Error,
    CriticalError,
};

