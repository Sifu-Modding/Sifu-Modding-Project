#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseActorCondition.h"
#include "EPlayerInputConditionTestMethod.h"
#include "InputAction.h"
#include "PlayerInputCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UPlayerInputCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCheckAvailabilityLayers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerInputConditionTestMethod m_eTestMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_AllowedVectorProjectedOnForward;
    
    UPlayerInputCondition();

};

