#pragma once
#include "CoreMinimal.h"
#include "EOrderType.h"
#include "OrderInfosInstance.h"
#include "OrderInfosInstanceMap.generated.h"

USTRUCT(BlueprintType)
struct FOrderInfosInstanceMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EOrderType, FOrderInfosInstance> m_OrderServiceInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FOrderInfosInstance> m_BPOrderServiceInstances;
    
    SIFU_API FOrderInfosInstanceMap();
};

