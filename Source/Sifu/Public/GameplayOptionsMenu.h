#pragma once
#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "EGameOptionTypes.h"
#include "GameplayOptionsMenu.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UGameplayOptionsMenu : public UMenuWidget {
    GENERATED_BODY()
public:
    UGameplayOptionsMenu();
    UFUNCTION(BlueprintCallable)
    void BPF_SetGameOptionValue(EGameOptionTypes _eOptionType, float _fOptionValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGameOptionRatio(EGameOptionTypes _eOptionType, float _fOptionRatio);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RestoreOptionDefaultValue(EGameOptionTypes _eOptionType);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsModificationHasBeenMade();
    
    UFUNCTION(BlueprintCallable)
    void BPF_Default();
    
    UFUNCTION(BlueprintCallable)
    void BPF_Cancel();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyCurrentOptionsToDefault();
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<EGameOptionTypes> BPE_GetHandledOptionTypes();
    
};

