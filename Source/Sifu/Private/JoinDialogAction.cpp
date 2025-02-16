#include "JoinDialogAction.h"

UJoinDialogAction::UJoinDialogAction() {
    this->m_bPlayPrefightAnimations = false;
}

TArray<FName> UJoinDialogAction::GetActorOptions() const {
    return TArray<FName>();
}


