#include "InGameSequenceReplicationInfo.h"

FInGameSequenceReplicationInfo::FInGameSequenceReplicationInfo() {
    this->m_LevelSequenceToReplay = NULL;
    this->m_eSequenceState = ESequenceState::Idle;
}

