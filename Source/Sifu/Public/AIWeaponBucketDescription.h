#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIWeaponBucketDescription.generated.h"

class ABaseWeapon;

USTRUCT(BlueprintType)
struct FAIWeaponBucketDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseWeapon> m_WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iWeaponNumber;
    
    SIFU_API FAIWeaponBucketDescription();
};

