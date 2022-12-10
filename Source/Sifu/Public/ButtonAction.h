#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "EUIInputModes.h"
#include "EControllerIconAxisTypes.h"
#include "EActionMouseButtons.h"
#include "ButtonAction.generated.h"

class UTexture2D;
class UGenericInputData;

USTRUCT(BlueprintType)
struct SIFU_API FButtonAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    InputAction m_eAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EUIInputModes m_eInputMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EControllerIconAxisTypes m_eAxisType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UGenericInputData*> m_InputDatas;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EActionMouseButtons m_Mouse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* m_MouseModeTexture;
    
    FButtonAction();
};

