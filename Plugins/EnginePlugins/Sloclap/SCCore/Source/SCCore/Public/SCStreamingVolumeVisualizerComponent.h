#pragma once
#include "CoreMinimal.h"
#include "SCVolumeVisualizerComponent.h"
#include "SCStreamingVolumeVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCStreamingVolumeVisualizerComponent : public USCVolumeVisualizerComponent {
    GENERATED_BODY()
public:
    USCStreamingVolumeVisualizerComponent(const FObjectInitializer& ObjectInitializer);

};

