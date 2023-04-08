#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "SCAnimNode_PlayBlendSpace.generated.h"

class UMirrorAnimDB;

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_PlayBlendSpace : public FAnimNode_BlendSpacePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbMirrorAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 miAnimSubStateID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 muiTransitionGlobalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 muiOrderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbIgnoreOrderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMirrorAnimDB* mMirrorAnimDB;
    
    FSCAnimNode_PlayBlendSpace();
};

