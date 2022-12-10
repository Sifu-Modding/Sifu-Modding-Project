#include "CaptureInputAction.h"

class UInputMappingWidgetData;
class UCaptureInputAction;

UCaptureInputAction* UCaptureInputAction::BPF_CaptureInput(const UInputMappingWidgetData* _data, const FMappingID& _item, FInputMappingData _baseInputData, int32 _iSlodID, bool _bCaptureAxis, float _fMouseAxisThreshold, int32 _iControllerTypes, bool _bBreakDependency, bool _bInverseMouseVerticalAxis) {
    return NULL;
}

UCaptureInputAction::UCaptureInputAction() {
    this->m_Data = NULL;
}

