#pragma once
#include "CoreMinimal.h"
#include "SCActor.h"
#include "EAIArchetype.h"
#include "DamageInfos.h"
#include "AIWaveRefillDirector.generated.h"

class AAIWaveSpawner;
class AFightingCharacter;
class AAISituationActor;
class ABaseCharacter;
class AActor;

UCLASS()
class SIFU_API AAIWaveRefillDirector : public ASCActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWaveRelatedSituationComplete, int32, _iWaveIndex, AAISituationActor*, _relatedSituationActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWaveComplete, int32, _iWaveIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWaveAndSituationComplete, int32, _iWaveIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWaveAIDeath, const AFightingCharacter*, _FightingCharacter, EAIArchetype, _eArchetype);
    
    UPROPERTY(EditInstanceOnly)
    TArray<TSoftObjectPtr<AAIWaveSpawner>> m_WaveSpawners;
    
    UPROPERTY(BlueprintAssignable)
    FOnWaveComplete OnWaveCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnWaveRelatedSituationComplete OnWaveRelatedSituationComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnWaveAndSituationComplete OnWaveAndSituationComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnWaveAIDeath OnWaveAIDeath;
    
    AAIWaveRefillDirector();
private:
    UFUNCTION()
    void OnSituationAIDeathDetected(ABaseCharacter* _character);
    
    UFUNCTION()
    void OnAIDeathDetected(const AFightingCharacter* _character, const FDamageInfos& _damageInfos);
    
    UFUNCTION()
    void OnAIAbandonDetected(AActor* _actor);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_StartWaveByName(FName _WaveName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartWave(int32 _iWaveIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartNextWave();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetRefillEnabled(bool _bRequestImmediateRefill);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetRefillDisabled();
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsWaveInProgress() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetAIRemainingInCurrentWave() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnWaveStarted(int32 _iWaveIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnWavesSequenceComplete();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnWaveComplete(int32 _iWaveIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRelatedAISituationComplete(int32 _iWaveIndex, AAISituationActor* _situationActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRefillSequenceStarted(int32 _iCurrentWaveIndex, const TArray<EAIArchetype>& _spawnRequests);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRefillSequenceEnded(int32 _iCurrentWaveIndex);
    
};

