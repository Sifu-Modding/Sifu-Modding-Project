#pragma once
#include "CoreMinimal.h"
#include "BaseTargetEvaluation.h"
#include "InputAction.h"
#include "TE_DesignatedPrecise.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UTE_DesignatedPrecise : public UBaseTargetEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eDirectionAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOnScreenToleranceTimeForDesignated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseRetrainOnDesignatedToOnScreenTargets;
    
    UTE_DesignatedPrecise();

};

