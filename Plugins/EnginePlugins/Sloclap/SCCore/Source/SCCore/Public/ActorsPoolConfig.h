#pragma once
#include "CoreMinimal.h"
#include "ActorsPoolConfig.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorsPoolConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> m_Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSize;
    
    SCCORE_API FActorsPoolConfig();
};

