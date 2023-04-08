#pragma once
#include "CoreMinimal.h"
#include "EEmotionTagType.generated.h"

UENUM(BlueprintType)
enum class EEmotionTagType : uint8 {
    TagStart,
    TagEnd,
    ShortTag,
    None,
};

