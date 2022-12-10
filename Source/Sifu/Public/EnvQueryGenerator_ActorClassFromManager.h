#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryGenerator_ActorClassFromManager.generated.h"

class UEnvQueryContext;
class AActor;

UCLASS(EditInlineNew)
class SIFU_API UEnvQueryGenerator_ActorClassFromManager : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue m_GenerateOnlyActorsInRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_SearchRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> m_SearchCenter;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> m_ActorClass;
    
    UEnvQueryGenerator_ActorClassFromManager();
};

