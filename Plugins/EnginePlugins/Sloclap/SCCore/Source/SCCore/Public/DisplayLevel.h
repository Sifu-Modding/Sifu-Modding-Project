#pragma once
#include "CoreMinimal.h"
#include "DisplayLevel.generated.h"

UENUM(BlueprintType)
enum class DisplayLevel : uint8 {
    NoLogging,
    Fatal,
    Error,
    Warning,
    Log,
    Verbose,
    VeryVerbose,
    All = VeryVerbose,
    NumVerbosity,
    VerbosityMask = 15,
    SetColor = 64,
    BreakOnLog = 128,
};

