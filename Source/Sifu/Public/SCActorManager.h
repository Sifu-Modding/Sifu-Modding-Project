#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCActorManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API USCActorManager : public UObject {
    GENERATED_BODY()
public:
    USCActorManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* _actorDestroyed);
    
};

