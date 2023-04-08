#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "IsInInteractiveDialogCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UIsInInteractiveDialogCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxChoicesCount;
    
    UIsInInteractiveDialogCondition();
};

