#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoneControllers/AnimNode_CCDIK.h"
#include "SCAnimNode_CCDIK.generated.h"

class UMirrorAnimDB;

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_CCDIK : public FAnimNode_CCDIK {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName mSaveBone;
    
    UPROPERTY(EditAnywhere)
    FVector mvEffectorComponentSpaceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool mbMirror;
    
    UPROPERTY(Transient)
    UMirrorAnimDB* mMirrorAnimDB;
    
    FSCAnimNode_CCDIK();
};

