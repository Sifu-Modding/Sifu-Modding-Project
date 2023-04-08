#include "SCGameplayAbilityActorInfoHelper.h"

class AFightingCharacter;
class AFightingPlayerController;
class USCAbilitySystemComponent;

USCAbilitySystemComponent* USCGameplayAbilityActorInfoHelper::BPF_GetSCAbilitySystem(const FSCGameplayAbilityActorInfo& _info) {
    return NULL;
}

AFightingPlayerController* USCGameplayAbilityActorInfoHelper::BPF_GetFightingPlayerController(const FSCGameplayAbilityActorInfo& _info) {
    return NULL;
}

AFightingCharacter* USCGameplayAbilityActorInfoHelper::BPF_GetFightingCharacter(const FSCGameplayAbilityActorInfo& _info) {
    return NULL;
}

USCGameplayAbilityActorInfoHelper::USCGameplayAbilityActorInfoHelper() {
}

