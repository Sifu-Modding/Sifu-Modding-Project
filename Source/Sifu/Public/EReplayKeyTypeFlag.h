#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyTypeFlag.generated.h"

UENUM(BlueprintType)
enum class EReplayKeyTypeFlag : uint8 {
    None,
    TimeDilation,
};

