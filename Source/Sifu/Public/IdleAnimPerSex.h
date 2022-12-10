#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "IdleAnimPerSex.generated.h"

USTRUCT()
struct FIdleAnimPerSex {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_AnimsPerSex[2];
    
    SIFU_API FIdleAnimPerSex();
};

