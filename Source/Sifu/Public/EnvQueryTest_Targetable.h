#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_Targetable.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class SIFU_API UEnvQueryTest_Targetable : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> m_TargetTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTargetRange;
    
public:
    UEnvQueryTest_Targetable();
};

