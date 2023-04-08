#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HardpointAreaActorVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UHardpointAreaActorVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UHardpointAreaActorVisualizerComponent();
};

