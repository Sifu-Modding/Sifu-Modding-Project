#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbility.h"
#include "FocusPrepAbility.generated.h"

UCLASS(Blueprintable)
class SIFU_API UFocusPrepAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDeactivationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinFocusPointsToActivate;
    
    UFocusPrepAbility();

};

