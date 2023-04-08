#pragma once
#include "CoreMinimal.h"
#include "RagdollBone.h"
#include "RagdollMoveableBone.generated.h"

USTRUCT(BlueprintType)
struct FRagdollMoveableBone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRagdollBone m_Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRagdollBone> m_CascadedBones;
    
    SCCORE_API FRagdollMoveableBone();
};

