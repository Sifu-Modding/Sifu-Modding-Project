#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnimQuadrantStruct.h"
#include "EQuadrantTypes.h"
#include "AnimQuadrantStructHelper.generated.h"

UCLASS(Blueprintable)
class UAnimQuadrantStructHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimQuadrantStructHelper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BPF_MakeAnimQuadrantStruct(EQuadrantTypes _eQuadrant, FAnimQuadrantStruct& _outStruct);
    
};

