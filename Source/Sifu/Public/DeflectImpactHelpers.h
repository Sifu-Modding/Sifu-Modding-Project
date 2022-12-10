#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AppliedHitImpact.h"
#include "DeflectImpact.h"
#include "HitImpact.h"
#include "AppliedDeflectImpact.h"
#include "DeflectImpactHelpers.generated.h"

class AFightingCharacter;

UCLASS(BlueprintType)
class UDeflectImpactHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDeflectImpactHelpers();
    UFUNCTION(BlueprintPure)
    static FAppliedHitImpact BPF_MakeAppliedHitImpact(const FHitImpact& _hitImpact, const AFightingCharacter* _defender);
    
    UFUNCTION(BlueprintPure)
    static FAppliedDeflectImpact BPF_MakeAppliedDeflectImpact(const FDeflectImpact& _hitImpact, const AFightingCharacter* _defender, bool _bParriable);
    
};

