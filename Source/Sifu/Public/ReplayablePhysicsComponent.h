#pragma once
#include "CoreMinimal.h"
#include "SCPoolableActorComponent.h"
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=CompressedPoseSnapshot -FallbackName=CompressedPoseSnapshot
#include "ReplayablePhysicsComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayablePhysicsComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
protected:
   /* UPROPERTY(ReplicatedUsing=OnRep_LastPoseSnapshot)
    FCompressedPoseSnapshot m_LastPoseSnapshot;*/
    
    UPROPERTY(Instanced)
    USkeletalMeshComponent* m_SkeletalMeshComp;
    
    UPROPERTY(ReplicatedUsing=OnRep_Active)
    bool m_bActive;
    
public:
    UReplayablePhysicsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    
private:
    UFUNCTION()
    void OnRep_LastPoseSnapshot();
    
    UFUNCTION()
    void OnRep_Active();
    
    
    // Fix for true pure virtual functions not being implemented
};

