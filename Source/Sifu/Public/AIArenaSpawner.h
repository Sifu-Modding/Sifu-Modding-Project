#pragma once
#include "CoreMinimal.h"
#include "CarriedPropsContainer.h"
#include "AISpawner.h"
#include "CarriedWeaponContainer.h"
#include "AICharacterSpawnParamsArray.h"
#include "SpawningClassContainer.h"
#include "AIArenaSpawner.generated.h"

UCLASS()
class SIFU_API AAIArenaSpawner : public AAISpawner {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    FName m_CurrentPreset;
    
    UPROPERTY(EditAnywhere)
    FName m_DefaultPreset;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FAICharacterSpawnParamsArray> m_SpawnParamsPresets;
    
public:
    AAIArenaSpawner();
    UFUNCTION(BlueprintCallable)
    void BPF_SetCurrentPreset(FName _currentPreset);
    
    UFUNCTION(BlueprintCallable)
    void BPF_GetSpawningClassesFromParams(TArray<FSpawningClassContainer>& _outSpawningClassContainers);
    
    UFUNCTION(BlueprintCallable)
    void BPF_GetCarriedWeaponsFromParams(TArray<FCarriedWeaponContainer>& _outCarriedWeaponContainers);
    
    UFUNCTION(BlueprintCallable)
    void BPF_GetCarriedPropsFromParams(TArray<FCarriedPropsContainer>& _outCarriedPropsContainers);
    
};

