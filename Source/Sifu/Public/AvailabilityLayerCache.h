#pragma once
#include "CoreMinimal.h"
#include "AvailabilityLayerCache.generated.h"

class UGenericAvailabilityLayerDB;

USTRUCT(BlueprintType)
struct FAvailabilityLayerCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericAvailabilityLayerDB* m_DB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iPriority;
    
    SIFU_API FAvailabilityLayerCache();
};

