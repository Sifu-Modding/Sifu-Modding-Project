#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "EActionType.h"
#include "ActionTargetCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UActionTargetCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionType m_eAction;
    
    UActionTargetCondition();
};

