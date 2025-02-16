#pragma once
#include "CoreMinimal.h"
#include "EMenuEnum.h"
#include "InputAction.h"
#include "SCUserWidget.h"
#include "PopupWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UPopupWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eValidateAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eCancelAction;
    
public:
    UPopupWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPF_OnChoseB();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPF_OnChoseA(int32 _playerID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetContent(const FText& _title, const FText& _message, const FText& _choiceA, const FText& _choiceB);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool BPE_IsUsingChoiceB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool BPE_IsUsingChoiceA() const;
    
};

