#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "PhaseNodeHandler.h"
#include "AIPhaseScenario.generated.h"

class UArchetypeAsset;

UCLASS(BlueprintType)
class SIFU_API UAIPhaseScenario : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<UArchetypeAsset> m_rootPhase;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FPhaseNodeHandler> m_PhaseNodes;
    
    UAIPhaseScenario();
    UFUNCTION(BlueprintPure)
    FName BPF_GetPhaseNameFromIndex(int32 _iPhaseIndex) const;
    
};

