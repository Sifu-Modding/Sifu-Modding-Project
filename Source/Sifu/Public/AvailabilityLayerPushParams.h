#pragma once
#include "CoreMinimal.h"
#include "EALBinaryOperation.h"
#include "AvailabilityLayerPushParams.generated.h"

class UAvailabilityLayerData;

USTRUCT(BlueprintType)
struct FAvailabilityLayerPushParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_availabilityLayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EALBinaryOperation m_eOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iPriority;
    
    SIFU_API FAvailabilityLayerPushParams();
};

