#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "IdleAnimAndTransition.generated.h"

USTRUCT(BlueprintType)
struct FIdleAnimAndTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_IdleAnimation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_IdleExitTransition[4];
    
    SIFU_API FIdleAnimAndTransition();
};

