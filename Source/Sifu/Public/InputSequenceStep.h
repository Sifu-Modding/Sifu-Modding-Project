#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputSequenceStep.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FInputSequenceStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericInputData* m_Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_DelayBeforeNextAction;
    
    SIFU_API FInputSequenceStep();
};

