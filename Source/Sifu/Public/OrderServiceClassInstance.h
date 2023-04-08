#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OrderServiceClassInstance.generated.h"

class UOrderService;

USTRUCT(BlueprintType)
struct SIFU_API FOrderServiceClassInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOrderService> m_DefaultClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOrderService* m_Instance;
    
    FOrderServiceClassInstance();
};

