#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCSignificanceSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class SIFU_API USCSignificanceSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRecentlyRenderedLimit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHighBucketDist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMediumBucketDist;
    
    USCSignificanceSettings();

};

