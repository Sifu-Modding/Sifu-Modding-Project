#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DialogActionBase.h"
#include "SetGameplayTagDialogAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API USetGameplayTagDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Owner;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_GameplayTag;
    
public:
    USetGameplayTagDialogAction();
};

