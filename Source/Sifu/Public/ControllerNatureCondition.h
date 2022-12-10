#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "EControllerNature.h"
#include "ControllerNatureCondition.generated.h"

UCLASS()
class SIFU_API UControllerNatureCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EControllerNature m_eControllerNature;
    
public:
    UControllerNatureCondition();
};

