#include "ReplayCurrentRecordingData.h"

FReplayCurrentRecordingData::FReplayCurrentRecordingData() {
    this->m_iRecordingArchiveSize = 0;
    this->m_iRecordingDuration = 0;
    this->m_fBytesPerSeconds = 0.00f;
    this->m_fTimeleftInSecondsAvg = 0.00f;
}

