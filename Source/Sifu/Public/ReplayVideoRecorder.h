#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AvailabilityLayerCache.h"
#include "VideoRecordEventDelegate.h"
#include "ReplayVideoRecorder.generated.h"

class UWorld;

UCLASS(Blueprintable)
class SIFU_API AReplayVideoRecorder : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVideoRecordEvent m_OnVideoRecordingComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVideoRecordEvent m_OnVideoRecordingStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerCache m_AvailabilityLayerCache;
    
public:
    AReplayVideoRecorder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_StopVideoRecording();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveReplaySystemListeners();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_GoToStart();
    
    UFUNCTION(BlueprintCallable)
    void BPF_GoToEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_StartRecordingVideo();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPlayBackCompleted(UWorld* _world);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnGoToTimeCompleted();
    
};

