#pragma once
#include "CoreMinimal.h"
#include "SCVolumeVisualizerComponent.h"
#include "SCStreamingVolumeVisualizerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCStreamingVolumeVisualizerComponent : public USCVolumeVisualizerComponent {
    GENERATED_BODY()
public:
    USCStreamingVolumeVisualizerComponent();
};

