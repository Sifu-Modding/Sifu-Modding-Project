#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Tests/EnvQueryTest_Distance.h"
#include "SCEnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "SCEnvQueryTest_Distance.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class SCCORE_API USCEnvQueryTest_Distance : public USCEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvTestDistance::Type> TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> m_FromContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> m_ToContext;
    
    USCEnvQueryTest_Distance();

};

