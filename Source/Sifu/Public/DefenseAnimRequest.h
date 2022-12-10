#pragma once
#include "CoreMinimal.h"
#include "DefenseAnimInfos.h"
#include "UObject/Object.h"
#include "HitDescription.h"
#include "DefenderAnimInfos.h"
#include "DefenseAnimRequest.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API UDefenseAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UDefenseAnimRequest();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetHitDefenseAnimation(const FHitDescription& _hitDescription, AFightingCharacter* _grabber, FDefenderAnimInfos& _outDefenderAnims, FDefenseAnimInfos& _outDefendeeAnims) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetDefaultThrowAnimation(FDefenseAnimInfos& _outGrabberAnims, FDefenseAnimInfos& _outGrabbedAnims) const;
    
};

