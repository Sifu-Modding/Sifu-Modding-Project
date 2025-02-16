#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "EFightingActionState.h"
#include "FightingActionStateCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UFightingActionStateCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFightingActionState m_eActionState;
    
    UFightingActionStateCondition();

};

