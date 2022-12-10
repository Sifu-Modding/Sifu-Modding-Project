#pragma once
#include "CoreMinimal.h"
#include "OnRepBrokenStateDelegate.h"
#include "Components/ActorComponent.h"
#include "ReplayableDestructionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayableDestructionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(ReplicatedUsing=OnRep_BrokenStateUpdate)
    bool m_bBroken;
    
    UPROPERTY(BlueprintAssignable)
    FOnRepBrokenState OnRepBrokenState;
    
    UReplayableDestructionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnRep_BrokenStateUpdate();
    
};

