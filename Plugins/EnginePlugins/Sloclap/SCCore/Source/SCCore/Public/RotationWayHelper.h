#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESCRotationWay.h"
#include "RotationWayHelper.generated.h"

UCLASS(Blueprintable)
class SCCORE_API URotationWayHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URotationWayHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESCRotationWay BPF_Mirror(ESCRotationWay _eRotation, bool _bMirror);
    
};

