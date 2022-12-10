#include "ReplaySizeManagement.h"

FReplaySizeManagement::FReplaySizeManagement() {
    this->m_iTotalSpaceOccupied = 0;
    this->m_iTotalSpaceAvailable = 0;
    this->m_iTotalMaxSpace = 0;
    this->m_iMaxReplaySize = 0;
    this->m_iCurrentReplaySlotCount = 0;
    this->m_iMaxReplaySlotCount = 0;
}

