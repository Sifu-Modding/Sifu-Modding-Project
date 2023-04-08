#pragma once
#include "CoreMinimal.h"
#include "EALBinaryOperation.generated.h"

UENUM(BlueprintType)
enum class EALBinaryOperation : uint8 {
    SET,
    AND,
    OR,
};

