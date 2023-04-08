#pragma once
#include "CoreMinimal.h"
#include "ETraversalComputationBehavior.generated.h"

UENUM(BlueprintType)
enum class ETraversalComputationBehavior : uint8 {
    Complete,
    FirstImpactOnly,
    SpecificTraversalTypeChecksOnyly,
};

