#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SkillButtonHelper.generated.h"

class USkillsDB;
class USkillButton;

UCLASS(BlueprintType)
class USkillButtonHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USkillButtonHelper();
    UFUNCTION(BlueprintCallable)
    static void BPF_RebuildDBFromButtons(USkillsDB* _db, USkillButton* _root);
    
};

