#pragma once
#include "CoreMinimal.h"
#include "EInheritanceChoice.generated.h"

UENUM(BlueprintType)
enum class EInheritanceChoice : uint8 {
    INHERIT,
    OVERRIDE,
};

