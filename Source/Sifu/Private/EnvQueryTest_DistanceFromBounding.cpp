#include "EnvQueryTest_DistanceFromBounding.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_DistanceFromBounding::UEnvQueryTest_DistanceFromBounding() {
    this->TestMode = ESCTestDistance::ItemLocationToContextBounding;
    this->DistanceTo = UEnvQueryContext_Querier::StaticClass();
}

