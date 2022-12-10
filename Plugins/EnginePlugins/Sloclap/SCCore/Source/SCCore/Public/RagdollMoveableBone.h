#pragma once
#include "CoreMinimal.h"
#include "RagdollBone.h"
#include "RagdollMoveableBone.generated.h"

USTRUCT(BlueprintType)
struct FRagdollMoveableBone {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRagdollBone m_Bone;
    
    UPROPERTY(EditAnywhere)
    TArray<FRagdollBone> m_CascadedBones;
    
    SCCORE_API FRagdollMoveableBone();
};

