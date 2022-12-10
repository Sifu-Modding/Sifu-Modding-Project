#pragma once
#include "CoreMinimal.h"
#include "ESCCardinalPoints.h"
#include "NavMeshFreeRange.generated.h"

USTRUCT(BlueprintType)
struct FNavMeshFreeRange {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESCCardinalPoints m_eOrientation;
    
    UPROPERTY(EditAnywhere)
    float m_fRange;
    
    SIFU_API FNavMeshFreeRange();
};

