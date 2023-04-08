#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlendProfileBySpeedStateStruct.h"
#include "ESpeedState.h"
#include "BlendProfileHelper.generated.h"

class UBlendProfile;

UCLASS(Blueprintable)
class SIFU_API UBlendProfileHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlendProfileHelper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBlendProfile* BPF_GetBlendProfile(const FBlendProfileBySpeedStateStruct& _blendProfileBySpeedStateStruct, ESpeedState _eSpeedState);
    
};

