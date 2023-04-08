#pragma once
#include "CoreMinimal.h"
#include "CombinationInput.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FCombinationInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericInputData* m_Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRegisterPressTimeOnStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRemovePressedTimeFromTimeLeft;
    
    SIFU_API FCombinationInput();
};

