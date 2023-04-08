#include "SCEnvQueryTest_Distance.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Item.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

USCEnvQueryTest_Distance::USCEnvQueryTest_Distance() {
    this->TestMode = EEnvTestDistance::Distance3D;
    this->m_FromContext = UEnvQueryContext_Querier::StaticClass();
    this->m_ToContext = UEnvQueryContext_Item::StaticClass();
}

