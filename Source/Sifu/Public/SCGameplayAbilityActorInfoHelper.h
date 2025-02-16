#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCGameplayAbilityActorInfo.h"
#include "SCGameplayAbilityActorInfoHelper.generated.h"

class AFightingCharacter;
class AFightingPlayerController;
class USCAbilitySystemComponent;

UCLASS(Blueprintable)
class USCGameplayAbilityActorInfoHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCGameplayAbilityActorInfoHelper();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USCAbilitySystemComponent* BPF_GetSCAbilitySystem(const FSCGameplayAbilityActorInfo& _info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AFightingPlayerController* BPF_GetFightingPlayerController(const FSCGameplayAbilityActorInfo& _info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AFightingCharacter* BPF_GetFightingCharacter(const FSCGameplayAbilityActorInfo& _info);
    
};

