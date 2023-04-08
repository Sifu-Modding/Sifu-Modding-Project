#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VitalPointEvents.generated.h"

class AFightingCharacter;
class UVitalPointData;

UCLASS(Blueprintable)
class UVitalPointEvents : public UObject {
    GENERATED_BODY()
public:
    UVitalPointEvents();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnWillExecute(const UVitalPointData* _vitalPoint, AFightingCharacter* _Instigator, AFightingCharacter* _victim, bool& _bOutShouldDismiss) const;
    
};

