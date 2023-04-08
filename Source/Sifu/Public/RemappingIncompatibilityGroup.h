#pragma once
#include "CoreMinimal.h"
#include "RemappingIncompatibilityGroup.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct SIFU_API FRemappingIncompatibilityGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDetectChildCollisions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGenericInputData>> m_Classes;
    
    FRemappingIncompatibilityGroup();
};

