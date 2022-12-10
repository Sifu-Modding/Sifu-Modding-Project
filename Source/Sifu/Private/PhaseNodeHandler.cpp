#include "PhaseNodeHandler.h"

FPhaseNodeHandler::FPhaseNodeHandler() {
    this->m_PhaseArchetype = NULL;
    this->m_WeakerPhaseArchetype = NULL;
    this->m_StrongerPhaseArchetype = NULL;
    this->m_OverrideSkeletalMesh = NULL;
    this->m_eType = EAIPhaseNodeType::None;
}

