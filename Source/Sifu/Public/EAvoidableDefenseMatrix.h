#pragma once
#include "CoreMinimal.h"
#include "EAvoidableDefenseMatrix.generated.h"

UENUM(BlueprintType)
enum class EAvoidableDefenseMatrix : uint8 {
    None,
    Jump,
    Duck,
    SideLeft = 4,
    SideRight = 8,
};

