#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCActorManager.generated.h"

class AActor;

UCLASS()
class SIFU_API USCActorManager : public UObject {
    GENERATED_BODY()
public:
    USCActorManager();
private:
    UFUNCTION()
    void OnActorDestroyed(AActor* _actorDestroyed);
    
};

