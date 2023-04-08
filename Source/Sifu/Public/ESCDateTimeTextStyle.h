#pragma once
#include "CoreMinimal.h"
#include "ESCDateTimeTextStyle.generated.h"

UENUM(BlueprintType)
enum class ESCDateTimeTextStyle : uint8 {
    Default,
    Short,
    Medium,
    Long,
    Full,
};

