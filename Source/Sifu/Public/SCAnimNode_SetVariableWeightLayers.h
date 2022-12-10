#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "VariableWeightLayerToBoneMask.h"
#include "ESCBlendType.h"
#include "VariableWeightInfo.h"
#include "SCAnimNode_SetVariableWeightLayers.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_SetVariableWeightLayers : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink mBasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FVariableWeightLayerToBoneMask> mVariableWeightLayerToBoneMaskRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVariableWeightInfo mVariableWeightLayerToBoneMaskFromOrderDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVariableWeightLayerToBoneMask> mFillerLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVariableWeightLayerToBoneMask> mVariableWeightLayerToBoneMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mBlendTimeWhenSwitchingProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESCBlendType mBlendModeWhenSwitchingProfile;
    
private:
    UPROPERTY()
    TArray<FVariableWeightLayerToBoneMask> m_PrevVariableWeightLayerToBoneMaskRuntime;
    
public:
    FSCAnimNode_SetVariableWeightLayers();
};

