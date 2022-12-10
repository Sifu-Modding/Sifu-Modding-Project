#pragma once
#include "CoreMinimal.h"
#include "DialogActionBase.h"
#include "ConfrontationDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UConfrontationDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_ActorSentToConfrontation;
    
    UPROPERTY(EditAnywhere)
    int32 m_iCircleIndex;
    
    UPROPERTY(EditAnywhere)
    bool m_bPlayPrefightAnimations;
    
    UConfrontationDialogAction();
protected:
    UFUNCTION()
    TArray<FName> GetActorOptions() const;
    
};

