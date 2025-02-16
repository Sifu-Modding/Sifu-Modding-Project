#pragma once
#include "CoreMinimal.h"
#include "DialogActionBase.h"
#include "JoinDialogAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UJoinDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ActorSentToDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPlayPrefightAnimations;
    
    UJoinDialogAction();

protected:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetActorOptions() const;
    
};

