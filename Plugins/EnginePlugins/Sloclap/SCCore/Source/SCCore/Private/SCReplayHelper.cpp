#include "SCReplayHelper.h"

class UObject;

bool USCReplayHelper::BPF_IsReplayRecording(const UObject* _worldContextObject) {
    return false;
}

bool USCReplayHelper::BPF_IsReplayPlaying(const UObject* _worldContextObject) {
    return false;
}

USCReplayHelper::USCReplayHelper() {
}

