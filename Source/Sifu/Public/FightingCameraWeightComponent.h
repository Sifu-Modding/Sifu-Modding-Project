#pragma once
#include "CoreMinimal.h"
#include "SCPoolableActorComponent.h"
#include "EGlobalBehaviors.h"
#include "FixedCameraWeightComponent.h"
#include "StateWeight.h"
#include "FightingCameraWeightComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UFightingCameraWeightComponent : public UFixedCameraWeightComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bClampAdditiveWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxAbsAdditiveWeight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateWeight m_fightingStateWeights[9];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDialogInvolvedAdditiveWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDialogSpeakerAdditiveWeight;
    
public:
    UFightingCameraWeightComponent();
    UFUNCTION(BlueprintCallable)
    void OnGlobalBehaviorChanged(EGlobalBehaviors _eNewBehavior, const bool _bFromDialog);
    
    
    // Fix for true pure virtual functions not being implemented
};

