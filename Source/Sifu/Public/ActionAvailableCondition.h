#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "InputAction.h"
#include "ActionAvailableCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UActionAvailableCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eAction;
    
    UActionAvailableCondition();
};

