#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "EVirtualAction.h"
#include "GameFramework/PlayerInput.h"
#include "InputMappingKeySlot.generated.h"

USTRUCT(BlueprintType)
struct FInputMappingKeySlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EVirtualAction m_eVirtualAction;
    
    UPROPERTY(EditAnywhere)
    TArray<FInputActionKeyMapping> m_Actions;
    
    UPROPERTY(EditAnywhere)
    TArray<FInputAxisKeyMapping> m_Axis;
    
public:
    SIFU_API FInputMappingKeySlot();
};

