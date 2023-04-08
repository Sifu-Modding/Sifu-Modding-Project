#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SCAnimNotifyState.h"
#include "MovementModeNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UMovementModeNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> m_eEnterMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> m_eExitMovementMode;
    
    UMovementModeNotifyState();
};

