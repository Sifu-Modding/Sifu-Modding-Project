#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatData.generated.h"

class APlayerController;
class UGameInstance;

UCLASS(Blueprintable)
class SCCORE_API UCheatData : public UObject {
    GENERATED_BODY()
public:
    UCheatData();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnCheatDeactivated(APlayerController* _playerController) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnCheatActivated(APlayerController* _playerController, const FString& _argument) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_CanApplyCheat(UGameInstance* _gameInstance, APlayerController* _playerController) const;
    
};

