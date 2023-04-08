#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "Animation/InputScaleBias.h"
#include "Animation/InputScaleBias.h"
#include "Animation/InputScaleBias.h"
#include "Animation/InputScaleBias.h"
#include "Animation/AnimNodeBase.h"
#include "SCAnimNode_RotationOffsetBlendSpace.generated.h"

class UMirrorAnimDB;

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LODThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputAlphaBoolBlend AlphaBoolBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlphaCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimAlphaInputType AlphaInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlphaBoolEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbMirrorAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMirrorAnimDB* mMirrorAnimDB;
    
    FSCAnimNode_RotationOffsetBlendSpace();
};

