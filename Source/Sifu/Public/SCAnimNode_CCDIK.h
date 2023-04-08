#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_CCDIK.h"
#include "UObject/NoExportTypes.h"
#include "SCAnimNode_CCDIK.generated.h"

class UMirrorAnimDB;

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_CCDIK : public FAnimNode_CCDIK {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mSaveBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mvEffectorComponentSpaceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMirrorAnimDB* mMirrorAnimDB;
    
    FSCAnimNode_CCDIK();
};

