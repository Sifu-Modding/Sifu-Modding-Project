#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAttackOrigin.h"
#include "AttackOriginHelper.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAttackOriginHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAttackOriginHelper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAttackOrigin BPF_Mirror(EAttackOrigin _eAttackOrigin, bool _bMirror);
    
};

