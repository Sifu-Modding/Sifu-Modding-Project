#include "EnvQueryGenerator_ActorClassFromManager.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UEnvQueryGenerator_ActorClassFromManager::UEnvQueryGenerator_ActorClassFromManager() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->m_SearchCenter = UEnvQueryContext_Querier::StaticClass();
    this->m_ActorClass = NULL;
}


