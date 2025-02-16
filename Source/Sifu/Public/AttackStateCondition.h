#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "EAttackStates.h"
#include "AttackStateCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAttackStateCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAttackStates> m_AllowedStates;
    
    UAttackStateCondition();

};

