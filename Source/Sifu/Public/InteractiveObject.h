#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractiveObject.generated.h"

class UInteractionObjectComponent;
class APlayerController;

UCLASS()
class SIFU_API AInteractiveObject : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UInteractionObjectComponent* m_InteractionObjectComponent;
    
    AInteractiveObject();
private:
    UFUNCTION()
    void UseInteractiveObjectFailed(APlayerController* _controller, FText _reason);
    
    UFUNCTION()
    void UseInteractiveObject(APlayerController* _controller);
    
public:
    UFUNCTION(BlueprintCallable)
    UInteractionObjectComponent* BPF_GetInteractionObjectComponent();
    
    UFUNCTION(BlueprintCallable)
    void BPF_Deactivate();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnUseFailed(const FText& _reason);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnUse();
    
};

