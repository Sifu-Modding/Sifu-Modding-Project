#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotify.h"
#include "StealTargetWeapon_Notify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API UStealTargetWeapon_Notify : public USCAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirrorPickup;
    
    UStealTargetWeapon_Notify();
};

