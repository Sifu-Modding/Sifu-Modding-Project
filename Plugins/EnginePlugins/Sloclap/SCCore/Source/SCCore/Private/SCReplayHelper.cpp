#include "SCReplayHelper.h"

USCReplayHelper::USCReplayHelper() {
}

bool USCReplayHelper::BPF_IsReplayRecording(const UObject* _worldContextObject) {
    return false;
}

bool USCReplayHelper::BPF_IsReplayPlaying(const UObject* _worldContextObject) {
    return false;
}


