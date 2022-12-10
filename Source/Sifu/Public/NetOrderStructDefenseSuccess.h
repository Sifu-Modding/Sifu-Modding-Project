#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnim.h"
#include "HitRequest.h"
#include "Engine/EngineTypes.h"
#include "ImpactResult.h"
#include "NetOrderStructDefenseSuccess.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructDefenseSuccess : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FHitResult m_Hit;
    
    UPROPERTY(BlueprintReadOnly)
    FImpactResult m_Impact;
    
    UPROPERTY(BlueprintReadOnly)
    FHitRequest m_Request;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_OpponentGoingStructureBroken;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bReorientToAttacker;
    
    SIFU_API FNetOrderStructDefenseSuccess();
};

