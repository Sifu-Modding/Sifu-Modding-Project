#pragma once
#include "CoreMinimal.h"
#include "AIComboLaunchParameters.h"
#include "SCAiAction.h"
#include "AIActionLaunchCombo.generated.h"

UCLASS()
class SIFU_API UAIActionLaunchCombo : public USCAiAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIComboLaunchParameters m_Parameters;
    
    UAIActionLaunchCombo();
};

