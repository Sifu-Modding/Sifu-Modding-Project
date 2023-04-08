#pragma once
#include "CoreMinimal.h"
#include "SaveInputAxisKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct FSaveInputAxisKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName m_Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float m_fScale;
    
    SIFU_API FSaveInputAxisKeyMapping();
};

