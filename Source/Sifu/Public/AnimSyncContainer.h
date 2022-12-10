#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "AnimSyncContainer.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimSyncContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_InstigatorAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_VictimAnim;
    
    FAnimSyncContainer();
};

