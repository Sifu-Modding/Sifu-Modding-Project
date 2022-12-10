#pragma once
#include "CoreMinimal.h"
#include "FightingCameraWeightComponent.h"
#include "StateWeight.h"
#include "AIFightingCameraWeightComponent.generated.h"

class UCurveFloat;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAIFightingCameraWeightComponent : public UFightingCameraWeightComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_fDamageValidityWindow;
    
    UPROPERTY(EditAnywhere)
    bool m_bIgnoreFriendlyDamage;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_WeightByDamageCurve;
    
    UPROPERTY(EditAnywhere)
    FStateWeight m_ticketStateWeight;
    
public:
    UAIFightingCameraWeightComponent();
};

