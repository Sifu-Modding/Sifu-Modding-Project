#pragma once
#include "CoreMinimal.h"
#include "ESCPopupType.generated.h"

UENUM(BlueprintType)
enum class ESCPopupType : uint8 {
    None,
    Generic,
    InvalidSave,
    SigninChanged,
    ConnectionFailed,
    PairingChanged,
    NeedLicense,
    ProgressWillNotBeSaved,
    ControllerDisconnected,
    SaveValidButBackupUsed,
    Count,
};

