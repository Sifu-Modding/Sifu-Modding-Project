#pragma once
#include "CoreMinimal.h"
#include "BPInputHandleSignatureDelegate.h"
#include "InputAction.h"
#include "InputHandleContainer.generated.h"

USTRUCT(BlueprintType)
struct FInputHandleContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FBPInputHandleSignature m_Delegate;
    
    UPROPERTY(BlueprintReadWrite)
    InputAction m_eAction;
    
    SIFU_API FInputHandleContainer();
};

