#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCUserDefinedEnumHandler.h"
#include "OrderPickupObjectHelper.generated.h"

class AActor;
class AFightingCharacter;
class UAnimSequence;

UCLASS(Blueprintable)
class SIFU_API UOrderPickupObjectHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOrderPickupObjectHelper();
    UFUNCTION(BlueprintCallable)
    static bool BPF_SetupPickupOrderParamsAndPlay(AFightingCharacter* _fightingChar, AActor* _actorToPickup, UAnimSequence* _animSequence, FSCUserDefinedEnumHandler _variableWeightLayer, bool _bPushPopActionState, bool _bMirror);
    
};

