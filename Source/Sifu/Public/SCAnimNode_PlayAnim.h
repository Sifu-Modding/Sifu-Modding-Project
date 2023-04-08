#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNode_SequencePlayer.h"
#include "SCAnimNode_PlayAnim.generated.h"

class UMirrorAnimDB;

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_PlayAnim : public FAnimNode_SequencePlayer {
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
    bool mbUseStartCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mfStartCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbIgnoreTimeAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMirrorAnimDB* mMirrorAnimDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbRecordedForReplay;
    
    FSCAnimNode_PlayAnim();
};

