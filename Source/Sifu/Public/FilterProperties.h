#pragma once
#include "CoreMinimal.h"
#include "EScreenLocation.h"
#include "FilterProperties.generated.h"

USTRUCT(BlueprintType)
struct FFilterProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_bUserConfigured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FText m_FilterText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float m_fExposure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float m_fVignette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float m_fGrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float m_fFilterWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float m_fFogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 m_uiAspectRatioIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 m_uiLogoIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EScreenLocation m_eLogoScreenLocation;
    
    SIFU_API FFilterProperties();
};

