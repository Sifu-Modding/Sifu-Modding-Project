#pragma once
#include "CoreMinimal.h"
#include "ECameraDataModifierTickBehavior.h"
#include "Templates/SubclassOf.h"
#include "CameraDataModifierWithBehavior.generated.h"

class UCameraDataModifier;

USTRUCT(BlueprintType)
struct SIFU_API FCameraDataModifierWithBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraDataModifier> m_Modifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraDataModifierTickBehavior m_eBehavior;
    
    FCameraDataModifierWithBehavior();
};

