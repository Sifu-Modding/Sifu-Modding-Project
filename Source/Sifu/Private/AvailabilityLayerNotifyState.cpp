#include "AvailabilityLayerNotifyState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimNotifyPredictionBehavior -FallbackName=EAnimNotifyPredictionBehavior

UAvailabilityLayerNotifyState::UAvailabilityLayerNotifyState() {
//    this->PredictionBehavior = EAnimNotifyPredictionBehavior::Both;
    this->m_availabilityLayerData = NULL;
    this->m_eOperation = EALBinaryOperation::SET;
    this->m_iPriority = 0;
}


