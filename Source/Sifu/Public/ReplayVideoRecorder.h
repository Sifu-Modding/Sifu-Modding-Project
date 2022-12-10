#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AvailabilityLayerCache.h"
#include "VideoRecordEventDelegate.h"
#include "ReplayVideoRecorder.generated.h"

class UWorld;

UCLASS()
class SIFU_API AReplayVideoRecorder : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FVideoRecordEvent m_OnVideoRecordingComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FVideoRecordEvent m_OnVideoRecordingStarted;
    
    UPROPERTY(EditDefaultsOnly)
    FAvailabilityLayerCache m_AvailabilityLayerCache;
    
public:
    AReplayVideoRecorder();
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
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_StartRecordingVideo();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPlayBackCompleted(UWorld* _world);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnGoToTimeCompleted();
    
};

