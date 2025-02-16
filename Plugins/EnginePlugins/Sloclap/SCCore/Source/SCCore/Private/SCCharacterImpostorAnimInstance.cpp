#include "SCCharacterImpostorAnimInstance.h"
#include "Net/UnrealNetwork.h"

USCCharacterImpostorAnimInstance::USCCharacterImpostorAnimInstance() {
    this->m_bHasAnimation = false;
    this->m_animation = NULL;
    this->m_bMirrorAnimation = false;
}

void USCCharacterImpostorAnimInstance::OnRep_CompressedPoseSnapshotToMimic() {
}

void USCCharacterImpostorAnimInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USCCharacterImpostorAnimInstance, m_bHasAnimation);
    DOREPLIFETIME(USCCharacterImpostorAnimInstance, m_animation);
    DOREPLIFETIME(USCCharacterImpostorAnimInstance, m_bMirrorAnimation);
    DOREPLIFETIME(USCCharacterImpostorAnimInstance, m_CompressedPoseSnapshotToMimic);
}


