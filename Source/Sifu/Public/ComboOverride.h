#pragma once
#include "CoreMinimal.h"
#include "ComboOverride.generated.h"

class UCombo;

USTRUCT(BlueprintType)
struct FComboOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DifficultyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombo* m_ComboOverride;
    
    SIFU_API FComboOverride();
};

