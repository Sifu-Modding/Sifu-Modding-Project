#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplicatedBoxSphereBounds.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedBoxSphereBounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoxSphereBounds m_Bounds;
    
    SIFU_API FReplicatedBoxSphereBounds();
};

