#pragma once
#include "CoreMinimal.h"
#include "BaseActorConditionInstance.h"
#include "EActionType.h"
#include "TargetActionTypeRequest.h"
#include "TargetActionTypePerCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTargetActionTypePerCondition : public UTargetActionTypeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EActionType, FBaseActorConditionInstance> m_ActionTypePerCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionType m_eDefaultValue;
    
    UTargetActionTypePerCondition();
};

