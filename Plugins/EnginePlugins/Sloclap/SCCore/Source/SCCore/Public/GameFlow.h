#pragma once
#include "CoreMinimal.h"
#include "GameplayTagAssetInterface.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameFlow.generated.h"

class UGameFlowNodeMap;
class UGameFlowController;

UCLASS(BlueprintType)
class SCCORE_API UGameFlow : public UObject, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGameFlowNodeMap* m_currentNode;
    
    UPROPERTY(Transient)
    UGameFlowNodeMap* m_pendingNode;
    
    UPROPERTY(VisibleAnywhere)
    FName m_defaultMapTag;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, UGameFlowNodeMap*> m_MapNodes;
    
private:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGameFlowController> m_Controller;
    
    UPROPERTY(Transient)
    UClass* m_ControllerClass;
    
public:
    UGameFlow();
    UFUNCTION(BlueprintCallable)
    void BPF_ResetMapOption();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveMapOption(FGameplayTag _optionToRemove);
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer BPF_GetMapOptions() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddMapOption(FGameplayTag _optionToAdd);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

