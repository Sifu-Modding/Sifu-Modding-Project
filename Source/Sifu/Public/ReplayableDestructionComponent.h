#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnRepBrokenStateDelegate.h"
#include "ReplayableDestructionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayableDestructionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BrokenStateUpdate, meta=(AllowPrivateAccess=true))
    bool m_bBroken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRepBrokenState OnRepBrokenState;
    
    UReplayableDestructionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BrokenStateUpdate();
    
};

