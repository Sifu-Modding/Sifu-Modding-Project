#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCPoolableActorComponent.h"
#include "TargetableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UTargetableComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bShouldDisplayBP;
    
    UTargetableComponent();
    UFUNCTION(BlueprintCallable)
    void BPF_SetShouldDisplay(bool _bSHould);
    
    
    // Fix for true pure virtual functions not being implemented
};

