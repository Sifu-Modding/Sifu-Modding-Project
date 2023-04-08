#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HitRequest.h"
#include "ImpactResult.h"
#include "NetOrderStructAttackEnv.h"
#include "NetOrderStructTakedown.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructTakedown : public FNetOrderStructAttackEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFromParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnvironementalTakedown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult m_ParryHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactResult m_ParryImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitRequest m_ParryHitRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult m_ImpactOnEnv;
    
    SIFU_API FNetOrderStructTakedown();
};

