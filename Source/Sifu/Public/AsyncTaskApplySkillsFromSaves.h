#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnSavesAppliedDelegate.h"
#include "AsyncTaskApplySkillsFromSaves.generated.h"

class USCAbilitySystemComponent;
class UAsyncTaskApplySkillsFromSaves;
class UObject;

UCLASS()
class SIFU_API UAsyncTaskApplySkillsFromSaves : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnSavesApplied SavesApplied;
    
    UAsyncTaskApplySkillsFromSaves();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskApplySkillsFromSaves* BPF_ApplySavesSkillOnCurrentSave(UObject* _context, USCAbilitySystemComponent* _abilitySystemComponent, TArray<int32> _indicesOfSave);
    
};

