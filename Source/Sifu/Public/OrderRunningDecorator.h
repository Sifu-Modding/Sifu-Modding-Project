#pragma once
#include "CoreMinimal.h"
#include "SCBTDecorator.h"
#include "EOrderType.h"
#include "OrderRunningDecorator.generated.h"

UCLASS(Blueprintable)
class UOrderRunningDecorator : public USCBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EOrderType> m_eOrders;
    
public:
    UOrderRunningDecorator();

};

