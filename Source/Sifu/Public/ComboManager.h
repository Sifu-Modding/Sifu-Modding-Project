#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ComboManager.generated.h"

class UCombo;

UCLASS()
class SIFU_API UComboManager : public UObject {
    GENERATED_BODY()
public:
   /* UPROPERTY(BlueprintAssignable)
    FComboEndedDelegate m_OnEnded;*/
    
private:
    UPROPERTY(EditAnywhere)
    UCombo* m_Combo;
    
public:
    UComboManager();
};

