#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_ActorClassFromManager.generated.h"

class AActor;
class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UEnvQueryGenerator_ActorClassFromManager : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue m_GenerateOnlyActorsInRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue m_SearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> m_SearchCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_ActorClass;
    
    UEnvQueryGenerator_ActorClassFromManager();
};

