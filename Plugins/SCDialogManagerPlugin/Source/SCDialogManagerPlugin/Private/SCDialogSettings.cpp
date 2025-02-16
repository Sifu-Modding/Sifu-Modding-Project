#include "SCDialogSettings.h"

USCDialogSettings::USCDialogSettings() {
    this->m_bUseChineseDictionary = false;
   // this->m_eWantedLanguageDictionary = ELipSyncLanguage::English;
    this->m_DialogLineStartAkEvent = TEXT("Mute_Ono");
    this->m_DialogLineStopAkEvent = TEXT("Unmute_Ono");
    this->m_fDefaultTimeBetweenLines = 0.15f;
}


