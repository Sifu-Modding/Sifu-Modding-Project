#pragma once
#include "CoreMinimal.h"
#include "AIAttackHitDetectionCone.h"
#include "AIAttackHitDetectionVolume.generated.h"

USTRUCT(BlueprintType)
struct FAIAttackHitDetectionVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIAttackHitDetectionCone> m_RangedCones;
    
    SIFU_API FAIAttackHitDetectionVolume();
};

