#pragma once
#include "CoreMinimal.h"
#include "EWorldTravelLoadSaveStrategy.generated.h"

UENUM()
enum class EWorldTravelLoadSaveStrategy : uint8 {
    Nothing,
    SaveOnly,
    LoadOnly,
    SaveThenLoad,
};

