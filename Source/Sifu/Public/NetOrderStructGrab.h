#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DefenseAnimInfos.h"
#include "HitRequest.h"
#include "ImpactResult.h"
#include "NetOrderStructSnapAnim.h"
#include "NetOrderStructGrab.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructGrab : public FNetOrderStructSnapAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFromParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult m_Hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactResult m_Impact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitRequest m_HitRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefenseAnimInfos m_GrabAnimInfos;
    
    SIFU_API FNetOrderStructGrab();
};

