#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SpeedPivotFootData.generated.h"

class UPivotFootData;

UCLASS(Blueprintable)
class SIFU_API USpeedPivotFootData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPivotFootData* m_MoveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPivotFootData* m_StartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPivotFootData* m_StopData;
    
    USpeedPivotFootData();
};

