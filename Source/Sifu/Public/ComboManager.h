#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ComboManager.generated.h"

class UCombo;

UCLASS(Blueprintable)
class SIFU_API UComboManager : public UObject {
    GENERATED_BODY()
public:
   /* UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComboEndedDelegate m_OnEnded;*/
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombo* m_Combo;
    
public:
    UComboManager();
};

