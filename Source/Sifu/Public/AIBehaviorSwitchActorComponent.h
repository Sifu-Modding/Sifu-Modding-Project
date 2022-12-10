#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EGlobalBehaviors.h"
#include "AIBehaviorSwitchActorComponent.generated.h"

class ASpawnerGroup;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAIBehaviorSwitchActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<ASpawnerGroup*> m_groupsToAlert;
    
    UPROPERTY(EditAnywhere)
    bool m_AlertOnPrimitiveOverlap;
    
    UPROPERTY(EditAnywhere)
    EGlobalBehaviors m_eNewBehavior;
    
public:
    UAIBehaviorSwitchActorComponent();
protected:
    UFUNCTION()
    void OnComponentStartOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_TriggerBehaviorChangeToAssociatedGroups(AActor* _actorTriggeringTheAlert, bool _bSkipBark) const;
    
};

