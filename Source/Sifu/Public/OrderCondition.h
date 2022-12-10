#pragma once
#include "CoreMinimal.h"
#include "EOrderAccessMode.h"
#include "BaseActorCondition.h"
#include "EOrderType.h"
#include "SCUserDefinedEnumHandler.h"
#include "OrderCondition.generated.h"

UCLASS()
class SIFU_API UOrderCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOrderType m_eOrderType;
    
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_BPOrderType;
    
    UPROPERTY(EditAnywhere)
    EOrderAccessMode m_eAccessMode;
    
    UOrderCondition();
};

