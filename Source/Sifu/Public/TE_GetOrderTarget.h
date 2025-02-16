#pragma once
#include "CoreMinimal.h"
#include "BaseTargetEvaluation.h"
#include "EditableOrderType.h"
#include "TE_GetOrderTarget.generated.h"

UCLASS(Blueprintable)
class SIFU_API UTE_GetOrderTarget : public UBaseTargetEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableOrderType m_OrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIncludeChildTypes;
    
    UTE_GetOrderTarget();

};

