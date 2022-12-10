#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "BaseComponent.h"
#include "ASMDetectionComponent.generated.h"

class USCGameplayAbility;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UASMDetectionComponent : public UActorComponent, public IBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<USCGameplayAbility>> m_AbilityDetection;
    
    UASMDetectionComponent();
    
    // Fix for true pure virtual functions not being implemented
};

