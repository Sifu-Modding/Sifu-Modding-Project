#pragma once
#include "CoreMinimal.h"
#include "AIPhaseTransition.h"
#include "AIPhaseTransitionFocusAttackVictim.generated.h"

class UVitalPointData;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAIPhaseTransitionFocusAttackVictim : public UAIPhaseTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVitalPointData* m_VitalPoint;
    
    UAIPhaseTransitionFocusAttackVictim();
};

