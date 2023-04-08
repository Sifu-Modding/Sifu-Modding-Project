#pragma once
#include "CoreMinimal.h"
#include "ESCCardinalPoints.h"
#include "NavMeshFreeRange.generated.h"

USTRUCT(BlueprintType)
struct FNavMeshFreeRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCCardinalPoints m_eOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRange;
    
    SIFU_API FNavMeshFreeRange();
};

