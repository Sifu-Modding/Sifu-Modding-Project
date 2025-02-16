#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "EOrderType.h"
#include "OrderTargetCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UOrderTargetCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderType m_eOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTargetShouldTargetSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderType m_eRequiredTargetOrderType;
    
    UOrderTargetCondition();

};

