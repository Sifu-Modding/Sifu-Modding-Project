#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "AbandoningAnimations.generated.h"

USTRUCT(BlueprintType)
struct FAbandoningAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_GoingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_Loop;
    
    SIFU_API FAbandoningAnimations();
};

