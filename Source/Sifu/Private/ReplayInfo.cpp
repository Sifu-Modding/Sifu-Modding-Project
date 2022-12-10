#include "ReplayInfo.h"

FReplayInfo::FReplayInfo() {
    this->m_iChangeList = 0;
    this->m_iReplayVersion = 0;
    this->m_iLength = 0;
    this->m_iSizeInBytes = 0;
    this->m_bIsCorrupted = false;
}

