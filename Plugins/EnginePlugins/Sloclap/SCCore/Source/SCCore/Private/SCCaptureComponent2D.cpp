#include "SCCaptureComponent2D.h"

USCCaptureComponent2D::USCCaptureComponent2D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool USCCaptureComponent2D::BPF_ProjectWorldLocationToPixelCoordinates(const FVector& _vLocation, FVector2D& _vOutPixelLocation, FVector2D& _vOutUvLocation) {
    return false;
}

bool USCCaptureComponent2D::BPF_ProjectMultipleWorldLocationsToPixelCoordinates(const TArray<FVector>& _Locations, TArray<FVector2D>& _OutPixelLocations, TArray<FVector2D>& _OutUvLocations, TArray<bool>& _OutbAreLocationsInCanvas) {
    return false;
}


