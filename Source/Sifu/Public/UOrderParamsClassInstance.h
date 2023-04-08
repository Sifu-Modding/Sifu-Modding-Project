#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UOrderParamsClassInstance.generated.h"

class UOrderParams;

USTRUCT(BlueprintType)
struct SIFU_API FUOrderParamsClassInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOrderParams> m_DefaultClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOrderParams* m_Instance;
    
    FUOrderParamsClassInstance();
};

