#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotify.h"
#include "ReattachStabbedWeapon_Notify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API UReattachStabbedWeapon_Notify : public USCAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BoneToAttachWeaponTo;
    
    UReattachStabbedWeapon_Notify();
};

