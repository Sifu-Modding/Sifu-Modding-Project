#pragma once
#include "CoreMinimal.h"
#include "EOrderType.h"
#include "PendingOrderStruct.generated.h"

class UOrderComponent;

USTRUCT(BlueprintType)
struct FPendingOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderType OrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOrderComponent* OrderComponent;
    
    SIFU_API FPendingOrderStruct();
};

