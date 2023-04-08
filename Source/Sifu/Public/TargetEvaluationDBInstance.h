#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TargetEvaluationDBInstance.generated.h"

class UBaseTargetEvaluation;

USTRUCT(BlueprintType)
struct SIFU_API FTargetEvaluationDBInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBaseTargetEvaluation> m_DefaultClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseTargetEvaluation* m_Instance;
    
    FTargetEvaluationDBInstance();
};

