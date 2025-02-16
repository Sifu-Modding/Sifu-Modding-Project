#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCAnimPoseArray.h"
#include "SCAnimPoseLooped.h"
#include "SCCharacterPoseData.generated.h"

class UPoseAsset;

UCLASS(Blueprintable)
class SCCORE_API USCCharacterPoseData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSCAnimPoseArray> m_PosesPerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCAnimPoseLooped> m_LoopedPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBlendBetweenStatesDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPoseAsset* m_PoseAsset;
    
public:
    USCCharacterPoseData();

};

