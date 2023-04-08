#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterBlendSettings.generated.h"

class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct SCCORE_API FMaterialParameterBlendSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_MPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInversed;
    
    FMaterialParameterBlendSettings();
};

