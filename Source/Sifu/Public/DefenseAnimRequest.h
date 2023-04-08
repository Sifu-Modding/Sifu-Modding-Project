#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DefenderAnimInfos.h"
#include "DefenseAnimInfos.h"
#include "HitDescription.h"
#include "DefenseAnimRequest.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API UDefenseAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UDefenseAnimRequest();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetHitDefenseAnimation(const FHitDescription& _hitDescription, AFightingCharacter* _grabber, FDefenderAnimInfos& _outDefenderAnims, FDefenseAnimInfos& _outDefendeeAnims) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetDefaultThrowAnimation(FDefenseAnimInfos& _outGrabberAnims, FDefenseAnimInfos& _outGrabbedAnims) const;
    
};

