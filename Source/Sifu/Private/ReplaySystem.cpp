#include "ReplaySystem.h"

class AActor;
class AFightingCharacter;
class APlayerController;
class AReplayController;
class UObject;
class UReplayManagement;
class UReplaySystem;
class USCDemoNetDriver;

void UReplaySystem::BPF_StopRecordingAndContinueWith(APlayerController* _controller, FStopRecordingContinue _onContinue, const EReplayStopRecordingReason _eReason) {
}

void UReplaySystem::BPF_StopRecording(const EReplayStopRecordingReason _eReason) {
}

void UReplaySystem::BPF_StartReplay(const FString& _replayID) {
}

void UReplaySystem::BPF_StartRecording() {
}

void UReplaySystem::BPF_SetPlayingPlayerCharacter(AFightingCharacter* _character, const UObject* _worldContextObject) {
}

void UReplaySystem::BPF_SetDemoPlayTimeDilation(const UObject* _worldContextObject, float _fDilation) {
}

void UReplaySystem::BPF_ReplayStopRecording(const UObject* _worldContextObject, const EReplayStopRecordingReason _eReason) {
}

void UReplaySystem::BPF_ReplayStartRecording(const UObject* _worldContextObject) {
}

void UReplaySystem::BPF_ReplayStartPlaying(const UObject* _worldContextObject) {
}

void UReplaySystem::BPF_RegisterInitialStateEvent(FReplayInitialStateToggleEventDelegate _event, AActor* _Instigator, FReplayInitialStateToggleGetValueEventDelegate _getValueEvent) {
}

void UReplaySystem::BPF_QueryReplaySpaceStatus(const UObject* _worldContextObject, UReplaySystem::FReplaySpaceStatusDelegate _callback) {
}

void UReplaySystem::BPF_PushPopPauseRecording(int32& _iInOutTag, const FString& _context, const bool _bPush, const UObject* _worldContextObject) {
}

void UReplaySystem::BPF_PushPopDisableRecording(int32& _iInOutTag, const FString& _context, const bool _bPush, const UObject* _worldContextObject, const EReplayStopRecordingReason _eReason) {
}

bool UReplaySystem::BPF_MustUpdateMaxFPS() {
    return false;
}

bool UReplaySystem::BPF_IsRecordingDisabled(const UObject* _worldContextObject) {
    return false;
}

bool UReplaySystem::BPF_IsRecording(const UObject* _worldContextObject) {
    return false;
}

bool UReplaySystem::BPF_IsReadyForPlaying(const UObject* _worldContextObject) {
    return false;
}

bool UReplaySystem::BPF_IsPlaying(const UObject* _worldContextObject) {
    return false;
}

bool UReplaySystem::BPF_IsKeepingReplay() const {
    return false;
}

bool UReplaySystem::BPF_IsDemoPlayPaused(const UObject* _worldContextObject) {
    return false;
}

bool UReplaySystem::BPF_IsCurrentDemoTimeSnapped(const UObject* _worldContextObject) {
    return false;
}

float UReplaySystem::BPF_GetVislogGameplayTimeS() const {
    return 0.0f;
}

EReplayStopRecordingReason UReplaySystem::BPF_GetStopRecordingReason(const UObject* _worldContextObject, bool& _bOutIsRecording) {
    return EReplayStopRecordingReason::None;
}

float UReplaySystem::BPF_GetSnappedDemoTime(float _fDemoTimeS, bool _bCheckClosestFrame) {
    return 0.0f;
}

UReplaySystem* UReplaySystem::BPF_GetReplaySystem(const UObject* _worldContextObject) {
    return NULL;
}

UReplayManagement* UReplaySystem::BPF_GetReplayManagement(const UObject* _worldContextObject) {
    return NULL;
}

AReplayController* UReplaySystem::BPF_GetReplayController(const UObject* _worldContextObject) {
    return NULL;
}

AFightingCharacter* UReplaySystem::BPF_GetPlayingPlayerCharacter(const UObject* _worldContextObject) {
    return NULL;
}

int32 UReplaySystem::BPF_GetKeyFrameIndexFromDemoTime(float _fDemoTimeS, bool _bCheckClosestFrame) {
    return 0;
}

float UReplaySystem::BPF_GetDemoTimeFromKeyFrameIndex(int32 _iKeyFrameIndex) {
    return 0.0f;
}

float UReplaySystem::BPF_GetDemoPlayTimeDilation(const UObject* _worldContextObject) {
    return 0.0f;
}

USCDemoNetDriver* UReplaySystem::BPF_GetDemoNetDriver(const UObject* _worldContextObject) {
    return NULL;
}

bool UReplaySystem::BPF_GetCurrentReplayRecordingData(FReplayCurrentRecordingData& _inoutData) const {
    return false;
}

float UReplaySystem::BPF_GetCurrentReplayLengthS(const UObject* _worldContextObject) {
    return 0.0f;
}

float UReplaySystem::BPF_GetCurrentReplayLengthMS(const UObject* _worldContextObject) {
    return 0.0f;
}

float UReplaySystem::BPF_GetCurrentDemoTimeS(const UObject* _worldContextObject) {
    return 0.0f;
}

float UReplaySystem::BPF_GetActorLastReplicationTime(AActor* _actor) {
    return 0.0f;
}

bool UReplaySystem::BPF_CanStartRecording(const UObject* _worldContextObject) {
    return false;
}

UReplaySystem::UReplaySystem() {
    this->m_bTimeDilationReplicated = false;
    this->m_bPauserPlayerStateReplicated = false;
    this->m_GameInstance = NULL;
    this->m_fReplayStartVislogTimeS = 0.00f;
}

