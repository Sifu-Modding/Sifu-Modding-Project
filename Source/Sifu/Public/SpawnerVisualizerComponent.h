#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpawnerVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API USpawnerVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USpawnerVisualizerComponent();
};

