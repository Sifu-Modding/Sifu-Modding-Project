#pragma once
#include "CoreMinimal.h"
#include "ELoadResult.generated.h"

UENUM(BlueprintType)
enum class ELoadResult : uint8 {
    Valid,
    Empty,
    HashInvalid,
    FileNotFound,
    SaveNotCreated,
    UnspecifiedError,
    Count,
    None,
};

