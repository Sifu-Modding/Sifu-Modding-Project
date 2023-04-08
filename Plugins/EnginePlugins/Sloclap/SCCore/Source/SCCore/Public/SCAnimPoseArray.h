#pragma once
#include "CoreMinimal.h"
#include "SCPoseAssetSelection.h"
#include "SCAnimPoseArray.generated.h"

USTRUCT(BlueprintType)
struct FSCAnimPoseArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCPoseAssetSelection> m_Poses;
    
    SCCORE_API FSCAnimPoseArray();
};

