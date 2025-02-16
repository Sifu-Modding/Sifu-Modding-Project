#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "OnTagChangedDelegate.h"
#include "OnTagUpdateDelegate.h"
#include "AsyncTaskTagChanged.generated.h"

class UAbilitySystemComponent;
class UAsyncTaskTagChanged;

UCLASS(Blueprintable)
class SCCORE_API UAsyncTaskTagChanged : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTagChanged OnTagBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTagUpdate OnTagUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTagChanged OnTagEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* m_ASC;
    
public:
    UAsyncTaskTagChanged();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskTagChanged* ListenForTagsChange(UAbilitySystemComponent* _abilitySystemComponent, FGameplayTagContainer _tags);
    
    UFUNCTION(BlueprintCallable)
    void EndTask();
    
};

