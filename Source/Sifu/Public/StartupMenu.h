#pragma once
#include "CoreMinimal.h"
#include "BaseStartMenu.h"
#include "EMenuEnum.h"
#include "EPlayerScreenSide.h"
#include "EStartupMenuState.h"
#include "StartupMenu.generated.h"

class AActor;
class ASCBasePlayerController;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UStartupMenu : public UBaseStartMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStartupMenuState m_eCurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuEnum m_eEnumType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iShowPopupOnLoadResultMask;
    
public:
    UStartupMenu();

private:
    UFUNCTION(BlueprintCallable)
    void OnSequenceFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnContinueWithoutSavingConfirm();
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmGeneric();
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmCancel();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetCanLaunchDirectly(bool _bLaunchDirectly);
    
    UFUNCTION(BlueprintCallable)
    void BPF_NewGame();
    
    UFUNCTION(BlueprintCallable)
    void BPF_LaunchIdlingStartupSequence(const ASCBasePlayerController* _controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsCameraShakeNeeded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasSaveGames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetStartSpot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerScreenSide BPF_GetPlayerScreenSide() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ContinueGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanLaunchDirectly(bool _bLaunchDirectly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_AreAllImpostorsStable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_UserNameChanged(const FString& _name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ShowState(EStartupMenuState _eState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUserPressedStart(int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSaveLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSaveCreated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAllImpostorsStabilized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_HandleNavigationBack();
    
};

