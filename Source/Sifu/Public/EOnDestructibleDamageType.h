#pragma once
#include "CoreMinimal.h"
#include "EOnDestructibleDamageType.generated.h"

UENUM(BlueprintType)
enum class EOnDestructibleDamageType : uint8 {
    FromObject,
    FromCharacter,
    AlwaysBreakOnHit,
    Custom,
};

