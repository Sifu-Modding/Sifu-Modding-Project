#pragma once
#include "CoreMinimal.h"
#include "ESaveResult.generated.h"

UENUM(BlueprintType)
enum class ESaveResult : uint8 {
    Valid,
    Empty,
    ErrorFileNotCreated,
    ErrorFileCorrupted,
    GenericError,
    HashInvalid,
    NoSaveSystem,
    ObjectToSaveDataFromInvalid,
};

