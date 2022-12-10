#pragma once
#include "CoreMinimal.h"
#include "RagdollBone.generated.h"

USTRUCT(BlueprintType)
struct FRagdollBone {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Name;
    
    UPROPERTY(EditAnywhere)
    float m_fForceFactor;
    
    SCCORE_API FRagdollBone();
};

