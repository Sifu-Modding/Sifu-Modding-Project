#pragma once
#include "CoreMinimal.h"
#include "SCActor.h"
#include "EFirstWaveSpawnMethod.h"
#include "WaveParams.h"
#include "Engine/EngineTypes.h"
#include "AIWaveDirector.generated.h"

class AAISpawner;
class ASCPlayerVolume;
class UPrimitiveComponent;
class AActor;

UCLASS()
class SIFU_API AAIWaveDirector : public ASCActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaveSpawnerRelatedEvent, FName, _WaveName, AAISpawner*, _spawner);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaveRelatedEvent, FName, _WaveName);
    
    UPROPERTY(BlueprintAssignable)
    FWaveRelatedEvent OnWaveSpawnCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FWaveRelatedEvent OnWaveKilled;
    
    UPROPERTY(BlueprintAssignable)
    FWaveSpawnerRelatedEvent OnAIDownFromWave;
    
    UPROPERTY(EditInstanceOnly)
    EFirstWaveSpawnMethod m_eFirstWaveSpawnMethod;
    
    UPROPERTY(EditInstanceOnly)
    FName m_FirstWavePreset;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FWaveParams> m_WaveParams;
    
    UPROPERTY(EditInstanceOnly)
    TArray<ASCPlayerVolume*> m_FirstWaveSpawnVolumes;
    
    UPROPERTY(EditInstanceOnly)
    int32 m_iMaxNumberOfAIsSpawned;
    
private:
    UPROPERTY()
    int32 m_iWaveIncrementalIndex;
    
public:
    AAIWaveDirector();
private:
    UFUNCTION()
    void OnPlayerOverlapSpawningVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    bool BPF_SpawnWaveByName(FName _WaveName, FName _preset);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_SpawnNextWave(FName _preset);
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetRemainingAIsInWaves() const;
    
};

