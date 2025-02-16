#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CheatData.h"
#include "FirewalkTimer.h"
#include "HitBox.h"
#include "FirewalkCheatData.generated.h"

UCLASS(Blueprintable)
class SIFU_API UFirewalkCheatData : public UCheatData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bActivateFeedbackEveryDamageTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_hitBoxFirewalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFirewalkTimer m_FirewalkTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVelocityTreshold;
    
public:
    UFirewalkCheatData();

    UFUNCTION(BlueprintCallable)
    void OnMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchTimer(const bool _bActivate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetTimer();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForceStopTimer(const bool _bValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DamageTick();
    
};

