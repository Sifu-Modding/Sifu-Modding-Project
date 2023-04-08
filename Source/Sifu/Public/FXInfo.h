#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FXInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FFXInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vScale;
    
    SIFU_API FFXInfo();
};

