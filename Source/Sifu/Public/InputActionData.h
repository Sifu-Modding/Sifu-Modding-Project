#pragma once
#include "CoreMinimal.h"
#include "InputActionData.generated.h"

USTRUCT(BlueprintType)
struct FInputActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float m_fStackLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_bUseScaledTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBlockLowerContext;
    
    SIFU_API FInputActionData();
};

