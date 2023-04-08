#pragma once
#include "CoreMinimal.h"
#include "EQuadrantTypes.h"
#include "NetOrderStructPlayAnim.h"
#include "NetOrderStructChargeBuildUp.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructChargeBuildUp : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiCapLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eAttackQuadrant;
    
    SIFU_API FNetOrderStructChargeBuildUp();
};

