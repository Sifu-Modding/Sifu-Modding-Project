#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LocomotionTransitionsAnimContainer.h"
#include "AnimContainer.h"
#include "TransitionAnimRequest.generated.h"

UCLASS(Abstract, BlueprintType)
class SIFU_API UTransitionAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bMirrorAllowed;
    
protected:
    UPROPERTY(EditAnywhere)
    FLocomotionTransitionsAnimContainer m_Transitions;
    
    UPROPERTY(EditAnywhere)
    FLocomotionTransitionsAnimContainer m_WeaponTransitions;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_MediumLanding;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_OnPlaceMediumLanding;
    
public:
    UTransitionAnimRequest();
};

