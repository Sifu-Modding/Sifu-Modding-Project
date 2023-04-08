#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIDifficultyLevel.generated.h"

class UCombo;

USTRUCT(BlueprintType)
struct SIFU_API FAIDifficultyLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DifficultyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range m_DifficultyGaugeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDifficultyVariationMultFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombo* m_Combo;
    
    FAIDifficultyLevel();
};

