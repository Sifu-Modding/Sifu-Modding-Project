#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "SCUserDefinedEnumHandler.h"
#include "SCAnimNode_VariableWeightBlender.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_VariableWeightBlender : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink mMasterPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink mVariableWeightPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler mLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbMeshSpaceBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbFullOverrideAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mfLayerOverrideAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbFullOverrideMirrorAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mfMirrorOverrideAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbMute;
    
    FSCAnimNode_VariableWeightBlender();
};

