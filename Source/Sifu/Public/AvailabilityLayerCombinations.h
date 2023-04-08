#pragma once
#include "CoreMinimal.h"
#include "EALBinaryOperation.h"
#include "AvailabilityLayerCombinations.generated.h"

class UAvailabilityLayerData;

USTRUCT(BlueprintType)
struct SIFU_API FAvailabilityLayerCombinations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_LayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EALBinaryOperation m_eOperator;
    
    FAvailabilityLayerCombinations();
};

