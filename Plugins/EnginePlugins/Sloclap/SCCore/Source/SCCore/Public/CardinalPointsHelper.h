#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESCCardinalPoints.h"
#include "CardinalPointsHelper.generated.h"

UCLASS(Blueprintable)
class SCCORE_API UCardinalPointsHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCardinalPointsHelper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESCCardinalPoints BPF_Mirror(ESCCardinalPoints _eCardinalPoint, bool _bMirror, bool _bIgnoreVertical);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsNone(ESCCardinalPoints _eCardinalPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESCCardinalPoints BPF_GetCardinalPointFromAngle(float _fAngle, float _fEastWestTolerance);
    
};

