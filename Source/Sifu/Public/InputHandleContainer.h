#pragma once
#include "CoreMinimal.h"
#include "BPInputHandleSignatureDelegate.h"
#include "InputAction.h"
#include "InputHandleContainer.generated.h"

USTRUCT(BlueprintType)
struct FInputHandleContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPInputHandleSignature m_Delegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eAction;
    
    SIFU_API FInputHandleContainer();
};

