#pragma once
#include "CoreMinimal.h"
#include "EWorldTravelLoadSaveStrategy.generated.h"

UENUM(BlueprintType)
enum class EWorldTravelLoadSaveStrategy : uint8 {
    Nothing,
    SaveOnly,
    LoadOnly,
    SaveThenLoad,
    UseDefaultSaveMode,
};

