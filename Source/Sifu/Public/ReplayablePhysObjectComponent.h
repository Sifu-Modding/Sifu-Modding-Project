#pragma once
#include "CoreMinimal.h"
#include "ReplayableStaticObjectComponent.h"
#include "ReplayablePhysObjectComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayablePhysObjectComponent : public UReplayableStaticObjectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsReplicatingMovement, meta=(AllowPrivateAccess=true))
    bool m_bIsReplicatingMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceNetUpdateOnBodyAwake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttachmentChanged, meta=(AllowPrivateAccess=true))
    AActor* m_AttachedActor;
    
public:
    UReplayablePhysObjectComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsReplicatingMovement();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachmentChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnComponentWake(UPrimitiveComponent* _wakingComponent, FName _boneName);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentSleep(UPrimitiveComponent* _wakingComponent, FName _boneName);
    
};

