#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCVolumeVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCVolumeVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USCVolumeVisualizerComponent(const FObjectInitializer& ObjectInitializer);

};

