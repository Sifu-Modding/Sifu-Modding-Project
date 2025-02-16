#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SoundTensionPortalVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API USoundTensionPortalVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USoundTensionPortalVisualizerComponent(const FObjectInitializer& ObjectInitializer);

};

