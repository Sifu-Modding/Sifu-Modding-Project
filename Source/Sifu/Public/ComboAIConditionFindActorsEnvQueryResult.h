#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ComboAIConditionFindActorsEnvQueryResult.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FComboAIConditionFindActorsEnvQueryResult {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vLocation;
    
    SIFU_API FComboAIConditionFindActorsEnvQueryResult();
};

