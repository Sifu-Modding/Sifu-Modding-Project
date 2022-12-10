#pragma once
#include "CoreMinimal.h"
#include "HitRequest.h"
#include "Engine/EngineTypes.h"
#include "NetOrderStructSnapAnim.h"
#include "ImpactResult.h"
#include "DefenseAnimInfos.h"
#include "NetOrderStructGrab.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructGrab : public FNetOrderStructSnapAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool m_bFromParry;
    
    UPROPERTY(BlueprintReadOnly)
    FHitResult m_Hit;
    
    UPROPERTY(BlueprintReadOnly)
    FImpactResult m_Impact;
    
    UPROPERTY(BlueprintReadOnly)
    FHitRequest m_HitRequest;
    
    UPROPERTY(BlueprintReadOnly)
    FDefenseAnimInfos m_GrabAnimInfos;
    
    SIFU_API FNetOrderStructGrab();
};

