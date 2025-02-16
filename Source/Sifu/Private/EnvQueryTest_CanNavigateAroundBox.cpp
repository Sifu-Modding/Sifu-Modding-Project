#include "EnvQueryTest_CanNavigateAroundBox.h"

UEnvQueryTest_CanNavigateAroundBox::UEnvQueryTest_CanNavigateAroundBox() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->m_iTestsPerBoxSide = 1;
}


