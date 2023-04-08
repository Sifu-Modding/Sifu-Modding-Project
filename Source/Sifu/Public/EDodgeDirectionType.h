#pragma once
#include "CoreMinimal.h"
#include "EDodgeDirectionType.generated.h"

UENUM(BlueprintType)
enum class EDodgeDirectionType : uint8 {
    Side,
    Back,
    Count,
    None,
};

