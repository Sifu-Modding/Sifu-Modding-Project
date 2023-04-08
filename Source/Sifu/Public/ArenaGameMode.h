#pragma once
#include "CoreMinimal.h"
#include "ThePlainesGameMode.h"
#include "ArenaGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class SIFU_API AArenaGameMode : public AThePlainesGameMode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerPressStart);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerPressStart OnPlayerPressStart;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

