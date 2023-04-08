#pragma once
#include "CoreMinimal.h"
#include "EMessageReason.h"
#include "SCUserWidget.h"
#include "MessageFeedbackUserWidget.generated.h"

class ABaseReplayController;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UMessageFeedbackUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABaseReplayController* m_Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMessageReason m_eShowForReason;
    
public:
    UMessageFeedbackUserWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Show(bool _bHasActiveMessage);
    
};

