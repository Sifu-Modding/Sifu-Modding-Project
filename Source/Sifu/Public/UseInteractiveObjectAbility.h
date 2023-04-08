#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "SCGameplayAbility.h"
#include "UseInteractiveObjectAbility.generated.h"

UCLASS(Blueprintable)
class SIFU_API UUseInteractiveObjectAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<InputAction> m_eCarriedMovableInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<InputAction> m_eMovableInputs;
    
public:
    UUseInteractiveObjectAbility();
};

