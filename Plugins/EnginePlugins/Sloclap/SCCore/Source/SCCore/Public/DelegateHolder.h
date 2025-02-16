#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DelegateHolder.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class SCCORE_API UDelegateHolder : public UObject {
    GENERATED_BODY()
public:
    UDelegateHolder();

    UFUNCTION(BlueprintCallable)
    void SytemCompleted(UParticleSystemComponent* Component);
    
};

