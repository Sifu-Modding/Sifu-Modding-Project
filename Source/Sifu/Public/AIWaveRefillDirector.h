#pragma once
#include "CoreMinimal.h"
#include "SCActor.h"
#include "EAIArchetype.h"
#include "AIWaveRefillDirector.generated.h"

class AAISituationActor;
class AAISpawner;
class AAIWaveSpawner;
class AActor;
class ABaseCharacter;
class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API AAIWaveRefillDirector : public ASCActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWaveRelatedSituationComplete, int32, _iWaveIndex, AAISituationActor*, _relatedSituationActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWaveRelatedEvent, int32, _iWaveIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWaveAndSituationComplete, int32, _iWaveIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWaveAIDeath, const AFightingCharacter*, _FightingCharacter, EAIArchetype, _eArchetype);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AAIWaveSpawner>> m_WaveSpawners;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaveRelatedEvent OnWaveCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaveRelatedEvent OnWaveStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaveRelatedSituationComplete OnWaveRelatedSituationComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaveAndSituationComplete OnWaveAndSituationComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaveAIDeath OnWaveAIDeath;
    
    AAIWaveRefillDirector(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSituationAIDeathDetected(ABaseCharacter* _character);
    
    UFUNCTION(BlueprintCallable)
    void OnRelatedSituationActivated(AAISituationActor* _aiSituationActor);
    
    UFUNCTION(BlueprintCallable)
    void OnAIDownDetected(AAISpawner* _spawner);
    
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsWaveInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetAIRemainingInCurrentWave() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_CancelCurrentWave();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnWaveStarted(int32 _iWaveIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnWavesSequenceComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnWaveComplete(int32 _iWaveIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRelatedAISituationComplete(int32 _iWaveIndex, AAISituationActor* _situationActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRefillSequenceStarted(int32 _iCurrentWaveIndex, const TArray<EAIArchetype>& _spawnRequests);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRefillSequenceEnded(int32 _iCurrentWaveIndex);
    
};

