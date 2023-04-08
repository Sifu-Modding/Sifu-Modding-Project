#pragma once
#include "CoreMinimal.h"
#include "ESaveBone.h"
#include "SCAnimNode_SaveBoneTransform.h"
#include "SCAnimNode_SaveBoneTransformByEnum.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_SaveBoneTransformByEnum : public FSCAnimNode_SaveBoneTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveBone meSaveBone;
    
    FSCAnimNode_SaveBoneTransformByEnum();
};

