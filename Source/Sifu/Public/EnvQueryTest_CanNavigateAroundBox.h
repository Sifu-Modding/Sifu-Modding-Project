#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_CanNavigateAroundBox.generated.h"

UCLASS(Blueprintable)
class SIFU_API UEnvQueryTest_CanNavigateAroundBox : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iTestsPerBoxSide;
    
    UEnvQueryTest_CanNavigateAroundBox();
};

