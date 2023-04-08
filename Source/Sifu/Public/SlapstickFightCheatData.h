#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=CheatData -FallbackName=CheatData
#include "HitDescription.h"
#include "SlapstickFightCheatData.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API USlapstickFightCheatData : public UObject {
    GENERATED_BODY()
public:
    USlapstickFightCheatData();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAIHit(AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    
};

