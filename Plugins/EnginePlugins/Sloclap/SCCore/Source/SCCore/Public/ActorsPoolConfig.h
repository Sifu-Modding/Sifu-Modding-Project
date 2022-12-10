#pragma once
#include "CoreMinimal.h"
#include "ActorsPoolConfig.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorsPoolConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_Name;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AActor> m_Class;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iSize;
    
    SCCORE_API FActorsPoolConfig();
};

