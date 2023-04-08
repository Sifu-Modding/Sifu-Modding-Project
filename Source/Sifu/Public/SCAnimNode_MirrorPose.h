#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "SCAnimNode_MirrorPose.generated.h"

class UMirrorAnimDB;

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_MirrorPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink mBasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbMirrorAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMirrorAnimDB* mMirrorAnimDB;
    
    FSCAnimNode_MirrorPose();
};

