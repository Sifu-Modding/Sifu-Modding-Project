#pragma once
#include "CoreMinimal.h"
#include "InputMappingKeySlot.h"
#include "CaptureInputResult.generated.h"

USTRUCT(BlueprintType)
struct FCaptureInputResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputMappingKeySlot> m_Slots;
    
    SIFU_API FCaptureInputResult();
};

