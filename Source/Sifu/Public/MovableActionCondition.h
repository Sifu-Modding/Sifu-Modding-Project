#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "InputAction.h"
#include "MovableActionCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UMovableActionCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_HasAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreNonMovables;
    
    UMovableActionCondition();

};

