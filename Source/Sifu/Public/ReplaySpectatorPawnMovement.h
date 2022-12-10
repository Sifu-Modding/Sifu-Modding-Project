#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SpectatorPawnMovement.h"
#include "ApplyDirectionConstraintSignatureDelegate.h"
#include "ReplaySpectatorPawnMovement.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplaySpectatorPawnMovement : public USpectatorPawnMovement {
    GENERATED_BODY()
public:
    UReplaySpectatorPawnMovement();
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetDirectionConstraintDelegate(FApplyDirectionConstraintSignature _delegate);
    
    UFUNCTION(BlueprintPure)
    FVector BPF_GetConstrainedDirection(const FVector& _vLeashOrigin, const FVector& _vLeashSize, const FVector& _vCurrentLocation, const FVector& _vDirection, bool& _bOutConstrained) const;
    
};

