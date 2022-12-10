#pragma once
#include "CoreMinimal.h"
#include "SCBTDecorator.h"
#include "AIActionHasOrderParamDecorator.generated.h"

UCLASS()
class SIFU_API UAIActionHasOrderParamDecorator : public USCBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_OrderParamsName;
    
public:
    UAIActionHasOrderParamDecorator();
};

