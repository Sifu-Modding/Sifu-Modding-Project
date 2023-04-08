#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HitRequest.h"
#include "ImpactResult.h"
#include "HitDescription.generated.h"

USTRUCT(BlueprintType)
struct FHitDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitRequest m_Request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult m_Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FImpactResult m_ImpactResult;
    
    SIFU_API FHitDescription();
};

