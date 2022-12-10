#pragma once
#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "Engine/EngineTypes.h"
#include "DeathRadialImpulse.generated.h"

USTRUCT(BlueprintType)
struct FDeathRadialImpulse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ERadialImpulseFalloff> Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpulseStrength;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypesToAffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImpulseVelChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DestructibleDamage;
    
    SIFU_API FDeathRadialImpulse();
};

