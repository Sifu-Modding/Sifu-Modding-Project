#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig_Sight.h"
#include "AISenseConfig_SCClose.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAISenseConfig_SCClose : public UAISenseConfig_Sight {
    GENERATED_BODY()
public:
    UAISenseConfig_SCClose();
};

