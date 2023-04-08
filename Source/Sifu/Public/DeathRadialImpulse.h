#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "DeathRadialImpulse.generated.h"

USTRUCT(BlueprintType)
struct FDeathRadialImpulse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERadialImpulseFalloff> Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypesToAffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImpulseVelChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructibleDamage;
    
    SIFU_API FDeathRadialImpulse();
};

