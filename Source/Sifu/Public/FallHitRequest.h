#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "EFallHitOrigin.h"
#include "HitBox.h"
#include "FallHitRequest.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API UFallHitRequest : public UObject {
    GENERATED_BODY()
public:
    UFallHitRequest();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetFallHitOnSlope(const AFightingCharacter* _character, const FHitResult& _hitResult, FHitBox& _outHitbox) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetFallHitOnPhysicAnimImpact(const AFightingCharacter* _character, const FHitResult& _hitResult, float _fImpulseSize, FHitBox& _outHitbox) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetFallHit(const AFightingCharacter* _character, const FHitResult& _hitResult, EFallHitOrigin _eFallHitOrigin, float _fHeight, FHitBox& _outHitbox) const;
    
};

