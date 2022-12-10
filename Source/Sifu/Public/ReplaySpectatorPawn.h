#pragma once
#include "CoreMinimal.h"
#include "SCSpectatorPawnBase.h"
#include "ReplaySpectatorPawn.generated.h"

class UReplayCineCameraComponent;
class AController;

UCLASS()
class SIFU_API AReplaySpectatorPawn : public ASCSpectatorPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UReplayCineCameraComponent* m_CineCameraComponent;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDefaultRollCooldownOnReset;
    
public:
    AReplaySpectatorPawn();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPossess(AController* _controller);
    
};

