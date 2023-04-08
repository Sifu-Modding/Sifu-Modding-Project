#pragma once
#include "CoreMinimal.h"
#include "SCAIActionMemoryEntry.h"
#include "AIActionTraversalMemory.generated.h"

USTRUCT(BlueprintType)
struct FAIActionTraversalMemory : public FSCAIActionMemoryEntry {
    GENERATED_BODY()
public:
    SIFU_API FAIActionTraversalMemory();
};

