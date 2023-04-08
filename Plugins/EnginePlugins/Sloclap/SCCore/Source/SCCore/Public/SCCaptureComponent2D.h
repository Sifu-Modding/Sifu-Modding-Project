#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneCaptureComponent2D.h"
#include "SCCaptureComponent2D.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCCaptureComponent2D : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    USCCaptureComponent2D();
    UFUNCTION(BlueprintCallable)
    bool BPF_ProjectWorldLocationToPixelCoordinates(const FVector& _vLocation, FVector2D& _vOutPixelLocation, FVector2D& _vOutUvLocation);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_ProjectMultipleWorldLocationsToPixelCoordinates(const TArray<FVector>& _Locations, TArray<FVector2D>& _OutPixelLocations, TArray<FVector2D>& _OutUvLocations, TArray<bool>& _OutbAreLocationsInCanvas);
    
};

