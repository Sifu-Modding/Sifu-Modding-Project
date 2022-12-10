#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIDifficultyLevel.generated.h"

class UCombo;

USTRUCT(BlueprintType)
struct SIFU_API FAIDifficultyLevel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_DifficultyName;
    
    UPROPERTY(EditAnywhere)
    FInt32Range m_DifficultyGaugeRange;
    
    UPROPERTY(EditAnywhere)
    float m_fDifficultyVariationMultFactor;
    
    UPROPERTY(EditAnywhere)
    UCombo* m_Combo;
    
    FAIDifficultyLevel();
};

