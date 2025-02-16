#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ProxyActorsContainerComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UProxyActorsContainerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTriggerProxy, AActor*, _proxyActor);
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTriggerProxy OnTriggerProxyActor;
    
public:
    UProxyActorsContainerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UnregisterProxyActor(AActor* _proxyActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterProxyActor(AActor* _proxyActor);
    
};

