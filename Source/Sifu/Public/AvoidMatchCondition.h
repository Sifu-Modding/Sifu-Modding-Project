#pragma once
#include "CoreMinimal.h"
#include "ESCCardinalPoints.h"
#include "HitBox.h"
#include "UObject/Object.h"
#include "EAvoidTrackingTypes.h"
#include "EAvoidType.h"
#include "AvoidMatchCondition.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UAvoidMatchCondition : public UObject {
    GENERATED_BODY()
public:
    UAvoidMatchCondition();
    UFUNCTION(BlueprintNativeEvent)
    EAvoidTrackingTypes BPE_GetAttackTrackingResponseFromAvoidType(EAvoidType _eAvoidType) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_DoesAvoidMatch(EAvoidType _eAvoidType, const FHitBox& _hitbox, bool _bMirror) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_DoesAvoidDismissesHit(EAvoidType _eAvoidType, ESCCardinalPoints _eCardPoint, const FHitBox& _hitbox, bool _bMirror) const;
    
};

