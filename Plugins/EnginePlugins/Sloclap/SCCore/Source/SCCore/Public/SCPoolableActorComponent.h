#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SCPoolableActorComponent.generated.h"

UINTERFACE(Blueprintable)
class SCCORE_API USCPoolableActorComponent : public UInterface {
    GENERATED_BODY()
};

class SCCORE_API ISCPoolableActorComponent : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnPoolableOwnerUninitializeComponents();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPoolableOwnerInitializeComponents();
    
};

