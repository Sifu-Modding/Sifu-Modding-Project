#pragma once
#include "CoreMinimal.h"
#include "SCBTDecorator.h"
#include "AIActionHasOrderParamDecorator.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIActionHasOrderParamDecorator : public USCBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_OrderParamsName;
    
public:
    UAIActionHasOrderParamDecorator();
};

