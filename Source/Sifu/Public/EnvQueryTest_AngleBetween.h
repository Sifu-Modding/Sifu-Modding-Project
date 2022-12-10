#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ESCTestAngle.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvQueryTest_AngleBetween.generated.h"

class UEnvQueryContext;

UCLASS()
class UEnvQueryTest_AngleBetween : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEnvDirection LineA;
    
    UPROPERTY(EditDefaultsOnly)
    FEnvDirection LineB;
    
    UPROPERTY(EditDefaultsOnly)
    ESCTestAngle TestMode;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bInDegree;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> ThreatsToEvaluate;
    
    UEnvQueryTest_AngleBetween();
};

