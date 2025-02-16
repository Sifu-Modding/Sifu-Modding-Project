#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CombatCircleDescription.h"
#include "BasePositionSettings.generated.h"

UCLASS(Abstract, Blueprintable, DefaultConfig, Config=WuguanAI)
class SIFU_API UBasePositionSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCombatCircleDescription> m_CirclesDescriptions;
    
    UBasePositionSettings();

};

