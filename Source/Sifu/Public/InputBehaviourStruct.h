#pragma once
#include "CoreMinimal.h"
#include "InputBehavior2.h"
#include "InputBehaviourStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FInputBehaviourStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputBehavior m_Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimePressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRegisterPressTimeOnStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRemovePressedTimeFromTimeLeft;
    
    FInputBehaviourStruct();
};

