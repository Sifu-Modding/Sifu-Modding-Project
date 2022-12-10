#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCPoolableActorComponent.h"
#include "Components/ActorComponent.h"
#include "ReplayReplicatedStateMachine.h"
#include "ReplayReplicatedAnimInstanceAssetPlayers.h"
#include "SCAnimInstanceRef.h"
#include "AnimInstanceReplicationComponent.generated.h"

class USCAnimInstance;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAnimInstanceReplicationComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient)
    uint32 m_uiReplicatedAnimGraphVersionHash;
    
    UPROPERTY(Replicated, Transient)
    TArray<FReplayReplicatedStateMachine> m_ReplicatedStateMachineSnapshots;
    
    UPROPERTY(Replicated, Transient)
    TArray<FReplayReplicatedAnimInstanceAssetPlayers> m_ReplicatedAnimInstancePlayerAssets;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<USCAnimInstance>> m_AllowedReplicatedTypes;
    
    UPROPERTY(Replicated, Transient)
    TArray<FSCAnimInstanceRef> m_ReplicatedSubAnimInstances;
    
    UPROPERTY(Transient)
    TArray<FSCAnimInstanceRef> m_ScrubSnapshotOnlySubAnimInstances;
    
    UPROPERTY(Replicated, Transient)
    USCAnimInstance* m_AnimInstance;
    
public:
    UAnimInstanceReplicationComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    
    
    // Fix for true pure virtual functions not being implemented
};

