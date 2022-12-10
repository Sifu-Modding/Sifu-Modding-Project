#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnTagChangedDelegate.h"
#include "OnTagUpdateDelegate.h"
#include "GameplayTagContainer.h"
#include "AsyncTaskTagChanged.generated.h"

class UAsyncTaskTagChanged;
class UAbilitySystemComponent;

UCLASS()
class SCCORE_API UAsyncTaskTagChanged : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnTagChanged OnTagBegin;
    
    UPROPERTY(BlueprintAssignable)
    FOnTagUpdate OnTagUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FOnTagChanged OnTagEnd;
    
protected:
    UPROPERTY(Instanced)
    UAbilitySystemComponent* m_ASC;
    
public:
    UAsyncTaskTagChanged();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskTagChanged* ListenForTagsChange(UAbilitySystemComponent* _abilitySystemComponent, FGameplayTagContainer _tags);
    
    UFUNCTION(BlueprintCallable)
    void EndTask();
    
};

