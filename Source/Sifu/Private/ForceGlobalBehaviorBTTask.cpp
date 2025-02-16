#include "ForceGlobalBehaviorBTTask.h"

UForceGlobalBehaviorBTTask::UForceGlobalBehaviorBTTask() {
    this->NodeName = TEXT("Force Global Behavior");
    this->m_Behavior = EGlobalBehaviors::Idle;
}


