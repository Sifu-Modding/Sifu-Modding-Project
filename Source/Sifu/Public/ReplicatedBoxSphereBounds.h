#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplicatedBoxSphereBounds.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedBoxSphereBounds {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool m_bIsValid;
    
    UPROPERTY()
    FBoxSphereBounds m_Bounds;
    
    SIFU_API FReplicatedBoxSphereBounds();
};

