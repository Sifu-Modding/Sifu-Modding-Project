#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIWaveDirectorVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAIWaveDirectorVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAIWaveDirectorVisualizerComponent(const FObjectInitializer& ObjectInitializer);

};

