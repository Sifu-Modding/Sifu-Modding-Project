#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCPoolableActorComponent.h"
#include "ReplicatedSequencerAnimMontage.h"
#include "ReplicatedSequencerAnimMontagePosition.h"
#include "LevelSequenceAnimReplicationComponent.generated.h"

class ALevelSequenceActor;
class ULevelSequenceDirector;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API ULevelSequenceAnimReplicationComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedSequencerAnimMontage> m_SequencerMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SequencerMontagesPosition, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedSequencerAnimMontagePosition> m_SequencerAnimMontagesPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CinematicSlotWeight, meta=(AllowPrivateAccess=true))
    float m_fCinematicSlotWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iPlayingSequenceId;
    
public:
    ULevelSequenceAnimReplicationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SequencerMontagesPosition();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CinematicSlotWeight();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_OnSequenceRegisterActor(ALevelSequenceActor* _levelSequenceActor, ULevelSequenceDirector* _director);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnSequenceFinished(ALevelSequenceActor* _levelSequenceActor);
    

    // Fix for true pure virtual functions not being implemented
};

