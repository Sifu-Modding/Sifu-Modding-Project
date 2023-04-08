#pragma once
#include "CoreMinimal.h"
#include "SequenceBinding.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SIFU_API FSequenceBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RoleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> m_Actor;
    
    FSequenceBinding();
};

