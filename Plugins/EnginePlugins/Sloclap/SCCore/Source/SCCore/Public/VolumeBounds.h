#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VolumeBounds.generated.h"

USTRUCT(BlueprintType)
struct FVolumeBounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector Origin;
    
    UPROPERTY(BlueprintReadOnly)
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadOnly)
    float SphereRadius;
    
    SCCORE_API FVolumeBounds();
};

