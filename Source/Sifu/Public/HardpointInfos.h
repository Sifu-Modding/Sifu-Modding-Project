#pragma once
#include "CoreMinimal.h"
#include "HardpointInfos.generated.h"

class AArenaHardpointAreaActor;
class AAISituationActor;

USTRUCT(BlueprintType)
struct FHardpointInfos {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_HardpointAreaName;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AArenaHardpointAreaActor> m_HardPointAreaActor;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AAISituationActor> m_AISituationLinkedToHardpoint;
    
    SIFU_API FHardpointInfos();
};

