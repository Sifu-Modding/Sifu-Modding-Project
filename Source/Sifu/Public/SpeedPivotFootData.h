#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SpeedPivotFootData.generated.h"

class UPivotFootData;

UCLASS()
class SIFU_API USpeedPivotFootData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPivotFootData* m_MoveData;
    
    UPROPERTY(EditAnywhere)
    UPivotFootData* m_StartData;
    
    UPROPERTY(EditAnywhere)
    UPivotFootData* m_StopData;
    
    USpeedPivotFootData();
};

