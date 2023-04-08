#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SCFootIkData.generated.h"

USTRUCT(BlueprintType)
struct FSCFootIkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName m_footIkBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName m_thighBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_suffix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_markerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector m_vDampedWorldLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bApplyIkToFoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator m_dampedWorldRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fRotationAlpha;
    
    SCCORE_API FSCFootIkData();
};

