#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIPhaseNodeLink.generated.h"

USTRUCT(BlueprintType)
struct FAIPhaseNodeLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid m_Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    SIFU_API FAIPhaseNodeLink();
};

