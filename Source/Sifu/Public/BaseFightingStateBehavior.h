#pragma once
#include "CoreMinimal.h"
#include "BaseFightingStateBehavior.generated.h"

class UAvailabilityLayerData;

USTRUCT(BlueprintType)
struct FBaseFightingStateBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsPersistent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iPersistencePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_SuperAvailabilityLayer;
    
    SIFU_API FBaseFightingStateBehavior();
};

