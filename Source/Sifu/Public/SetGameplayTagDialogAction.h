#pragma once
#include "CoreMinimal.h"
#include "DialogActionBase.h"
#include "GameplayTagContainer.h"
#include "SetGameplayTagDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API USetGameplayTagDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bAdd;
    
    UPROPERTY(EditAnywhere)
    FName m_Owner;
    
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_GameplayTag;
    
public:
    USetGameplayTagDialogAction();
};

