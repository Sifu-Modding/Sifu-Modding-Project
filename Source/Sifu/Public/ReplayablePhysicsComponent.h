#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CompressedPoseSnapshot.h"
#include "SCPoolableActorComponent.h"
#include "ReplayablePhysicsComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayablePhysicsComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LastPoseSnapshot, meta=(AllowPrivateAccess=true))
    FCompressedPoseSnapshot m_LastPoseSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_SkeletalMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Active, meta=(AllowPrivateAccess=true))
    bool m_bActive;
    
public:
    UReplayablePhysicsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_LastPoseSnapshot();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Active();
    

    // Fix for true pure virtual functions not being implemented
};

