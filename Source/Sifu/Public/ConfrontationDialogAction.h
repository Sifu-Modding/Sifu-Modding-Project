#pragma once
#include "CoreMinimal.h"
#include "DialogActionBase.h"
#include "ConfrontationDialogAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UConfrontationDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ActorSentToConfrontation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCircleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPlayPrefightAnimations;
    
    UConfrontationDialogAction();
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetActorOptions() const;
    
};

