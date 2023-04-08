#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ETargetingPrio.h"
#include "Templates/SubclassOf.h"
#include "TargetableConditions.generated.h"

class UEvaluateTargetCondition;

USTRUCT(BlueprintType)
struct SIFU_API FTargetableConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETargetingPrio, FFloatRange> m_Ranges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEvaluateTargetCondition*> m_Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UEvaluateTargetCondition>> m_ClassConditions;
    
    FTargetableConditions();
};

