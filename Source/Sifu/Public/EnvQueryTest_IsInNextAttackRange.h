#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_IsInNextAttackRange.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class SIFU_API UEnvQueryTest_IsInNextAttackRange : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTolerance;
    
public:
    UEnvQueryTest_IsInNextAttackRange();
};

