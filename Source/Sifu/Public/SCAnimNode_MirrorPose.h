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
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink mBasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool mbMirrorAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMirrorAnimDB* mMirrorAnimDB;
    
    FSCAnimNode_MirrorPose();
};

