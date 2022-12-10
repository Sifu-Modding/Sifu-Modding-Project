#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CombatCircleDescription.h"
#include "BasePositionSettings.generated.h"

UCLASS(Abstract, DefaultConfig, Config=WuguanAI)
class SIFU_API UBasePositionSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FCombatCircleDescription> m_CirclesDescriptions;
    
    UBasePositionSettings();
};

