#pragma once
#include "CoreMinimal.h"
#include "AvailabilityLayerCache.h"
#include "AvailabilityLayerCaches.generated.h"

USTRUCT(BlueprintType)
struct FAvailabilityLayerCaches {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAvailabilityLayerCache> m_layers;
    
    SIFU_API FAvailabilityLayerCaches();
};

