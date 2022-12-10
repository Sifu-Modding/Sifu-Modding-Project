#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BlendProfileBySpeedStateTableRow.generated.h"

class UBlendProfile;

USTRUCT()
struct SIFU_API FBlendProfileBySpeedStateTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UBlendProfile* m_BlendProfileBySpeedState[4];
    
    FBlendProfileBySpeedStateTableRow();
};

