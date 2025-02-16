#include "SCAnimInstance.h"
#include "Net/UnrealNetwork.h"

USCAnimInstance::USCAnimInstance() {
    this->m_fCinematicOverallWeight = 0.00f;
    this->m_fCinematicLayerTypesCursor = 0.00f;
    this->m_fPreviewCinematicLayerTypesCursor = 0.00f;
    this->m_MirrorAnimDB = NULL;
    this->m_CachedCurrentPoseAsset = NULL;
    this->m_bIsInCinematic = false;
}

FTransform USCAnimInstance::GetSavedTransform(FName _savedBone) const {
    return FTransform{};
}

bool USCAnimInstance::BPF_IsInPreview() const {
    return false;
}

UPoseAsset* USCAnimInstance::BPF_GetCurrentPoseAsset() const {
    return NULL;
}

void USCAnimInstance::BPF_BlendCinematicLayer(ECinematicLayerTypes _eLayerToBlendOut, float _fTargettedValue, float _fDuration, ESCBlendType _eBlendType, UCurveFloat* _blendCurve) {
}





void USCAnimInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USCAnimInstance, m_LocoToActionBlendForRep);
    DOREPLIFETIME(USCAnimInstance, m_ActionToActionBlendForRep);
    DOREPLIFETIME(USCAnimInstance, m_ActionToLocoBlendForRep);
}


