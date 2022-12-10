#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EParryHeight.h"
#include "EAttackTarget.h"
#include "EParrySide.h"
#include "EAttackOrigin.h"
#include "ParryMatch.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UParryMatch : public UObject {
    GENERATED_BODY()
public:
    UParryMatch();
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_DoesParrySideMatch(EParrySide _eParrySide, EAttackTarget _eAttackTarget, EAttackOrigin _eAttackOrigin) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_DoesParryHeightMatch(EParryHeight _eParryHeight, EAttackTarget _eAttackTarget, EAttackOrigin _eAttackOrigin) const;
    
};

