#pragma once
#include "CoreMinimal.h"
#include "AISpawner.h"
#include "EAIArchetype.h"
#include "GameplayTagContainer.h"
#include "EGlobalBehaviors.h"
#include "AIWaveSpawner.generated.h"

UCLASS()
class SIFU_API AAIWaveSpawner : public AAISpawner {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 m_iArchetypesMask;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag m_WaveTag;
    
    UPROPERTY(EditAnywhere)
    EGlobalBehaviors m_eGlobalBehaviorAtSpawn;
    
public:
    AAIWaveSpawner();
    UFUNCTION(BlueprintCallable)
    void BPF_SetArchetypeToSpawn(EAIArchetype _eArchetype);
    
};

