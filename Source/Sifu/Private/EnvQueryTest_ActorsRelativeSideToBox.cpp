#include "EnvQueryTest_ActorsRelativeSideToBox.h"

UEnvQueryTest_ActorsRelativeSideToBox::UEnvQueryTest_ActorsRelativeSideToBox() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->m_eTest = EGetActorsRelativeSideToBox::Opposite;
    this->m_fMaxDistanceToBox = -1.00f;
    this->m_ActorA = NULL;
    this->m_ActorB = NULL;
    this->m_eTestAxis = ETestAxis2D::Both;
}


