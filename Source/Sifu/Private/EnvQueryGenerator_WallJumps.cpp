#include "EnvQueryGenerator_WallJumps.h"
#include "GameFramework/Actor.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_WallJumps::UEnvQueryGenerator_WallJumps() {
    this->m_RequiredComponentClass = NULL;
    this->m_SearchedActorClass = AActor::StaticClass();
    this->m_SearchCenter = UEnvQueryContext_Querier::StaticClass();
}

