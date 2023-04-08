#pragma once
#include "CoreMinimal.h"
#include "SCAiAction.h"
#include "AIComboLaunchParameters.h"
#include "AIActionLaunchCombo.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIActionLaunchCombo : public USCAiAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIComboLaunchParameters m_Parameters;
    
    UAIActionLaunchCombo();
};

