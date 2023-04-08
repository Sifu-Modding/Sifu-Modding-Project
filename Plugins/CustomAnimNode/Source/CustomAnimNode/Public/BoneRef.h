#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "BoneRef.generated.h"

USTRUCT(BlueprintType)
struct FBoneRef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference Bone;
    
    CUSTOMANIMNODE_API FBoneRef();
};

