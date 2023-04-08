#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HitRequest.h"
#include "ImpactResult.h"
#include "NetOrderStructPlayAnim.h"
#include "NetOrderStructDefenseSuccess.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructDefenseSuccess : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult m_Hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactResult m_Impact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitRequest m_Request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_OpponentGoingStructureBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bReorientToAttacker;
    
    SIFU_API FNetOrderStructDefenseSuccess();
};

