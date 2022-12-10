#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OrderPickupObjectHelper.generated.h"

class AFightingCharacter;
class AActor;
class UAnimSequence;

UCLASS(BlueprintType)
class SIFU_API UOrderPickupObjectHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOrderPickupObjectHelper();
    UFUNCTION(BlueprintCallable)
    static bool BPF_SetupPickupOrderParamsAndPlay(AFightingCharacter* _fightingChar, AActor* _actorToPickup, UAnimSequence* _animSequence, FSCUserDefinedEnumHandler _variableWeightLayer, bool _bPushPopActionState, bool _bMirror);
    
};

