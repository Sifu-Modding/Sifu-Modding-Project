#pragma once
#include "CoreMinimal.h"
#include "PropertyReactionMovement.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FPropertyReactionMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_StateMoveDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStateDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDuration;
    
    SIFU_API FPropertyReactionMovement();
};

