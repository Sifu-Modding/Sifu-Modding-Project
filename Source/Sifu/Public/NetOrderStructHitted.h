#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HitRequest.h"
#include "HittedAnimContainer.h"
#include "ImpactResult.h"
#include "NetOrderStructPlayAnim.h"
#include "NetOrderStructHitted.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructHitted : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitRequest m_Request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactResult m_ImpactResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult m_HitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHittedAnimContainer m_HittedAnimContainer;
    
    SIFU_API FNetOrderStructHitted();
};

