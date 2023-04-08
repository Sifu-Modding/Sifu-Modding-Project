#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StarUnlockCondition.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API UStarUnlockCondition : public UObject {
    GENERATED_BODY()
public:
    UStarUnlockCondition();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_VerifyCondition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_BindCallbacks(AFightingCharacter* _FightingCharacter);
    
};

