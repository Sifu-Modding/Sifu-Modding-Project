#pragma once
#include "CoreMinimal.h"
#include "ESCCardinalPoints.h"
#include "HitBox.h"
#include "AutoAvoidInfos.generated.h"

class AFightingCharacter;

USTRUCT(BlueprintType)
struct FAutoAvoidInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFightingCharacter* m_AttackerChar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_AttackerHitBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCCardinalPoints m_eAttackerCardinalPoint;
    
    SIFU_API FAutoAvoidInfos();
};

