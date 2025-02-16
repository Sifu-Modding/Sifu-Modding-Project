#include "SCEnsureDataSettings.h"

USCEnsureDataSettings::USCEnsureDataSettings() {
    this->m_adviserTooltipText = FText::FromString(TEXT("Ask {DataAdviser} for more help on {LogName}, or {TechAdviser}."));
    this->m_buildLog = FText::FromString(TEXT("{ShortMessage} in object {ObjectName}. \nLine {Line} in file {File}."));
    this->m_bUseNameInsteadOfPath = true;
    this->m_bRegroupUnderOneCategory = true;
    this->m_mainCategoryName = TEXT("SC_EnsureData");
}


