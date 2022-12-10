#pragma once
#include "CoreMinimal.h"
#include "SCPoseAssetSelection.h"
#include "SCAnimPoseArray.generated.h"

USTRUCT(BlueprintType)
struct FSCAnimPoseArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSCPoseAssetSelection> m_Poses;
    
    SCCORE_API FSCAnimPoseArray();
};

