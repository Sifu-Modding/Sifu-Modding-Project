#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ESCTestAngle.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_AngleBetween.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UEnvQueryTest_AngleBetween : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvDirection LineA;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvDirection LineB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCTestAngle TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> ThreatsToEvaluate;
    
    UEnvQueryTest_AngleBetween();

};

