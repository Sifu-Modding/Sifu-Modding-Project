#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ReplayCameraTransform.h"
#include "ReplayVoiceReplication.h"
#include "ReplayFightingCharacterComponent.generated.h"

class AReplayingCamera;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayFightingCharacterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VoiceInfos, meta=(AllowPrivateAccess=true))
    FReplayVoiceReplication m_VoiceInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CameraTransform, meta=(AllowPrivateAccess=true))
    FReplayCameraTransform m_CameraTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AReplayingCamera* m_CameraDummy;
    
public:
    UReplayFightingCharacterComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_VoiceInfos() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CameraTransform();
    
};

