#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HandleInput.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHandleInput : public UInterface {
    GENERATED_BODY()
};

class IHandleInput : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_HandleInput();
    
};

