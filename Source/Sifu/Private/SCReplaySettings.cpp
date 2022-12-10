#include "SCReplaySettings.h"

class UObject;

bool USCReplaySettings::BPF_LocalizeMapName(FString& _inOutMapName) {
    return false;
}

bool USCReplaySettings::BPF_IsReplayEditorEnabled(const UObject* _worldContextObject) {
    return false;
}

bool USCReplaySettings::BPF_IsPhotomodeEnabled() {
    return false;
}

FFloatRange USCReplaySettings::BPF_GetReplayRecordingTimeRangeMS() {
    return FFloatRange{};
}

FReplayKeyDataCameraSettings USCReplaySettings::BPF_GetDefaultCameraSettings() {
    return FReplayKeyDataCameraSettings{};
}

USCReplaySettings::USCReplaySettings() {
    this->m_ScreenShotFileName = TEXT("Photomode");
    this->m_ScreenShotDateFormat = TEXT("%Y-%m-%d---%H-%M-%S");
    this->m_StatesToSaveWhenStartRecording.AddDefaulted(3);
    this->m_RTPCToSaveWhenStartRecording.AddDefaulted(4);
    this->m_EventToResetRTPCWhenStartRecording = TEXT("UI_ResetReplayableRTPC");
    this->m_MeshCollisionsChannels.AddDefaulted(2);
    this->m_bReplayEditorBuildEnabled = false;
    this->m_bPhotomodeBuildEnabled = true;
    this->m_bIsReplayEditorAllowedForPlatform = true;
    this->m_iReplaySkipTimeNoLoadingScreenMaxFrames = 89;
}

