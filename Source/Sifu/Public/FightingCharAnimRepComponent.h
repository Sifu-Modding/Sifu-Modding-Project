#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceReplicationComponent.h"
#include "FightingCharAnimRepComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UFightingCharAnimRepComponent : public UAnimInstanceReplicationComponent {
    GENERATED_BODY()
public:
    UFightingCharAnimRepComponent(const FObjectInitializer& ObjectInitializer);

};

