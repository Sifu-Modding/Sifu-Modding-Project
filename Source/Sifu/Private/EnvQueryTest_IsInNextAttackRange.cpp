#include "EnvQueryTest_IsInNextAttackRange.h"

UEnvQueryTest_IsInNextAttackRange::UEnvQueryTest_IsInNextAttackRange() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->m_Target = NULL;
    this->m_fTolerance = 0.00f;
}


