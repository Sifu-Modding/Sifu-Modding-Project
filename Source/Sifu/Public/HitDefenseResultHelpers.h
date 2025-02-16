#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAvoidType.h"
#include "HitDefenseResult.h"
#include "HitDefenseResultHelpers.generated.h"

class UAvoidPropertyDB;

UCLASS(Blueprintable)
class SIFU_API UHitDefenseResultHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHitDefenseResultHelpers();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAvoidType BPF_GetAvoidType(const FHitDefenseResult& _defenseResult);
    
    UFUNCTION(BlueprintCallable)
    static UAvoidPropertyDB* BPF_GetAvoidDB(const FHitDefenseResult& _defenseResult);
    
};

