#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PhaseNodeHandler.h"
#include "Templates/SubclassOf.h"
#include "AIPhaseScenario.generated.h"

class UArchetypeAsset;

UCLASS(Blueprintable)
class SIFU_API UAIPhaseScenario : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArchetypeAsset> m_rootPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhaseNodeHandler> m_PhaseNodes;
    
    UAIPhaseScenario();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetPhaseNameFromIndex(int32 _iPhaseIndex) const;
    
};

