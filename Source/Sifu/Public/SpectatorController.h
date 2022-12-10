#pragma once
#include "CoreMinimal.h"
#include "SCPlayerController.h"
#include "SpectatorController.generated.h"

UCLASS()
class SIFU_API ASpectatorController : public ASCPlayerController {
    GENERATED_BODY()
public:
    ASpectatorController();
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_ExitSpectatorMode();
    
};

