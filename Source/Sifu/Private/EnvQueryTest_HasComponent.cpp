#include "EnvQueryTest_HasComponent.h"

UEnvQueryTest_HasComponent::UEnvQueryTest_HasComponent() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->m_ComponentClass = NULL;
}


