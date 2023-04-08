#pragma once
#include "CoreMinimal.h"
#include "UOrderParamsInstanceStruct.generated.h"

class UOrderParams;

USTRUCT(BlueprintType)
struct SIFU_API FUOrderParamsInstanceStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOrderParams* m_Instance;
    
    FUOrderParamsInstanceStruct();
};

