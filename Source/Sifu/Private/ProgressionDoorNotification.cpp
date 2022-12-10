#include "ProgressionDoorNotification.h"

class UProgressionDoorNotification;
class UQuestItemData;

UProgressionDoorNotification* UProgressionDoorNotification::BPF_Init(const FProgressionDoorStruct& _progressionDoorStruct, UQuestItemData* _lastFulfilledQuest) {
    return NULL;
}

UProgressionDoorNotification::UProgressionDoorNotification() {
    this->m_LastFulfilledQuest = NULL;
}

