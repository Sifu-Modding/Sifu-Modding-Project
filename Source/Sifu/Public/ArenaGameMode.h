#pragma once
#include "CoreMinimal.h"
#include "ThePlainesGameMode.h"
#include "ArenaGameMode.generated.h"

UCLASS(NonTransient)
class SIFU_API AArenaGameMode : public AThePlainesGameMode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerPressStart);
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerPressStart OnPlayerPressStart;
    
private:
    UPROPERTY(EditAnywhere)
    float m_fEndArenaDelay;
    
public:
    AArenaGameMode();
    UFUNCTION(BlueprintCallable)
    void BPF_TriggerEndArena();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PlayerPressStart();
    
    UFUNCTION(BlueprintCallable)
    void BPF_FlagArenaForRestart();
    
};

