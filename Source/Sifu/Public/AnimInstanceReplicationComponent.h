#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCAnimInstanceRef.h"
#include "SCPoolableActorComponent.h"
#include "ReplayReplicatedAnimInstanceAssetPlayers.h"
#include "ReplayReplicatedStateMachine.h"
#include "Templates/SubclassOf.h"
#include "AnimInstanceReplicationComponent.generated.h"

class USCAnimInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAnimInstanceReplicationComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint32 m_uiReplicatedAnimGraphVersionHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FReplayReplicatedStateMachine> m_ReplicatedStateMachineSnapshots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FReplayReplicatedAnimInstanceAssetPlayers> m_ReplicatedAnimInstancePlayerAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USCAnimInstance>> m_AllowedReplicatedTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSCAnimInstanceRef> m_ReplicatedSubAnimInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSCAnimInstanceRef> m_ScrubSnapshotOnlySubAnimInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    USCAnimInstance* m_AnimInstance;
    
public:
    UAnimInstanceReplicationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    

    // Fix for true pure virtual functions not being implemented
};

