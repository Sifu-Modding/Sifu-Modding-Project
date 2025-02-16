#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EGlobalBehaviors.h"
#include "AIBehaviorSwitchActorComponent.generated.h"

class AActor;
class ASpawnerGroup;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAIBehaviorSwitchActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASpawnerGroup*> m_groupsToAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_AlertOnPrimitiveOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGlobalBehaviors m_eNewBehavior;
    
public:
    UAIBehaviorSwitchActorComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnComponentStartOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_TriggerBehaviorChangeToAssociatedGroups(AActor* _actorTriggeringTheAlert, bool _bSkipBark) const;
    
};

