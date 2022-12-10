#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIWaveDirectorVisualizerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAIWaveDirectorVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAIWaveDirectorVisualizerComponent();
};

