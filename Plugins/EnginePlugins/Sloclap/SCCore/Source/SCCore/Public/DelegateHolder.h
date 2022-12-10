#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DelegateHolder.generated.h"

class UParticleSystemComponent;

UCLASS()
class SCCORE_API UDelegateHolder : public UObject {
    GENERATED_BODY()
public:
    UDelegateHolder();
    UFUNCTION()
    void SytemCompleted(UParticleSystemComponent* Component);
    
};

