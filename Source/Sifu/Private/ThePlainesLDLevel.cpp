#include "ThePlainesLDLevel.h"

AThePlainesLDLevel::AThePlainesLDLevel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_dynamicPropsDataTable = NULL;
    this->m_uiEncouterZone = 0;
    this->m_iLastManGaugeThresold = -1;
    this->m_ArchetypesInSituationDB = NULL;
    this->m_iMinMaxGenericWeapons = 1;
    this->m_iMaxMaxGenericWeapons = 1;
}


