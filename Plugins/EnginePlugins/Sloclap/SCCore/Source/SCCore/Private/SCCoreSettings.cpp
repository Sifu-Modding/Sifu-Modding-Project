#include "SCCoreSettings.h"

USCCoreSettings::USCCoreSettings() {
    this->m_fLevelSequenceForcedClothSimulationDuration = 1.00f;
    this->m_DefaultActorPools.AddDefaulted(9);
    this->m_AiAttackSubActionBehaviorTags.AddDefaulted(1);
    this->m_StreamingDebugTrackedActors.AddDefaulted(6);
    this->m_bSaveStreamingActors = false;
    this->m_iMaxActorsAllowedPerLevelWithTransform = 200;
    this->m_bPlatformForceClassicTravel = false;
    this->m_fDelayBeforeImpostorCopyPose = 3.00f;
    this->m_fDelayBeforeShowImpostor = 4.00f;
    this->m_bIsLowEndPlatform = false;
    this->m_fDefaultScreenRatio = 1.78f;
    this->m_bPlatformRequireAccountPickup = false;
    this->m_fMaxAICharacterCorpseTimeout = 5.00f;
    this->m_iMaxAICharacterCorpse = 99;
    this->m_iMaxAIImpostors = 99;
    this->m_bActorPoolsEnabled = true;
}

UCurveFloat* USCCoreSettings::BPF_GetHUDOffsetFromBlackBarRatioCurve() {
    return NULL;
}


