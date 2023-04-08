#pragma once
#include "CoreMinimal.h"
#include "GenericInputData.h"
#include "InputSequenceStep.h"
#include "InputSequenceData.generated.h"

UCLASS(Blueprintable)
class SIFU_API UInputSequenceData : public UGenericInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputSequenceStep> m_Sequence;
    
    UInputSequenceData();
};

