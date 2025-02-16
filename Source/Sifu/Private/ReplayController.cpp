#include "ReplayController.h"

AReplayController::AReplayController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->m_TimelineController = NULL;
    this->m_fGoToTimeCompletedTimeS = 0.00f;
    this->m_bTimeDilationZeroedOnGoToTime = true;
    this->m_bDebugEnabled = true;
    this->m_eCurrentCameraMode = EReplayCameraMode::LockedVirtualCam;
    this->m_VirtualCameraClass = NULL;
    this->m_LoadingScreenWidgetClass = NULL;
    this->m_MainUserWidget = NULL;
    this->m_LoadingScreenWidgetInstance = NULL;
    this->m_VirtualCamera = NULL;
    this->m_VideoRecorderClass = NULL;
    this->m_VideoRecorder = NULL;
}

void AReplayController::OnKeysLoaded() {
}

void AReplayController::OnKeyMoved(UReplayKey* _key) {
}

void AReplayController::OnGoToTimeCompleted() {
}

bool AReplayController::IsReplaying() {
    return false;
}

bool AReplayController::IsRecording() {
    return false;
}

void AReplayController::GotoTimeInSeconds(float _fTime, bool _bUnselectKey) {
}

void AReplayController::DebugReplayFillReplayTimeline(int32 _iStringsLength) {
}

void AReplayController::BPF_StopVideoRecording() {
}

void AReplayController::BPF_StartVideoRecording(FReplayVideoRecorderCreatedDelegate _onVideoRecorderCreated) {
}

void AReplayController::BPF_StartSkipTimeToNextKeyFrameTask() {
}

void AReplayController::BPF_SetDemoPlayTimeDilation(float _fValue) {
}

void AReplayController::BPF_SetCameraMode(EReplayCameraMode _eCameraMode) {
}

void AReplayController::BPF_ResetPreviousTimeDilation() const {
}

void AReplayController::BPF_RequestTimelineControllerCameraMeshFadingUpdate() const {
}

void AReplayController::BPF_PausePlayAndSnapFrame() {
}

void AReplayController::BPF_LeaveReplay() {
}

bool AReplayController::BPF_IsRecordingVideo() const {
    return false;
}

bool AReplayController::BPF_IsCameraEditable() const {
    return false;
}

void AReplayController::BPF_GoToLastKeyTime() {
}

UCurveFloat* AReplayController::BPF_GetTransitionProfile(EReplayKeyTransition _eTransitionType) const {
    return NULL;
}

UReplayTimelineModel* AReplayController::BPF_GetTimelineModel() const {
    return NULL;
}

float AReplayController::BPF_GetReplayTimeFromOffsetS(float _fOffset) {
    return 0.0f;
}

float AReplayController::BPF_GetReplayTimeFromOffsetMS(float _fOffset) {
    return 0.0f;
}

UReplaySystem* AReplayController::BPF_GetReplaySystem() {
    return NULL;
}

UReplayFightingCharacterComponent* AReplayController::BPF_GetReplayFightingCharacterComponent(const UObject* _worldContextObject) const {
    return NULL;
}

AReplayingCamera* AReplayController::BPF_GetReplayFightingCharacterCameraDummy(const UObject* _worldContextObject) const {
    return NULL;
}

UReplayCineCameraComponent* AReplayController::BPF_GetReplayCineCameraComponent(EReplayCameraMode _eCameraMode) const {
    return NULL;
}

UReplayCineCameraComponent* AReplayController::BPF_GetCurrentCineCameraComponent() const {
    return NULL;
}






