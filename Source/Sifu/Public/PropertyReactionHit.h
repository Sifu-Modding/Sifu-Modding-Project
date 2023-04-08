#pragma once
#include "CoreMinimal.h"
#include "PropertyReactionHit.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FPropertyReactionHit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHittedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_HittedDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHittedKnockBackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHittedToStateBlendDuration;
    
    SIFU_API FPropertyReactionHit();
};

