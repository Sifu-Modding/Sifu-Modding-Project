#pragma once
#include "CoreMinimal.h"
#include "SCDelegate.h"
#include "BaseArenaObjective.h"
#include "EHardpointActivationRule.h"
#include "ESequentialLoopRule.h"
#include "HardpointInfos.h"
#include "ArenaHardpointsObjective.generated.h"

class AArenaHardpointAreaActor;

UCLASS(Blueprintable)
class SIFU_API UArenaHardpointsObjective : public UBaseArenaObjective {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHardpointCaptured, const FHardpointInfos&, _HardpointInfo, int32, _CurrentChallengeIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHardpointActivationChanged, const AArenaHardpointAreaActor*, _HardpointActor, bool, _Activated);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHardpointInfos> m_HardpointsInfos;
    
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnAllHardpointsClearedOnce;*/
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHardpointCaptured OnHardpointCapturedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHardpointActivationChanged OnHardpointActivationChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHardpointActivationRule m_eHardpointActivationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESequentialLoopRule m_eSequentialLoopRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHardpointCaptureValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHasClearedAllHardpointsOnce;
    
public:
    UArenaHardpointsObjective();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetTotalNumberOfHardpoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCurrentHardpointIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AArenaHardpointAreaActor* BPF_GetCurrentHardpointAreaActor() const;
    
};

