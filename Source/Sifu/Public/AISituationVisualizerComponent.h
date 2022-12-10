#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AISituationVisualizerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAISituationVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAISituationVisualizerComponent();
};

