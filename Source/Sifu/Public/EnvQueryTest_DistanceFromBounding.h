#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ESCTestDistance.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_DistanceFromBounding.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UEnvQueryTest_DistanceFromBounding : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCTestDistance TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> DistanceTo;
    
    UEnvQueryTest_DistanceFromBounding();
};

