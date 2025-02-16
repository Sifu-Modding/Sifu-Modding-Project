#pragma once
#include "CoreMinimal.h"
#include "FightingCameraWeightComponent.h"
#include "StateWeight.h"
#include "AIFightingCameraWeightComponent.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAIFightingCameraWeightComponent : public UFightingCameraWeightComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDamageValidityWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreFriendlyDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_WeightByDamageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateWeight m_ticketStateWeight;
    
public:
    UAIFightingCameraWeightComponent(const FObjectInitializer& ObjectInitializer);

};

