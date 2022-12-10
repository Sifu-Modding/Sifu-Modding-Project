#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputAction.h"
#include "InputManager.generated.h"

class UInputPad;
class UInputsDB;
class ASCPlayerController;

UCLASS(BlueprintType)
class SIFU_API UInputManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInputsDB* m_inputsDB;
    
private:
    UPROPERTY()
    TArray<UInputPad*> m_pads;
    
public:
    UInputManager();
    UFUNCTION(BlueprintCallable)
    static void BPF_ResetAction(UObject* _requester, const ASCPlayerController* _playerController, InputAction _eInputAction);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FlushAction(UObject* _requester, const ASCPlayerController* _playerController, InputAction _eInputAction);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ConsumeAction(UObject* _requester, const ASCPlayerController* _playerController, InputAction _eInputAction);
    
};

