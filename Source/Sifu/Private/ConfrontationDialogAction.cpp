#include "ConfrontationDialogAction.h"

UConfrontationDialogAction::UConfrontationDialogAction() {
    this->m_iCircleIndex = -1;
    this->m_bPlayPrefightAnimations = false;
}

TArray<FName> UConfrontationDialogAction::GetActorOptions() const {
    return TArray<FName>();
}


