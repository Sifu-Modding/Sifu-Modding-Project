#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MessengerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UMessengerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMessengerComponent();
};

