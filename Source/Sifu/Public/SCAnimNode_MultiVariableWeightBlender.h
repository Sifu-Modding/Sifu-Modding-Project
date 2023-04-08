#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "VariableWeightEnumHandler.h"
#include "SCAnimNode_MultiVariableWeightBlender.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_MultiVariableWeightBlender : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseLink> VariableWeightPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FVariableWeightEnumHandler> Layers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFullOverrideAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFullOverrideMirrorAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fMirrorOverrideAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMute;
    
    FSCAnimNode_MultiVariableWeightBlender();
};

