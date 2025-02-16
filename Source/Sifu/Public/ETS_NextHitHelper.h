#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ETS_NextHitExtraInfos.h"
#include "TargetResult.h"
#include "ETS_NextHitHelper.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API UETS_NextHitHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UETS_NextHitHelper();

    UFUNCTION(BlueprintCallable)
    static bool BPF_GetNextHitTargetExtraInfos(AFightingCharacter* _character, const FTargetResult& _targetInfos, FETS_NextHitExtraInfos& _infos);
    
};

