#pragma once
#include "CoreMinimal.h"
#include "OrderServiceInfos.h"
#include "OrderInfosInstance.generated.h"

class UOrderDB;

USTRUCT(BlueprintType)
struct SIFU_API FOrderInfosInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOrderServiceInfos> m_Services;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOrderDB* m_DB;
    
    FOrderInfosInstance();
};

