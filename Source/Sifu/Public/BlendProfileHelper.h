#pragma once
#include "CoreMinimal.h"
#include "BlendProfileBySpeedStateStruct.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESpeedState.h"
#include "BlendProfileHelper.generated.h"

class UBlendProfile;

UCLASS(BlueprintType)
class SIFU_API UBlendProfileHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlendProfileHelper();
    UFUNCTION(BlueprintPure)
    static UBlendProfile* BPF_GetBlendProfile(const FBlendProfileBySpeedStateStruct& _blendProfileBySpeedStateStruct, ESpeedState _eSpeedState);
    
};

