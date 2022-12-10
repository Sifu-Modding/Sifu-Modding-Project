#pragma once
#include "CoreMinimal.h"
#include "BaseArenaObjective.h"
#include "HardpointInfos.h"
#include "SCDelegate.h"
#include "ESequentialLoopRule.h"
#include "EHardpointActivationRule.h"
#include "ArenaHardpointsObjective.generated.h"

class AArenaHardpointAreaActor;

UCLASS()
class SIFU_API UArenaHardpointsObjective : public UBaseArenaObjective {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHardpointCaptured, const FHardpointInfos&, _HardpointInfo, int32, _CurrentChallengeIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHardpointActivationChanged, const AArenaHardpointAreaActor*, _HardpointActor, bool, _Activated);
    
    UPROPERTY(EditAnywhere)
    TArray<FHardpointInfos> m_HardpointsInfos;
    
   /* UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnAllHardpointsClearedOnce;*/
    
    UPROPERTY(BlueprintAssignable)
    FOnHardpointCaptured OnHardpointCapturedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnHardpointActivationChanged OnHardpointActivationChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    EHardpointActivationRule m_eHardpointActivationRule;
    
    UPROPERTY(EditAnywhere)
    ESequentialLoopRule m_eSequentialLoopRule;
    
    UPROPERTY(EditAnywhere)
    float m_fHardpointCaptureValue;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bHasClearedAllHardpointsOnce;
    
public:
    UArenaHardpointsObjective();
    UFUNCTION(BlueprintPure)
    int32 BPF_GetTotalNumberOfHardpoints() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetCurrentHardpointIndex() const;
    
    UFUNCTION(BlueprintPure)
    AArenaHardpointAreaActor* BPF_GetCurrentHardpointAreaActor() const;
    
};

