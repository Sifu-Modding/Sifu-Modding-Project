#pragma once
#include "CoreMinimal.h"
#include "CombinationInput.h"
#include "GenericInputData.h"
#include "CombinationInputData.generated.h"

UCLASS(Blueprintable)
class SIFU_API UCombinationInputData : public UGenericInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bResetChildHoldToggleOnActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCombinationInput> m_IncludedInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCombinationInput> m_ExcludedInputs;
    
    UCombinationInputData();
};

