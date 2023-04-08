#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DeadZone.h"
#include "CameraZoneBlueprintHelper.generated.h"

UCLASS(Blueprintable)
class SIFU_API UCameraZoneBlueprintHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCameraZoneBlueprintHelper();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BPF_GetSafeZoneListFromDeadZones(TArray<FDeadZone>& _outListOfSafeZones, const TArray<FDeadZone>& _inDeadZones);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetMidAngle(const FDeadZone& _inDeadZone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_GetDeadZoneContainingAngle(FDeadZone& _outDeadZone, const TArray<FDeadZone>& _inDeadZones, float _fAngleInDeg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_GetClosestDeadZoneToAngle(FDeadZone& _outDeadZone, const TArray<FDeadZone>& _inDeadZones, float _fAngleInDeg, float _fAngleDiffMaxInDeg);
    
};

