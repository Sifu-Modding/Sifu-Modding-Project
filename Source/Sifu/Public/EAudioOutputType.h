#pragma once
#include "CoreMinimal.h"
#include "EAudioOutputType.generated.h"

UENUM()
enum class EAudioOutputType : uint8 {
    Mono,
    Speakers,
    Headphones,
    Five_One,
    Count,
};

