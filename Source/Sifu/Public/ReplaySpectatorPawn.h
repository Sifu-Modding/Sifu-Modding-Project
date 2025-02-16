#pragma once
#include "CoreMinimal.h"
#include "SCSpectatorPawnBase.h"
#include "ReplaySpectatorPawn.generated.h"

class AController;
class UReplayCineCameraComponent;

UCLASS(Blueprintable)
class SIFU_API AReplaySpectatorPawn : public ASCSpectatorPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplayCineCameraComponent* m_CineCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDefaultRollCooldownOnReset;
    
public:
    AReplaySpectatorPawn(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPossess(AController* _controller);
    
};

