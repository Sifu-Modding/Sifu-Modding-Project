#pragma once
#include "CoreMinimal.h"
#include "HardpointInfos.generated.h"

class AAISituationActor;
class AArenaHardpointAreaActor;

USTRUCT(BlueprintType)
struct FHardpointInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_HardpointAreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AArenaHardpointAreaActor> m_HardPointAreaActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AAISituationActor> m_AISituationLinkedToHardpoint;
    
    SIFU_API FHardpointInfos();
};

