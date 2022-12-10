#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ControllerKeyIcons.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct SIFU_API FControllerKeyIcons {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FKey m_Key;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_Icons[3];
    
    UPROPERTY(EditAnywhere)
    bool m_bShowText;
    
    UPROPERTY(EditAnywhere)
    FText m_ReplacementText;
    
    FControllerKeyIcons();
};

