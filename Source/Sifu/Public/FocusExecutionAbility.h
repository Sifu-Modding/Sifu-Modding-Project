#pragma once
#include "CoreMinimal.h"
#include "EditableOrderType.h"
#include "SCGameplayAbility.h"
#include "FocusExecutionAbility.generated.h"

UCLASS(Blueprintable)
class SIFU_API UFocusExecutionAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableOrderType m_InstigatorOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableOrderType m_VictimOrderType;
    
    UFocusExecutionAbility();

};

