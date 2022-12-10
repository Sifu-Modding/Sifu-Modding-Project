#pragma once
#include "CoreMinimal.h"
#include "Components/InterpToMovementComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPushableState.h"
#include "PushObjMovementComponent.generated.h"

class UCurveFloat;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UPushObjMovementComponent : public UInterpToMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iNumPoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fDist;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fGroundTraceOffset;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_SpeedCurve;
    
    UPROPERTY(EditAnywhere)
    TArray<float> m_SpeedSteps;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMaxRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fOnRailSpeedReduc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fOnRailGravScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fAngleTransitionTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fShortenedDistThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fSpeedOnRail;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fTimeToReachSpeedOnRail;
    
public:
    UPushObjMovementComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetObjectState(EPushableState _eState, bool _bResetIgnoreWhenMoving);
    
    UFUNCTION(BlueprintPure)
    float BPF_GetCurrentTime() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetCurrentSpeedStep();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_GenerateAndStartMovement(const FVector& _vDir, float _fStartStep);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_CalculateMovementBox(const FVector& _vLastControlPoint, FBox& _OutBox);
    
    UFUNCTION(BlueprintCallable)
    FVector BPF_CalculateLastPointLocation(const FVector& _vDir);
    
};

