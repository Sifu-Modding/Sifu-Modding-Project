#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PropertyFloorBoneRepartition.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FPropertyFloorBoneRepartition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference m_Bone;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_DegreeFloorAngleRange;
    
    UPROPERTY(EditAnywhere)
    float m_fRepartitionAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fResultAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform m_BoneResultTransform;
    
    FPropertyFloorBoneRepartition();
};

