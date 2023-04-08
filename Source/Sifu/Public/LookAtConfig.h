#pragma once
#include "CoreMinimal.h"
#include "LookAtConfig.generated.h"

class ULookAtConfigData;

USTRUCT(BlueprintType)
struct FLookAtConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanHaveInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULookAtConfigData* m_configData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fValidDuration;
    
    SIFU_API FLookAtConfig();
};

