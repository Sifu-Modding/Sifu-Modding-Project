#pragma once
#include "CoreMinimal.h"
#include "RagdollBone.generated.h"

USTRUCT(BlueprintType)
struct FRagdollBone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fForceFactor;
    
    SCCORE_API FRagdollBone();
};

