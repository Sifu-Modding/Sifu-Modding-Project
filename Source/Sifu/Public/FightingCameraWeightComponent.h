#pragma once
#include "CoreMinimal.h"
#include "FixedCameraWeightComponent.h"
#include "SCPoolableActorComponent.h"
#include "StateWeight.h"
#include "EGlobalBehaviors.h"
#include "FightingCameraWeightComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UFightingCameraWeightComponent : public UFixedCameraWeightComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bClampAdditiveWeight;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxAbsAdditiveWeight;
    
    UPROPERTY(EditAnywhere)
    FStateWeight m_fightingStateWeights[9];
    
    UPROPERTY(EditAnywhere)
    float m_fDialogInvolvedAdditiveWeight;
    
    UPROPERTY(EditAnywhere)
    float m_fDialogSpeakerAdditiveWeight;
    
public:
    UFightingCameraWeightComponent();
    UFUNCTION()
    void OnGlobalBehaviorChanged(EGlobalBehaviors _eNewBehavior, const bool _bFromDialog);
    
    
    // Fix for true pure virtual functions not being implemented
};

