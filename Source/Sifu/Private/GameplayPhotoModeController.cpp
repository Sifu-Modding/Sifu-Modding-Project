#include "GameplayPhotoModeController.h"

AGameplayPhotoModeController::AGameplayPhotoModeController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

void AGameplayPhotoModeController::BPF_LeavePhotoMode() {
}

ASCPlayerController* AGameplayPhotoModeController::BPF_GetOriginalPlayerController() const {
    return NULL;
}

void AGameplayPhotoModeController::BPF_EnterPhotoMode(const UObject* _worldContextObject) {
}




