#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ComboAIConditionFindActorsEnvQueryResult.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FComboAIConditionFindActorsEnvQueryResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> m_Actor;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_vLocation;
    
    SIFU_API FComboAIConditionFindActorsEnvQueryResult();
};

