#pragma once
#include "CoreMinimal.h"
#include "OnInputUpdateSignatureDelegate.h"
#include "OnPropertyUpdatedSignatureDelegate.h"
#include "SCUserWidget.h"
#include "Templates/SubclassOf.h"
#include "BindablePropertyUserWidget.generated.h"

class UBindablePropertyBase;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UBindablePropertyUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputUpdateSignature m_OnInputUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPropertyUpdatedSignature m_OnPropertyUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSelfBindingProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bConstructProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBindablePropertyBase> m_PropertyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBindablePropertyBase* m_Property;
    
public:
    UBindablePropertyUserWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPropertyUpdated(UBindablePropertyBase* _property);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RefreshDisplay();
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnInputUpdate();
    
    UFUNCTION(BlueprintCallable)
    void BPF_CreateProperty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSelfBinding();
    
};

