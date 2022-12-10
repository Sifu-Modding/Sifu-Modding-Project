#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HitRequest.h"
#include "Engine/EngineTypes.h"
#include "ImpactResult.h"
#include "HitBox.h"
#include "HitBoxComponent.generated.h"

class AActor;
class AFightingCharacter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UHitBoxComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHit, const FHitResult&, _hitResult, const FHitRequest&, _hitRequest, const FImpactResult&, _Impact);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAnyHit);
    
    UPROPERTY(BlueprintAssignable)
    FOnHit m_OnHit;
    
    UPROPERTY(BlueprintAssignable)
    FOnAnyHit m_OnAnyHit;
    
    UPROPERTY(EditAnywhere)
    float m_fMinVelocity;
    
    UPROPERTY(EditAnywhere)
    bool m_bRecoveryAfterDelay;
    
    UPROPERTY(EditAnywhere)
    float m_fRecoveryAfterDelay;
    
    UPROPERTY(EditAnywhere)
    bool m_bRecoveryOnLeaveZone;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_HitBox;
    
private:
    UPROPERTY()
    TMap<TWeakObjectPtr<AActor>, float> m_Recoveries;
    
public:
    UHitBoxComponent();
    UFUNCTION(BlueprintCallable)
    void BPF_SetOwningCharacter(AFightingCharacter* _owningCharacter);
    
};

