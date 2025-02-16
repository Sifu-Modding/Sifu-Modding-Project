#include "SCEnvQueryTest_Trace.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Item.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

USCEnvQueryTest_Trace::USCEnvQueryTest_Trace() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->m_bCustomCollisionResponse = false;
    this->m_FromContext = UEnvQueryContext_Querier::StaticClass();
    this->m_ToContext = UEnvQueryContext_Item::StaticClass();
    this->m_bIgnoreQuerier = true;
}


