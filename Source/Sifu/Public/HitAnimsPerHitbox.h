#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HittedAnimContainer.h"
#include "HitAnimsPerHitbox.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FHitAnimsPerHitbox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_HitRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCustomHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHittedAnimContainer m_Hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCustomGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHittedAnimContainer m_OnGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCustomDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHittedAnimContainer m_OnDeath;
    
    FHitAnimsPerHitbox();
};

