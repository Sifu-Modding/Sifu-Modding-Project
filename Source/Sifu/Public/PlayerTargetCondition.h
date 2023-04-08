#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "BaseActorTargetConditionInstance.h"
#include "EActionType.h"
#include "PlayerTargetCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UPlayerTargetCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionType m_eAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUpdateTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorTargetConditionInstance m_OptionalSubConditionOnTarget;
    
    UPlayerTargetCondition();
};

