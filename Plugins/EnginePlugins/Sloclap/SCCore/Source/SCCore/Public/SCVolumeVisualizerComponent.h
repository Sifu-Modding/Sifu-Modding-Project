#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCVolumeVisualizerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCVolumeVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USCVolumeVisualizerComponent();
};

