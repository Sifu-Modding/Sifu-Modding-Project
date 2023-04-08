#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "GameFlow.generated.h"

class UGameFlowController;
class UGameFlowNodeMap;

UCLASS(Blueprintable)
class SCCORE_API UGameFlow : public UObject, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameFlowNodeMap* m_currentNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameFlowNodeMap* m_pendingNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_defaultMapTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UGameFlowNodeMap*> m_MapNodes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameFlowController> m_Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* m_ControllerClass;
    
public:
    UGameFlow();
    UFUNCTION(BlueprintCallable)
    void BPF_ResetMapOption();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveMapOption(FGameplayTag _optionToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

