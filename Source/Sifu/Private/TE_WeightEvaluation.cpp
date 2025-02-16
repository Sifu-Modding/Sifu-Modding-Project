#include "TE_WeightEvaluation.h"
#include "ETargetingPrio.h"

UTE_WeightEvaluation::UTE_WeightEvaluation() {
    this->m_eTargettingType = ETargetingPrio::DesignatedRough;
    this->m_eOperator = EWeightBinaryOperator::Add;
}


