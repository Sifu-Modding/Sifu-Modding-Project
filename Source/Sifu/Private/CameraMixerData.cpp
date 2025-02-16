#include "CameraMixerData.h"

UCameraMixerData::UCameraMixerData() {
    this->m_StartCamera = NULL;
    this->m_EndCamera = NULL;
    this->m_BlenderClass = NULL;
    this->m_bUseEndCamForTransition = false;
}

void UCameraMixerData::ImportTransitionsFromStartCam() {
}

void UCameraMixerData::ImportTransitionsFromEndCam() {
}


