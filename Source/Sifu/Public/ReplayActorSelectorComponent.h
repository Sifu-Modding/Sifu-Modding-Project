#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnReceivedTraceResultSignatureDelegate.h"
#include "ReplayActorSelectorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayActorSelectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedTraceResultSignature m_OnReceiveTraceResult;
    
public:
    UReplayActorSelectorComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void BPF_RequestTrace();
    
};

