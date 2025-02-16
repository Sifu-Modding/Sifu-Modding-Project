#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AnimContainer.h"
#include "LocomotionTransitionsAnimContainer.h"
#include "TransitionAnimRequest.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UTransitionAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirrorAllowed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionTransitionsAnimContainer m_Transitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionTransitionsAnimContainer m_WeaponTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_MediumLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_OnPlaceMediumLanding;
    
public:
    UTransitionAnimRequest();

};

