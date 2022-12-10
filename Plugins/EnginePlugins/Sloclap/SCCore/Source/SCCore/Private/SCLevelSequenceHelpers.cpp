#include "SCLevelSequenceHelpers.h"

class APlayerController;
class ACharacter;
class ALevelSequenceActor;
class AActor;

void USCLevelSequenceHelpers::BPF_UnbindOnSequenceViewBlendStateChanged(const FSCLevelSequenceDynamicDelegate& _delegate) {
}

void USCLevelSequenceHelpers::BPF_StopSequence(const ALevelSequenceActor* _sequenceActor) {
}

void USCLevelSequenceHelpers::BPF_SetSequenceCharacter(const ALevelSequenceActor* _sequenceActor, ACharacter* _character) {
}

void USCLevelSequenceHelpers::BPF_RegisterSequenceActor(const ALevelSequenceActor* _sequenceActor, AActor* _actor, FName _roleName) {
}

void USCLevelSequenceHelpers::BPF_PlaySequence(const ALevelSequenceActor* _sequenceActor, ACharacter* _characterOwner, bool _bLoop) {
}

void USCLevelSequenceHelpers::BPF_PauseSequence(const ALevelSequenceActor* _sequenceActor) {
}

FName USCLevelSequenceHelpers::BPF_GetTeleportRoleName() {
    return NAME_None;
}

ALevelSequenceActor* USCLevelSequenceHelpers::BPF_GetSequenceActorFromId(int32 _sequenceID) {
    return NULL;
}

int32 USCLevelSequenceHelpers::BPF_CreateSequence(ACharacter* _characterOwner, APlayerController* _controller, const FSCSequenceParameters& _parameters) {
    return 0;
}

void USCLevelSequenceHelpers::BPF_BindOnSequenceViewBlendStateChanged(const FSCLevelSequenceDynamicDelegate& _delegate) {
}

USCLevelSequenceHelpers::USCLevelSequenceHelpers() {
}

