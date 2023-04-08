#pragma once
#include "CoreMinimal.h"
#include "Animation/SmartName.h"
#include "SCPoseAssetSelection.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCPoseAssetSelection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmartName m_PoseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWeight;
    
    FSCPoseAssetSelection();
};

