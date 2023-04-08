#pragma once
#include "CoreMinimal.h"
#include "OrderServiceInfos.h"
#include "OrderServiceInserted.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FOrderServiceInserted {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iInsertionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrderServiceInfos m_OrderService;
    
    FOrderServiceInserted();
};

