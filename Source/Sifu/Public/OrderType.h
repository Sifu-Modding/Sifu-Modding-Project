#pragma once
#include "CoreMinimal.h"
#include "EOrderType.h"
#include "OrderType.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FOrderType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderType m_eOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BPOrderID;
    
    FOrderType();
};
FORCEINLINE uint32 GetTypeHash(const FOrderType) { return 0; }

