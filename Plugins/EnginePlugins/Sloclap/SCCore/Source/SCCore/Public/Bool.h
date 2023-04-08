#pragma once
#include "CoreMinimal.h"
#include "Bool.generated.h"

USTRUCT(BlueprintType)
struct FBool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBool;
    
    SCCORE_API FBool();
};

