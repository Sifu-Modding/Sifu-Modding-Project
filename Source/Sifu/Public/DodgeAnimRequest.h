#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AnimContainer.h"
#include "ESCCardinalPoints.h"
#include "EQuadrantTypes.h"
#include "HitBox.h"
#include "NetOrderStructDodge.h"
#include "DodgeAnimRequest.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API UDodgeAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UDodgeAnimRequest();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetDodgeAnimations(TArray<FAnimContainer>& _outAnimContainer, TArray<FAnimContainer>& _outWeaponAnimContainer, bool& _bMirror, ESCCardinalPoints& _eOutCardinalPoint, AFightingCharacter* _owner, EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, const AFightingCharacter* _attacker, const FHitBox& _nextHit, bool _bAttackMirror, float _fHitDelay, const FNetOrderStructDodge& _dodgeStruct) const;
    
};

