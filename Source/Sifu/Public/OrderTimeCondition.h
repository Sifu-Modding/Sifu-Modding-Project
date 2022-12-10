#pragma once
#include "CoreMinimal.h"
#include "EOrderAccessMode.h"
#include "BaseActorCondition.h"
#include "UObject/NoExportTypes.h"
#include "EditableOrderType.h"
#include "OrderTimeCondition.generated.h"

UCLASS()
class SIFU_API UOrderTimeCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FEditableOrderType m_OrderType;
    
    UPROPERTY(EditAnywhere)
    EOrderAccessMode m_eAccessMode;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_ValidTimeRange;
    
    UOrderTimeCondition();
};

