#pragma once
#include "CoreMinimal.h"
#include "SCAIActionMemoryEntry.h"
#include "AIActionWallJumpAttackMemory.generated.h"

USTRUCT(BlueprintType)
struct FAIActionWallJumpAttackMemory : public FSCAIActionMemoryEntry {
    GENERATED_BODY()
public:
    SIFU_API FAIActionWallJumpAttackMemory();
};

