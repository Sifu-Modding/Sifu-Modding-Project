#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "UObject/NoExportTypes.h"
#include "InputAction.h"
#include "EPlayerInputConditionTestMethod.h"
#include "PlayerInputCondition.generated.h"

UCLASS()
class SIFU_API UPlayerInputCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    InputAction m_eInput;
    
    UPROPERTY(EditAnywhere)
    bool m_bCheckAvailabilityLayers;
    
    UPROPERTY(EditAnywhere)
    EPlayerInputConditionTestMethod m_eTestMethod;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_AllowedVectorProjectedOnForward;
    
    UPlayerInputCondition();
};

