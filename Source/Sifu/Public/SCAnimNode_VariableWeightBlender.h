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
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink mMasterPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink mVariableWeightPose;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCUserDefinedEnumHandler mLayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool mbMeshSpaceBlend;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool mbFullOverrideAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float mfLayerOverrideAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool mbFullOverrideMirrorAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float mfMirrorOverrideAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool mbMute;
    
    FSCAnimNode_VariableWeightBlender();
};

