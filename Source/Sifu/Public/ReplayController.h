#pragma once
#include "CoreMinimal.h"
#include "SCDelegate.h"
#include "BaseReplayController.h"
#include "EReplayCameraMode.h"
#include "EReplayKeyTransition.h"
#include "OnReplayCameraModeChangedDelegate.h"
#include "OnReplayGoToTimeDelegate.h"
#include "ReplayCameraSettings.h"
#include "ReplayOverrideMPCParameter.h"
#include "ReplayTimelineControllerData.h"
#include "ReplayVideoRecorderCreatedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "ReplayController.generated.h"

class AActor;
class AReplayVideoRecorder;
class AReplayingCamera;
class UCurveFloat;
class UObject;
class UReplayCineCameraComponent;
class UReplayFightingCharacterComponent;
class UReplayKey;
class UReplayLoadingScreenWidget;
class UReplayMainUserWidget;
class UReplaySystem;
class UReplayTimelineController;
class UReplayTimelineModel;

UCLASS(Blueprintable)
class SIFU_API AReplayController : public ABaseReplayController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayTimelineControllerData m_TimelineControllerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplayTimelineController* m_TimelineController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayCameraSettings m_DefaultCameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayCameraSettings m_SequenceCameraSettings;
    /*
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* m_OnGoToTimeCompleted;*/
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGoToTimeCompletedTimeS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTimeDilationZeroedOnGoToTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReplayCameraModeChanged m_OnCameraModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReplayGoToTime m_OnGoToTimeInitiated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EReplayKeyTransition, UCurveFloat*> m_TransitionProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReplayCameraMode m_eCurrentCameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_VirtualCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UReplayLoadingScreenWidget> m_LoadingScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayOverrideMPCParameter> m_MPCParametersOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UReplayMainUserWidget* m_MainUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UReplayLoadingScreenWidget* m_LoadingScreenWidgetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_VirtualCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AReplayVideoRecorder> m_VideoRecorderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AReplayVideoRecorder* m_VideoRecorder;
    
public:
    AReplayController();
protected:
    UFUNCTION(BlueprintCallable)
    void OnKeysLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnKeyMoved(UReplayKey* _key);
    
    UFUNCTION(BlueprintCallable)
    void OnGoToTimeCompleted();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsReplaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsRecording();
    
    UFUNCTION(BlueprintCallable)
    void GotoTimeInSeconds(float _fTime, bool _bUnselectKey);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsRecordingVideo() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsCameraEditable() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_GoToLastKeyTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCurveFloat* BPF_GetTransitionProfile(EReplayKeyTransition _eTransitionType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayTimelineModel* BPF_GetTimelineModel() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    float BPF_GetReplayTimeFromOffsetS(float _fOffset);
    
    UFUNCTION(BlueprintCallable)
    float BPF_GetReplayTimeFromOffsetMS(float _fOffset);
    
    UFUNCTION(BlueprintCallable)
    UReplaySystem* BPF_GetReplaySystem();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    UReplayFightingCharacterComponent* BPF_GetReplayFightingCharacterComponent(const UObject* _worldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    AReplayingCamera* BPF_GetReplayFightingCharacterCameraDummy(const UObject* _worldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayCineCameraComponent* BPF_GetReplayCineCameraComponent(EReplayCameraMode _eCameraMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayCineCameraComponent* BPF_GetCurrentCineCameraComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnReplayCameraModeChanged(EReplayCameraMode _eCameraMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPlayingBeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnKeyRemoved(UReplayKey* _key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnGoToTimeCompleted();
    
};

