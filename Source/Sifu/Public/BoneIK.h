#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "BoneIK.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FBoneIK {
    GENERATED_BODY()
public:
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneReference m_Bone;*/
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fWeight;
    
    FBoneIK();
};

