#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ETrumpetSkewType.h"
#include "TrumpetSkewData.generated.h"

class UCurveFloat;

UCLASS()
class SIFU_API UTrumpetSkewData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fSkewZoneAngleDeg;
    
    UPROPERTY(EditAnywhere)
    float m_fSkewZoneRadius;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_Curve;
    
    UPROPERTY(EditAnywhere)
    ETrumpetSkewType m_eTrumpetSkewType;
    
    UTrumpetSkewData();
};

