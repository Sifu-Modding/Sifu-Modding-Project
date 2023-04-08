#pragma once
#include "CoreMinimal.h"
#include "BaseActorConditionInstance.h"
#include "InterchangeableData.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FInterchangeableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorConditionInstance m_condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericInputData* m_Data;
    
    SIFU_API FInterchangeableData();
};

