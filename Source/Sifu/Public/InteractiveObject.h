#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractiveObject.generated.h"

class APlayerController;
class UInteractionObjectComponent;

UCLASS(Blueprintable)
class SIFU_API AInteractiveObject : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionObjectComponent* m_InteractionObjectComponent;
    
    AInteractiveObject(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UseInteractiveObjectFailed(APlayerController* _controller, FText _reason);
    
    UFUNCTION(BlueprintCallable)
    void UseInteractiveObject(APlayerController* _controller);
    
public:
    UFUNCTION(BlueprintCallable)
    UInteractionObjectComponent* BPF_GetInteractionObjectComponent();
    
    UFUNCTION(BlueprintCallable)
    void BPF_Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUseFailed(const FText& _reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUse();
    
};

