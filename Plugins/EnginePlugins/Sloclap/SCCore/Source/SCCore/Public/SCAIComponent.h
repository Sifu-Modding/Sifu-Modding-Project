#pragma once
#include "CoreMinimal.h"
#include "SCPoolableActorComponent.h"
#include "Components/ActorComponent.h"
#include "SCAIComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCAIComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    USCAIComponent();
    
    // Fix for true pure virtual functions not being implemented
};

