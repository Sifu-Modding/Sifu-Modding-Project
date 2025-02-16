#include "FightingAIController.h"
#include "SCCrowdFollowingComponent.h"

AFightingAIController::AFightingAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USCCrowdFollowingComponent>(TEXT("PathFollowingComponent"))) {
}

void AFightingAIController::OnPerceptionUpdate(const TArray<AActor*>& _updatedActors) {
}

void AFightingAIController::AiSpawned(AAISpawner* _spawner) {
}


