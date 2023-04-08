#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "EControllerNature.h"
#include "ControllerNatureCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UControllerNatureCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerNature m_eControllerNature;
    
public:
    UControllerNatureCondition();
};

