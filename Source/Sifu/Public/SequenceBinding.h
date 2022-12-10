#pragma once
#include "CoreMinimal.h"
#include "SequenceBinding.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SIFU_API FSequenceBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_RoleName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<AActor> m_Actor;
    
    FSequenceBinding();
};

