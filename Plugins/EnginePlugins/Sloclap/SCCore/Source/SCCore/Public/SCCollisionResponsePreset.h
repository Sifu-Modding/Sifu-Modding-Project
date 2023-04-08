#pragma once
#include "CoreMinimal.h"
#include "Engine/CollisionProfile.h"
#include "SCCollisionResponseTemplate.h"
#include "SCCollisionResponsePreset.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCCollisionResponsePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseDefaultProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_Profile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCollisionResponseTemplate m_Template;
    
    FSCCollisionResponsePreset();
};

