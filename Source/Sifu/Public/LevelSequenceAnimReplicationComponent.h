#pragma once
#include "CoreMinimal.h"
#include "ReplicatedSequencerAnimMontagePosition.h"
#include "ReplicatedSequencerAnimMontage.h"
#include "SCPoolableActorComponent.h"
#include "Components/ActorComponent.h"
#include "LevelSequenceAnimReplicationComponent.generated.h"

class ALevelSequenceActor;
class ULevelSequenceDirector;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API ULevelSequenceAnimReplicationComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    TArray<FReplicatedSequencerAnimMontage> m_SequencerMontages;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SequencerMontagesPosition)
    TArray<FReplicatedSequencerAnimMontagePosition> m_SequencerAnimMontagesPosition;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CinematicSlotWeight)
    float m_fCinematicSlotWeight;
    
    UPROPERTY(Replicated, Transient)
    int32 m_iPlayingSequenceId;
    
public:
    ULevelSequenceAnimReplicationComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    
private:
    UFUNCTION()
    void OnRep_SequencerMontagesPosition();
    
    UFUNCTION()
    void OnRep_CinematicSlotWeight();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_OnSequenceRegisterActor(ALevelSequenceActor* _levelSequenceActor, ULevelSequenceDirector* _director);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnSequenceFinished(ALevelSequenceActor* _levelSequenceActor);
    
    
    // Fix for true pure virtual functions not being implemented
};

