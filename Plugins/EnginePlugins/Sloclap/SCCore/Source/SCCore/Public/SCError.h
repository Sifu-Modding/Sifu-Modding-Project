#pragma once
#include "CoreMinimal.h"
#include "ESCErrorType.h"
#include "SCError.generated.h"

USTRUCT(BlueprintType)
struct FSCError {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    ESCErrorType m_Type;
    
    UPROPERTY(BlueprintReadWrite)
    FText m_Message;
    
    SCCORE_API FSCError();
};

