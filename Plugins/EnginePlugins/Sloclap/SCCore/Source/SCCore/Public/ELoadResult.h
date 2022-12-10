#pragma once
#include "CoreMinimal.h"
#include "ELoadResult.generated.h"

UENUM()
enum class ELoadResult {
    Valid,
    Empty,
    HashInvalid,
    FileNotFound,
    SaveNotCreated,
    UnspecifiedError,
    Count,
    None,
};

