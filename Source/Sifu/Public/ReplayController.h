#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnReplayGoToTimeDelegate.h"
#include "BaseReplayController.h"
#include "SCDelegate.h"
#include "ReplayTimelineControllerData.h"
#include "ReplayCameraSettings.h"
#include "ReplayOverrideMPCParameter.h"
#include "OnReplayCameraModeChangedDelegate.h"
#include "EReplayKeyTransition.h"
#include "EReplayCameraMode.h"
#include "ReplayVideoRecorderCreatedDelegateDelegate.h"
#include "ReplayController.generated.h"

class UReplayTimelineController;
class UReplayFightingCharacterComponent;
class UCurveFloat;
class AActor;
class UReplayLoadingScreenWidget;
class UReplayMainUserWidget;
class AReplayVideoRecorder;
class UReplayKey;
class UReplayTimelineModel;
class UReplaySystem;
class UObject;
class AReplayingCamera;
class UReplayCineCameraComponent;

UCLASS()
class SIFU_API AReplayController : public ABaseReplayController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FReplayTimelineControllerData m_TimelineControllerData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UReplayTimelineController* m_TimelineController;
    
    UPROPERTY(EditDefaultsOnly)
    FReplayCameraSettings m_DefaultCameraSettings;
    
    UPROPERTY(EditDefaultsOnly)
    FReplayCameraSettings m_SequenceCameraSettings;
    
   /* UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast m_OnGoToTimeCompleted;*/
    
    UPROPERTY(BlueprintReadOnly)
    float m_fGoToTimeCompletedTimeS;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bTimeDilationZeroedOnGoToTime;
    
    UPROPERTY(BlueprintAssignable)
    FOnReplayCameraModeChanged m_OnCameraModeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnReplayGoToTime m_OnGoToTimeInitiated;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugEnabled;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EReplayKeyTransition, UCurveFloat*> m_TransitionProfiles;
    
    UPROPERTY(BlueprintReadWrite)
    EReplayCameraMode m_eCurrentCameraMode;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> m_VirtualCameraClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UReplayLoadingScreenWidget> m_LoadingScreenWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FReplayOverrideMPCParameter> m_MPCParametersOverride;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UReplayMainUserWidget* m_MainUserWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UReplayLoadingScreenWidget* m_LoadingScreenWidgetInstance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* m_VirtualCamera;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AReplayVideoRecorder> m_VideoRecorderClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AReplayVideoRecorder* m_VideoRecorder;
    
public:
    AReplayController();
protected:
    UFUNCTION()
    void OnKeysLoaded();
    
    UFUNCTION()
    void OnKeyMoved(UReplayKey* _key);
    
    UFUNCTION()
    void OnGoToTimeCompleted();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsReplaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsRecording();
    
    UFUNCTION(BlueprintCallable)
    void GotoTimeInSeconds(float _fTime, bool _bUnselectKey);
    
protected:
    UFUNCTION(Exec)
    void DebugReplayFillReplayTimeline(int32 _iStringsLength);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_StopVideoRecording();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_StartVideoRecording(FReplayVideoRecorderCreatedDelegate _onVideoRecorderCreated);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_StartSkipTimeToNextKeyFrameTask();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDemoPlayTimeDilation(float _fValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCameraMode(EReplayCameraMode _eCameraMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_ResetPreviousTimeDilation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_RequestTimelineControllerCameraMeshFadingUpdate() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_PausePlayAndSnapFrame();
    
    UFUNCTION(BlueprintCallable)
    void BPF_LeaveReplay();
    
protected:
    UFUNCTION(BlueprintPure)
    bool BPF_IsRecordingVideo() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_IsCameraEditable() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_GoToLastKeyTime();
    
    UFUNCTION(BlueprintPure)
    UCurveFloat* BPF_GetTransitionProfile(EReplayKeyTransition _eTransitionType) const;
    
    UFUNCTION(BlueprintPure)
    UReplayTimelineModel* BPF_GetTimelineModel() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    float BPF_GetReplayTimeFromOffsetS(float _fOffset);
    
    UFUNCTION(BlueprintCallable)
    float BPF_GetReplayTimeFromOffsetMS(float _fOffset);
    
    UFUNCTION(BlueprintCallable)
    UReplaySystem* BPF_GetReplaySystem();
    
public:
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    UReplayFightingCharacterComponent* BPF_GetReplayFightingCharacterComponent(const UObject* _worldContextObject) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    AReplayingCamera* BPF_GetReplayFightingCharacterCameraDummy(const UObject* _worldContextObject) const;
    
    UFUNCTION(BlueprintPure)
    UReplayCineCameraComponent* BPF_GetReplayCineCameraComponent(EReplayCameraMode _eCameraMode) const;
    
    UFUNCTION(BlueprintPure)
    UReplayCineCameraComponent* BPF_GetCurrentCineCameraComponent() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnReplayCameraModeChanged(EReplayCameraMode _eCameraMode);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPlayingBeginPlay();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnKeyRemoved(UReplayKey* _key);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnGoToTimeCompleted();
    
};

