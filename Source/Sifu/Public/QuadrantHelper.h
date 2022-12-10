#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EQuadrantTypes.h"
#include "QuadrantHelper.generated.h"

UCLASS(BlueprintType)
class SIFU_API UQuadrantHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQuadrantHelper();
    UFUNCTION(BlueprintPure)
    static EQuadrantTypes BPF_Mirror(EQuadrantTypes _eQuadrant, bool _bMirror);
    
    UFUNCTION(BlueprintPure)
    static EQuadrantTypes BPF_MakeQuadrant(bool _bIsFront, bool _bIsLeft);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsLeft(EQuadrantTypes _eQuadrant);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsFront(EQuadrantTypes _eQuadrant);
    
};

