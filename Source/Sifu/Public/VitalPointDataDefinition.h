#pragma once
#include "CoreMinimal.h"
#include "VitalPointDataDefinition.generated.h"

class UVitalPointData;

USTRUCT(BlueprintType)
struct FVitalPointDataDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BoneToAttachBillboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVitalPointData* m_VitalPointData;
    
    SIFU_API FVitalPointDataDefinition();
};

