#pragma once
#include "CoreMinimal.h"
#include "InputPriorityGroup.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FInputPriorityGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<UGenericInputData>> m_Data;
    
    SIFU_API FInputPriorityGroup();
};

