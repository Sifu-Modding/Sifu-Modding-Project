#include "EnvQueryTest_AngleBetween.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_AngleBetween::UEnvQueryTest_AngleBetween() {
    this->TestMode = ESCTestAngle::Oriented;
    this->m_bInDegree = false;
    this->ThreatsToEvaluate = UEnvQueryContext_Querier::StaticClass();
}


