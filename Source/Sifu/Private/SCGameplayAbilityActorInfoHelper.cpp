#include "SCGameplayAbilityActorInfoHelper.h"

class AFightingPlayerController;
class USCAbilitySystemComponent;
class AFightingCharacter;

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

