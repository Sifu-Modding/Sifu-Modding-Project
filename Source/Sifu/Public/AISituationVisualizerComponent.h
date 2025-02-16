#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AISituationVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAISituationVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAISituationVisualizerComponent(const FObjectInitializer& ObjectInitializer);

};

