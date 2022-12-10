#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "Animation/InputScaleBias.h"
#include "Animation/InputScaleBias.h"
#include "Animation/InputScaleBias.h"
#include "Animation/InputScaleBias.h"
#include "SCAnimNode_RotationOffsetBlendSpace.generated.h"

class UMirrorAnimDB;

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LODThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputAlphaBoolBlend AlphaBoolBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AlphaCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAnimAlphaInputType AlphaInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlphaBoolEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool mbMirrorAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMirrorAnimDB* mMirrorAnimDB;
    
    FSCAnimNode_RotationOffsetBlendSpace();
};

