#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "ReplayUIModeUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UReplayUIModeUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAddToViewport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHandleInputWhenUINotVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_DisplayName;
    
public:
    UReplayUIModeUserWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnLeaveMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnEnterMode();
    
};

