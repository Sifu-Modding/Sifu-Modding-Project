#include "ReplayKey.h"

bool UReplayKey::BPF_HasReplayKeyType(int32 _iKeyTypeFlags, int32 _iContainsKeyTypeFlags) {
    return false;
}

bool UReplayKey::BPF_HasActiveBlend() const {
    return false;
}

UReplayKey::UReplayKey() {
}

