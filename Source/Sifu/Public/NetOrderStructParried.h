#pragma once
#include "CoreMinimal.h"
#include "HitDescription.h"
#include "NetOrderStructAttackEnv.h"
#include "NetOrderStructParried.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructParried : public FNetOrderStructAttackEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitDescription m_AttackHitDescription;
    
    SIFU_API FNetOrderStructParried();
};

