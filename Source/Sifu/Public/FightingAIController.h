#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "SCPoolableActor.h"
#include "FightingAIController.generated.h"

class AAISpawner;
class AActor;

UCLASS()
class SIFU_API AFightingAIController : public AAIController, public ISCPoolableActor {
    GENERATED_BODY()
public:
    AFightingAIController();
private:
    UFUNCTION()
    void OnPerceptionUpdate(const TArray<AActor*>& _updatedActors);
    
    UFUNCTION()
    void AiSpawned(AAISpawner* _spawner);
    
    
    // Fix for true pure virtual functions not being implemented
};

