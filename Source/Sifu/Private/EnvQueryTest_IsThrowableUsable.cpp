#include "EnvQueryTest_IsThrowableUsable.h"

UEnvQueryTest_IsThrowableUsable::UEnvQueryTest_IsThrowableUsable() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->m_Target = NULL;
}


