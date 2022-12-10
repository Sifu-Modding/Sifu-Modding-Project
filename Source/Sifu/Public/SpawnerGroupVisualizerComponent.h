#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpawnerGroupVisualizerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API USpawnerGroupVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USpawnerGroupVisualizerComponent();
};

