#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "BoneContainer.h"
#include "Animation/AnimNodeBase.h"
#include "AxisSettings.h"
#include "BoneRef.h"
#include "AnimMode_OrientationWarping.generated.h"

USTRUCT(BlueprintType)
struct CUSTOMANIMNODE_API FAnimMode_OrientationWarping : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocomotionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAxisSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneRef> SpineBones;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference IKFootRootBone;
    
    FAnimMode_OrientationWarping();
};

