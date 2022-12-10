#pragma once
#include "CoreMinimal.h"
#include "ReplayableStaticObjectComponent.h"
#include "ReplayablePhysObjectComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayablePhysObjectComponent : public UReplayableStaticObjectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_IsReplicatingMovement)
    bool m_bIsReplicatingMovement;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bDebugDisabled;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bForceNetUpdateOnBodyAwake;
    
    UPROPERTY(ReplicatedUsing=OnRep_AttachmentChanged)
    AActor* m_AttachedActor;
    
public:
    UReplayablePhysObjectComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    
    UFUNCTION()
    void OnRep_IsReplicatingMovement();
    
    UFUNCTION()
    void OnRep_AttachmentChanged();
    
public:
    UFUNCTION()
    void OnComponentWake(UPrimitiveComponent* _wakingComponent, FName _boneName);
    
    UFUNCTION()
    void OnComponentSleep(UPrimitiveComponent* _wakingComponent, FName _boneName);
    
};

